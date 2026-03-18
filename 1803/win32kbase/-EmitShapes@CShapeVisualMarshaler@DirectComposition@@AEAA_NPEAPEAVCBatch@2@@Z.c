/*
 * XREFs of ?EmitShapes@CShapeVisualMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0153DA8
 * Callers:
 *     ?EmitUpdateCommands@CShapeVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0153E00 (-EmitUpdateCommands@CShapeVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_f27f1e7718c39444876f3e254cac4d07___lambda_f91f4cf09ba95a878c6ebb7809dc9a5a___ @ 0x1C0153C10 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_f27f1e7718c39444876f3e254cac4d0.c)
 */

char __fastcall DirectComposition::CShapeVisualMarshaler::EmitShapes(
        DirectComposition::CShapeVisualMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  bool v2; // zf
  char updated; // al
  char v5; // cl
  void *v7; // [rsp+20h] [rbp-18h]
  DirectComposition::CShapeVisualMarshaler *v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = (*((_DWORD *)this + 4) & 0x40000000) == 0;
  v8 = this;
  if ( v2 )
    return 1;
  updated = DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_f27f1e7718c39444876f3e254cac4d07___lambda_f91f4cf09ba95a878c6ebb7809dc9a5a___(
              (__int64)this,
              a2,
              (unsigned int *)this + 75,
              *((_DWORD *)this + 74),
              v7,
              (__int64)&v8);
  v5 = 0;
  if ( updated )
  {
    *((_DWORD *)this + 4) &= ~0x40000000u;
    return 1;
  }
  return v5;
}
