/*
 * XREFs of ?RemoveTokenQueueTableEntry@CTokenManager@@IEAAXPEAUTokenQueueTableEntry@1@@Z @ 0x1C0029554
 * Callers:
 *     ?DeleteAllTokenQueues@CTokenManager@@IEAAXXZ @ 0x1C0029510 (-DeleteAllTokenQueues@CTokenManager@@IEAAXXZ.c)
 *     ?ReleaseToFrameInternal@CTokenManager@@IEAAXPEAVCCompositionFrame@DirectComposition@@@Z @ 0x1C0029E48 (-ReleaseToFrameInternal@CTokenManager@@IEAAXPEAVCCompositionFrame@DirectComposition@@@Z.c)
 * Callees:
 *     ?DeleteAllTokens@CTokenQueue@@AEAAXXZ @ 0x1C0029374 (-DeleteAllTokens@CTokenQueue@@AEAAXXZ.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 */

void __fastcall CTokenManager::RemoveTokenQueueTableEntry(
        CTokenManager *this,
        struct CTokenManager::TokenQueueTableEntry *a2)
{
  __int64 v2; // rbx

  v2 = *((_QWORD *)a2 + 1);
  if ( v2 )
  {
    CTokenQueue::DeleteAllTokens(*((CTokenQueue **)a2 + 1));
    Win32FreePool(v2);
  }
  RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 128), a2);
}
