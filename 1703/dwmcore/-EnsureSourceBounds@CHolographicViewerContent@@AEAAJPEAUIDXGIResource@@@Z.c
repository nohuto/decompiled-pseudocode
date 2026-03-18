/*
 * XREFs of ?EnsureSourceBounds@CHolographicViewerContent@@AEAAJPEAUIDXGIResource@@@Z @ 0x1801A5490
 * Callers:
 *     ?Draw@CHolographicViewerContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801A5190 (-Draw@CHolographicViewerContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B3698 (-InternalRelease@-$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHolographicViewerContent::EnsureSourceBounds(
        CHolographicViewerContent *this,
        struct IDXGIResource *a2)
{
  float v2; // xmm0_4
  unsigned int v3; // ebx
  int v6; // eax
  float v7; // xmm1_4
  __int64 v9; // [rsp+30h] [rbp-48h] BYREF
  _DWORD v10[12]; // [rsp+38h] [rbp-40h] BYREF

  v2 = *((float *)this + 32);
  v3 = 0;
  *((_DWORD *)this + 31) = 0;
  *((_DWORD *)this + 30) = 0;
  if ( v2 == 0.0 )
  {
    v9 = 0LL;
    Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease(&v9);
    v6 = ((__int64 (__fastcall *)(struct IDXGIResource *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
           a2,
           &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
           &v9);
    v3 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x88u);
    }
    else
    {
      (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v9 + 80LL))(v9, v10);
      v7 = (float)v10[0];
      *((float *)this + 33) = (float)v10[1];
      *((float *)this + 32) = v7;
    }
    Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease(&v9);
  }
  return v3;
}
