/*
 * XREFs of ?EmitUpdateCommands@CProjectedShadowSceneMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0151A90
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00196F8 (-EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_e22d0ec4d224b06fe90ac419f6c312a3___ @ 0x1C0151704 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_e22d0ec4d224b06fe90ac419f6c312a.c)
 *     ?EmitAddCasters@CProjectedShadowSceneMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01517AC (-EmitAddCasters@CProjectedShadowSceneMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitAddReceivers@CProjectedShadowSceneMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01518AC (-EmitAddReceivers@CProjectedShadowSceneMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitClearCasters@CProjectedShadowSceneMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01519AC (-EmitClearCasters@CProjectedShadowSceneMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitClearReceivers@CProjectedShadowSceneMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0151A18 (-EmitClearReceivers@CProjectedShadowSceneMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CProjectedShadowSceneMarshaler::EmitUpdateCommands(
        DirectComposition::CProjectedShadowSceneMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // di
  bool v5; // zf
  DirectComposition::CProjectedShadowSceneMarshaler *v7; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(
         this,
         (struct DirectComposition::CBatch **)a2)
    && DirectComposition::CProjectedShadowSceneMarshaler::EmitClearCasters(this, a2)
    && DirectComposition::CProjectedShadowSceneMarshaler::EmitClearReceivers(this, a2)
    && DirectComposition::CProjectedShadowSceneMarshaler::EmitAddCasters(this, a2)
    && DirectComposition::CProjectedShadowSceneMarshaler::EmitAddReceivers(this, a2) )
  {
    v5 = (*((_DWORD *)this + 4) & 0x100) == 0;
    v7 = this;
    if ( v5 )
      return 1;
    if ( DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_e22d0ec4d224b06fe90ac419f6c312a3___(
           (__int64)this,
           a2,
           (__int64)&v7) )
    {
      *((_DWORD *)this + 4) &= ~0x100u;
      return 1;
    }
  }
  return v4;
}
