/*
 * XREFs of ?CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEBV2@PEAVIBitmapDest@@HH@Z @ 0x180072AE4
 * Callers:
 *     ?GetBits@CHwSurfaceRenderTarget@@UEAAJAEBUMilRectF@@PEAVIBitmapDest@@HH@Z @ 0x180049AF8 (-GetBits@CHwSurfaceRenderTarget@@UEAAJAEBUMilRectF@@PEAVIBitmapDest@@HH@Z.c)
 *     ?CopyPixelsToBitmap@CHwDeviceBitmapColorSource@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEBV2@PEAVIBitmapDest@@HH@Z @ 0x18019F674 (-CopyPixelsToBitmap@CHwDeviceBitmapColorSource@@QEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectU.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z @ 0x180001C80 (--$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?DestroyAndRelease@CD3DResource@@QEAAXXZ @ 0x18004BF80 (-DestroyAndRelease@CD3DResource@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?LockRect@CD3DSurface@@QEAAJPEAULOCKED_RECT@@PEBUtagRECT@@W4D3D11_MAP@@@Z @ 0x180073434 (-LockRect@CD3DSurface@@QEAAJPEAULOCKED_RECT@@PEBUtagRECT@@W4D3D11_MAP@@@Z.c)
 *     ?UpdatePixelFormatInfo@CD3DSurface@@QEAAXAEBUPixelFormatInfo@@@Z @ 0x1800734E4 (-UpdatePixelFormatInfo@CD3DSurface@@QEAAXAEBUPixelFormatInfo@@@Z.c)
 *     ?Unmap@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@I@Z @ 0x1800778A8 (-Unmap@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@I@Z.c)
 *     ?CopySurfaceRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DSurface@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z @ 0x180077A48 (-CopySurfaceRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DSurface@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18007E584 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?Create@CD3DSurface@@SAJPEAVCD3DResourceManager@@AEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAV1@@Z @ 0x1800C5440 (-Create@CD3DSurface@@SAJPEAVCD3DResourceManager@@AEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_D.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIPEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x1800C5C58 (-HrCreateBitmapFromMemoryEx@@YAJIIPEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     ?IsEqualPixelFormatInfo@@YA_NPEBUPixelFormatInfo@@0@Z @ 0x1800C7670 (-IsEqualPixelFormatInfo@@YA_NPEBUPixelFormatInfo@@0@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEAPEAV2@@Z @ 0x1801AB890 (-HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEAPEAV2@@Z.c)
 */

__int64 __fastcall CD3DSurface::CopyPixelsToBitmap(
        struct CD3DResourceManager **a1,
        struct tagRECT *a2,
        unsigned int a3,
        __m128i *a4,
        __int64 a5,
        unsigned int a6,
        unsigned int a7)
{
  struct IBitmapSource *v11; // r15
  int v12; // eax
  struct CD3DResourceManager *v13; // rcx
  int v14; // eax
  int v15; // eax
  CD3DResource *v16; // rdi
  unsigned int v17; // ebx
  int v18; // r14d
  unsigned int v19; // r14d
  unsigned int left; // r10d
  unsigned int top; // ecx
  unsigned int right; // r9d
  unsigned int bottom; // edx
  unsigned int v24; // r8d
  int v25; // r10d
  int v26; // eax
  unsigned int v27; // r8d
  __int64 v28; // rcx
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  unsigned int v31; // eax
  unsigned int v32; // edx
  int v34; // eax
  int v35; // r9d
  unsigned int v36; // [rsp+20h] [rbp-E0h]
  bool v37; // [rsp+28h] [rbp-D8h]
  char v38; // [rsp+40h] [rbp-C0h]
  int v39; // [rsp+44h] [rbp-BCh]
  unsigned int v40; // [rsp+44h] [rbp-BCh]
  __int64 v41; // [rsp+48h] [rbp-B8h] BYREF
  struct IBitmapSource *v42; // [rsp+50h] [rbp-B0h] BYREF
  __m128i v43; // [rsp+58h] [rbp-A8h] BYREF
  struct CD3DSurface *v44; // [rsp+68h] [rbp-98h] BYREF
  CD3DResource *v45; // [rsp+70h] [rbp-90h] BYREF
  struct IBitmapSource *v46; // [rsp+78h] [rbp-88h] BYREF
  __int64 v47; // [rsp+80h] [rbp-80h]
  __int64 v48; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v49; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int8 *v50; // [rsp+98h] [rbp-68h]
  enum DXGI_FORMAT v51[2]; // [rsp+A0h] [rbp-60h] BYREF
  int v52; // [rsp+A8h] [rbp-58h]
  struct tagRECT v53; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v54; // [rsp+C0h] [rbp-40h] BYREF
  _DWORD v55[5]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v56; // [rsp+E4h] [rbp-1Ch]
  __int64 v57; // [rsp+ECh] [rbp-14h]
  __int64 v58; // [rsp+F4h] [rbp-Ch]
  __int128 v59; // [rsp+100h] [rbp+0h]

  v47 = a5;
  v44 = (struct CD3DSurface *)a1;
  *(_QWORD *)&v54 = "DWM Temp Readback (bitmap2)";
  v55[0] = a2->right - a2->left;
  v11 = 0LL;
  v12 = a2->bottom - a2->top;
  v45 = 0LL;
  v55[2] = 1;
  v55[3] = 1;
  v56 = 1LL;
  v38 = 0;
  v46 = 0LL;
  v42 = 0LL;
  v41 = 0LL;
  v13 = a1[2];
  v55[1] = v12;
  v14 = *((_DWORD *)a1 + 41);
  DWORD2(v54) = 27;
  v55[4] = v14;
  v57 = 3LL;
  v59 = v54;
  v58 = 0x20000LL;
  v15 = CD3DSurface::Create(v13, (const struct DWM_TEXTURE2D_DESC *)v55, 0LL, &v45);
  v16 = v45;
  v17 = v15;
  if ( v15 < 0 )
  {
    v36 = 647;
    goto LABEL_52;
  }
  CD3DDeviceLevel1::CopySurfaceRect(*((CD3DDeviceLevel1 **)a1[2] + 16), (struct CD3DSurface *)a1, a2, v45, 0LL, v37);
  v18 = a2->bottom - a2->top;
  v39 = a2->right - a2->left;
  v53.right = v39;
  *(__int64 *)((char *)v43.m128i_i64 + 4) = 0LL;
  *(_QWORD *)v51 = 0LL;
  v52 = 0;
  *(_QWORD *)&v53.left = 0LL;
  v53.bottom = v18;
  v43.m128i_i32[0] = *((_DWORD *)v44 + 41);
  v43.m128i_i32[1] = (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)v44 + 16) + 32LL))((__int64)v44 + 128);
  v43.m128i_i32[2] = *((_DWORD *)v44 + 49);
  CD3DSurface::UpdatePixelFormatInfo(v16, (const struct PixelFormatInfo *)&v43);
  v15 = CD3DSurface::LockRect(v16, (struct LOCKED_RECT *)&v49, &v53, D3D11_MAP_READ);
  v17 = v15;
  if ( v15 < 0 )
  {
    v36 = 704;
    goto LABEL_52;
  }
  v38 = 1;
  v15 = HrCreateBitmapFromMemoryEx(v39, v18, (const struct PixelFormatInfo *)&v43, v49, v18 * v49, v50, 0LL, &v46);
  v17 = v15;
  if ( v15 < 0 )
  {
    v36 = 721;
    goto LABEL_52;
  }
  *(_QWORD *)&v54 = __PAIR64__(a7, a6);
  *((_QWORD *)&v54 + 1) = __PAIR64__(v18, v39);
  v15 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64, __int64 *))(*(_QWORD *)v47 + 24LL))(
          v47,
          &v54,
          2LL,
          &v41);
  v17 = v15;
  if ( v15 < 0 )
  {
    v36 = 734;
    goto LABEL_52;
  }
  v15 = (*(__int64 (__fastcall **)(__int64, enum DXGI_FORMAT *))(*(_QWORD *)v41 + 24LL))(v41, v51);
  v17 = v15;
  if ( v15 < 0 )
  {
    v36 = 739;
    goto LABEL_52;
  }
  v51[1] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v41 + 32LL))(v41);
  v52 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v41 + 40LL))(v41);
  v40 = GetPixelFormatSize(v51[0]) >> 3;
  if ( IsEqualPixelFormatInfo((const struct PixelFormatInfo *)&v43, (const struct PixelFormatInfo *)v51) )
  {
    v42 = v46;
  }
  else
  {
    v34 = CFormatConverter::HrConvertBitmap(v46, (const struct PixelFormatInfo *)v51, &v42);
    v17 = v34;
    if ( v34 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v34, 0x2F5u);
      v11 = v42;
      goto LABEL_30;
    }
    v11 = v42;
  }
  v15 = (*(__int64 (__fastcall **)(__int64, CD3DResource **, __int64 *))(*(_QWORD *)v41 + 64LL))(v41, &v45, &v48);
  v17 = v15;
  if ( v15 < 0 )
  {
    v36 = 762;
    goto LABEL_52;
  }
  v15 = (*(__int64 (__fastcall **)(__int64, struct CD3DSurface **))(*(_QWORD *)v41 + 56LL))(v41, &v44);
  v17 = v15;
  if ( v15 < 0 )
  {
    v36 = 763;
LABEL_52:
    v35 = v15;
    goto LABEL_53;
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
    v43 = *a4;
    top = v43.m128i_u32[1];
    right = v43.m128i_u32[2];
    bottom = v43.m128i_u32[3];
    v24 = _mm_cvtsi128_si32(v43);
    if ( left > v24 )
      v24 = left;
    if ( a2->top > (unsigned __int32)v43.m128i_i32[1] )
      top = a2->top;
    if ( a2->right < (unsigned __int32)v43.m128i_i32[2] )
      right = a2->right;
    if ( a2->bottom < (unsigned __int32)v43.m128i_i32[3] )
      bottom = a2->bottom;
    if ( right <= v24 || bottom <= top )
      goto LABEL_29;
    v25 = -left;
    v26 = -a2->top;
    v27 = v25 + v24;
    v28 = top - a2->top;
    v53.left = v27;
    v53.top = v28;
    v53.bottom = v26 + bottom - v28;
    v29 = (unsigned int)v44 * v28;
    v53.right = v25 + right - v27;
    if ( v29 > 0xFFFFFFFF )
      break;
    v30 = v40 * (unsigned __int64)v27;
    if ( v30 > 0xFFFFFFFF )
    {
      v36 = 821;
      goto LABEL_43;
    }
    v31 = v30 + v29;
    v32 = -1;
    if ( v31 >= (unsigned int)v29 )
      v32 = v31;
    v17 = v31 < (unsigned int)v29 ? 0x80070216 : 0;
    if ( v31 < (unsigned int)v29 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x337u);
      goto LABEL_30;
    }
    v15 = (*(__int64 (__fastcall **)(struct IBitmapSource *, struct tagRECT *, _QWORD, _QWORD, __int64))(*(_QWORD *)v42 + 64LL))(
            v42,
            &v53,
            (unsigned int)v44,
            (unsigned int)v45 - v32,
            v48 + v32);
    v17 = v15;
    if ( v15 < 0 )
    {
      v36 = 833;
      goto LABEL_52;
    }
LABEL_29:
    ++v19;
    ++a4;
    if ( v19 >= a3 )
      goto LABEL_30;
  }
  v36 = 817;
LABEL_43:
  v17 = -2147024362;
  v35 = -2147024362;
LABEL_53:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v35, v36);
LABEL_30:
  ReleaseInterfaceNoNULL<CD2DPencil>(v41);
  ReleaseInterfaceNoNULL<ID2D1Ink>((__int64)v11);
  ReleaseInterfaceNoNULL<ID2D1Ink>((__int64)v46);
  if ( v38 )
    CD3DDeviceLevel1::Unmap(
      *(CD3DDeviceLevel1 **)(*((_QWORD *)v16 + 2) + 128LL),
      *((struct ID3D11Resource **)v16 + 17),
      *((_DWORD *)v16 + 36));
  if ( v16 )
    CD3DResource::DestroyAndRelease(v16);
  return v17;
}
