/*
 * XREFs of VidSchiFlushPendingTokenList @ 0x1C00150F0
 * Callers:
 *     VidSchExitIndependentFlipInternal @ 0x1C0014E08 (VidSchExitIndependentFlipInternal.c)
 *     VidSchiTryEnterIndependentFlip @ 0x1C0015064 (VidSchiTryEnterIndependentFlip.c)
 * Callees:
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N3@Z @ 0x1C0011AB0 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_IN.c)
 */

void __fastcall VidSchiFlushPendingTokenList(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r9
  __int64 v4; // rdx
  __int64 v5; // rax
  bool v6; // si
  char **v7; // rbx
  char *v8; // rdi
  char *v9; // rax
  __int64 v10; // rax

  v3 = a2;
  v4 = 280LL * a3;
  v5 = *(_QWORD *)(a1 + 8 * v3 + 3008);
  v6 = *(_DWORD *)(v5 + v4 + 180) == 3;
  v7 = (char **)(v5 + v4 + 200);
  while ( *v7 != (char *)v7 )
  {
    v8 = *v7;
    if ( *((char ***)*v7 + 1) != v7 || (v9 = *(char **)v8, *(char **)(*(_QWORD *)v8 + 8LL) != v8) )
      __fastfail(3u);
    *v7 = v9;
    *((_QWORD *)v9 + 1) = v7;
    v10 = WdLogNewEntry5_WdPresentTokenEvent(a1, v4);
    *(_QWORD *)(v10 + 24) = *((_QWORD *)v8 + 17);
    WdLogEvent5_WdPresentTokenEvent(v10);
    VidSchiProcessPresentHistoryToken(
      *((struct _VIDSCH_CONTEXT **)v8 + 3),
      (struct VIDSCH_SUBMIT_DATA2 *)(v8 + 32),
      *(union _ULARGE_INTEGER *)(v8 + 16),
      0,
      v6);
    ExFreePoolWithTag(v8, 0x68536956u);
  }
}
