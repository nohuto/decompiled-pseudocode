/*
 * XREFs of ?UpdateMPOCaps@COverlayContext@@QEAAJ_NPEA_N@Z @ 0x180067510
 * Callers:
 *     ?UpdateMPOCaps@CHwndRenderTarget@@QEAAJ_N@Z @ 0x180017388 (-UpdateMPOCaps@CHwndRenderTarget@@QEAAJ_N@Z.c)
 *     ?EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ @ 0x180017A00 (-EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ.c)
 *     ?UpdateRenderTarget@COverlayContext@@QEAAJPEAVIRenderTargetDisplay@@@Z @ 0x180067888 (-UpdateRenderTarget@COverlayContext@@QEAAJPEAVIRenderTargetDisplay@@@Z.c)
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18001D1C0 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qq @ 0x180125258 (McTemplateU0qq.c)
 */

__int64 __fastcall COverlayContext::UpdateMPOCaps(COverlayContext *this, char a2, bool *a3)
{
  bool v6; // r15
  __int64 v7; // rcx
  int v8; // ebx
  int v9; // eax
  int v10; // ebx
  int v11; // eax
  __int128 v12; // xmm1
  __int64 v13; // xmm0_8
  int v14; // eax
  unsigned int v15; // edx
  __int64 v16; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  int v20; // [rsp+30h] [rbp-40h] BYREF
  __int128 v21; // [rsp+38h] [rbp-38h] BYREF
  __int128 v22; // [rsp+48h] [rbp-28h]
  __int64 v23; // [rsp+58h] [rbp-18h]
  int v24; // [rsp+60h] [rbp-10h]

  memset_0(&v21, 0, 0x2CuLL);
  v6 = 0;
  if ( a2 )
    *((_BYTE *)this + 1181) = 1;
  v7 = *((_QWORD *)this + 2);
  v8 = 0;
  if ( !v7 )
  {
    v8 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292412, 0x677u);
    goto LABEL_21;
  }
  if ( !CCommonRegistryData::m_fOverlayTestMode || CCommonRegistryData::m_dwOverlayTestMode < 4 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v7 + 400LL))(v7, &v21);
    v20 = v9;
    v10 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x680u);
    TranslateDXGIorD3DErrorInContext(v10, 0, &v20);
    v8 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x685u);
    }
    else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      McTemplateU0qq(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_OVERLAY_GETCAPS,
        (unsigned int)v21,
        HIDWORD(v21));
    }
    if ( v8 >= 0 )
      goto LABEL_11;
LABEL_21:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x641u);
    goto LABEL_16;
  }
  if ( CCommonRegistryData::m_dwOverlayTestMode == 4 )
  {
    HIDWORD(v22) = 0;
    v23 = 0x3F80000000000000LL;
    *(float *)&v22 = FLOAT_8_0;
    *(_QWORD *)((char *)&v22 + 4) = LODWORD(FLOAT_0_25);
    *(_QWORD *)&v21 = 0x300000003LL;
    *((_QWORD *)&v21 + 1) = 0x600000002LL;
    v24 = 1065353216;
  }
  else
  {
    memset_0(&v21, 0, 0x2CuLL);
  }
LABEL_11:
  v11 = v24;
  v12 = v22;
  *(_OWORD *)((char *)this + 140) = v21;
  v13 = v23;
  *(_OWORD *)((char *)this + 156) = v12;
  *(_QWORD *)((char *)this + 172) = v13;
  *((_DWORD *)this + 45) = v11;
  v14 = *((_DWORD *)this + 68);
  if ( v14 || *((_BYTE *)this + 1183) )
  {
    *((_BYTE *)this + 1188) = 1;
    v6 = 1;
  }
  v15 = 0;
  if ( v14 )
  {
    do
    {
      v18 = v15++;
      v19 = 248 * v18;
      *(_DWORD *)(*((_QWORD *)this + 31) + v19 + 208) = 0;
      *(_DWORD *)(*((_QWORD *)this + 31) + v19 + 212) = 0;
    }
    while ( v15 < *((_DWORD *)this + 68) );
  }
  v16 = *((_QWORD *)this + 131);
  if ( v16 )
  {
    *(_DWORD *)(v16 + 84) = 0;
    *(_DWORD *)(v16 + 88) = 0;
  }
LABEL_16:
  if ( a3 )
    *a3 = v6;
  return (unsigned int)v8;
}
