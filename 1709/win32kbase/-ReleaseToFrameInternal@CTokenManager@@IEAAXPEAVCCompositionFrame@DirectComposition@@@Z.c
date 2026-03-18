/*
 * XREFs of ?ReleaseToFrameInternal@CTokenManager@@IEAAXPEAVCCompositionFrame@DirectComposition@@@Z @ 0x1C0036214
 * Callers:
 *     ?BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z @ 0x1C003424C (-BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z.c)
 * Callees:
 *     ?RemoveTokenQueueTableEntry@CTokenManager@@IEAAXPEAUTokenQueueTableEntry@1@@Z @ 0x1C00355D4 (-RemoveTokenQueueTableEntry@CTokenManager@@IEAAXPEAUTokenQueueTableEntry@1@@Z.c)
 *     ?ReleaseCompositionHandleTokensToFrame@CTokenManager@@IEAAXPEAVCCompositionFrame@DirectComposition@@@Z @ 0x1C0035F78 (-ReleaseCompositionHandleTokensToFrame@CTokenManager@@IEAAXPEAVCCompositionFrame@DirectCompositi.c)
 *     ?ReleaseTokensToFrame@CTokenQueue@@QEAA_NPEAVCCompositionFrame@DirectComposition@@@Z @ 0x1C0037988 (-ReleaseTokensToFrame@CTokenQueue@@QEAA_NPEAVCCompositionFrame@DirectComposition@@@Z.c)
 */

void __fastcall CTokenManager::ReleaseToFrameInternal(
        CTokenManager *this,
        struct DirectComposition::CCompositionFrame *a2)
{
  CTokenManager *v2; // rbx
  char v3; // r14
  __int64 v5; // rcx
  ULONG i; // ebp
  CTokenQueue **ElementGenericTable; // rax
  CTokenQueue **v8; // rsi

  v2 = g_pTokenManager;
  v3 = 0;
  v5 = *((_QWORD *)g_pTokenManager + 16);
  if ( v5 && (*(_QWORD *)(v5 + 2088) != v5 + 16 || *(_DWORD *)(v5 + 32)) )
  {
    *((_QWORD *)a2 + 12) = v5;
    *(_QWORD *)(v5 + 2088) = v5 + 16;
    *(_BYTE *)(v5 + 2108) = 1;
    *((_DWORD *)a2 + 26) = 1;
    *((_QWORD *)v2 + 16) = 0LL;
  }
  if ( *((_DWORD *)v2 + 22) )
  {
    for ( i = RtlNumberGenericTableElements((PRTL_GENERIC_TABLE)((char *)v2 + 136)) - 1; ; --i )
    {
      ElementGenericTable = (CTokenQueue **)RtlGetElementGenericTable((PRTL_GENERIC_TABLE)((char *)v2 + 136), i);
      v8 = ElementGenericTable;
      if ( !ElementGenericTable )
        break;
      v3 |= CTokenQueue::ReleaseTokensToFrame(ElementGenericTable[1], a2);
      if ( *((_DWORD *)v8[1] + 6) >= 0x20u )
        CTokenManager::RemoveTokenQueueTableEntry(v2, (struct CTokenManager::TokenQueueTableEntry *)v8);
    }
  }
  else
  {
    v3 = 1;
  }
  CTokenManager::ReleaseCompositionHandleTokensToFrame(v2, a2);
  *((_QWORD *)v2 + 12) = *((_QWORD *)a2 + 9);
  if ( !v3 )
    ZwClearEvent(*((HANDLE *)v2 + 5));
}
