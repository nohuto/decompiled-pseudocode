/*
 * XREFs of EditionFinalizeKoreanImeCompStrOnMouseClick @ 0x1C0116EE0
 * Callers:
 *     <none>
 * Callees:
 *     GetActiveHKL @ 0x1C00CD4E4 (GetActiveHKL.c)
 *     ?FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z @ 0x1C01B9814 (-FinalizeKoreanImeCompStrOnMouseClick@@YAXPEAUtagWND@@@Z.c)
 */

void __fastcall EditionFinalizeKoreanImeCompStrOnMouseClick(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx

  v4 = *(_QWORD *)(a1 + 80);
  if ( (*gpsi & 4) != 0
    && !(_DWORD)a2
    && (GetActiveHKL(gpsi, a2, a3, a4) & 0x3FF) == 0x12
    && (*(_BYTE *)(*(_QWORD *)(v4 + 168) + 102LL) & 1) == 0 )
  {
    if ( gpqForeground )
      FinalizeKoreanImeCompStrOnMouseClick((struct tagWND *)v4);
  }
}
