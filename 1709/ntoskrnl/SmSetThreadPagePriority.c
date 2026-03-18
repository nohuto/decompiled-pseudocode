/*
 * XREFs of SmSetThreadPagePriority @ 0x14000B6CC
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14000B530 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmKmStoreHelperCommandProcess @ 0x14027384C (SmKmStoreHelperCommandProcess.c)
 * Callees:
 *     PsSetPagePriorityThread @ 0x1400217F8 (PsSetPagePriorityThread.c)
 *     PsGetPagePriorityThread @ 0x140061EB0 (PsGetPagePriorityThread.c)
 */

__int64 __fastcall SmSetThreadPagePriority(struct _KTHREAD **a1)
{
  struct _KTHREAD *CurrentThread; // r9
  __int64 result; // rax
  __int64 v3; // r9
  int v4; // edx

  CurrentThread = *a1;
  if ( !*a1 )
  {
    CurrentThread = KeGetCurrentThread();
    *a1 = CurrentThread;
  }
  result = PsGetPagePriorityThread(CurrentThread);
  if ( (_DWORD)result != v4 )
    return PsSetPagePriorityThread(v3);
  return result;
}
