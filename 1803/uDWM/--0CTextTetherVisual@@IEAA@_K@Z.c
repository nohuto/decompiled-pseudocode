/*
 * XREFs of ??0CTextTetherVisual@@IEAA@_K@Z @ 0x18008E21C
 * Callers:
 *     ??$CreateTouchVisual@VCTextTetherVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCTextTetherVisual@@@Z @ 0x1800890E8 (--$CreateTouchVisual@VCTextTetherVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCTextTetherVisual@@@Z.c)
 * Callees:
 *     ??0CTouchVisual@@IEAA@_K@Z @ 0x18003DC98 (--0CTouchVisual@@IEAA@_K@Z.c)
 */

CTextTetherVisual *__fastcall CTextTetherVisual::CTextTetherVisual(CTextTetherVisual *this)
{
  __int64 v1; // rcx
  CTextTetherVisual *result; // rax

  CTouchVisual::CTouchVisual(this);
  *(_DWORD *)(v1 + 304) = 1051260355;
  *(_QWORD *)(v1 + 296) = 0LL;
  *(_QWORD *)(v1 + 392) = 0LL;
  *(_QWORD *)(v1 + 400) = 0LL;
  *(_QWORD *)(v1 + 408) = 0LL;
  *(_QWORD *)(v1 + 416) = 0LL;
  *(_WORD *)(v1 + 424) = 0;
  result = (CTextTetherVisual *)v1;
  *(_QWORD *)v1 = &CTextTetherVisual::`vftable';
  *(_DWORD *)(v1 + 316) = 100;
  return result;
}
