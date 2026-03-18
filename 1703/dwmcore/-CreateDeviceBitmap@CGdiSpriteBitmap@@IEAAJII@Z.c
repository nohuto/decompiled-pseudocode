/*
 * XREFs of ?CreateDeviceBitmap@CGdiSpriteBitmap@@IEAAJII@Z @ 0x180055214
 * Callers:
 *     ?CreateBitmap@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z @ 0x180055624 (-CreateBitmap@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180036B40 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?OpenSharedHandleAsBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IPEAW4DXGI_FORMAT@@PEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@AEBU_GUID@@U_LUID@@VDisplayId@@PEAX_NI@Z @ 0x180042510 (-OpenSharedHandleAsBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IPEAW4DXGI_FORMAT@.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180048FE4 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?ReleaseDeviceBitmapResources@CGdiSpriteBitmap@@IEAAXXZ @ 0x180055914 (-ReleaseDeviceBitmapResources@CGdiSpriteBitmap@@IEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18008F260 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?Create@CBitmapOfDeviceBitmaps@@SAJIIPEBUPixelFormatInfo@@PEAPEAV1@@Z @ 0x1800B1EEC (-Create@CBitmapOfDeviceBitmaps@@SAJIIPEBUPixelFormatInfo@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CGdiSpriteBitmap::CreateDeviceBitmap(CGdiSpriteBitmap *this, unsigned int a2, unsigned int a3)
{
  int v3; // ebx
  struct CBitmapOfDeviceBitmaps *v4; // rsi
  int v8; // eax
  int v9; // eax
  unsigned int v10; // edx
  __int64 v11; // rcx
  unsigned int v12; // eax
  CBitmapOfDeviceBitmaps *v13; // rcx
  int v15; // eax
  __int64 v16; // [rsp+60h] [rbp-10h] BYREF
  unsigned int v17; // [rsp+A8h] [rbp+38h] BYREF
  struct CBitmapOfDeviceBitmaps *v18; // [rsp+B8h] [rbp+48h] BYREF

  v3 = 0;
  v4 = 0LL;
  v17 = 0;
  v18 = 0LL;
  CGdiSpriteBitmap::ReleaseDeviceBitmapResources(this);
  if ( a2 && a3 )
  {
    v8 = CBitmapOfDeviceBitmaps::Create(a2, a3, (CGdiSpriteBitmap *)((char *)this + 120), &v18);
    v17 = v8;
    v3 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x248u);
      v4 = v18;
      goto LABEL_14;
    }
    v4 = v18;
    v9 = CD3DDeviceManager::OpenSharedHandleAsBitmap(
           (__int64)&qword_18023E820,
           (unsigned __int64)v18,
           0,
           &v17,
           &v16,
           (struct _GUID *)(*((_QWORD *)this + 4) + 324LL),
           *(struct _LUID *)((char *)this + 376),
           DisplayId::None,
           *((_QWORD *)this + 46),
           0,
           0);
    v17 = v9;
    v3 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x253u);
      goto LABEL_14;
    }
    v10 = v17;
    v18 = (CGdiSpriteBitmap *)((char *)this + 96);
    v11 = *((unsigned int *)v4 + 128);
    v12 = v11 + 1;
    if ( (int)v11 + 1 >= (unsigned int)v11 )
      v10 = v11 + 1;
    v3 = v12 < (unsigned int)v11 ? 0x80070216 : 0;
    if ( v12 < (unsigned int)v11 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xB5u);
    }
    else if ( v10 > *((_DWORD *)v4 + 127) )
    {
      v15 = DynArrayImpl<0>::AddMultipleAndSet((char *)v4 + 488, 8LL, 1LL, &v18);
      v3 = v15;
      if ( v15 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)v4 + 61) + 8 * v11) = v18;
      *((_DWORD *)v4 + 128) = v10;
    }
    v17 = v3;
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x25Bu);
      goto LABEL_14;
    }
    *((_QWORD *)this + 48) = v4;
    v4 = 0LL;
  }
  v13 = (CBitmapOfDeviceBitmaps *)*((_QWORD *)this + 48);
  *((_DWORD *)this + 18) = a2;
  *((_DWORD *)this + 19) = a3;
  *((_QWORD *)this + 10) = ((unsigned __int64)v13 + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)v13 >> 64);
  if ( !v13 )
    goto LABEL_16;
  CBitmapOfDeviceBitmaps::AddRef(v13);
LABEL_14:
  if ( v4 )
    CMILCOMBase::InternalRelease(v4);
LABEL_16:
  TranslateDXGIorD3DErrorInContext((unsigned int)v3, 9LL, &v17);
  return v17;
}
