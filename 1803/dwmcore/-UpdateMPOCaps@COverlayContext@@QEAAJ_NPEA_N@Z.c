/*
 * XREFs of ?UpdateMPOCaps@COverlayContext@@QEAAJ_NPEA_N@Z @ 0x180079B3C
 * Callers:
 *     ?EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ @ 0x18005FFB0 (-EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ.c)
 *     ?UpdateMPOCaps@CHwndRenderTarget@@QEAAJ_N@Z @ 0x180062F50 (-UpdateMPOCaps@CHwndRenderTarget@@QEAAJ_N@Z.c)
 *     ?UpdateRenderTarget@COverlayContext@@QEAAJPEAVIRenderTargetDisplay@@@Z @ 0x18007A14C (-UpdateRenderTarget@COverlayContext@@QEAAJPEAVIRenderTargetDisplay@@@Z.c)
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180059E10 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     memcmp_0 @ 0x1800DD3F5 (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qq @ 0x180147E0C (McTemplateU0qq.c)
 */

__int64 __fastcall COverlayContext::UpdateMPOCaps(COverlayContext *this, char a2, bool *a3)
{
  bool v6; // r15
  __int64 v7; // rcx
  int v8; // ebx
  int v9; // eax
  int v10; // ebx
  __int128 v12; // xmm0
  int v13; // eax
  __int128 v14; // xmm1
  int v15; // eax
  unsigned int v16; // edx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  int v20; // [rsp+30h] [rbp-40h] BYREF
  __int128 Buf2; // [rsp+38h] [rbp-38h] BYREF
  __int128 v22; // [rsp+48h] [rbp-28h]
  __int64 v23; // [rsp+58h] [rbp-18h]
  int v24; // [rsp+60h] [rbp-10h]

  memset_0(&Buf2, 0, 0x2CuLL);
  v6 = 0;
  if ( a2 )
    *((_BYTE *)this + 1193) = 1;
  v7 = *((_QWORD *)this + 2);
  v8 = 0;
  if ( !v7 )
  {
    v8 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292412, 0x696u);
    goto LABEL_22;
  }
  if ( !CCommonRegistryData::m_fOverlayTestMode || CCommonRegistryData::m_dwOverlayTestMode < 4 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v7 + 448LL))(v7, &Buf2);
    v20 = v9;
    v10 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x69Fu);
    TranslateDXGIorD3DErrorInContext(v10, 0, &v20);
    v8 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x6A4u);
    }
    else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      McTemplateU0qq(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_OVERLAY_GETCAPS,
        (unsigned int)Buf2,
        HIDWORD(Buf2));
    }
    if ( v8 >= 0 )
      goto LABEL_11;
LABEL_22:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x65Eu);
    goto LABEL_12;
  }
  if ( CCommonRegistryData::m_dwOverlayTestMode == 4 )
  {
    HIDWORD(v22) = 0;
    v23 = 0x3F80000000000000LL;
    *(float *)&v22 = FLOAT_8_0;
    *(_QWORD *)((char *)&v22 + 4) = LODWORD(FLOAT_0_25);
    *(_QWORD *)&Buf2 = 0x300000003LL;
    *((_QWORD *)&Buf2 + 1) = 0x600000002LL;
    v24 = 1065353216;
  }
  else
  {
    memset_0(&Buf2, 0, 0x2CuLL);
  }
LABEL_11:
  if ( memcmp_0((char *)this + 144, &Buf2, 0x2CuLL) )
  {
    v12 = Buf2;
    v13 = v24;
    v14 = v22;
    *((_BYTE *)this + 1200) = 1;
    *((_OWORD *)this + 9) = v12;
    *(_QWORD *)&v12 = v23;
    *((_OWORD *)this + 10) = v14;
    *((_QWORD *)this + 22) = v12;
    *((_DWORD *)this + 46) = v13;
    v15 = *((_DWORD *)this + 70);
    if ( v15 || *((_BYTE *)this + 1195) )
      v6 = 1;
    v16 = 0;
    if ( v15 )
    {
      do
      {
        v18 = v16++;
        v19 = 248 * v18;
        *(_DWORD *)(v19 + *((_QWORD *)this + 32) + 208) = 0;
        *(_DWORD *)(v19 + *((_QWORD *)this + 32) + 212) = 0;
      }
      while ( v16 < *((_DWORD *)this + 70) );
    }
    v17 = *((_QWORD *)this + 132);
    if ( v17 )
    {
      *(_DWORD *)(v17 + 84) = 0;
      *(_DWORD *)(v17 + 88) = 0;
    }
  }
LABEL_12:
  if ( a3 )
    *a3 = v6;
  return (unsigned int)v8;
}
