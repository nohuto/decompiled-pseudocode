/*
 * XREFs of VidSchiFlushPendingTokenList @ 0x1C0026204
 * Callers:
 *     VidSchiTryEnterIndependentFlip @ 0x1C0012CEC (VidSchiTryEnterIndependentFlip.c)
 *     VidSchExitIndependentFlipInternal @ 0x1C0029CB8 (VidSchExitIndependentFlipInternal.c)
 * Callees:
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N3@Z @ 0x1C000BEA0 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_IN.c)
 */

void __fastcall VidSchiFlushPendingTokenList(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r9
  __int64 v4; // rdx
  __int64 v5; // rax
  bool v6; // si
  __int64 **v7; // rbx
  __int64 *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rax

  v3 = a2;
  v4 = 272LL * a3;
  v5 = *(_QWORD *)(a1 + 8 * v3 + 2992);
  v6 = *(_DWORD *)(v5 + v4 + 156) == 3;
  v7 = (__int64 **)(v5 + v4 + 176);
  while ( *v7 != (__int64 *)v7 )
  {
    v8 = *v7;
    v9 = **v7;
    if ( (__int64 **)(*v7)[1] != v7 || *(__int64 **)(v9 + 8) != v8 )
      __fastfail(3u);
    *v7 = (__int64 *)v9;
    *(_QWORD *)(v9 + 8) = v7;
    v10 = WdLogNewEntry5_WdPresentTokenEvent(a1, v4);
    *(_QWORD *)(v10 + 24) = v8[17];
    WdLogEvent5_WdPresentTokenEvent(v10);
    VidSchiProcessPresentHistoryToken(
      (struct _VIDSCH_CONTEXT *)v8[3],
      (struct VIDSCH_SUBMIT_DATA2 *)(v8 + 4),
      (union _ULARGE_INTEGER)v8[2],
      0,
      v6);
    ExFreePoolWithTag(v8, 0x68536956u);
  }
}
