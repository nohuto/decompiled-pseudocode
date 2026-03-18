/*
 * XREFs of ?EmitUpdateCommands@CVisualSurfaceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C014C660
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C001E274 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_CACHEDVISUALIMAGE_FREEZE__lambda_ac7676d918af5bfabeebb87958952178___ @ 0x1C014C408 (DirectComposition--CResourceMarshaler--EmitUpdateCommand_MILCMD_CACHEDVISUALIMAGE_FREEZE__lambda.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_CACHEDVISUALIMAGE_SETVIEWBOXBOTTOM__lambda_03cd00de3218ab801a8258c4c4e709ff___ @ 0x1C014C46C (DirectComposition--CResourceMarshaler--EmitUpdateCommand_MILCMD_CACHEDVISUALIMAGE_SETVIEWBOXBOTT.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_CACHEDVISUALIMAGE_SETVIEWBOXLEFT__lambda_2be4b86bfaf8a153ffd5b684dbabb7af___ @ 0x1C014C4CC (DirectComposition--CResourceMarshaler--EmitUpdateCommand_MILCMD_CACHEDVISUALIMAGE_SETVIEWBOXLEFT.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_CACHEDVISUALIMAGE_SETVIEWBOXRIGHT__lambda_3e67a540078ec45ffe450e08ca9a1ffc___ @ 0x1C014C52C (DirectComposition--CResourceMarshaler--EmitUpdateCommand_MILCMD_CACHEDVISUALIMAGE_SETVIEWBOXRIGH.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_CACHEDVISUALIMAGE_SETVIEWBOXTOP__lambda_6fbb59f69adb247918e2e95224b54250___ @ 0x1C014C58C (DirectComposition--CResourceMarshaler--EmitUpdateCommand_MILCMD_CACHEDVISUALIMAGE_SETVIEWBOXTOP_.c)
 *     _lambda_5b29063bbdb3fd88bfee3f40246fab0b_::operator() @ 0x1C014C5EC (_lambda_5b29063bbdb3fd88bfee3f40246fab0b_--operator().c)
 */

char __fastcall DirectComposition::CVisualSurfaceMarshaler::EmitUpdateCommands(
        DirectComposition::CVisualSurfaceMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v2; // eax
  char v3; // di
  char *v6; // rax
  __int64 v7; // rbx
  int v8; // eax
  bool v9; // zf
  int v10; // eax
  void *v12; // [rsp+40h] [rbp+20h] BYREF
  DirectComposition::CVisualSurfaceMarshaler *v13; // [rsp+50h] [rbp+30h] BYREF

  v2 = *((_DWORD *)this + 4);
  v3 = 0;
  v13 = this;
  if ( (v2 & 0x20) != 0 )
  {
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x4CuLL, &v12) )
      return v3;
    v6 = (char *)v12;
    *(_DWORD *)v12 = 76;
    v7 = (__int64)(v6 + 4);
    memset(v6 + 4, 0, 0x48uLL);
    lambda_5b29063bbdb3fd88bfee3f40246fab0b_::operator()((__int64 *)&v13, v7);
    *((_DWORD *)this + 4) &= ~0x20u;
  }
  v8 = *((_DWORD *)this + 4);
  v12 = this;
  if ( (v8 & 0x80u) != 0 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_CACHEDVISUALIMAGE_SETVIEWBOXLEFT__lambda_2be4b86bfaf8a153ffd5b684dbabb7af___(
            a2,
            (__int64)&v12) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x80u;
  }
  v9 = (*((_DWORD *)this + 4) & 0x100) == 0;
  v12 = this;
  if ( !v9 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_CACHEDVISUALIMAGE_SETVIEWBOXTOP__lambda_6fbb59f69adb247918e2e95224b54250___(
            a2,
            (__int64)&v12) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x100u;
  }
  v9 = (*((_DWORD *)this + 4) & 0x200) == 0;
  v12 = this;
  if ( !v9 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_CACHEDVISUALIMAGE_SETVIEWBOXRIGHT__lambda_3e67a540078ec45ffe450e08ca9a1ffc___(
            a2,
            (__int64)&v12) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x200u;
  }
  v9 = (*((_DWORD *)this + 4) & 0x400) == 0;
  v12 = this;
  if ( !v9 )
  {
    if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_CACHEDVISUALIMAGE_SETVIEWBOXBOTTOM__lambda_03cd00de3218ab801a8258c4c4e709ff___(
            a2,
            (__int64)&v12) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x400u;
  }
  v10 = *((_DWORD *)this + 4);
  v12 = this;
  if ( (v10 & 0x40) == 0 )
    return 1;
  if ( DirectComposition::CResourceMarshaler::EmitUpdateCommand_MILCMD_CACHEDVISUALIMAGE_FREEZE__lambda_ac7676d918af5bfabeebb87958952178___(
         a2,
         (__int64)&v12) )
  {
    *((_DWORD *)this + 4) &= ~0x40u;
    return 1;
  }
  return v3;
}
