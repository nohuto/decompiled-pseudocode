/*
 * XREFs of PoRegisterDeviceForIdleDetection @ 0x14009FA10
 * Callers:
 *     PoRunDownDeviceObject @ 0x14009F930 (PoRunDownDeviceObject.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopCheckForWork @ 0x14007421C (PopCheckForWork.c)
 *     PopGetDope @ 0x1401635CC (PopGetDope.c)
 */

PULONG __stdcall PoRegisterDeviceForIdleDetection(
        PDEVICE_OBJECT DeviceObject,
        ULONG ConservationIdleTime,
        ULONG PerformanceIdleTime,
        DEVICE_POWER_STATE State)
{
  ULONG *v4; // rbx
  KIRQL v9; // si
  struct _DEVICE_OBJECT_POWER_EXTENSION *v10; // rcx
  _LIST_ENTRY *p_IdleList; // rax
  struct _LIST_ENTRY *Flink; // rdx
  ULONG DeviceType; // eax
  int v15; // esi
  __int64 Dope; // rdi
  KIRQL v17; // bl
  _QWORD *v18; // rax
  _QWORD *v19; // rcx
  struct _LIST_ENTRY *Blink; // r8

  v4 = 0LL;
  if ( ConservationIdleTime || PerformanceIdleTime )
  {
    if ( (unsigned int)(State - 2) > 2 )
      return v4;
    DeviceType = DeviceObject->DeviceType;
    v15 = 0;
    if ( DeviceType == 7 || DeviceType == 45 )
    {
      if ( !PopPlatformAoAc && (DeviceObject->Characteristics & 1) != 0 )
        return v4;
      v15 = 1;
    }
    Dope = PopGetDope();
    if ( Dope )
    {
      v17 = KeAcquireSpinLockRaiseToDpc(&PopDopeGlobalLock);
      *(_DWORD *)(Dope + 16) = ConservationIdleTime;
      v18 = (_QWORD *)(Dope + 32);
      *(_DWORD *)(Dope + 20) = PerformanceIdleTime;
      *(_DWORD *)(Dope + 52) = State;
      *(_DWORD *)(Dope + 48) = v15;
      if ( (_QWORD *)*v18 == v18 )
      {
        *(_DWORD *)(Dope + 56) = 1;
        v19 = (_QWORD *)qword_1403AA7C8;
        if ( *(__int64 **)qword_1403AA7C8 != &PopIdleDetectList )
          __fastfail(3u);
        *v18 = &PopIdleDetectList;
        *(_QWORD *)(Dope + 40) = v19;
        *v19 = v18;
        qword_1403AA7C8 = Dope + 32;
      }
      KxReleaseSpinLock(&PopDopeGlobalLock);
      __writecr8(v17);
      PopCheckForWork();
      return (PULONG)Dope;
    }
  }
  else
  {
    v9 = KeAcquireSpinLockRaiseToDpc(&PopDopeGlobalLock);
    v10 = DeviceObject->DeviceObjectExtension->Dope;
    if ( v10 )
    {
      p_IdleList = &v10->IdleList;
      Flink = v10->IdleList.Flink;
      if ( Flink != &v10->IdleList )
      {
        if ( Flink->Blink != p_IdleList || (Blink = v10->IdleList.Blink, Blink->Flink != p_IdleList) )
          __fastfail(3u);
        Blink->Flink = Flink;
        Flink->Blink = Blink;
        *(_QWORD *)&v10->IdleType = 0LL;
        *(_QWORD *)&v10->ConservationIdleTime = 0LL;
        v10->CurrentState = PowerDeviceUnspecified;
        v10->IdleCount = 0;
        v10->BusyCount = 0;
        v10->BusyReference = 0;
        v10->TotalBusyCount = 0;
        v10->Specific = 0LL;
        v10->IdleList.Blink = &v10->IdleList;
        p_IdleList->Flink = p_IdleList;
      }
    }
    KxReleaseSpinLock(&PopDopeGlobalLock);
    __writecr8(v9);
  }
  return v4;
}
