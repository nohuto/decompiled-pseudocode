/*
 * XREFs of ?EmitUpdateCommands@CCompositionAmbientLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0149010
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CCompositionLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0147050 (-EmitUpdateCommands@CCompositionLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_COMPOSITIONAMBIENTLIGHT_SETCOLOR__lambda_3a7d53e24e2750ef77c3f5162b86a6f4___ @ 0x1C0148FA0 (DirectComposition--CResourceMarshaler--EmitUpdateCommand_MILCMD_COMPOSITIONAMBIENTLIGHT_SETCOLOR.c)
 */

char __fastcall DirectComposition::CCompositionAmbientLightMarshaler::EmitUpdateCommands(
        DirectComposition::CCompositionAmbientLightMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  int v5; // eax
  DirectComposition::CCompositionAmbientLightMarshaler *v7; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CCompositionLightMarshaler::EmitUpdateCommands(this, a2) )
  {
    v5 = *((_DWORD *)this + 4);
    v7 = this;
    if ( (v5 & 0x40) == 0 )
      return 1;
    if ( DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_COMPOSITIONAMBIENTLIGHT_SETCOLOR__lambda_3a7d53e24e2750ef77c3f5162b86a6f4___(
           a2,
           (__int64)&v7) )
    {
      *((_DWORD *)this + 4) &= ~0x40u;
      return 1;
    }
  }
  return v4;
}
