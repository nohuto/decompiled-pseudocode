/*
 * XREFs of ?SetupBackBuffers@CSwapChainBase@@IEAAJPEAVCD3DResourceManager@@@Z @ 0x1800C01D4
 * Callers:
 *     ?Init@CSwapChainBase@@MEAAJPEAVCD3DResourceManager@@@Z @ 0x1800C0340 (-Init@CSwapChainBase@@MEAAJPEAVCD3DResourceManager@@@Z.c)
 *     ?RefreshBackBufferViews@CSwapChainBase@@IEAAJXZ @ 0x1801EBCD0 (-RefreshBackBufferViews@CSwapChainBase@@IEAAJXZ.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180021410 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1@@Z @ 0x180021DA4 (-CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1.c)
 *     ??$ReleaseInterfaceNoNULL@VCD3DSurface@@@@YAXPEAVCD3DSurface@@@Z @ 0x180021E58 (--$ReleaseInterfaceNoNULL@VCD3DSurface@@@@YAXPEAVCD3DSurface@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSwapChainBase::SetupBackBuffers(CSwapChainBase *this, struct CD3DResourceManager *a2)
{
  int v2; // ebx
  unsigned int v3; // esi
  unsigned int v6; // r14d
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // eax
  int v11; // eax
  unsigned int v12; // [rsp+20h] [rbp-10h]
  unsigned int v13; // [rsp+70h] [rbp+40h] BYREF
  struct CD3DSurface *v14; // [rsp+80h] [rbp+50h] BYREF
  struct ID3D11Texture2D *v15; // [rsp+88h] [rbp+58h] BYREF

  v2 = 0;
  v3 = 0;
  v15 = 0LL;
  v14 = 0LL;
  if ( *((_DWORD *)this + 40) )
  {
    v6 = v13;
    while ( 1 )
    {
      v7 = (*(__int64 (__fastcall **)(CSwapChainBase *, _QWORD, unsigned int *, struct ID3D11Texture2D **))(*(_QWORD *)this + 288LL))(
             this,
             v3,
             &v13,
             &v15);
      v2 = v7;
      if ( v7 < 0 )
        break;
      v7 = CD3DSurface::CreateViewOfTexture(a2, v15, &v13, 0, &v14);
      v2 = v7;
      if ( v7 < 0 )
      {
        v12 = 652;
        goto LABEL_20;
      }
      v8 = *((unsigned int *)this + 102);
      v9 = v8 + 1;
      if ( (int)v8 + 1 >= (unsigned int)v8 )
        v6 = v8 + 1;
      v2 = v9 < (unsigned int)v8 ? 0x80070216 : 0;
      if ( v9 < (unsigned int)v8 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0xB5u);
      }
      else if ( v6 > *((_DWORD *)this + 101) )
      {
        v11 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 384, 8u, 1, &v14);
        v2 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*((_QWORD *)this + 48) + 8 * v8) = v14;
        *((_DWORD *)this + 102) = v6;
      }
      if ( v2 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x28Fu);
        goto LABEL_12;
      }
      v14 = 0LL;
      ReleaseInterface<IBitmapLock>((__int64 *)&v15);
      if ( ++v3 >= *((_DWORD *)this + 40) )
        goto LABEL_12;
    }
    v12 = 646;
LABEL_20:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, v12);
  }
LABEL_12:
  ReleaseInterfaceNoNULL<IWICBitmap>((__int64)v15);
  ReleaseInterfaceNoNULL<CD3DSurface>((__int64)v14);
  return (unsigned int)v2;
}
