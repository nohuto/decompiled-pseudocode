/*
 * XREFs of ?CopyPixelsToBitmap@CHwDeviceBitmapColorSource@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEBV2@PEAVIBitmapDest@@HH@Z @ 0x1801F4054
 * Callers:
 *     ?EnsureUpdatedSysMemBuffer@CBitmapOfDeviceBitmaps@@AEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801E8D7C (-EnsureUpdatedSysMemBuffer@CBitmapOfDeviceBitmaps@@AEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@Re.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VIBitmapSource@@@@YAXPEAVIBitmapSource@@@Z @ 0x18001DE20 (--$ReleaseInterfaceNoNULL@VIBitmapSource@@@@YAXPEAVIBitmapSource@@@Z.c)
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ?GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z @ 0x1800218B0 (-GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCD3DSurface@@@@YAXPEAVCD3DSurface@@@Z @ 0x180021E58 (--$ReleaseInterfaceNoNULL@VCD3DSurface@@@@YAXPEAVCD3DSurface@@@Z.c)
 *     ?CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEBV2@PEAVIBitmapDest@@HH@Z @ 0x180042B90 (-CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IP.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800839A8 (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180084360 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwDeviceBitmapColorSource::CopyPixelsToBitmap(
        _DWORD *a1,
        struct tagRECT *a2,
        unsigned int a3,
        struct tagRECT *a4,
        __int64 a5)
{
  struct tagRECT v5; // xmm0
  unsigned int v6; // esi
  _DWORD *v8; // r9
  unsigned int v9; // ebx
  unsigned int left; // r12d
  unsigned int top; // r15d
  unsigned int right; // r13d
  unsigned int bottom; // edx
  bool v14; // cc
  bool v15; // cf
  struct tagRECT *v16; // r8
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // r9
  int D3DSurfaceLevel; // eax
  struct tagRECT *v23; // r9
  struct CD3DSurface *v24; // rdi
  int v25; // eax
  int *v26; // rax
  __int32 v27; // r10d
  __int32 v28; // r14d
  __int32 v29; // edx
  unsigned int v30; // eax
  unsigned int v31; // edx
  int v32; // r9d
  unsigned int v33; // r10d
  unsigned int v34; // r11d
  unsigned __int64 v35; // rcx
  int v36; // eax
  unsigned int v37; // r8d
  unsigned __int64 v38; // rcx
  unsigned int v39; // eax
  unsigned int v40; // ecx
  unsigned __int64 v41; // rax
  unsigned int v42; // r8d
  char *v43; // r14
  size_t v44; // r15
  __int64 v45; // r13
  int v46; // r9d
  unsigned int v48; // [rsp+20h] [rbp-C1h]
  struct CD3DSurface *v49; // [rsp+40h] [rbp-A1h] BYREF
  unsigned int v50; // [rsp+48h] [rbp-99h]
  unsigned int v51; // [rsp+4Ch] [rbp-95h]
  unsigned int v52; // [rsp+50h] [rbp-91h] BYREF
  int v53; // [rsp+54h] [rbp-8Dh]
  __int64 v54; // [rsp+58h] [rbp-89h] BYREF
  __m128i v55; // [rsp+60h] [rbp-81h] BYREF
  int v56; // [rsp+70h] [rbp-71h] BYREF
  int v57; // [rsp+74h] [rbp-6Dh] BYREF
  unsigned __int32 v58; // [rsp+78h] [rbp-69h]
  unsigned int v59; // [rsp+7Ch] [rbp-65h]
  unsigned int v60; // [rsp+80h] [rbp-61h]
  __int64 v61; // [rsp+88h] [rbp-59h] BYREF
  _BYTE v62[8]; // [rsp+90h] [rbp-51h] BYREF
  __int64 v63; // [rsp+98h] [rbp-49h] BYREF
  struct tagRECT v64; // [rsp+A0h] [rbp-41h] BYREF
  _DWORD v65[4]; // [rsp+B0h] [rbp-31h] BYREF
  unsigned __int64 v66; // [rsp+C0h] [rbp-21h] BYREF

  v5 = *a2;
  v6 = a3;
  v49 = 0LL;
  v8 = a1;
  v61 = 0LL;
  v9 = 0;
  v54 = 0LL;
  v64 = v5;
  left = v5.left;
  top = v5.top;
  right = v5.right;
  bottom = v5.bottom;
  if ( a3 == 1 )
  {
    if ( a4->left > (unsigned int)v5.left )
      left = a4->left;
    v14 = a4->top <= (unsigned int)v5.top;
    v64.left = left;
    if ( !v14 )
      top = a4->top;
    v15 = a4->right < (unsigned int)v5.right;
    v64.top = top;
    if ( v15 )
      right = a4->right;
    v15 = a4->bottom < (unsigned int)v5.bottom;
    v64.right = right;
    if ( v15 )
      bottom = a4->bottom;
    v64.bottom = bottom;
    if ( TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(&v64) )
    {
      bottom = (unsigned int)v16;
      right = (unsigned int)v16;
      top = (unsigned int)v16;
      left = (unsigned int)v16;
    }
    v6 = (unsigned int)v16;
    a4 = v16;
  }
  if ( v8[45] > left )
    left = v8[45];
  v17 = v8[46];
  v64.left = left;
  if ( v17 > top )
    top = v17;
  v18 = v8[47];
  v59 = top;
  v64.top = top;
  if ( v18 < right )
    right = v18;
  v19 = v8[48];
  v60 = right;
  v64.right = right;
  if ( v19 < bottom )
    bottom = v19;
  v58 = bottom;
  v64.bottom = bottom;
  if ( TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(&v64) )
    goto LABEL_76;
  if ( *(_DWORD *)(v21 + 160) == DisplayId::None )
  {
    D3DSurfaceLevel = CD3DTexture::GetD3DSurfaceLevel(*(CD3DTexture **)(v21 + 168), v20, &v49);
    v9 = D3DSurfaceLevel;
    if ( D3DSurfaceLevel >= 0 )
    {
      v23 = a4;
      v24 = v49;
      v25 = CD3DSurface::CopyPixelsToBitmap(v49, &v64, v6, v23, a5, 0, 0);
      v9 = v25;
      if ( v25 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0x366u);
      goto LABEL_77;
    }
    v48 = 858;
LABEL_74:
    v46 = D3DSurfaceLevel;
    goto LABEL_75;
  }
  D3DSurfaceLevel = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))a5)(
                      a5,
                      &GUID_d82bbf04_48b7_4100_86b5_a6e5bb0e3213,
                      &v61);
  v9 = D3DSurfaceLevel;
  if ( D3DSurfaceLevel < 0 )
  {
    v48 = 888;
    goto LABEL_74;
  }
  D3DSurfaceLevel = (*(__int64 (__fastcall **)(__int64, int *, int *))(*(_QWORD *)v61 + 32LL))(v61, &v56, &v57);
  v9 = D3DSurfaceLevel;
  if ( D3DSurfaceLevel < 0 )
  {
    v48 = 890;
    goto LABEL_74;
  }
  v65[0] = 0;
  v65[1] = 0;
  v65[2] = v56;
  v65[3] = v57;
  D3DSurfaceLevel = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64, __int64 *))(*(_QWORD *)a5 + 24LL))(
                      a5,
                      v65,
                      2LL,
                      &v54);
  v9 = D3DSurfaceLevel;
  if ( D3DSurfaceLevel < 0 )
  {
    v48 = 899;
    goto LABEL_74;
  }
  v26 = (int *)(*(__int64 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v54 + 24LL))(v54, &v66);
  v51 = GetPixelFormatSize(*v26) >> 3;
  D3DSurfaceLevel = (*(__int64 (__fastcall **)(__int64, _BYTE *, __int64 *))(*(_QWORD *)v54 + 48LL))(v54, v62, &v63);
  v9 = D3DSurfaceLevel;
  if ( D3DSurfaceLevel < 0 )
  {
    v48 = 904;
    goto LABEL_74;
  }
  D3DSurfaceLevel = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v54 + 40LL))(v54, &v52);
  v9 = D3DSurfaceLevel;
  if ( D3DSurfaceLevel < 0 )
  {
    v48 = 905;
    goto LABEL_74;
  }
  if ( !v6 || !a4 )
  {
    v6 = 1;
    a4 = &v64;
  }
  v53 = 0;
  v66 = 0xFFFFFFFFLL;
  while ( 1 )
  {
    v55 = *(__m128i *)a4;
    v27 = v55.m128i_i32[1];
    v28 = v55.m128i_i32[2];
    v29 = v55.m128i_i32[3];
    v30 = _mm_cvtsi128_si32(v55);
    if ( left > v30 )
      v30 = left;
    v50 = v30;
    if ( top > v55.m128i_i32[1] )
      v27 = top;
    v55.m128i_i64[0] = __PAIR64__(v27, v30);
    if ( right < v55.m128i_i32[2] )
      v28 = right;
    v55.m128i_i32[2] = v28;
    if ( v58 < v55.m128i_i32[3] )
      v29 = v58;
    v55.m128i_i32[3] = v29;
    if ( TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(&v55) )
      goto LABEL_62;
    v35 = v34 * (unsigned __int64)(v33 - top);
    v36 = -1;
    v37 = -1;
    if ( v35 <= 0xFFFFFFFF )
      v37 = v34 * (v33 - top);
    v9 = v35 > 0xFFFFFFFF ? 0x80070216 : 0;
    if ( v35 > 0xFFFFFFFF )
      break;
    v38 = v51 * (unsigned __int64)(v50 - left);
    if ( v38 <= 0xFFFFFFFF )
      v36 = v51 * (v50 - left);
    v9 = v38 > 0xFFFFFFFF ? 0x80070216 : 0;
    if ( v38 > v66 )
    {
      v48 = 941;
      goto LABEL_65;
    }
    v39 = v37 + v36;
    v40 = -1;
    if ( v39 >= v37 )
      v40 = v39;
    v9 = v39 < v37 ? 0x80070216 : 0;
    if ( v39 < v37 )
    {
      v48 = 943;
      goto LABEL_65;
    }
    v41 = v51 * (unsigned __int64)(v28 - v50);
    v42 = -1;
    if ( v41 <= 0xFFFFFFFF )
      v42 = v51 * (v28 - v50);
    v9 = v41 > 0xFFFFFFFF ? 0x80070216 : 0;
    if ( v41 > 0xFFFFFFFF )
    {
      v48 = 949;
      goto LABEL_65;
    }
    v43 = (char *)(v63 + v40);
    if ( v33 < v31 )
    {
      v44 = v42;
      v45 = v31 - v33;
      do
      {
        memset_0(v43, 0, v44);
        v43 += v52;
        --v45;
      }
      while ( v45 );
      top = v59;
      right = v60;
      v32 = v53;
    }
LABEL_62:
    ++a4;
    v53 = v32 + 1;
    if ( v32 + 1 >= v6 )
      goto LABEL_76;
  }
  v48 = 937;
LABEL_65:
  v46 = v9;
LABEL_75:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v46, v48);
LABEL_76:
  v24 = v49;
LABEL_77:
  ReleaseInterfaceNoNULL<IWICBitmap>(v54);
  ReleaseInterfaceNoNULL<IBitmapSource>(v61);
  ReleaseInterfaceNoNULL<CD3DSurface>((__int64)v24);
  return v9;
}
