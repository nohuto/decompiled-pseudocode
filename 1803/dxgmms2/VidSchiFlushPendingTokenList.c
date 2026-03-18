/*
 * XREFs of VidSchiFlushPendingTokenList @ 0x1C001541C
 * Callers:
 *     VidSchExitIndependentFlipInternal @ 0x1C0015004 (VidSchExitIndependentFlipInternal.c)
 *     VidSchiTryEnterIndependentFlip @ 0x1C0015360 (VidSchiTryEnterIndependentFlip.c)
 * Callees:
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N3@Z @ 0x1C0013570 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_IN.c)
 */

void __fastcall VidSchiFlushPendingTokenList(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r8
  __int64 v4; // rdx
  void **v5; // rdi
  bool v6; // si
  char *v7; // rbx
  void **v8; // rax
  __int64 v9; // rax

  v3 = *(int *)(*(_QWORD *)(a1 + 8LL * a2 + 3032) + 216LL * a3 + 140);
  if ( (int)v3 <= -1 )
    v4 = 0LL;
  else
    v4 = *(_QWORD *)(a1 + 3160) + 136 * v3;
  v5 = (void **)(v4 + 120);
  v6 = *(_DWORD *)(v4 + 112) == 3;
  while ( 1 )
  {
    v7 = (char *)*v5;
    if ( *v5 == v5 )
      break;
    if ( *((void ***)v7 + 1) != v5 || (v8 = *(void ***)v7, *(char **)(*(_QWORD *)v7 + 8LL) != v7) )
      __fastfail(3u);
    *v5 = v8;
    v8[1] = v5;
    v9 = WdLogNewEntry5_WdPresentTokenEvent(a1, v4);
    *(_QWORD *)(v9 + 24) = *((_QWORD *)v7 + 17);
    WdLogEvent5_WdPresentTokenEvent(v9);
    VidSchiProcessPresentHistoryToken(
      *((struct _VIDSCH_CONTEXT **)v7 + 3),
      (struct VIDSCH_SUBMIT_DATA2 *)(v7 + 32),
      *(union _ULARGE_INTEGER *)(v7 + 16),
      0,
      v6);
    ExFreePoolWithTag(v7, 0x68536956u);
  }
}
