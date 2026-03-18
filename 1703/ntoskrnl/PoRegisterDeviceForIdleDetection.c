/*
 * XREFs of PoRegisterDeviceForIdleDetection @ 0x140005970
 * Callers:
 *     IoDeleteDevice @ 0x1400058A0 (IoDeleteDevice.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopCheckForWork @ 0x140070144 (PopCheckForWork.c)
 *     PopGetDope @ 0x140163F5C (PopGetDope.c)
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
  struct _LIST_ENTRY *Flink; // r8
  struct _LIST_ENTRY *Blink; // rdx
  ULONG DeviceType; // eax
  int v16; // esi
  __int64 Dope; // rdi
  KIRQL v18; // bl
  _QWORD *v19; // rax
  _QWORD *v20; // rcx

  v4 = 0LL;
  if ( ConservationIdleTime || PerformanceIdleTime )
  {
    if ( (unsigned int)(State - 2) > 2 )
      return v4;
    DeviceType = DeviceObject->DeviceType;
    v16 = 0;
    if ( DeviceType == 7 || DeviceType == 45 )
    {
      if ( !PopPlatformAoAc && (DeviceObject->Characteristics & 1) != 0 )
        return v4;
      v16 = 1;
    }
    Dope = PopGetDope();
    if ( Dope )
    {
      v18 = KeAcquireSpinLockRaiseToDpc(&PopDopeGlobalLock);
      *(_DWORD *)(Dope + 16) = ConservationIdleTime;
      v19 = (_QWORD *)(Dope + 32);
      *(_DWORD *)(Dope + 20) = PerformanceIdleTime;
      *(_DWORD *)(Dope + 52) = State;
      *(_DWORD *)(Dope + 48) = v16;
      if ( (_QWORD *)*v19 == v19 )
      {
        *(_DWORD *)(Dope + 56) = 1;
        v20 = (_QWORD *)qword_14034B8A8;
        if ( *(__int64 **)qword_14034B8A8 != &PopIdleDetectList )
          __fastfail(3u);
        *v19 = &PopIdleDetectList;
        *(_QWORD *)(Dope + 40) = v20;
        *v20 = v19;
        qword_14034B8A8 = Dope + 32;
      }
      KxReleaseSpinLock(&PopDopeGlobalLock);
      __writecr8(v18);
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
      if ( p_IdleList->Flink != p_IdleList )
      {
        Flink = p_IdleList->Flink;
        Blink = v10->IdleList.Blink;
        if ( p_IdleList->Flink->Blink != p_IdleList || Blink->Flink != p_IdleList )
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
