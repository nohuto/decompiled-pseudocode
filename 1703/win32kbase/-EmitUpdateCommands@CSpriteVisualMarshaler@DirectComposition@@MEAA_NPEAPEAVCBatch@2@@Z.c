/*
 * XREFs of ?EmitUpdateCommands@CSpriteVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0021C00
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0017D50 (-EmitUpdateCommands@CVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_SPRITEVISUAL_SETBRUSH__lambda_2a2af4fb1cc3ff444cc7fd25e57813e8___ @ 0x1C0021B70 (DirectComposition--CResourceMarshaler--EmitUpdateCommand_MILCMD_SPRITEVISUAL_SETBRUSH__lambda_2a.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_SPRITEVISUAL_SETSHADOW__lambda_c0319cdccaf42ab5f4bab8df748e24c2___ @ 0x1C01486B8 (DirectComposition--CResourceMarshaler--EmitUpdateCommand_MILCMD_SPRITEVISUAL_SETSHADOW__lambda_c.c)
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
    v5 = (*((_DWORD *)this + 4) & 0x4000000) == 0;
    v7 = this;
    if ( !v5 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_SPRITEVISUAL_SETBRUSH__lambda_2a2af4fb1cc3ff444cc7fd25e57813e8___(
              a2,
              (__int64)&v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x4000000u;
    }
    v5 = (*((_DWORD *)this + 4) & 0x8000000) == 0;
    v7 = this;
    if ( !v5 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_SPRITEVISUAL_SETSHADOW__lambda_c0319cdccaf42ab5f4bab8df748e24c2___(
                               a2,
                               &v7) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x8000000u;
    }
    return 1;
  }
  return v4;
}
