/*
 * XREFs of ?EmitUpdateCommands@CLayerVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00103F0
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_5986506e5a5c3cc8d0771cf402cabc68___ @ 0x1C000E644 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_5986506e5a5c3cc8d0771cf402cabc6.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_6e1fc2826fc1168ae993d94725827cfd___ @ 0x1C000E6B4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_6e1fc2826fc1168ae993d94725827cf.c)
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0018FA0 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d902fc8211c9a6c33e20d09303e7d879___ @ 0x1C0153AAC (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_d902fc8211c9a6c33e20d09303e7d87.c)
 */

char __fastcall DirectComposition::CLayerVisualMarshaler::EmitUpdateCommands(
        DirectComposition::CLayerVisualMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  int v5; // eax
  DirectComposition::CLayerVisualMarshaler *v7; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CVisualMarshaler::EmitUpdateCommands(this, a2) )
  {
    v5 = *((_DWORD *)this + 4);
    v7 = this;
    if ( (v5 & 0x20000000) != 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_6e1fc2826fc1168ae993d94725827cfd___(
              (__int64)this,
              a2,
              (__int64)&v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x20000000u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x40000000) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d902fc8211c9a6c33e20d09303e7d879___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x40000000u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( v5 >= 0 )
      return 1;
    if ( DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_5986506e5a5c3cc8d0771cf402cabc68___(
           (__int64)this,
           a2,
           (__int64)&v7) )
    {
      *((_DWORD *)this + 4) &= ~0x80000000;
      return 1;
    }
  }
  return v4;
}
