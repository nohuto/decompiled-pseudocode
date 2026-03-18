/*
 * XREFs of ?EmitUpdateCommands@CEllipseGeometryMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0158FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CBaseClipMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000FB10 (-EmitUpdateCommands@CBaseClipMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_063e1fce4d4acfb9799fc627bd39ef58___ @ 0x1C0158F10 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_063e1fce4d4acfb9799fc627bd39ef5.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d7b7487474e37441ff2f42246dea542c___ @ 0x1C0158F80 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_d7b7487474e37441ff2f42246dea542.c)
 */

char __fastcall DirectComposition::CEllipseGeometryMarshaler::EmitUpdateCommands(
        DirectComposition::CEllipseGeometryMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // di
  int v5; // eax
  DirectComposition::CEllipseGeometryMarshaler *v7; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CBaseClipMarshaler::EmitUpdateCommands(this, (struct DirectComposition::CBatch **)a2) )
  {
    v5 = *((_DWORD *)this + 4);
    v7 = this;
    if ( (v5 & 0x800) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_063e1fce4d4acfb9799fc627bd39ef58___(
              (__int64)this,
              a2,
              (__int64)&v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x800u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x1000) == 0 )
      return 1;
    if ( DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d7b7487474e37441ff2f42246dea542c___(
           (__int64)this,
           a2,
           (__int64)&v7) )
    {
      *((_DWORD *)this + 4) &= ~0x1000u;
      return 1;
    }
  }
  return v4;
}
