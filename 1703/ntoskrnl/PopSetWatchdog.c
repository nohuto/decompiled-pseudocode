/*
 * XREFs of PopSetWatchdog @ 0x14006FDA8
 * Callers:
 *     PopPowerInformationInternal @ 0x1404C44B4 (PopPowerInformationInternal.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KeCancelTimer @ 0x14004D010 (KeCancelTimer.c)
 *     KiSetTimerEx @ 0x14004D040 (KiSetTimerEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopUpdateWatchdogNoWorkersEvent @ 0x140070050 (PopUpdateWatchdogNoWorkersEvent.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

char *__fastcall PopSetWatchdog(char *P, unsigned int *a2, char a3)
{
  char *v5; // rbx
  KIRQL v6; // si
  __int64 v7; // rax
  char *result; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // rcx
  PVOID *v13; // rax

  v5 = P;
  if ( P )
  {
    v6 = KeAcquireSpinLockRaiseToDpc(&PopWatchdogLock);
  }
  else
  {
    result = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x138uLL, 0x44574F50u);
    v5 = result;
    if ( !result )
      return result;
    memset(result, 0, 0x138uLL);
    *((_DWORD *)v5 + 4) = 1146572624;
    *((_WORD *)v5 + 12) = 0;
    v5[26] = 6;
    *((_DWORD *)v5 + 7) = 1;
    *((_QWORD *)v5 + 5) = v5 + 32;
    *((_QWORD *)v5 + 4) = v5 + 32;
    *((_QWORD *)v5 + 6) = 0LL;
    v5[48] = 8;
    *((_QWORD *)v5 + 8) = v5 + 56;
    *((_QWORD *)v5 + 7) = v5 + 56;
    *((_QWORD *)v5 + 9) = 0LL;
    *((_QWORD *)v5 + 13) = 0LL;
    *((_QWORD *)v5 + 17) = PopWatchdogDpc;
    *((_DWORD *)v5 + 28) = 275;
    *((_QWORD *)v5 + 18) = v5;
    *((_QWORD *)v5 + 21) = 0LL;
    *((_QWORD *)v5 + 16) = 0LL;
    *((_QWORD *)v5 + 24) = PopWatchdogWorker;
    *((_QWORD *)v5 + 25) = v5;
    *((_QWORD *)v5 + 22) = 0LL;
    v6 = KeAcquireSpinLockRaiseToDpc(&PopWatchdogLock);
    v11 = PopWatchdogList;
    if ( *(__int64 **)(PopWatchdogList + 8) != &PopWatchdogList )
      __fastfail(3u);
    *(_QWORD *)v5 = PopWatchdogList;
    *((_QWORD *)v5 + 1) = &PopWatchdogList;
    *(_QWORD *)(v11 + 8) = v5;
    PopWatchdogList = (__int64)v5;
  }
  if ( *((_DWORD *)v5 + 4) != 1146572624 )
    __fastfail(5u);
  v7 = *a2;
  if ( !(_DWORD)v7 || a3 )
  {
    v5[216] = 0;
    if ( KeCancelTimer((PKTIMER)(v5 + 48)) )
    {
      v5[20] = 0;
      PopUpdateWatchdogNoWorkersEvent(v5);
    }
    if ( !*((_DWORD *)v5 + 7) )
    {
      KxReleaseSpinLock(&PopWatchdogLock);
      __writecr8(v6);
      KeWaitForSingleObject(v5 + 24, Executive, 0, 0, 0LL);
      v6 = KeAcquireSpinLockRaiseToDpc(&PopWatchdogLock);
    }
    if ( a3 )
    {
      v12 = *(_QWORD **)v5;
      v13 = (PVOID *)*((_QWORD *)v5 + 1);
      if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 || *v13 != v5 )
        __fastfail(3u);
      *v13 = v12;
      v12[1] = v13;
      *((_DWORD *)v5 + 4) = 1330532174;
      ExFreePoolWithTag(v5, 0x44574F50u);
      v5 = 0LL;
    }
  }
  else
  {
    v9 = 10000 * v7;
    *((_OWORD *)v5 + 14) = *(_OWORD *)a2;
    *((_OWORD *)v5 + 15) = *((_OWORD *)a2 + 1);
    *((_OWORD *)v5 + 16) = *((_OWORD *)a2 + 2);
    *((_OWORD *)v5 + 17) = *((_OWORD *)a2 + 3);
    *((_QWORD *)v5 + 36) = *((_QWORD *)a2 + 8);
    v10 = MEMORY[0xFFFFF78000000008];
    *((_QWORD *)v5 + 37) = MEMORY[0xFFFFF78000000008];
    *((_QWORD *)v5 + 26) = v9 + v10;
    *((_QWORD *)v5 + 38) = KeGetCurrentThread();
    v5[216] = 1;
    if ( !(unsigned __int8)KiSetTimerEx((__int64)(v5 + 48), -v9, 0, 0, (__int64)(v5 + 112)) )
    {
      v5[20] = 1;
      PopUpdateWatchdogNoWorkersEvent(v5);
    }
  }
  KxReleaseSpinLock(&PopWatchdogLock);
  __writecr8(v6);
  return v5;
}
