/*
 * XREFs of ?GetD2DBitmapFromBitmapSource@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@AEBU_GUID@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180042064
 * Callers:
 *     ?BitmapResourceToD2DBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@PEBVCMILMatrix@@_NPEAVCColorKey@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1800A2550 (-BitmapResourceToD2DBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@PEBVCMILMatrix@@_NPEAVCCol.c)
 *     ?GetD2DBitmapRealizationForContextOwner@CHwndBitmap@@UEAAJPEAVID2DContextOwner@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180164A80 (-GetD2DBitmapRealizationForContextOwner@CHwndBitmap@@UEAAJPEAVID2DContextOwner@@PEAPEAUID2D1Bitm.c)
 *     ?GetD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x1801B54B0 (-GetD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBURenderTargetInfo@@PEBV-$TMi.c)
 * Callees:
 *     ?RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@VDisplayId@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAV1@@Z @ 0x180041704 (-RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEB.c)
 *     ?CreateNewDevice@CD3DDeviceManager@@AEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180042A64 (-CreateNewDevice@CD3DDeviceManager@@AEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?Release@CHwBitmapColorSource@@UEAAKXZ @ 0x180044120 (-Release@CHwBitmapColorSource@@UEAAKXZ.c)
 *     ?GetTextureNoRef@CHwBitmapColorSource@@UEAAPEAVCD3DTexture@@XZ @ 0x180044140 (-GetTextureNoRef@CHwBitmapColorSource@@UEAAPEAVCD3DTexture@@XZ.c)
 *     ?GetD2DBitmap@CD3DTexture@@QEAAJ_NPEAPEAUID2D1Bitmap1@@@Z @ 0x1800456E4 (-GetD2DBitmap@CD3DTexture@@QEAAJ_NPEAPEAUID2D1Bitmap1@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18004C100 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18008F260 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?ReadTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@@Z @ 0x180197528 (-ReadTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@@Z.c)
 */

__int64 __fastcall GetD2DBitmapFromBitmapSource(
        struct IBitmapSource *a1,
        const struct PixelFormatInfo *a2,
        const struct BitmapSourceInfo *a3,
        const struct _GUID *a4,
        struct ID2D1Bitmap1 **a5)
{
  struct ID2D1Bitmap1 **v5; // r13
  CHwBitmapColorSource *v6; // rsi
  struct CD3DDeviceLevel1 *v7; // rdi
  struct ID2D1Bitmap1 **v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  int v14; // ebx
  int v15; // eax
  struct CD3DTexture *(__fastcall *v16)(CHwBitmapColorSource *__hidden); // rax
  CD3DTexture *TextureNoRef; // rax
  CD3DTexture *v18; // r14
  int D2DBitmap; // eax
  struct ID2D1Bitmap1 *v20; // r15
  unsigned int (__fastcall *v21)(CHwBitmapColorSource *__hidden); // rax
  int v23; // eax
  void (__fastcall ***v24)(_QWORD, char *); // r8
  unsigned int v25; // [rsp+20h] [rbp-30h]
  CHwBitmapColorSource *v26; // [rsp+40h] [rbp-10h] BYREF
  struct ID2D1Bitmap1 *v27; // [rsp+48h] [rbp-8h] BYREF
  struct CD3DDeviceLevel1 *v30; // [rsp+A0h] [rbp+50h] BYREF

  v5 = a5;
  v6 = 0LL;
  v7 = 0LL;
  v27 = 0LL;
  v26 = 0LL;
  *a5 = 0LL;
  v10 = *(struct ID2D1Bitmap1 ***)a3;
  a5 = *(struct ID2D1Bitmap1 ***)a3;
  v30 = 0LL;
  EnterCriticalSection(&CriticalSection);
  v11 = *(_QWORD *)&a4->Data1 - *(__int64 *)((char *)&qword_18023E900 + 4);
  if ( *(_QWORD *)&a4->Data1 == *(__int64 *)((char *)&qword_18023E900 + 4) )
    v11 = *(_QWORD *)a4->Data4 - qword_18023E90C;
  if ( v11 )
  {
    v30 = 0LL;
    v12 = 0LL;
    if ( (_DWORD)qword_18023E900 )
    {
      while ( 1 )
      {
        if ( __PAIR64__(HIDWORD(a5), (unsigned int)v10) == *(_QWORD *)(qword_18023E890 + 40 * v12 + 8) )
        {
          v13 = *(_QWORD *)&a4->Data1 - *(_QWORD *)(qword_18023E890 + 40 * v12 + 16);
          if ( *(_QWORD *)&a4->Data1 == *(_QWORD *)(qword_18023E890 + 40 * v12 + 16) )
            v13 = *(_QWORD *)a4->Data4 - *(_QWORD *)(qword_18023E890 + 40 * v12 + 24);
          if ( !v13 )
            break;
        }
        v12 = (unsigned int)(v12 + 1);
        if ( (unsigned int)v12 >= (unsigned int)qword_18023E900 )
          goto LABEL_30;
      }
      v7 = *(struct CD3DDeviceLevel1 **)(qword_18023E890 + 40 * v12);
      _InterlockedIncrement((volatile signed __int32 *)v7 + 124);
      if ( *((int *)v7 + 218) >= 0 )
      {
        v6 = v26;
        v14 = 0;
        v30 = v7;
        goto LABEL_11;
      }
      CMILPoolResource::Release((struct CD3DDeviceLevel1 *)((char *)v7 + 488));
      v6 = v26;
      v14 = -2003304307;
    }
    else
    {
LABEL_30:
      v23 = CD3DDeviceManager::CreateNewDevice((CD3DDeviceManager *)&g_D3DDeviceManager, a4, (struct _LUID)v10, &v30);
      v14 = v23;
      if ( v23 < 0 )
        MilInstrumentationCheckHR(0x14u, &dword_1801D55C8, 1u, v23, 0x1E3u);
    }
    v7 = v30;
  }
  else
  {
    v14 = -2003304307;
    MilInstrumentationCheckHR(0x14u, &dword_1801D55C8, 1u, -2003304307, 0x1D3u);
  }
LABEL_11:
  LeaveCriticalSection(&CriticalSection);
  LODWORD(a5) = v14;
  if ( v14 < 0 )
  {
    v25 = 47;
    goto LABEL_39;
  }
  v15 = CHwTexturedColorSource::RealizeFromBitmapSource(
          v7,
          a1,
          a2,
          *((_DWORD *)a3 + 2),
          *((_DWORD *)a3 + 4),
          *((_QWORD *)a3 + 3),
          &v26);
  LODWORD(a5) = v15;
  v14 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x37u);
    v6 = v26;
    goto LABEL_20;
  }
  v6 = v26;
  v16 = *(struct CD3DTexture *(__fastcall **)(CHwBitmapColorSource *__hidden))(*(_QWORD *)v26 + 56LL);
  if ( v16 == CHwBitmapColorSource::GetTextureNoRef )
    TextureNoRef = CHwBitmapColorSource::GetTextureNoRef(v26);
  else
    TextureNoRef = v16(v26);
  v18 = TextureNoRef;
  D2DBitmap = CD3DTexture::GetD2DBitmap(TextureNoRef, *((_BYTE *)a3 + 16) & 1, &v27);
  LODWORD(a5) = D2DBitmap;
  v14 = D2DBitmap;
  if ( D2DBitmap < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DBitmap, 0x3Eu);
    goto LABEL_20;
  }
  v20 = v27;
  if ( !v27 )
  {
    v14 = -2147024882;
    v25 = 63;
    LODWORD(a5) = -2147024882;
LABEL_39:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, v25);
    goto LABEL_20;
  }
  if ( g_LockAndReadTexture )
    CD3DDeviceLevel1::ReadTexture(v7, *((struct ID3D11Texture2D **)v18 + 16));
  *v5 = v20;
LABEL_20:
  if ( v6 )
  {
    v21 = *(unsigned int (__fastcall **)(CHwBitmapColorSource *__hidden))(*(_QWORD *)v6 + 8LL);
    if ( v21 == CHwBitmapColorSource::Release )
      CHwBitmapColorSource::Release(v6);
    else
      v21(v6);
  }
  if ( v7 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v7 + 124, 0xFFFFFFFF) == 1 )
    {
      v24 = (void (__fastcall ***)(_QWORD, char *))*((_QWORD *)v7 + 63);
      if ( v24 )
        (**v24)(*((_QWORD *)v7 + 63), (char *)v7 + 488);
      else
        (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v7 + 61) + 16LL))((__int64)v7 + 488, 1LL);
    }
    v14 = (int)a5;
  }
  TranslateDXGIorD3DErrorInContext((unsigned int)v14, 0LL, &a5);
  return (unsigned int)a5;
}
