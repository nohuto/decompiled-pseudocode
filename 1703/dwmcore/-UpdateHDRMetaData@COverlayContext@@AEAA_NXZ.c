/*
 * XREFs of ?UpdateHDRMetaData@COverlayContext@@AEAA_NXZ @ 0x18015214C
 * Callers:
 *     ?SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ @ 0x1800716A8 (-SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800D5390 (memcmp_0.c)
 *     ?GetHDR10MetaData@CCompositionSurfaceInfo@@QEBA_NPEAUDXGI_HDR_METADATA_HDR10@@@Z @ 0x1801751E0 (-GetHDR10MetaData@CCompositionSurfaceInfo@@QEBA_NPEAUDXGI_HDR_METADATA_HDR10@@@Z.c)
 */

char __fastcall COverlayContext::UpdateHDRMetaData(COverlayContext *this)
{
  int v1; // edi
  char v2; // bl
  int v4; // r14d
  unsigned int v5; // r9d
  __int64 v6; // rdi
  int v7; // r9d
  __int64 v8; // r10
  __int64 v9; // r11
  __int128 v10; // xmm0
  __int64 v11; // xmm1_8
  struct DXGI_HDR_METADATA_HDR10 Buf1; // [rsp+20h] [rbp-30h] BYREF

  v1 = 0;
  v2 = 0;
  v4 = 0;
  memset(&Buf1, 0, sizeof(Buf1));
  v5 = 0;
  if ( *((_DWORD *)this + 66) )
  {
    v6 = *((_QWORD *)this + 30);
    while ( 1 )
    {
      if ( CCompositionSurfaceInfo::GetHDR10MetaData(*(CCompositionSurfaceInfo **)(240LL * v5 + v6 + 24), &Buf1) )
      {
        if ( v8 && v8 != v9 )
        {
          v1 = 0;
          v4 = 0;
          memset(&Buf1, 0, sizeof(Buf1));
          break;
        }
        v4 = 1;
      }
      v5 = v7 + 1;
      if ( v5 >= *((_DWORD *)this + 66) )
      {
        v1 = *(_DWORD *)&Buf1.MaxContentLightLevel;
        break;
      }
    }
  }
  if ( v4 != *((_DWORD *)this + 24) || v4 == 1 && memcmp_0(&Buf1, (char *)this + 100, 0x1CuLL) )
  {
    v10 = *(_OWORD *)Buf1.RedPrimary;
    v2 = 1;
    *((_DWORD *)this + 24) = v4;
    v11 = *(_QWORD *)&Buf1.MaxMasteringLuminance;
    *(_OWORD *)((char *)this + 100) = v10;
    *(_QWORD *)((char *)this + 116) = v11;
    *((_DWORD *)this + 31) = v1;
  }
  return v2;
}
