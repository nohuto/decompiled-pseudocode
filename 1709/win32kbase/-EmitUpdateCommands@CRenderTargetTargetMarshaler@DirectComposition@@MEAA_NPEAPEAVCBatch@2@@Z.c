/*
 * XREFs of ?EmitUpdateCommands@CRenderTargetTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C008F4A0
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateTransform@CRenderTargetTargetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C008F50C (-EmitUpdateTransform@CRenderTargetTargetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitCreate@CRenderTargetTargetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C008F594 (-EmitCreate@CRenderTargetTargetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_10e5acfe46b659e41e9168f1d8738530___ @ 0x1C01446F4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_10e5acfe46b659e41e9168f1d873853.c)
 */

char __fastcall DirectComposition::CRenderTargetTargetMarshaler::EmitUpdateCommands(
        DirectComposition::CRenderTargetTargetMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  bool v5; // zf
  DirectComposition::CRenderTargetTargetMarshaler *v7; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CRenderTargetTargetMarshaler::EmitCreate(this, a2)
    && DirectComposition::CRenderTargetTargetMarshaler::EmitUpdateTransform(this, a2) )
  {
    v5 = (*((_DWORD *)this + 4) & 0x100) == 0;
    v7 = this;
    if ( !v5 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_10e5acfe46b659e41e9168f1d8738530___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x100u;
    }
    return 1;
  }
  return v4;
}
