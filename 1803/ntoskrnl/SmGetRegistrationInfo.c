/*
 * XREFs of SmGetRegistrationInfo @ 0x140650FCC
 * Callers:
 *     SmProcessRegistrationRequest @ 0x140650F20 (SmProcessRegistrationRequest.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     SmRegistrationInfoFill @ 0x140651090 (SmRegistrationInfoFill.c)
 *     SmRegistrationCtxStart @ 0x14065314C (SmRegistrationCtxStart.c)
 */

__int64 __fastcall SmGetRegistrationInfo(char a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // edi
  __int64 v9; // rdx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140466160, 0LL);
  if ( (dword_140466140 & 8) != 0 )
  {
    v8 = 0;
  }
  else
  {
    v8 = SmRegistrationCtxStart(&qword_1404663F0);
    if ( v8 >= 0 )
      dword_140466140 |= 8u;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140466160, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140466160, v5, v6, v7);
  KeAbPostRelease((ULONG_PTR)&qword_140466160);
  KeLeaveCriticalRegion();
  if ( v8 >= 0 )
  {
    LOBYTE(v9) = a1;
    v8 = SmRegistrationInfoFill(&qword_1404663F0, v9, a2 + 8);
    if ( v8 >= 0 )
      return 0;
  }
  return (unsigned int)v8;
}
