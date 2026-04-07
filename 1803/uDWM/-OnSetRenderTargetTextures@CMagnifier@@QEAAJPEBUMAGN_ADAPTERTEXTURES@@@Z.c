/*
 * XREFs of ?OnSetRenderTargetTextures@CMagnifier@@QEAAJPEBUMAGN_ADAPTERTEXTURES@@@Z @ 0x1800796C4
 * Callers:
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x180079C18 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ?Initialize@CMagnifier@@AEAAJXZ @ 0x180078F14 (-Initialize@CMagnifier@@AEAAJXZ.c)
 *     ?OnSetColorEffect@CMagnifier@@QEAAJAEBUMilColorTransform@@@Z @ 0x180079488 (-OnSetColorEffect@CMagnifier@@QEAAJAEBUMilColorTransform@@@Z.c)
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
  unsigned int v19; // edx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // eax
  int v24; // eax
  unsigned int v25; // edx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  int v29; // eax
  _OWORD v31[6]; // [rsp+30h] [rbp-88h] BYREF
  int v32; // [rsp+90h] [rbp-28h]

  v4 = *(_DWORD *)a2;
  v5 = *((_DWORD *)this + 44);
  if ( *(_DWORD *)a2 <= v5 )
  {
    if ( v4 > 6 )
      v4 = 6;
    *((_DWORD *)this + 44) = v4;
    *((_DWORD *)this + 47) = *((_DWORD *)a2 + 1);
    *((_DWORD *)this + 45) = *((_DWORD *)a2 + 2);
    v24 = *((_DWORD *)a2 + 3);
    v25 = 0;
    for ( *((_DWORD *)this + 46) = v24;
          v25 < *((_DWORD *)this + 44);
          *(_OWORD *)((char *)this + v28 + 16) = *(_OWORD *)((char *)a2 + v26 + 32) )
    {
      v26 = 32LL * v25;
      v27 = v25++;
      v28 = 32 * (v27 + 6);
      *(_OWORD *)((char *)this + v28) = *(_OWORD *)((char *)a2 + v26 + 16);
    }
    v29 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, const struct MAGN_ADAPTERTEXTURES *))(**(_QWORD **)(*((_QWORD *)this + 4) + 16LL)
                                                                                         + 800LL))(
            *(_QWORD *)(*((_QWORD *)this + 4) + 16LL),
            *(unsigned int *)(*((_QWORD *)this + 4) + 24LL),
            a2);
    v13 = v29;
    if ( v29 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v29, 0x1BFu);
  }
  else
  {
    if ( v5 )
    {
      v6 = *((_DWORD *)this + 43);
      v7 = *(_OWORD *)((char *)this + 92);
      v31[0] = *(_OWORD *)((char *)this + 76);
      v8 = *(_OWORD *)((char *)this + 108);
      v31[1] = v7;
      v9 = *(_OWORD *)((char *)this + 124);
      v31[2] = v8;
      v10 = *(_OWORD *)((char *)this + 140);
      v31[3] = v9;
      v11 = *(_OWORD *)((char *)this + 156);
      v31[4] = v10;
      v31[5] = v11;
      v32 = v6;
      v12 = CMagnifier::OnSetColorEffect(this, (const struct MilColorTransform *)&g_MilColorTransfIdentity);
      v13 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x184u);
        return v13;
      }
      v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 4) + 16LL) + 784LL))(
              *(_QWORD *)(*((_QWORD *)this + 4) + 16LL),
              *(unsigned int *)(*((_QWORD *)this + 4) + 24LL),
              0LL);
      v13 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x188u);
        return v13;
      }
      v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 4) + 16LL) + 792LL))(
              *(_QWORD *)(*((_QWORD *)this + 4) + 16LL),
              *(unsigned int *)(*((_QWORD *)this + 4) + 24LL),
              0LL);
      v13 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x18Cu);
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
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0x191u);
        return v13;
      }
      v18 = CMagnifier::OnSetColorEffect(this, (const struct MilColorTransform *)v31);
      v13 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v18, 0x192u);
        return v13;
      }
      v4 = *(_DWORD *)a2;
    }
    if ( v4 > 6 )
      v4 = 6;
    v19 = 0;
    *((_DWORD *)this + 44) = v4;
    *((_DWORD *)this + 47) = *((_DWORD *)a2 + 1);
    *((_DWORD *)this + 45) = *((_DWORD *)a2 + 2);
    for ( *((_DWORD *)this + 46) = *((_DWORD *)a2 + 3);
          v19 < *((_DWORD *)this + 44);
          *(_OWORD *)((char *)this + v22 + 16) = *(_OWORD *)((char *)a2 + v20 + 32) )
    {
      v20 = 32LL * v19;
      v21 = v19++;
      v22 = 32 * (v21 + 6);
      *(_OWORD *)((char *)this + v22) = *(_OWORD *)((char *)a2 + v20 + 16);
    }
    v23 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, const struct MAGN_ADAPTERTEXTURES *))(**(_QWORD **)(*((_QWORD *)this + 4) + 16LL)
                                                                                                 + 776LL))(
            *(_QWORD *)(*((_QWORD *)this + 4) + 16LL),
            *(unsigned int *)(*((_QWORD *)this + 4) + 24LL),
            *((_QWORD *)this + 8),
            a2);
    v13 = v23;
    if ( v23 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v23, 0x1A7u);
  }
  return v13;
}
