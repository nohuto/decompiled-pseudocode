/*
 * XREFs of ?EmitUpdateCommands@CSpriteVisualMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000C7B0
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_55a2937be0383dca6b00eef3dd1cade6___ @ 0x1C000E730 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_55a2937be0383dca6b00eef3dd1cade.c)
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0018FA0 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_821346ee0aa757109843575bda7d790f___ @ 0x1C01539C8 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_821346ee0aa757109843575bda7d790.c)
 */

char __fastcall DirectComposition::CSpriteVisualMarshaler::EmitUpdateCommands(
        DirectComposition::CSpriteVisualMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  int v5; // eax
  DirectComposition::CSpriteVisualMarshaler *v7; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CVisualMarshaler::EmitUpdateCommands(this, a2) )
  {
    v5 = *((_DWORD *)this + 4);
    v7 = this;
    if ( (v5 & 0x20000000) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_55a2937be0383dca6b00eef3dd1cade6___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x20000000u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x40000000) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_821346ee0aa757109843575bda7d790f___(
                               this,
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x40000000u;
    }
    return 1;
  }
  return v4;
}
