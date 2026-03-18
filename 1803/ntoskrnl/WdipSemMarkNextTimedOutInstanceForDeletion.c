/*
 * XREFs of WdipSemMarkNextTimedOutInstanceForDeletion @ 0x14052DC1C
 * Callers:
 *     WdipTimeoutCheckRoutine @ 0x14052DCB0 (WdipTimeoutCheckRoutine.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 */

__int64 *__fastcall WdipSemMarkNextTimedOutInstanceForDeletion(__int64 **a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v2; // rbx
  __int64 *v4; // r8
  __int64 v5; // r9
  __int64 *v6; // rdx
  __int64 *v8; // rcx

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_1403A2DD8, 0LL);
  if ( a1 )
  {
    v6 = *a1;
    v4 = &WdipSemEnabledInstanceTable;
    while ( v6 != &WdipSemEnabledInstanceTable )
    {
      v8 = v6;
      v6 = (__int64 *)*v6;
      if ( ++*((_DWORD *)v8 + 10) >= 0xAu && *(_BYTE *)(v8[4] + 1176) && !*((_DWORD *)v8 + 11) )
      {
        *((_DWORD *)v8 + 11) = 1;
        v2 = v8;
        break;
      }
    }
  }
  ExReleasePushLockEx((ULONG_PTR)&qword_1403A2DD8, 0LL, (__int64)v4, v5);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v2;
}
