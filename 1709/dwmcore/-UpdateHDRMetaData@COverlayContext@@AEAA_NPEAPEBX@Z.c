/*
 * XREFs of ?UpdateHDRMetaData@COverlayContext@@AEAA_NPEAPEBX@Z @ 0x180144B28
 * Callers:
 *     ?SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ @ 0x180066FC4 (-SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800C5D80 (memcmp_0.c)
 *     ?GetHDR10MetaData@CCompositionSurfaceInfo@@QEBA_NPEAUDXGI_HDR_METADATA_HDR10@@@Z @ 0x18017C1E4 (-GetHDR10MetaData@CCompositionSurfaceInfo@@QEBA_NPEAUDXGI_HDR_METADATA_HDR10@@@Z.c)
 */

char __fastcall COverlayContext::UpdateHDRMetaData(COverlayContext *this, const void **a2)
{
  unsigned int v2; // r15d
  char v3; // bl
  int v4; // edi
  int v7; // esi
  unsigned int v8; // r9d
  __int64 v9; // rdi
  int v10; // r9d
  __int64 v11; // r10
  __int64 v12; // r11
  __int64 v13; // xmm1_8
  struct DXGI_HDR_METADATA_HDR10 Buf1; // [rsp+20h] [rbp-30h] BYREF

  v2 = *((_DWORD *)this + 68);
  v3 = 0;
  v4 = 0;
  *a2 = 0LL;
  memset(&Buf1, 0, sizeof(Buf1));
  v7 = 0;
  v8 = 0;
  if ( v2 )
  {
    v9 = *((_QWORD *)this + 31);
    while ( 1 )
    {
      if ( CCompositionSurfaceInfo::GetHDR10MetaData(*(CCompositionSurfaceInfo **)(248LL * v8 + v9 + 24), &Buf1) )
      {
        if ( v11 && v11 != v12 )
        {
          v4 = 0;
          v7 = 0;
          memset(&Buf1, 0, sizeof(Buf1));
          break;
        }
        v7 = 1;
      }
      v8 = v10 + 1;
      if ( v8 >= v2 )
      {
        v4 = *(_DWORD *)&Buf1.MaxContentLightLevel;
        break;
      }
    }
  }
  if ( v7 != *((_DWORD *)this + 27) || v7 == 1 && memcmp_0(&Buf1, (char *)this + 112, 0x1CuLL) )
  {
    v13 = *(_QWORD *)&Buf1.MaxMasteringLuminance;
    *((_DWORD *)this + 27) = v7;
    *((_OWORD *)this + 7) = *(_OWORD *)Buf1.RedPrimary;
    *((_QWORD *)this + 16) = v13;
    *((_DWORD *)this + 34) = v4;
    if ( v7 == 1 )
      *a2 = (char *)this + 112;
    return 1;
  }
  return v3;
}
