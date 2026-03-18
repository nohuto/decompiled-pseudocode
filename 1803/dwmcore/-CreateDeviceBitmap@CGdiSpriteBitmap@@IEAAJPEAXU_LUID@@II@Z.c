/*
 * XREFs of ?CreateDeviceBitmap@CGdiSpriteBitmap@@IEAAJPEAXU_LUID@@II@Z @ 0x1800944D4
 * Callers:
 *     ?CreateBitmap@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z @ 0x180094860 (-CreateBitmap@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180059E10 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseBitmapResources@CGdiSpriteBitmap@@IEAAXXZ @ 0x180094A30 (-ReleaseBitmapResources@CGdiSpriteBitmap@@IEAAXXZ.c)
 *     ?CreateFromGDISharedSurfaceHandle@CDxHandleBitmapRealization@@SAJPEAXU_LUID@@PEAPEAVCBitmapRealization@@@Z @ 0x1800C5E5C (-CreateFromGDISharedSurfaceHandle@CDxHandleBitmapRealization@@SAJPEAXU_LUID@@PEAPEAVCBitmapReali.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGdiSpriteBitmap::CreateDeviceBitmap(
        CGdiSpriteBitmap *this,
        void *a2,
        struct _LUID a3,
        int a4,
        unsigned int a5)
{
  int v5; // edi
  struct CBitmapRealization *v6; // rsi
  unsigned int v11; // r15d
  int v12; // eax
  int v13; // eax
  int v14; // eax
  char *v15; // rax
  __int64 v17; // [rsp+30h] [rbp-10h] BYREF
  struct CBitmapRealization *v18; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v19; // [rsp+88h] [rbp+48h] BYREF

  v5 = 0;
  v6 = 0LL;
  v19 = 0;
  v18 = 0LL;
  CGdiSpriteBitmap::ReleaseBitmapResources(this);
  v11 = a5;
  if ( !a4 || !a5 )
    goto LABEL_7;
  v12 = CDxHandleBitmapRealization::CreateFromGDISharedSurfaceHandle(a2, a3, &v18);
  v19 = v12;
  v5 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x1F1u);
    v6 = v18;
  }
  else
  {
    v17 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
    v6 = v18;
    v13 = (**(__int64 (__fastcall ***)(struct CBitmapRealization *, GUID *, __int64 *))v18)(
            v18,
            &GUID_475af409_d8b1_4ca5_8177_4562f6260b68,
            &v17);
    v19 = v13;
    v5 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x1FDu);
    }
    else
    {
      v14 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v17 + 24LL))(
              v17,
              ((unsigned __int64)this + 64) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
      v19 = v14;
      v5 = v14;
      if ( v14 >= 0 )
      {
        v15 = (char *)v6 + 144;
        v6 = 0LL;
        *((_QWORD *)this + 48) = v15;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
LABEL_7:
        *((_QWORD *)this + 44) = a2;
        *((struct _LUID *)this + 45) = a3;
        *((_DWORD *)this + 92) = a4;
        *((_DWORD *)this + 93) = v11;
        goto LABEL_8;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x1FEu);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
  }
LABEL_8:
  if ( v6 )
    (*(void (__fastcall **)(struct CBitmapRealization *))(*(_QWORD *)v6 + 16LL))(v6);
  TranslateDXGIorD3DErrorInContext(v5, 9, &v19);
  return v19;
}
