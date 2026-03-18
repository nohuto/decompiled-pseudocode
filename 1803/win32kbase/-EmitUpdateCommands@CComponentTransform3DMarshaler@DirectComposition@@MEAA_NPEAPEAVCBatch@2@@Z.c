/*
 * XREFs of ?EmitUpdateCommands@CComponentTransform3DMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C001AA50
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_4212a3cfa2ad8474194a443c8d74302e___ @ 0x1C000DA5C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_4212a3cfa2ad8474194a443c8d74302.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_e8db0b8864f2bc1b68731b8b3577a66c___ @ 0x1C000DADC (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_e8db0b8864f2bc1b68731b8b3577a66.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_1659e9a38274a9ca853bedd1e35069c8___ @ 0x1C000DB5C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_1659e9a38274a9ca853bedd1e35069c.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_4b0adfa7281a1947b04836cd95aad4d5___ @ 0x1C000DBC8 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_4b0adfa7281a1947b04836cd95aad4d.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_a6d9fda2df382e31f59b06500ddda539___ @ 0x1C000DC54 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_a6d9fda2df382e31f59b06500ddda53.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_ee3fa1218d174fe3255def456d978b6d___ @ 0x1C000DCC8 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_ee3fa1218d174fe3255def456d978b6.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_c7b9fb34a118bc588d649f38d06a4036___ @ 0x1C0019558 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_c7b9fb34a118bc588d649f38d06a403.c)
 *     ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00196F8 (-EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CComponentTransform3DMarshaler::EmitUpdateCommands(
        DirectComposition::CComponentTransform3DMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  int v5; // eax
  DirectComposition::CComponentTransform3DMarshaler *v7; // [rsp+50h] [rbp+30h] BYREF

  v4 = 0;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(this, a2) )
  {
    v5 = *((_DWORD *)this + 4);
    v7 = this;
    if ( (v5 & 0x100) == 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_a6d9fda2df382e31f59b06500ddda539___(
              (__int64)this,
              a2,
              (__int64)&v7) )
        return v4;
      *((_DWORD *)this + 4) |= 0x100u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x80u) == 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_ee3fa1218d174fe3255def456d978b6d___(
              (__int64)this,
              a2,
              (__int64)&v7) )
        return v4;
      *((_DWORD *)this + 4) |= 0x80u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x200) == 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_4b0adfa7281a1947b04836cd95aad4d5___(
              (__int64)this,
              a2,
              (__int64)&v7) )
        return v4;
      *((_DWORD *)this + 4) |= 0x200u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x800) == 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_e8db0b8864f2bc1b68731b8b3577a66c___(
              (__int64)this,
              a2,
              (__int64)&v7) )
        return v4;
      *((_DWORD *)this + 4) |= 0x800u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x400) == 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_1659e9a38274a9ca853bedd1e35069c8___(
              (__int64)this,
              a2,
              (__int64)&v7) )
        return v4;
      *((_DWORD *)this + 4) |= 0x400u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x1000) == 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_4212a3cfa2ad8474194a443c8d74302e___(
              (__int64)this,
              a2,
              (__int64)&v7) )
        return v4;
      *((_DWORD *)this + 4) |= 0x1000u;
      v5 = *((_DWORD *)this + 4);
    }
    v7 = this;
    if ( (v5 & 0x2000) != 0 )
      return 1;
    if ( DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_c7b9fb34a118bc588d649f38d06a4036___(
           (__int64)this,
           a2,
           (__int64 *)&v7) )
    {
      *((_DWORD *)this + 4) |= 0x2000u;
      return 1;
    }
  }
  return v4;
}
