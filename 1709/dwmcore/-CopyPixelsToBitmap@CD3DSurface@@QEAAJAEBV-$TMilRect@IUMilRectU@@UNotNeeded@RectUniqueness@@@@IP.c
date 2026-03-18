/*
 * XREFs of ?CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEBV2@PEAVIBitmapDest@@HH@Z @ 0x18002DA20
 * Callers:
 *     ?GetBits@CHwSurfaceRenderTarget@@UEAAJAEBUMilRectF@@PEAVIBitmapDest@@HH@Z @ 0x18008F748 (-GetBits@CHwSurfaceRenderTarget@@UEAAJAEBUMilRectF@@PEAVIBitmapDest@@HH@Z.c)
 *     ?CopyPixelsToBitmap@CHwDeviceBitmapColorSource@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEBV2@PEAVIBitmapDest@@HH@Z @ 0x1801B6994 (-CopyPixelsToBitmap@CHwDeviceBitmapColorSource@@QEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectU.c)
 * Callees:
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x18000A5D4 (-HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18000BC20 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?Unmap@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@I@Z @ 0x180020718 (-Unmap@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@I@Z.c)
 *     ?CopySurfaceRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DSurface@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z @ 0x18002086C (-CopySurfaceRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DSurface@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z.c)
 *     ?LockRect@CD3DSurface@@QEAAJPEAULOCKED_RECT@@PEBUtagRECT@@W4D3D11_MAP@@@Z @ 0x18002E430 (-LockRect@CD3DSurface@@QEAAJPEAULOCKED_RECT@@PEBUtagRECT@@W4D3D11_MAP@@@Z.c)
 *     ?UpdatePixelFormatInfo@CD3DSurface@@QEAAXAEBUPixelFormatInfo@@@Z @ 0x18002E4DC (-UpdatePixelFormatInfo@CD3DSurface@@QEAAXAEBUPixelFormatInfo@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterfaceNoNULL@UID2D1Bitmap1@@@@YAXPEAUID2D1Bitmap1@@@Z @ 0x1800823A0 (--$ReleaseInterfaceNoNULL@UID2D1Bitmap1@@@@YAXPEAUID2D1Bitmap1@@@Z.c)
 *     ?Create@CD3DSurface@@SAJPEAVCD3DResourceManager@@AEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAV1@@Z @ 0x180084EF8 (-Create@CD3DSurface@@SAJPEAVCD3DResourceManager@@AEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_D.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800887B0 (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?DestroyAndRelease@CD3DResource@@QEAAXXZ @ 0x180092840 (-DestroyAndRelease@CD3DResource@@QEAAXXZ.c)
 *     ?IsEqualPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@0@Z @ 0x1800BE3E0 (-IsEqualPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@0@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z @ 0x1801C5DE4 (-HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z.c)
 */

__int64 __fastcall CD3DSurface::CopyPixelsToBitmap(
        struct CD3DSurface *a1,
        struct tagRECT *a2,
        unsigned int a3,
        __m128i *a4,
        __int64 a5,
        unsigned int a6,
        unsigned int a7)
{
  struct IBitmapSource *v11; // rsi
  int v12; // eax
  struct CD3DResourceManager *v13; // rcx
  int v14; // eax
  int v15; // eax
  CD3DResource *v16; // rdi
  unsigned int v17; // ebx
  int v18; // r14d
  unsigned int v19; // r14d
  unsigned int left; // eax
  unsigned int top; // r11d
  __int32 v22; // edx
  LONG right; // r9d
  LONG bottom; // r10d
  unsigned int v25; // r8d
  bool v26; // cf
  int v27; // edx
  int v28; // r8d
  int v29; // r9d
  int v30; // r10d
  int v31; // r11d
  unsigned int v32; // r8d
  unsigned __int64 v33; // rcx
  unsigned int v34; // edx
  unsigned __int64 v35; // rcx
  unsigned int v36; // eax
  unsigned int v37; // eax
  unsigned int v38; // r10d
  int v40; // eax
  int v41; // r9d
  unsigned int v42; // [rsp+20h] [rbp-E0h]
  struct IUnknown *v43; // [rsp+30h] [rbp-D0h]
  char v44; // [rsp+40h] [rbp-C0h]
  int v45; // [rsp+44h] [rbp-BCh]
  unsigned int v46; // [rsp+44h] [rbp-BCh]
  struct IBitmapSource *v47; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v48; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v49; // [rsp+58h] [rbp-A8h] BYREF
  __m128i v50; // [rsp+60h] [rbp-A0h] BYREF
  CD3DResource *v51; // [rsp+70h] [rbp-90h] BYREF
  struct IBitmapSource *v52; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v53[2]; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int8 *v54; // [rsp+88h] [rbp-78h]
  __int64 v55; // [rsp+90h] [rbp-70h] BYREF
  struct tagRECT v56; // [rsp+98h] [rbp-68h] BYREF
  __int128 v57; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v58[16]; // [rsp+B8h] [rbp-48h] BYREF
  DXGI_FORMAT v59[6]; // [rsp+C8h] [rbp-38h] BYREF
  _DWORD v60[5]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v61; // [rsp+F4h] [rbp-Ch]
  __int64 v62; // [rsp+FCh] [rbp-4h]
  __int64 v63; // [rsp+104h] [rbp+4h]
  __int128 v64; // [rsp+110h] [rbp+10h]

  v50.m128i_i64[0] = a5;
  *(_QWORD *)v53 = a1;
  *(_QWORD *)&v57 = "DWM Temp Readback (bitmap2)";
  v60[0] = a2->right - a2->left;
  v11 = 0LL;
  v12 = a2->bottom - a2->top;
  v51 = 0LL;
  v60[2] = 1;
  v60[3] = 1;
  v61 = 1LL;
  v44 = 0;
  v52 = 0LL;
  v47 = 0LL;
  v49 = 0LL;
  v13 = (struct CD3DResourceManager *)*((_QWORD *)a1 + 2);
  v60[1] = v12;
  v14 = *((_DWORD *)a1 + 39);
  DWORD2(v57) = 27;
  v60[4] = v14;
  v62 = 3LL;
  v64 = v57;
  v63 = 0x20000LL;
  v15 = CD3DSurface::Create(v13, (const struct DWM_TEXTURE2D_DESC *)v60, 0LL, &v51);
  v16 = v51;
  v17 = v15;
  if ( v15 < 0 )
  {
    v42 = 657;
    goto LABEL_53;
  }
  CD3DDeviceLevel1::CopySurfaceRect(*(CD3DDeviceLevel1 **)(*((_QWORD *)a1 + 2) + 80LL), a1, a2, v51, 0LL);
  v18 = a2->bottom - a2->top;
  v45 = a2->right - a2->left;
  v56.right = v45;
  *(_QWORD *)&v56.left = 0LL;
  v56.bottom = v18;
  (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)(*(_QWORD *)v53 + 120LL) + 24LL))(*(_QWORD *)v53 + 120LL, v58);
  CD3DSurface::UpdatePixelFormatInfo(v16, (const struct PixelFormatInfo *)v58);
  v15 = CD3DSurface::LockRect(v16, (struct LOCKED_RECT *)v53, &v56, D3D11_MAP_READ);
  v17 = v15;
  if ( v15 < 0 )
  {
    v42 = 710;
    goto LABEL_53;
  }
  v44 = 1;
  v15 = HrCreateBitmapFromMemoryEx(v45, v18, (const struct PixelFormatInfo *)v58, v53[0], v18 * v53[0], v54, v43, &v52);
  v17 = v15;
  if ( v15 < 0 )
  {
    v42 = 727;
    goto LABEL_53;
  }
  *(_QWORD *)&v57 = __PAIR64__(a7, a6);
  *((_QWORD *)&v57 + 1) = __PAIR64__(v18, v45);
  v15 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64, __int64 *))(*(_QWORD *)v50.m128i_i64[0] + 24LL))(
          v50.m128i_i64[0],
          &v57,
          2LL,
          &v49);
  v17 = v15;
  if ( v15 < 0 )
  {
    v42 = 740;
    goto LABEL_53;
  }
  (*(void (__fastcall **)(__int64, DXGI_FORMAT *))(*(_QWORD *)v49 + 24LL))(v49, v59);
  v53[0] = GetPixelFormatSize(v59[0]) >> 3;
  if ( IsEqualPixelFormatInfo((const struct PixelFormatInfo *)v58, (const struct PixelFormatInfo *)v59) )
  {
    v47 = v52;
  }
  else
  {
    v40 = CFormatConverter::HrConvertBitmap(v52, (const struct PixelFormatInfo *)v59, &v47);
    v17 = v40;
    if ( v40 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v40, 0x2F9u);
      v11 = v47;
      goto LABEL_32;
    }
    v11 = v47;
  }
  v15 = (*(__int64 (__fastcall **)(__int64, CD3DResource **, __int64 *))(*(_QWORD *)v49 + 48LL))(v49, &v51, &v55);
  v17 = v15;
  if ( v15 < 0 )
  {
    v42 = 766;
    goto LABEL_53;
  }
  v15 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v49 + 40LL))(v49, &v48);
  v17 = v15;
  if ( v15 < 0 )
  {
    v42 = 767;
LABEL_53:
    v41 = v15;
    goto LABEL_54;
  }
  if ( !a3 || !a4 )
  {
    a3 = 1;
    a4 = (__m128i *)a2;
  }
  v19 = 0;
  while ( 1 )
  {
    left = a2->left;
    top = a2->top;
    v46 = left;
    v50 = *a4;
    v22 = v50.m128i_i32[1];
    right = v50.m128i_i32[2];
    bottom = v50.m128i_i32[3];
    v25 = _mm_cvtsi128_si32(v50);
    if ( left > v25 )
      v25 = left;
    v50.m128i_i32[0] = v25;
    if ( top > v50.m128i_i32[1] )
      v22 = top;
    v26 = a2->right < (unsigned __int32)v50.m128i_i32[2];
    v50.m128i_i32[1] = v22;
    if ( v26 )
      right = a2->right;
    v26 = a2->bottom < (unsigned __int32)v50.m128i_i32[3];
    v50.m128i_i32[2] = right;
    if ( v26 )
      bottom = a2->bottom;
    v50.m128i_i32[3] = bottom;
    if ( (unsigned __int8)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(&v50) )
      goto LABEL_31;
    v32 = v28 - v46;
    v56.top = v27 - v31;
    v56.right = v29 - v46 - v32;
    v56.left = v32;
    v33 = v48 * (unsigned __int64)(unsigned int)(v27 - v31);
    v56.bottom = v30 - v27;
    v34 = -1;
    if ( v33 <= 0xFFFFFFFF )
      v34 = v33;
    v17 = v33 > 0xFFFFFFFF ? 0x80070216 : 0;
    if ( v33 > 0xFFFFFFFF )
    {
      v42 = 821;
      goto LABEL_44;
    }
    v35 = v53[0] * (unsigned __int64)v32;
    v36 = -1;
    if ( v35 <= 0xFFFFFFFF )
      v36 = v53[0] * v32;
    v17 = v35 > 0xFFFFFFFF ? 0x80070216 : 0;
    if ( v35 > 0xFFFFFFFF )
      break;
    v37 = v34 + v36;
    v38 = -1;
    if ( v37 >= v34 )
      v38 = v37;
    v17 = v37 < v34 ? 0x80070216 : 0;
    if ( v37 < v34 )
    {
      v42 = 827;
      goto LABEL_44;
    }
    v15 = (*(__int64 (__fastcall **)(struct IBitmapSource *, struct tagRECT *, _QWORD, _QWORD, __int64))(*(_QWORD *)v47 + 48LL))(
            v47,
            &v56,
            v48,
            (unsigned int)v51 - v38,
            v55 + v38);
    v17 = v15;
    if ( v15 < 0 )
    {
      v42 = 837;
      goto LABEL_53;
    }
LABEL_31:
    ++v19;
    ++a4;
    if ( v19 >= a3 )
      goto LABEL_32;
  }
  v42 = 825;
LABEL_44:
  v41 = v17;
LABEL_54:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v41, v42);
LABEL_32:
  ReleaseInterfaceNoNULL<CManipulationManager>(v49);
  ReleaseInterfaceNoNULL<ID2D1Bitmap1>(v11);
  ReleaseInterfaceNoNULL<ID2D1Bitmap1>(v52);
  if ( v44 )
    CD3DDeviceLevel1::Unmap(*(CD3DDeviceLevel1 **)(*((_QWORD *)v16 + 2) + 80LL), *((struct ID3D11Resource **)v16 + 16));
  if ( v16 )
    CD3DResource::DestroyAndRelease(v16);
  return v17;
}
