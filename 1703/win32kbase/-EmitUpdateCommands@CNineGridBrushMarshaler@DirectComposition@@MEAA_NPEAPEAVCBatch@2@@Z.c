/*
 * XREFs of ?EmitUpdateCommands@CNineGridBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00810C0
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_NINEGRIDBRUSH_SETINSETPROPERTY__lambda_4752416bf0de7d01d977e47fd81afe55___ @ 0x1C00039AC (DirectComposition--CResourceMarshaler--EmitUpdateCommand_MILCMD_NINEGRIDBRUSH_SETINSETPROPERTY__.c)
 *     ?EmitUpdateIsCenterHollowCommand@CNineGridBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C008148C (-EmitUpdateIsCenterHollowCommand@CNineGridBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@.c)
 *     ?EmitUpdateSourceCommand@CNineGridBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00814D0 (-EmitUpdateSourceCommand@CNineGridBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CNineGridBrushMarshaler::EmitUpdateCommands(
        DirectComposition::CNineGridBrushMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v4; // eax
  int v5; // eax
  bool v6; // zf
  char v7; // si
  DirectComposition::CNineGridBrushMarshaler *v9; // [rsp+20h] [rbp-10h] BYREF
  int v10; // [rsp+28h] [rbp-8h]
  int v11; // [rsp+2Ch] [rbp-4h]

  if ( !DirectComposition::CNineGridBrushMarshaler::EmitUpdateSourceCommand(this, a2) )
    return 0;
  v4 = *((_DWORD *)this + 4);
  v11 = *((_DWORD *)this + 12);
  v9 = this;
  v10 = 3;
  if ( (v4 & 0x40) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_NINEGRIDBRUSH_SETINSETPROPERTY__lambda_4752416bf0de7d01d977e47fd81afe55___(
            a2,
            &v9) )
      return 0;
    *((_DWORD *)this + 4) &= ~0x40u;
  }
  v5 = *((_DWORD *)this + 4);
  v11 = *((_DWORD *)this + 14);
  v9 = this;
  v10 = 8;
  if ( (v5 & 0x80u) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_NINEGRIDBRUSH_SETINSETPROPERTY__lambda_4752416bf0de7d01d977e47fd81afe55___(
            a2,
            &v9) )
      return 0;
    *((_DWORD *)this + 4) &= ~0x80u;
  }
  v6 = (*((_DWORD *)this + 4) & 0x100) == 0;
  v11 = *((_DWORD *)this + 16);
  v9 = this;
  v10 = 5;
  if ( !v6 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_NINEGRIDBRUSH_SETINSETPROPERTY__lambda_4752416bf0de7d01d977e47fd81afe55___(
            a2,
            &v9) )
      return 0;
    *((_DWORD *)this + 4) &= ~0x100u;
  }
  v10 = 0;
  v6 = (*((_DWORD *)this + 4) & 0x200) == 0;
  v11 = *((_DWORD *)this + 18);
  v9 = this;
  if ( !v6 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_NINEGRIDBRUSH_SETINSETPROPERTY__lambda_4752416bf0de7d01d977e47fd81afe55___(
            a2,
            &v9) )
      return 0;
    *((_DWORD *)this + 4) &= ~0x200u;
  }
  v6 = (*((_DWORD *)this + 4) & 0x400) == 0;
  v11 = *((_DWORD *)this + 13);
  v9 = this;
  v10 = 4;
  if ( !v6 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_NINEGRIDBRUSH_SETINSETPROPERTY__lambda_4752416bf0de7d01d977e47fd81afe55___(
            a2,
            &v9) )
      return 0;
    *((_DWORD *)this + 4) &= ~0x400u;
  }
  v6 = (*((_DWORD *)this + 4) & 0x800) == 0;
  v11 = *((_DWORD *)this + 15);
  v9 = this;
  v10 = 9;
  if ( !v6 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_NINEGRIDBRUSH_SETINSETPROPERTY__lambda_4752416bf0de7d01d977e47fd81afe55___(
            a2,
            &v9) )
      return 0;
    *((_DWORD *)this + 4) &= ~0x800u;
  }
  v6 = (*((_DWORD *)this + 4) & 0x1000) == 0;
  v11 = *((_DWORD *)this + 17);
  v9 = this;
  v10 = 6;
  if ( !v6 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_NINEGRIDBRUSH_SETINSETPROPERTY__lambda_4752416bf0de7d01d977e47fd81afe55___(
            a2,
            &v9) )
      return 0;
    *((_DWORD *)this + 4) &= ~0x1000u;
  }
  v6 = (*((_DWORD *)this + 4) & 0x2000) == 0;
  v7 = 1;
  v11 = *((_DWORD *)this + 19);
  v10 = 1;
  v9 = this;
  if ( !v6 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_NINEGRIDBRUSH_SETINSETPROPERTY__lambda_4752416bf0de7d01d977e47fd81afe55___(
            a2,
            &v9) )
      return 0;
    *((_DWORD *)this + 4) &= ~0x2000u;
  }
  if ( !DirectComposition::CNineGridBrushMarshaler::EmitUpdateIsCenterHollowCommand(this, a2) )
    return 0;
  return v7;
}
