/*
 * XREFs of ?EmitUpdateCommands@CSurfaceBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00287A0
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_a1e302670e285b24a03d4c57e8d96048___ @ 0x1C0029C68 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_a1e302670e285b24a03d4c57e8d9604.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d505a5a4136008204b768067877552bb___ @ 0x1C0029CD4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_d505a5a4136008204b768067877552b.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_60ae7158bd4a4e70a2fc7297ea30c04c___ @ 0x1C0029D40 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_60ae7158bd4a4e70a2fc7297ea30c04.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_c711492ef72edd2aa105356b7e8fccae___ @ 0x1C0029DAC (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_c711492ef72edd2aa105356b7e8fcca.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_a7d8a1277c7f0e2b9e757257a7d15976___ @ 0x1C0029E24 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_a7d8a1277c7f0e2b9e757257a7d1597.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_e622d0f85f8be833a4fce9a217c58424___ @ 0x1C0149674 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_e622d0f85f8be833a4fce9a217c5842.c)
 */

char __fastcall DirectComposition::CSurfaceBrushMarshaler::EmitUpdateCommands(
        DirectComposition::CSurfaceBrushMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  int v2; // eax
  char v3; // di
  int v6; // eax
  int v7; // eax
  bool v8; // zf
  int v9; // eax
  DirectComposition::CSurfaceBrushMarshaler *v11; // [rsp+30h] [rbp+10h] BYREF

  v2 = *((_DWORD *)this + 4);
  v3 = 0;
  v11 = this;
  if ( (v2 & 0x20) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_a7d8a1277c7f0e2b9e757257a7d15976___(
                             this,
                             a2,
                             &v11) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x20u;
  }
  v6 = *((_DWORD *)this + 4);
  v11 = this;
  if ( (v6 & 0x40) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_c711492ef72edd2aa105356b7e8fccae___(
                             this,
                             a2,
                             &v11) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x40u;
  }
  v7 = *((_DWORD *)this + 4);
  v11 = this;
  if ( (v7 & 0x80u) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_60ae7158bd4a4e70a2fc7297ea30c04c___(
                             this,
                             a2,
                             &v11) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x80u;
  }
  v8 = (*((_DWORD *)this + 4) & 0x100) == 0;
  v11 = this;
  if ( !v8 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d505a5a4136008204b768067877552bb___(
                             this,
                             a2,
                             &v11) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x100u;
  }
  v8 = (*((_DWORD *)this + 4) & 0x200) == 0;
  v11 = this;
  if ( !v8 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_a1e302670e285b24a03d4c57e8d96048___(
                             this,
                             a2,
                             &v11) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x200u;
  }
  v8 = (*((_DWORD *)this + 4) & 0x400) == 0;
  v11 = this;
  if ( !v8 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_e622d0f85f8be833a4fce9a217c58424___(
                             this,
                             a2,
                             &v11) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x400u;
  }
  v9 = *((_DWORD *)this + 4);
  v11 = this;
  if ( (v9 & 0x40) != 0 )
  {
    if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_c711492ef72edd2aa105356b7e8fccae___(
                             this,
                             a2,
                             &v11) )
      return v3;
    *((_DWORD *)this + 4) &= ~0x40u;
  }
  return 1;
}
