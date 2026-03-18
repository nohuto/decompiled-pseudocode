/*
 * XREFs of ?EmitUpdateIsCenterHollowCommand@CNineGridBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C008148C
 * Callers:
 *     ?EmitUpdateCommands@CNineGridBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00810C0 (-EmitUpdateCommands@CNineGridBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_NINEGRIDBRUSH_SETISCENTERHOLLOW__lambda_a9009d9e366029060374bab62bcea2b6___ @ 0x1C0081580 (DirectComposition--CResourceMarshaler--EmitUpdateCommand_MILCMD_NINEGRIDBRUSH_SETISCENTERHOLLOW_.c)
 */

char __fastcall DirectComposition::CNineGridBrushMarshaler::EmitUpdateIsCenterHollowCommand(
        DirectComposition::CNineGridBrushMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  bool v2; // zf
  char updated; // al
  char v5; // dl
  DirectComposition::CNineGridBrushMarshaler *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = (*((_DWORD *)this + 4) & 0x4000) == 0;
  v7 = this;
  if ( v2 )
    return 1;
  updated = DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_NINEGRIDBRUSH_SETISCENTERHOLLOW__lambda_a9009d9e366029060374bab62bcea2b6___(
              a2,
              &v7);
  v5 = 0;
  if ( updated )
  {
    *((_DWORD *)this + 4) &= ~0x4000u;
    return 1;
  }
  return v5;
}
