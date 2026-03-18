/*
 * XREFs of ?GetMultiplaneOverlayCaps@COverlayContext@@AEAAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z @ 0x180071998
 * Callers:
 *     ?Initialize@COverlayContext@@IEAAJXZ @ 0x180071D28 (-Initialize@COverlayContext@@IEAAJXZ.c)
 *     ?UpdateMPOCaps@COverlayContext@@QEAAJPEA_N@Z @ 0x180072344 (-UpdateMPOCaps@COverlayContext@@QEAAJPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18008F260 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     Template_qq @ 0x18013BC88 (Template_qq.c)
 */

__int64 __fastcall COverlayContext::GetMultiplaneOverlayCaps(
        COverlayContext *this,
        struct DXGI_MULTIPLANE_OVERLAY_CAPS *a2)
{
  unsigned int v2; // edi
  int v4; // eax
  unsigned int v5; // edi
  __int64 v6; // rcx
  int v8; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  if ( CCommonRegistryData::m_fOverlayTestMode && CCommonRegistryData::m_dwOverlayTestMode >= 4 )
  {
    if ( CCommonRegistryData::m_dwOverlayTestMode == 4 )
    {
      *((_DWORD *)a2 + 6) = 0;
      *((_DWORD *)a2 + 7) = 0;
      *((_DWORD *)a2 + 8) = 0;
      *(_DWORD *)a2 = 3;
      *((_DWORD *)a2 + 1) = 3;
      *((_DWORD *)a2 + 9) = 1065353216;
      *((_DWORD *)a2 + 10) = 1065353216;
      *((_DWORD *)a2 + 2) = 2;
      *((_DWORD *)a2 + 3) = 6;
      *((_DWORD *)a2 + 4) = 1090519040;
      *((_DWORD *)a2 + 5) = 1048576000;
    }
    else
    {
      memset_0(a2, 0, 0x2CuLL);
    }
  }
  else
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 384LL))(*((_QWORD *)this + 2));
    v8 = v4;
    v5 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x60Fu);
    TranslateDXGIorD3DErrorInContext(v5, 0LL, &v8);
    v2 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x614u);
    }
    else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      Template_qq(v6, &EVTDESC_OVERLAY_GETCAPS, *(unsigned int *)a2, *((unsigned int *)a2 + 3));
    }
  }
  return v2;
}
