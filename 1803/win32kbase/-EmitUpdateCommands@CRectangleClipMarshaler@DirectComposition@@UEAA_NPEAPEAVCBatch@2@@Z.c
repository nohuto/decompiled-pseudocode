/*
 * XREFs of ?EmitUpdateCommands@CRectangleClipMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000F4A0
 * Callers:
 *     <none>
 * Callees:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_4e554bfb411516b547877ccf265edf31___ @ 0x1C000D830 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_4e554bfb411516b547877ccf265edf3.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_054e70c99cab962465e6c496a7261907___ @ 0x1C000D89C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_054e70c99cab962465e6c496a726190.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_a0756742220fcc5f18204748a3037f7b___ @ 0x1C000D908 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_a0756742220fcc5f18204748a3037f7.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_9589011f9a7226afc02732a0a89a6d8d___ @ 0x1C000D974 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_9589011f9a7226afc02732a0a89a6d8.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_85eb2fb27aae860c43849b4df2db6d53___ @ 0x1C000D9E0 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_85eb2fb27aae860c43849b4df2db6d5.c)
 *     ?EmitUpdateCommands@CBaseClipMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000FB10 (-EmitUpdateCommands@CBaseClipMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_4b39fb18865f74eaf6f36247b163e289___ @ 0x1C0158D3C (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_4b39fb18865f74eaf6f36247b163e28.c)
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_f2b56b2063698ea59051da09077ff585___ @ 0x1C0158DAC (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_f2b56b2063698ea59051da09077ff58.c)
 */

char __fastcall DirectComposition::CRectangleClipMarshaler::EmitUpdateCommands(
        DirectComposition::CRectangleClipMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v2; // bl
  bool updated; // al
  char v6; // si
  int v7; // eax
  int v8; // ebx
  char v9; // al
  int v11; // eax
  DirectComposition::CRectangleClipMarshaler *v12; // [rsp+40h] [rbp+20h] BYREF

  v2 = *((_BYTE *)this + 129);
  updated = DirectComposition::CBaseClipMarshaler::EmitUpdateCommands(this, a2);
  v6 = 0;
  if ( v2 )
  {
    if ( !updated )
      return v6;
    v11 = *((_DWORD *)this + 4);
    v12 = this;
    if ( (v11 & 0x800) == 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_85eb2fb27aae860c43849b4df2db6d53___(
              (__int64)this,
              a2,
              (__int64)&v12) )
        return v6;
      *((_DWORD *)this + 4) |= 0x800u;
      v11 = *((_DWORD *)this + 4);
    }
    v12 = this;
    if ( (v11 & 0x1000) == 0 )
    {
      if ( !(unsigned __int8)DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_4b39fb18865f74eaf6f36247b163e289___(
                               this,
                               a2,
                               &v12) )
        return v6;
      *((_DWORD *)this + 4) |= 0x1000u;
      v11 = *((_DWORD *)this + 4);
    }
    v8 = 0x4000;
    v12 = this;
    if ( (v11 & 0x4000) != 0 )
      return 1;
    v9 = DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_f2b56b2063698ea59051da09077ff585___(
           this,
           a2,
           &v12);
  }
  else
  {
    if ( !updated )
      return v6;
    v7 = *((_DWORD *)this + 4);
    v12 = this;
    if ( (v7 & 0x800) == 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_85eb2fb27aae860c43849b4df2db6d53___(
              (__int64)this,
              a2,
              (__int64)&v12) )
        return v6;
      *((_DWORD *)this + 4) |= 0x800u;
      v7 = *((_DWORD *)this + 4);
    }
    v12 = this;
    if ( (v7 & 0x1000) == 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_9589011f9a7226afc02732a0a89a6d8d___(
              (__int64)this,
              a2,
              (__int64)&v12) )
        return v6;
      *((_DWORD *)this + 4) |= 0x1000u;
      v7 = *((_DWORD *)this + 4);
    }
    v12 = this;
    if ( (v7 & 0x2000) == 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_a0756742220fcc5f18204748a3037f7b___(
              (__int64)this,
              a2,
              (__int64)&v12) )
        return v6;
      *((_DWORD *)this + 4) |= 0x2000u;
      v7 = *((_DWORD *)this + 4);
    }
    v12 = this;
    if ( (v7 & 0x4000) == 0 )
    {
      if ( !DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_054e70c99cab962465e6c496a7261907___(
              (__int64)this,
              a2,
              (__int64)&v12) )
        return v6;
      *((_DWORD *)this + 4) |= 0x4000u;
      v7 = *((_DWORD *)this + 4);
    }
    v8 = 0x8000;
    v12 = this;
    if ( (v7 & 0x8000) != 0 )
      return 1;
    v9 = DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_4e554bfb411516b547877ccf265edf31___(
           (__int64)this,
           a2,
           (__int64)&v12);
  }
  if ( v9 )
  {
    *((_DWORD *)this + 4) |= v8;
    return 1;
  }
  return v6;
}
