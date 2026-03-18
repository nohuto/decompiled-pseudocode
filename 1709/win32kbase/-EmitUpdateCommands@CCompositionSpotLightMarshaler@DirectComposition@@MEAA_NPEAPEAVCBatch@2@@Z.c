/*
 * XREFs of ?EmitUpdateCommands@CCompositionSpotLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0001560
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_ed26dc4558b545ac7fd802dbdce56adb___ @ 0x1C0002044 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_ed26dc4558b545ac7fd802dbdce56ad.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_611c2d247658ce5b747d7b0ec076ff9a___ @ 0x1C00020B0 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_611c2d247658ce5b747d7b0ec076ff9.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d2c239b96c010858d8198edff56f29de___ @ 0x1C000211C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_d2c239b96c010858d8198edff56f29d.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_07b7358b6c833044707b1e043eb45112___ @ 0x1C0002194 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_07b7358b6c833044707b1e043eb4511.c)
 *     ?EmitUpdateCommands@CCompositionLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0002CB0 (-EmitUpdateCommands@CCompositionLightMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_2ec43e7a0f608a81a5f650be1c28b60f___ @ 0x1C014ABD8 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_2ec43e7a0f608a81a5f650be1c28b60.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_48e427cb93712b5508a6496a2d3d31db___ @ 0x1C014AC48 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_48e427cb93712b5508a6496a2d3d31d.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_a0697ee2515f329a79557201539cc733___ @ 0x1C014ACC0 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_a0697ee2515f329a79557201539cc73.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d06dcd6275fd82bf146c94f047ba67f8___ @ 0x1C014AD40 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_d06dcd6275fd82bf146c94f047ba67f.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d3e873a4a78e3ec57fc9c029066176a4___ @ 0x1C014ADAC (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_d3e873a4a78e3ec57fc9c029066176a.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d5842fc3b23def99b4920fc8e2a0eef4___ @ 0x1C014AE2C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_d5842fc3b23def99b4920fc8e2a0eef.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d87071e350df8be9b08f987133abb6b5___ @ 0x1C014AE9C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_d87071e350df8be9b08f987133abb6b.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_e30eee62978dd3bcb1287638ba2c31b5___ @ 0x1C014AF14 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_e30eee62978dd3bcb1287638ba2c31b.c)
 */

char __fastcall DirectComposition::CCompositionSpotLightMarshaler::EmitUpdateCommands(
        DirectComposition::CCompositionSpotLightMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di
  int v5; // eax
  bool v6; // zf
  DirectComposition::CCompositionSpotLightMarshaler *v8; // [rsp+40h] [rbp+20h] BYREF

  v4 = 0;
  if ( DirectComposition::CCompositionLightMarshaler::EmitUpdateCommands(this, a2) )
  {
    v5 = *((_DWORD *)this + 4);
    v8 = this;
    if ( (v5 & 0x80u) != 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_07b7358b6c833044707b1e043eb45112___(
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
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_e30eee62978dd3bcb1287638ba2c31b5___(
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
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d06dcd6275fd82bf146c94f047ba67f8___(
                               this,
                               a2,
                               &v8) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x200u;
    }
    v6 = (*((_DWORD *)this + 4) & 0x800) == 0;
    v8 = this;
    if ( !v6 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_a0697ee2515f329a79557201539cc733___(
                               this,
                               a2,
                               &v8) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x800u;
    }
    v6 = (*((_DWORD *)this + 4) & 0x400) == 0;
    v8 = this;
    if ( !v6 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d2c239b96c010858d8198edff56f29de___(
                               this,
                               a2,
                               &v8) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x400u;
    }
    v6 = (*((_DWORD *)this + 4) & 0x1000) == 0;
    v8 = this;
    if ( !v6 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_611c2d247658ce5b747d7b0ec076ff9a___(
                               this,
                               a2,
                               &v8) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x1000u;
    }
    v6 = (*((_DWORD *)this + 4) & 0x2000) == 0;
    v8 = this;
    if ( !v6 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d87071e350df8be9b08f987133abb6b5___(
                               this,
                               a2,
                               &v8) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x2000u;
    }
    v6 = (*((_DWORD *)this + 4) & 0x4000) == 0;
    v8 = this;
    if ( !v6 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_2ec43e7a0f608a81a5f650be1c28b60f___(
                               this,
                               a2,
                               &v8) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x4000u;
    }
    v6 = (*((_DWORD *)this + 4) & 0x8000) == 0;
    v8 = this;
    if ( !v6 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d3e873a4a78e3ec57fc9c029066176a4___(
                               this,
                               a2,
                               &v8) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x8000u;
    }
    v6 = (*((_DWORD *)this + 4) & 0x10000) == 0;
    v8 = this;
    if ( !v6 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_ed26dc4558b545ac7fd802dbdce56adb___(
                               this,
                               a2,
                               &v8) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x10000u;
    }
    v6 = (*((_DWORD *)this + 4) & 0x20000) == 0;
    v8 = this;
    if ( !v6 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_48e427cb93712b5508a6496a2d3d31db___(
                               this,
                               a2,
                               &v8) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x20000u;
    }
    v6 = (*((_DWORD *)this + 4) & 0x40000) == 0;
    v8 = this;
    if ( !v6 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_d5842fc3b23def99b4920fc8e2a0eef4___(
                               this,
                               a2,
                               &v8) )
        return v4;
      *((_DWORD *)this + 4) &= ~0x40000u;
    }
    return 1;
  }
  return v4;
}
