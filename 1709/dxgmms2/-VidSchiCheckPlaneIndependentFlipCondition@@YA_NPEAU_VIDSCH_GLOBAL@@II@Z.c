/*
 * XREFs of ?VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z @ 0x1C0015090
 * Callers:
 *     VidSchiSubmitPresentHistoryToken @ 0x1C0011898 (VidSchiSubmitPresentHistoryToken.c)
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N3@Z @ 0x1C0011AB0 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_IN.c)
 *     VidSchiTryEnterIndependentFlip @ 0x1C0015064 (VidSchiTryEnterIndependentFlip.c)
 * Callees:
 *     <none>
 */

bool __fastcall VidSchiCheckPlaneIndependentFlipCondition(struct _VIDSCH_GLOBAL *a1, unsigned int a2, unsigned int a3)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rax
  int v7; // ecx

  if ( a2 == -1 )
    return 0;
  v4 = a2;
  v5 = 280LL * a3;
  v6 = *((_QWORD *)a1 + v4 + 376);
  v7 = *(_DWORD *)(v6 + v5 + 180);
  if ( v7 != 1 )
    return v7 == 2;
  if ( !*(_BYTE *)(v6 + v5 + 178) || *(_DWORD *)(v6 + v5 + 184) || !*(_BYTE *)(v6 + v5 + 176) )
    return 0;
  return *(_DWORD *)(v6 + v5 + 188) == 0;
}
