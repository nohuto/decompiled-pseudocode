/*
 * XREFs of ?EmitUpdateSourceCommand@CNineGridBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00814D0
 * Callers:
 *     ?EmitUpdateCommands@CNineGridBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00810C0 (-EmitUpdateCommands@CNineGridBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_NINEGRIDBRUSH_SETSOURCE__lambda_bbbbfaf5e425b5858bd5aa190ce74ce9___ @ 0x1C0081510 (DirectComposition--CResourceMarshaler--EmitUpdateCommand_MILCMD_NINEGRIDBRUSH_SETSOURCE__lambda_.c)
 */

char __fastcall DirectComposition::CNineGridBrushMarshaler::EmitUpdateSourceCommand(
        DirectComposition::CNineGridBrushMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v2; // eax
  char updated; // al
  char v5; // dl
  DirectComposition::CNineGridBrushMarshaler *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 4);
  v7 = this;
  if ( (v2 & 0x20) == 0 )
    return 1;
  updated = DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_NINEGRIDBRUSH_SETSOURCE__lambda_bbbbfaf5e425b5858bd5aa190ce74ce9___(
              a2,
              &v7);
  v5 = 0;
  if ( updated )
  {
    *((_DWORD *)this + 4) &= ~0x20u;
    return 1;
  }
  return v5;
}
