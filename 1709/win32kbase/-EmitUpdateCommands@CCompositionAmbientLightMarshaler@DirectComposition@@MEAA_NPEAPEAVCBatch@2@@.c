/*
 * XREFs of ?EmitUpdateCommands@CCompositionAmbientLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00013C0
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_b4ac4961d80e2f19852cec5899975ea8___ @ 0x1C0002200 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_b4ac4961d80e2f19852cec5899975ea.c)
 *     ?EmitUpdateCommands@CCompositionLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0002CB0 (-EmitUpdateCommands@CCompositionLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_59ba2154ddd3e9930f0e32cebb1e38b5___ @ 0x1C0149E68 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_59ba2154ddd3e9930f0e32cebb1e38b.c)
 */

char __fastcall DirectComposition::CCompositionAmbientLightMarshaler::EmitUpdateCommands(
        DirectComposition::CCompositionAmbientLightMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  int v5; // eax
  bool v6; // zf
  DirectComposition::CCompositionAmbientLightMarshaler *v8; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CCompositionLightMarshaler::EmitUpdateCommands(this, a2) )
  {
    v5 = *((_DWORD *)this + 4);
    v8 = this;
    if ( (v5 & 0x80u) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_b4ac4961d80e2f19852cec5899975ea8___(
                               this,
                               a2,
                               &v8) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x80u;
    }
    v6 = (*((_DWORD *)this + 4) & 0x100) == 0;
    v8 = this;
    if ( !v6 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_59ba2154ddd3e9930f0e32cebb1e38b5___(
                               this,
                               a2,
                               &v8) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x100u;
    }
    return 1;
  }
  return v4;
}
