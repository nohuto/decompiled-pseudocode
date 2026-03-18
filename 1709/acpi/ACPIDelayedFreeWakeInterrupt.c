/*
 * XREFs of ACPIDelayedFreeWakeInterrupt @ 0x1C005A0F4
 * Callers:
 *     ACPIFreeWaitWakePowerRequest @ 0x1C00018A0 (ACPIFreeWaitWakePowerRequest.c)
 *     ACPIAssociateWakeInterrupt @ 0x1C0059E28 (ACPIAssociateWakeInterrupt.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1C000FC60 (ExFreeToNPagedLookasideList.c)
 *     ACPIFindWakeInterruptForVector @ 0x1C005A32C (ACPIFindWakeInterruptForVector.c)
 *     OSPowerTryAcquireWakeInterruptChangeStateLock @ 0x1C005AA64 (OSPowerTryAcquireWakeInterruptChangeStateLock.c)
 */

void __fastcall ACPIDelayedFreeWakeInterrupt(unsigned int a1, __int64 a2)
{
  KIRQL v4; // si
  _QWORD *v5; // rbx
  char v6; // al
  KIRQL v7; // dl
  KIRQL v8; // al
  __int64 v9; // rax
  _QWORD *v10; // rcx
  _IO_DISCONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+20h] [rbp-18h] BYREF
  PVOID Entry; // [rsp+50h] [rbp+18h] BYREF

  v4 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  if ( (int)ACPIFindWakeInterruptForVector(a1, a2, &Entry) < 0 || (v5 = Entry, *((_DWORD *)Entry + 22)) )
  {
LABEL_10:
    v7 = v4;
    goto LABEL_11;
  }
  if ( *((_DWORD *)Entry + 14) == 5 )
  {
LABEL_6:
    if ( !*((_DWORD *)v5 + 22) )
    {
      v9 = *v5;
      if ( *(_QWORD **)(*v5 + 8LL) != v5 || (v10 = (_QWORD *)v5[1], (_QWORD *)*v10 != v5) )
        __fastfail(3u);
      *v10 = v9;
      *(_QWORD *)(v9 + 8) = v10;
      v5[1] = v5;
      *v5 = v5;
      ExFreeToNPagedLookasideList(&WakeInterruptLookAsideList, v5);
    }
    goto LABEL_10;
  }
  v6 = OSPowerTryAcquireWakeInterruptChangeStateLock(Entry);
  v7 = v4;
  if ( v6 )
  {
    *((_DWORD *)v5 + 14) = 1;
    KeReleaseSpinLock(&AcpiPowerLock, v4);
    Parameters.Version = 1;
    Parameters.ConnectionContext.Generic = (PVOID)v5[6];
    IoDisconnectInterruptEx(&Parameters);
    v8 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
    *((_DWORD *)v5 + 14) = 5;
    v4 = v8;
    KeSetEvent((PRKEVENT)(v5 + 8), 0, 0);
    goto LABEL_6;
  }
LABEL_11:
  KeReleaseSpinLock(&AcpiPowerLock, v7);
}
