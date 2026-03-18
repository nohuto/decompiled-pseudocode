/*
 * XREFs of ?EmitUpdateCommands@CBaseClipMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C005A960
 * Callers:
 *     ?EmitUpdateCommands@CRectangleClipMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0056AF0 (-EmitUpdateCommands@CRectangleClipMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002AF80 (-EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitTransform@CBaseClipMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C005A9E0 (-EmitTransform@CBaseClipMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 */

bool __fastcall DirectComposition::CBaseClipMarshaler::EmitUpdateCommands(
        DirectComposition::CBaseClipMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl

  v4 = 0;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(this, a2) )
    return DirectComposition::CBaseClipMarshaler::EmitTransform(this, a2);
  return v4;
}
