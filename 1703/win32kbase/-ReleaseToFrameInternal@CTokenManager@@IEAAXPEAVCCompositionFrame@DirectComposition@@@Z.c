/*
 * XREFs of ?ReleaseToFrameInternal@CTokenManager@@IEAAXPEAVCCompositionFrame@DirectComposition@@@Z @ 0x1C0029E48
 * Callers:
 *     ?BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z @ 0x1C0015964 (-BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z.c)
 * Callees:
 *     ?ReleaseTokensToFrame@CTokenQueue@@QEAA_NPEAVCCompositionFrame@DirectComposition@@@Z @ 0x1C00292C4 (-ReleaseTokensToFrame@CTokenQueue@@QEAA_NPEAVCCompositionFrame@DirectComposition@@@Z.c)
 *     ?RemoveTokenQueueTableEntry@CTokenManager@@IEAAXPEAUTokenQueueTableEntry@1@@Z @ 0x1C0029554 (-RemoveTokenQueueTableEntry@CTokenManager@@IEAAXPEAUTokenQueueTableEntry@1@@Z.c)
 *     ?ReleaseCompositionHandleTokensToFrame@CTokenManager@@IEAAXPEAVCCompositionFrame@DirectComposition@@@Z @ 0x1C0029D88 (-ReleaseCompositionHandleTokensToFrame@CTokenManager@@IEAAXPEAVCCompositionFrame@DirectCompositi.c)
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
  v5 = *((_QWORD *)g_pTokenManager + 15);
  if ( v5 && (*(_QWORD *)(v5 + 2088) != v5 + 16 || *(_DWORD *)(v5 + 32)) )
  {
    *((_QWORD *)a2 + 12) = v5;
    *(_QWORD *)(v5 + 2088) = v5 + 16;
    *(_BYTE *)(v5 + 2108) = 1;
    *((_DWORD *)a2 + 26) = 1;
    *((_QWORD *)v2 + 15) = 0LL;
  }
  if ( *((_DWORD *)v2 + 20) )
  {
    for ( i = RtlNumberGenericTableElements((PRTL_GENERIC_TABLE)((char *)v2 + 128)) - 1; ; --i )
    {
      ElementGenericTable = (CTokenQueue **)RtlGetElementGenericTable((PRTL_GENERIC_TABLE)((char *)v2 + 128), i);
      v8 = ElementGenericTable;
      if ( !ElementGenericTable )
        break;
      v3 |= CTokenQueue::ReleaseTokensToFrame(ElementGenericTable[1], a2);
      if ( *((_DWORD *)v8[1] + 4) >= 0x20u )
        CTokenManager::RemoveTokenQueueTableEntry(v2, (struct CTokenManager::TokenQueueTableEntry *)v8);
    }
  }
  else
  {
    v3 = 1;
  }
  CTokenManager::ReleaseCompositionHandleTokensToFrame(v2, a2);
  *((_QWORD *)v2 + 11) = *((_QWORD *)a2 + 9);
  if ( !v3 )
    ZwClearEvent(*((HANDLE *)v2 + 4));
}
