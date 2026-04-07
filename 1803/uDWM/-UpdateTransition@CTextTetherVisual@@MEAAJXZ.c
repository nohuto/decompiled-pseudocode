/*
 * XREFs of ?UpdateTransition@CTextTetherVisual@@MEAAJXZ @ 0x18008E7D0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Stop@CTextTetherVisual@@UEAAXXZ @ 0x18008E6D0 (-Stop@CTextTetherVisual@@UEAAXXZ.c)
 *     ?UpdateInstructions@CTextTetherVisual@@IEAAJXZ @ 0x18008E770 (-UpdateInstructions@CTextTetherVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CTextTetherVisual::UpdateTransition(CTextTetherVisual *this)
{
  int updated; // eax
  int v3; // edi
  __int64 v4; // rax

  updated = CTextTetherVisual::UpdateInstructions(this);
  v3 = updated;
  if ( updated >= 0 )
  {
    v4 = *((_QWORD *)this + 37);
    if ( v4 && *(_BYTE *)(v4 + 72) )
      CTextTetherVisual::Stop(this);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x104u);
  }
  if ( v3 < 0 )
    CTextTetherVisual::Stop(this);
  return (unsigned int)v3;
}
