/*
 * XREFs of SmSetThreadPagePriority @ 0x14009725C
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400906FC (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmKmStoreHelperCommandProcess @ 0x140096ABC (SmKmStoreHelperCommandProcess.c)
 * Callees:
 *     PsSetPagePriorityThread @ 0x140043C14 (PsSetPagePriorityThread.c)
 *     PsGetPagePriorityThread @ 0x140128140 (PsGetPagePriorityThread.c)
 */

__int64 __fastcall SmSetThreadPagePriority(struct _KTHREAD **a1)
{
  struct _KTHREAD *CurrentThread; // r8
  __int64 result; // rax
  int v3; // edx
  __int64 v4; // r8

  CurrentThread = *a1;
  if ( !*a1 )
  {
    CurrentThread = KeGetCurrentThread();
    *a1 = CurrentThread;
  }
  result = PsGetPagePriorityThread(CurrentThread);
  if ( (_DWORD)result != v3 )
    return PsSetPagePriorityThread(v4, v3);
  return result;
}
