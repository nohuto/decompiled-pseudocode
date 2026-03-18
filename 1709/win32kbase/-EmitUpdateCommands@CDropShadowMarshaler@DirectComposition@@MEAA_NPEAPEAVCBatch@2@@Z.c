/*
 * XREFs of ?EmitUpdateCommands@CDropShadowMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0001120
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_11688ceda91aae2628d29c038e59b078___ @ 0x1C000260C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_11688ceda91aae2628d29c038e59b07.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_494684728630587b3dd76e3bf1e0d976___ @ 0x1C0002678 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_494684728630587b3dd76e3bf1e0d97.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_1a86feb452a1147b26df5cd035df9111___ @ 0x1C00026F8 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_1a86feb452a1147b26df5cd035df911.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_9786e05e9c7eca17e9f4f7e905400aa9___ @ 0x1C000276C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_9786e05e9c7eca17e9f4f7e905400aa.c)
 *     ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C002AF80 (-EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_357e01a1ac8aba050799654776ce6193___ @ 0x1C01467B8 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_357e01a1ac8aba050799654776ce619.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_8c877d84863cd987b7f24acaee746258___ @ 0x1C0146830 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_8c877d84863cd987b7f24acaee74625.c)
 */

char __fastcall DirectComposition::CDropShadowMarshaler::EmitUpdateCommands(
        DirectComposition::CDropShadowMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  int v5; // eax
  bool v6; // zf
  DirectComposition::CDropShadowMarshaler *v8; // [rsp+40h] [rbp+20h] BYREF

  v4 = 0;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(this, a2) )
  {
    v5 = *((_DWORD *)this + 4);
    v8 = this;
    if ( (v5 & 0x80u) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_9786e05e9c7eca17e9f4f7e905400aa9___(
                               this,
                               a2,
                               &v8) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x80u;
    }
    v6 = (*((_DWORD *)this + 4) & 0x100) == 0;
    v8 = this;
    if ( !v6 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_1a86feb452a1147b26df5cd035df9111___(
                               this,
                               a2,
                               &v8) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x100u;
    }
    v6 = (*((_DWORD *)this + 4) & 0x200) == 0;
    v8 = this;
    if ( !v6 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_357e01a1ac8aba050799654776ce6193___(
                               this,
                               a2,
                               &v8) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x200u;
    }
    v6 = (*((_DWORD *)this + 4) & 0x400) == 0;
    v8 = this;
    if ( !v6 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_494684728630587b3dd76e3bf1e0d976___(
                               this,
                               a2,
                               &v8) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x400u;
    }
    v6 = (*((_DWORD *)this + 4) & 0x800) == 0;
    v8 = this;
    if ( !v6 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_8c877d84863cd987b7f24acaee746258___(
                               this,
                               a2,
                               &v8) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x800u;
    }
    v6 = (*((_DWORD *)this + 4) & 0x1000) == 0;
    v8 = this;
    if ( v6 )
      return 1;
    if ( (unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_11688ceda91aae2628d29c038e59b078___(
                            this,
                            a2,
                            &v8) )
    {
      *((_DWORD *)this + 4) &= ~0x1000u;
      return 1;
    }
  }
  return v4;
}
