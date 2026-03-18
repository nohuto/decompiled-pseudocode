/*
 * XREFs of ?GetBrushParameters@CEffectBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x18018B320
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0 @ 0x180143900 (McTemplateU0.c)
 */

__int64 __fastcall CEffectBrush::GetBrushParameters(CEffectBrush *this, struct CBrushDrawListGenerator *a2)
{
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x8000) != 0 )
    McTemplateU0(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_EFFECTBRUSH_DRAW_ERROR_INVALID_NESTING);
  return 2147942450LL;
}
