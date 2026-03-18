/*
 * XREFs of ?EmitUpdateCommands@CMaskBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0024500
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_MASKBRUSH_SETSOURCE__lambda_5fe80d6ba38c4e3de7e7f8dfe4d269b4___ @ 0x1C00246AC (DirectComposition--CResourceMarshaler--EmitUpdateCommand_MILCMD_MASKBRUSH_SETSOURCE__lambda_5fe8.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_MASKBRUSH_SETMASK__lambda_b547dab8fd8be34540294d316fb3ac32___ @ 0x1C002471C (DirectComposition--CResourceMarshaler--EmitUpdateCommand_MILCMD_MASKBRUSH_SETMASK__lambda_b547da.c)
 */

char __fastcall DirectComposition::CMaskBrushMarshaler::EmitUpdateCommands(
        DirectComposition::CMaskBrushMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v2; // eax
  char v3; // di
  int v6; // eax
  DirectComposition::CMaskBrushMarshaler *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 4);
  v3 = 0;
  v8 = this;
  if ( (v2 & 0x20) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_MASKBRUSH_SETSOURCE__lambda_5fe80d6ba38c4e3de7e7f8dfe4d269b4___(
                             a2,
                             &v8) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x20u;
  }
  v6 = *((_DWORD *)this + 4);
  v8 = this;
  if ( (v6 & 0x40) == 0 )
    return 1;
  if ( (unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_MASKBRUSH_SETMASK__lambda_b547dab8fd8be34540294d316fb3ac32___(
                          a2,
                          &v8) )
  {
    *((_DWORD *)this + 4) &= ~0x40u;
    return 1;
  }
  return v3;
}
