/*
 * XREFs of ?VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z @ 0x1C001539C
 * Callers:
 *     VidSchiSubmitPresentHistoryToken @ 0x1C0013330 (VidSchiSubmitPresentHistoryToken.c)
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N3@Z @ 0x1C0013570 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_IN.c)
 *     VidSchiTryEnterIndependentFlip @ 0x1C0015360 (VidSchiTryEnterIndependentFlip.c)
 * Callees:
 *     <none>
 */

char __fastcall VidSchiCheckPlaneIndependentFlipCondition(struct _VIDSCH_GLOBAL *a1, unsigned int a2, unsigned int a3)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // eax

  if ( a2 == -1 )
    return 0;
  v4 = a2;
  v5 = 216LL * a3;
  v6 = *((_QWORD *)a1 + v4 + 379);
  v7 = *(int *)(v6 + v5 + 140);
  if ( (int)v7 <= -1 )
    v8 = 0LL;
  else
    v8 = *((_QWORD *)a1 + 395) + 136 * v7;
  if ( !v8 )
    return 1;
  v9 = *(_DWORD *)(v8 + 112);
  if ( v9 != 1 )
    return v9 == 2;
  if ( !*(_BYTE *)(v8 + 98) || *(_DWORD *)(v6 + v5 + 144) || !*(_BYTE *)(v8 + 96) )
    return 0;
  return *(_DWORD *)(v6 + v5 + 148) == 0;
}
