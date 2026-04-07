/*
 * XREFs of ?OnSetRenderTargetTextures@CMagnifier@@QEAAJPEBUMAGN_ADAPTERTEXTURES@@@Z @ 0x18007D700
 * Callers:
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x18007DBEC (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ?Initialize@CMagnifier@@AEAAJXZ @ 0x18007D014 (-Initialize@CMagnifier@@AEAAJXZ.c)
 *     ?OnSetColorEffect@CMagnifier@@QEAAJAEBUMilColorTransform@@@Z @ 0x18007D52C (-OnSetColorEffect@CMagnifier@@QEAAJAEBUMilColorTransform@@@Z.c)
 */

__int64 __fastcall CMagnifier::OnSetRenderTargetTextures(CMagnifier *this, const struct MAGN_ADAPTERTEXTURES *a2)
{
  unsigned int v4; // ecx
  unsigned int v5; // eax
  int v6; // eax
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  int v12; // eax
  unsigned int v13; // edi
  int v14; // eax
  int v15; // eax
  CBaseObject *v16; // rcx
  int v17; // eax
  int v18; // eax
  unsigned int v19; // ecx
  unsigned int v20; // edx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  int v24; // eax
  int v25; // eax
  unsigned int v26; // edx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  int v30; // eax
  _OWORD v32[6]; // [rsp+30h] [rbp-88h] BYREF
  int v33; // [rsp+90h] [rbp-28h]

  v4 = *(_DWORD *)a2;
  v5 = *((_DWORD *)this + 44);
  if ( *(_DWORD *)a2 <= v5 )
  {
    if ( v4 > 6 )
      v4 = 6;
    *((_DWORD *)this + 44) = v4;
    *((_DWORD *)this + 47) = *((_DWORD *)a2 + 1);
    *((_DWORD *)this + 45) = *((_DWORD *)a2 + 2);
    v25 = *((_DWORD *)a2 + 3);
    v26 = 0;
    for ( *((_DWORD *)this + 46) = v25;
          v26 < *((_DWORD *)this + 44);
          *(_OWORD *)((char *)this + v29 + 16) = *(_OWORD *)((char *)a2 + v27 + 32) )
    {
      v27 = 32LL * v26;
      v28 = v26++;
      v29 = 32 * (v28 + 6);
      *(_OWORD *)((char *)this + v29) = *(_OWORD *)((char *)a2 + v27 + 16);
    }
    v30 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, const struct MAGN_ADAPTERTEXTURES *))(**(_QWORD **)(*((_QWORD *)this + 4) + 16LL)
                                                                                         + 784LL))(
            *(_QWORD *)(*((_QWORD *)this + 4) + 16LL),
            *(unsigned int *)(*((_QWORD *)this + 4) + 24LL),
            a2);
    v13 = v30;
    if ( v30 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v30, 0x1C1u);
  }
  else
  {
    if ( v5 )
    {
      v6 = *((_DWORD *)this + 43);
      v7 = *(_OWORD *)((char *)this + 92);
      v32[0] = *(_OWORD *)((char *)this + 76);
      v8 = *(_OWORD *)((char *)this + 108);
      v32[1] = v7;
      v9 = *(_OWORD *)((char *)this + 124);
      v32[2] = v8;
      v10 = *(_OWORD *)((char *)this + 140);
      v32[3] = v9;
      v11 = *(_OWORD *)((char *)this + 156);
      v32[4] = v10;
      v32[5] = v11;
      v33 = v6;
      v12 = CMagnifier::OnSetColorEffect(this, (const struct MilColorTransform *)&gMilColorTransfIdentity);
      v13 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, 0x186u);
        return v13;
      }
      v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 4) + 16LL) + 768LL))(
              *(_QWORD *)(*((_QWORD *)this + 4) + 16LL),
              *(unsigned int *)(*((_QWORD *)this + 4) + 24LL),
              0LL);
      v13 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v14, 0x18Au);
        return v13;
      }
      v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 4) + 16LL) + 776LL))(
              *(_QWORD *)(*((_QWORD *)this + 4) + 16LL),
              *(unsigned int *)(*((_QWORD *)this + 4) + 24LL),
              0LL);
      v13 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v15, 0x18Eu);
        return v13;
      }
      v16 = (CBaseObject *)*((_QWORD *)this + 4);
      if ( v16 )
      {
        CBaseObject::Release(v16);
        *((_QWORD *)this + 4) = 0LL;
      }
      *((_DWORD *)this + 44) = 0;
      v17 = CMagnifier::Initialize(this);
      v13 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v17, 0x193u);
        return v13;
      }
      v18 = CMagnifier::OnSetColorEffect(this, (const struct MilColorTransform *)v32);
      v13 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v18, 0x194u);
        return v13;
      }
    }
    v19 = *(_DWORD *)a2;
    if ( *(_DWORD *)a2 > 6u )
      v19 = 6;
    if ( v19 > 6 )
      v19 = 6;
    v20 = 0;
    *((_DWORD *)this + 44) = v19;
    *((_DWORD *)this + 47) = *((_DWORD *)a2 + 1);
    *((_DWORD *)this + 45) = *((_DWORD *)a2 + 2);
    for ( *((_DWORD *)this + 46) = *((_DWORD *)a2 + 3);
          v20 < *((_DWORD *)this + 44);
          *(_OWORD *)((char *)this + v23 + 16) = *(_OWORD *)((char *)a2 + v21 + 32) )
    {
      v21 = 32LL * v20;
      v22 = v20++;
      v23 = 32 * (v22 + 6);
      *(_OWORD *)((char *)this + v23) = *(_OWORD *)((char *)a2 + v21 + 16);
    }
    v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, const struct MAGN_ADAPTERTEXTURES *))(**(_QWORD **)(*((_QWORD *)this + 4) + 16LL)
                                                                                                 + 760LL))(
            *(_QWORD *)(*((_QWORD *)this + 4) + 16LL),
            *(unsigned int *)(*((_QWORD *)this + 4) + 24LL),
            *((_QWORD *)this + 8),
            a2);
    v13 = v24;
    if ( v24 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v24, 0x1A9u);
  }
  return v13;
}
