/*
 * XREFs of ?RemoveTokenQueueTableEntry@CTokenManager@@IEAAXPEAUTokenQueueTableEntry@1@@Z @ 0x1C00355D4
 * Callers:
 *     ?DeleteAllTokenQueues@CTokenManager@@IEAAXXZ @ 0x1C0035590 (-DeleteAllTokenQueues@CTokenManager@@IEAAXXZ.c)
 *     ?ReleaseToFrameInternal@CTokenManager@@IEAAXPEAVCCompositionFrame@DirectComposition@@@Z @ 0x1C0036214 (-ReleaseToFrameInternal@CTokenManager@@IEAAXPEAVCCompositionFrame@DirectComposition@@@Z.c)
 * Callees:
 *     ?DeleteAllTokens@CTokenQueue@@AEAAXXZ @ 0x1C0037ADC (-DeleteAllTokens@CTokenQueue@@AEAAXXZ.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

void __fastcall CTokenManager::RemoveTokenQueueTableEntry(
        CTokenManager *this,
        struct CTokenManager::TokenQueueTableEntry *a2)
{
  __int64 v2; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8

  v2 = *((_QWORD *)a2 + 1);
  if ( v2 )
  {
    CTokenQueue::DeleteAllTokens(*((CTokenQueue **)a2 + 1));
    Win32FreePool(v2, v5, v6);
  }
  RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 136), a2);
}
