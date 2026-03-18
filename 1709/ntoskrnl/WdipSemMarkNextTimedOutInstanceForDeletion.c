/*
 * XREFs of WdipSemMarkNextTimedOutInstanceForDeletion @ 0x14058F77C
 * Callers:
 *     WdipTimeoutCheckRoutine @ 0x14058F6D0 (WdipTimeoutCheckRoutine.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 */

__int64 *__fastcall WdipSemMarkNextTimedOutInstanceForDeletion(__int64 **a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v2; // rbx
  __int64 *v4; // rdx
  __int64 *v6; // rcx

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1403613D8, 0LL);
  if ( a1 )
  {
    v4 = *a1;
    while ( v4 != &WdipSemEnabledInstanceTable )
    {
      v6 = v4;
      v4 = (__int64 *)*v4;
      if ( ++*((_DWORD *)v6 + 10) >= 0xAu && *(_BYTE *)(v6[4] + 1176) && !*((_DWORD *)v6 + 11) )
      {
        *((_DWORD *)v6 + 11) = 1;
        v2 = v6;
        break;
      }
    }
  }
  ExReleasePushLockEx((ULONG_PTR)&qword_1403613D8, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v2;
}
