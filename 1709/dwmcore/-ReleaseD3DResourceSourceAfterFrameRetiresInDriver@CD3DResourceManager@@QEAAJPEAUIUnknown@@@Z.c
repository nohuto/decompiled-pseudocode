/*
 * XREFs of ?ReleaseD3DResourceSourceAfterFrameRetiresInDriver@CD3DResourceManager@@QEAAJPEAUIUnknown@@@Z @ 0x1801ABD44
 * Callers:
 *     ?Update@CSecondaryD2DBitmap@@UEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x180092360 (-Update@CSecondaryD2DBitmap@@UEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID.c)
 *     ?FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z @ 0x1801B56F8 (-FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DResourceManager::ReleaseD3DResourceSourceAfterFrameRetiresInDriver(
        CD3DResourceManager *this,
        struct IUnknown *a2)
{
  unsigned int v3; // ebx
  _DWORD *v5; // rax
  _DWORD *v6; // rdi
  CD3DResourceManager *v7; // rdi
  CD3DResourceManager **v8; // rdx

  v3 = 0;
  v5 = operator new(0x20uLL);
  v6 = v5;
  if ( v5 )
  {
    *(_QWORD *)v5 = a2;
    v5[2] = 3;
    ((void (__fastcall *)(struct IUnknown *))a2->lpVtbl->AddRef)(a2);
    *((_QWORD *)v6 + 2) = 0LL;
    *((_QWORD *)v6 + 3) = 0LL;
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 )
  {
    v7 = (CD3DResourceManager *)(v6 + 4);
    v8 = (CD3DResourceManager **)*((_QWORD *)this + 8);
    if ( *v8 != (CD3DResourceManager *)((char *)this + 56) )
      __fastfail(3u);
    *(_QWORD *)v7 = (char *)this + 56;
    *((_QWORD *)v7 + 1) = v8;
    *v8 = v7;
    *((_QWORD *)this + 8) = v7;
  }
  else
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x2C8u);
  }
  return v3;
}
