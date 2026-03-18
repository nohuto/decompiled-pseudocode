/*
 * XREFs of ?EmitUpdateCommands@CSpriteVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0028570
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_5fd4d90f842c5e68804480ec0a6ed4ed___ @ 0x1C0029F20 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_5fd4d90f842c5e68804480ec0a6ed4e.c)
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002C690 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_f964cdeaeea32269e0278b9b956ea9f1___ @ 0x1C0149528 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_f964cdeaeea32269e0278b9b956ea9f.c)
 */

char __fastcall DirectComposition::CSpriteVisualMarshaler::EmitUpdateCommands(
        DirectComposition::CSpriteVisualMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  bool v5; // zf
  DirectComposition::CSpriteVisualMarshaler *v7; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CVisualMarshaler::EmitUpdateCommands(this, a2) )
  {
    v5 = (*((_DWORD *)this + 4) & 0x8000000) == 0;
    v7 = this;
    if ( !v5 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_5fd4d90f842c5e68804480ec0a6ed4ed___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x8000000u;
    }
    v5 = (*((_DWORD *)this + 4) & 0x10000000) == 0;
    v7 = this;
    if ( !v5 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_f964cdeaeea32269e0278b9b956ea9f1___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x10000000u;
    }
    return 1;
  }
  return v4;
}
