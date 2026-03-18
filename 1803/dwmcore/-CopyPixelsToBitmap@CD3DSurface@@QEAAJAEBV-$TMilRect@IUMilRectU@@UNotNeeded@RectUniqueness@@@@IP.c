/*
 * XREFs of ?CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEBV2@PEAVIBitmapDest@@HH@Z @ 0x180042B90
 * Callers:
 *     ?GetBits@CHwSurfaceRenderTarget@@UEAAJAEBUMilRectF@@PEAVIBitmapDest@@HH@Z @ 0x180078BD0 (-GetBits@CHwSurfaceRenderTarget@@UEAAJAEBUMilRectF@@PEAVIBitmapDest@@HH@Z.c)
 *     ?CopyPixelsToBitmap@CHwDeviceBitmapColorSource@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEBV2@PEAVIBitmapDest@@HH@Z @ 0x1801F4054 (-CopyPixelsToBitmap@CHwDeviceBitmapColorSource@@QEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectU.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VIBitmapSource@@@@YAXPEAVIBitmapSource@@@Z @ 0x18001DE20 (--$ReleaseInterfaceNoNULL@VIBitmapSource@@@@YAXPEAVIBitmapSource@@@Z.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x180020A04 (-HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ?DestroyAndRelease@CD3DResource@@QEAAXXZ @ 0x180021A34 (-DestroyAndRelease@CD3DResource@@QEAAXXZ.c)
 *     ?LockRect@CD3DSurface@@QEAAJPEAULOCKED_RECT@@PEBUtagRECT@@W4D3D11_MAP@@@Z @ 0x1800434EC (-LockRect@CD3DSurface@@QEAAJPEAULOCKED_RECT@@PEBUtagRECT@@W4D3D11_MAP@@@Z.c)
 *     ?UpdatePixelFormatInfo@CD3DSurface@@QEAAXAEBUPixelFormatInfo@@@Z @ 0x180043598 (-UpdatePixelFormatInfo@CD3DSurface@@QEAAXAEBUPixelFormatInfo@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Unmap@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@I@Z @ 0x18007521C (-Unmap@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@I@Z.c)
 *     ?CopySurfaceRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DSurface@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z @ 0x180075370 (-CopySurfaceRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DSurface@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800839A8 (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180084360 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?IsEqualPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@0@Z @ 0x1800C7658 (-IsEqualPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@0@Z.c)
 *     ?Create@CD3DSurface@@SAJPEAVCD3DResourceManager@@AEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAV1@@Z @ 0x1800C8854 (-Create@CD3DSurface@@SAJPEAVCD3DResourceManager@@AEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_D.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z @ 0x180202554 (-HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z.c)
 */

__int64 __fastcall CD3DSurface::CopyPixelsToBitmap(
        struct CD3DSurface *a1,
        struct tagRECT *a2,
        unsigned int a3,
        struct tagRECT *a4,
        __int64 a5,
        int a6,
        int a7)
{
  struct IBitmapSource *v11; // r15
  int v12; // eax
  struct CD3DResourceManager *v13; // rcx
  int v14; // eax
  int v15; // eax
  CD3DResource *v16; // rdi
  unsigned int v17; // ebx
  int v18; // r14d
  __int64 v19; // rax
  unsigned int v20; // r14d
  unsigned int top; // eax
  unsigned int left; // r8d
  unsigned int bottom; // edx
  LONG v24; // r10d
  LONG right; // r11d
  unsigned int v26; // r9d
  bool v27; // cf
  LONG v28; // eax
  unsigned int v29; // edx
  int v30; // r8d
  int v31; // r9d
  int v32; // r10d
  int v33; // r11d
  int v34; // ebx
  unsigned __int64 v35; // rcx
  unsigned int v36; // edx
  unsigned int v37; // r9d
  unsigned __int64 v38; // rcx
  int v39; // eax
  unsigned int v40; // eax
  int v42; // eax
  int v43; // r9d
  unsigned int v44; // [rsp+20h] [rbp-E0h]
  bool v45; // [rsp+28h] [rbp-D8h]
  struct IUnknown *v46; // [rsp+30h] [rbp-D0h]
  char v47; // [rsp+40h] [rbp-C0h]
  int v48; // [rsp+44h] [rbp-BCh]
  unsigned int v49; // [rsp+44h] [rbp-BCh]
  struct IBitmapSource *v50; // [rsp+48h] [rbp-B8h] BYREF
  struct tagRECT v51; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v52; // [rsp+60h] [rbp-A0h] BYREF
  CD3DResource *v53; // [rsp+68h] [rbp-98h] BYREF
  struct IBitmapSource *v54; // [rsp+70h] [rbp-90h] BYREF
  struct IBitmapSource *v55; // [rsp+78h] [rbp-88h]
  unsigned int v56; // [rsp+80h] [rbp-80h] BYREF
  __int64 v57; // [rsp+88h] [rbp-78h]
  __int64 v58; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int8 *v59[2]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v60[16]; // [rsp+A8h] [rbp-58h] BYREF
  enum DXGI_FORMAT v61[4]; // [rsp+B8h] [rbp-48h] BYREF
  _DWORD v62[6]; // [rsp+C8h] [rbp-38h] BYREF
  _DWORD v63[5]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v64; // [rsp+F4h] [rbp-Ch]
  __int64 v65; // [rsp+FCh] [rbp-4h]
  __int64 v66; // [rsp+104h] [rbp+4h]
  __int128 v67; // [rsp+110h] [rbp+10h]

  v57 = a5;
  v55 = a1;
  v59[0] = "DWM Temp Readback (bitmap2)";
  v63[0] = a2->right - a2->left;
  v11 = 0LL;
  v12 = a2->bottom - a2->top;
  v53 = 0LL;
  v63[2] = 1;
  v63[3] = 1;
  v64 = 1LL;
  v47 = 0;
  v54 = 0LL;
  v50 = 0LL;
  v52 = 0LL;
  v13 = (struct CD3DResourceManager *)*((_QWORD *)a1 + 2);
  v63[1] = v12;
  v14 = *((_DWORD *)a1 + 39);
  LODWORD(v59[1]) = 27;
  v63[4] = v14;
  v65 = 3LL;
  v67 = *(_OWORD *)v59;
  v66 = 0x20000LL;
  v15 = CD3DSurface::Create(v13, (const struct DWM_TEXTURE2D_DESC *)v63, 0LL, &v53);
  v16 = v53;
  v17 = v15;
  if ( v15 < 0 )
  {
    v44 = 657;
    goto LABEL_55;
  }
  CD3DDeviceLevel1::CopySurfaceRect(*(CD3DDeviceLevel1 **)(*((_QWORD *)a1 + 2) + 80LL), a1, a2, v53, 0LL, v45);
  v18 = a2->bottom - a2->top;
  v48 = a2->right - a2->left;
  v51.right = v48;
  *(_QWORD *)&v51.left = 0LL;
  v51.bottom = v18;
  (*(void (__fastcall **)(__int64, _BYTE *))(*((_QWORD *)v55 + 15) + 24LL))((__int64)v55 + 120, v60);
  CD3DSurface::UpdatePixelFormatInfo(v16, (const struct PixelFormatInfo *)v60);
  v15 = CD3DSurface::LockRect(v16, (struct LOCKED_RECT *)v59, &v51, D3D11_MAP_READ);
  v17 = v15;
  if ( v15 < 0 )
  {
    v44 = 710;
    goto LABEL_55;
  }
  v47 = 1;
  v15 = HrCreateBitmapFromMemoryEx(
          v48,
          v18,
          (const struct PixelFormatInfo *)v60,
          (unsigned int)v59[0],
          v18 * LODWORD(v59[0]),
          v59[1],
          v46,
          &v54);
  v17 = v15;
  if ( v15 < 0 )
  {
    v44 = 727;
    goto LABEL_55;
  }
  v62[0] = a6;
  v62[1] = a7;
  v62[2] = v48;
  v19 = *(_QWORD *)v57;
  v62[3] = v18;
  v15 = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64, __int64 *))(v19 + 24))(v57, v62, 2LL, &v52);
  v17 = v15;
  if ( v15 < 0 )
  {
    v44 = 740;
    goto LABEL_55;
  }
  (*(void (__fastcall **)(__int64, enum DXGI_FORMAT *))(*(_QWORD *)v52 + 24LL))(v52, v61);
  LODWORD(v57) = GetPixelFormatSize(v61[0]) >> 3;
  if ( IsEqualPixelFormatInfo((const struct PixelFormatInfo *)v60, (const struct PixelFormatInfo *)v61) )
  {
    v55 = v54;
  }
  else
  {
    v42 = CFormatConverter::HrConvertBitmap(v54, (const struct PixelFormatInfo *)v61, &v50);
    v17 = v42;
    if ( v42 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v42, 0x2F9u);
      v11 = v50;
      goto LABEL_34;
    }
    v11 = v50;
    v55 = v50;
  }
  v15 = (*(__int64 (__fastcall **)(__int64, CD3DResource **, __int64 *))(*(_QWORD *)v52 + 48LL))(v52, &v53, &v58);
  v17 = v15;
  if ( v15 < 0 )
  {
    v44 = 766;
    goto LABEL_55;
  }
  v15 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v52 + 40LL))(v52, &v56);
  v17 = v15;
  if ( v15 < 0 )
  {
    v44 = 767;
LABEL_55:
    v43 = v15;
    goto LABEL_56;
  }
  if ( !a3 || !a4 )
  {
    a3 = 1;
    a4 = a2;
  }
  v20 = 0;
  while ( 1 )
  {
    top = a2->top;
    left = a2->left;
    bottom = a2->bottom;
    v51 = *a4;
    v24 = v51.top;
    right = v51.right;
    LODWORD(v50) = top;
    v26 = _mm_cvtsi128_si32((__m128i)v51);
    v49 = v51.bottom;
    if ( left > v26 )
      v26 = left;
    v51.left = v26;
    if ( top > v51.top )
      v24 = top;
    v27 = a2->right < (unsigned int)v51.right;
    v28 = v51.bottom;
    v51.top = v24;
    if ( v27 )
      right = a2->right;
    v51.right = right;
    if ( bottom < v51.bottom )
      v28 = bottom;
    v51.bottom = v28;
    if ( (unsigned __int8)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(&v51) )
      goto LABEL_33;
    v34 = (int)v50;
    if ( v29 >= v49 )
      v29 = v49;
    LODWORD(v50) = v31 - v30;
    LODWORD(v59[0]) = v31 - v30;
    LODWORD(v59[1]) = v33 - v31;
    HIDWORD(v59[0]) = v32 - v34;
    v35 = v56 * (unsigned __int64)(unsigned int)(v32 - v34);
    HIDWORD(v59[1]) = v29 - v32;
    v36 = -1;
    v37 = -1;
    if ( v35 <= 0xFFFFFFFF )
      v37 = v56 * (v32 - v34);
    v17 = v35 > 0xFFFFFFFF ? 0x80070216 : 0;
    if ( v35 > 0xFFFFFFFF )
    {
      v44 = 821;
      goto LABEL_46;
    }
    v38 = (unsigned int)v57 * (unsigned __int64)(unsigned int)v50;
    v39 = -1;
    if ( v38 <= 0xFFFFFFFF )
      v39 = v57 * (_DWORD)v50;
    v17 = v38 > 0xFFFFFFFF ? 0x80070216 : 0;
    if ( v38 > 0xFFFFFFFF )
      break;
    v40 = v37 + v39;
    if ( v40 >= v37 )
      v36 = v40;
    v17 = v40 < v37 ? 0x80070216 : 0;
    if ( v40 < v37 )
    {
      v44 = 827;
      goto LABEL_46;
    }
    v15 = (*(__int64 (__fastcall **)(struct IBitmapSource *, unsigned __int8 **, _QWORD, _QWORD, __int64))(*(_QWORD *)v55 + 48LL))(
            v55,
            v59,
            v56,
            (unsigned int)v53 - v36,
            v58 + v36);
    v17 = v15;
    if ( v15 < 0 )
    {
      v44 = 837;
      goto LABEL_55;
    }
LABEL_33:
    ++v20;
    ++a4;
    if ( v20 >= a3 )
      goto LABEL_34;
  }
  v44 = 825;
LABEL_46:
  v43 = v17;
LABEL_56:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v43, v44);
LABEL_34:
  ReleaseInterfaceNoNULL<IWICBitmap>(v52);
  ReleaseInterfaceNoNULL<IBitmapSource>((__int64)v11);
  ReleaseInterfaceNoNULL<IBitmapSource>((__int64)v54);
  if ( v47 )
    CD3DDeviceLevel1::Unmap(
      *(CD3DDeviceLevel1 **)(*((_QWORD *)v16 + 2) + 80LL),
      *((struct ID3D11Resource **)v16 + 16),
      *((_DWORD *)v16 + 34));
  if ( v16 )
    CD3DResource::DestroyAndRelease(v16);
  return v17;
}
