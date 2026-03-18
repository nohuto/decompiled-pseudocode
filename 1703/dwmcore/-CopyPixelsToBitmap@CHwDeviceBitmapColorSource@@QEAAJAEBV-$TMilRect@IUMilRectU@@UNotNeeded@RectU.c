/*
 * XREFs of ?CopyPixelsToBitmap@CHwDeviceBitmapColorSource@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEBV2@PEAVIBitmapDest@@HH@Z @ 0x18019F674
 * Callers:
 *     ?EnsureUpdatedSysMemBuffer@CBitmapOfDeviceBitmaps@@AEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18019AE44 (-EnsureUpdatedSysMemBuffer@CBitmapOfDeviceBitmaps@@AEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@Re.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z @ 0x180001C80 (--$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z @ 0x180045DB0 (-GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18004C100 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IPEBV2@PEAVIBitmapDest@@HH@Z @ 0x180072AE4 (-CopyPixelsToBitmap@CD3DSurface@@QEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IP.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18007E584 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwDeviceBitmapColorSource::CopyPixelsToBitmap(
        __int64 a1,
        struct tagRECT *a2,
        unsigned int a3,
        unsigned int *a4,
        __int64 a5)
{
  struct tagRECT v5; // xmm0
  struct tagRECT *v6; // r14
  unsigned int v7; // r15d
  unsigned int v8; // edi
  unsigned int left; // r13d
  unsigned int top; // ebx
  __int64 right; // rdx
  unsigned int bottom; // r12d
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  __int64 v16; // rbx
  int D3DSurfaceLevel; // eax
  __m128i *v18; // r9
  CMILPoolResource *v19; // r14
  int v20; // eax
  __int64 *v21; // rdx
  __int64 *v22; // r8
  __int64 v23; // r9
  _QWORD *v24; // rcx
  _QWORD *v25; // rax
  __int64 *v26; // rdx
  __int64 *v27; // r8
  __int64 v28; // r9
  _QWORD *v29; // rcx
  _QWORD *v30; // rax
  int v31; // eax
  unsigned int v32; // r10d
  unsigned __int32 v33; // eax
  unsigned __int32 v34; // r8d
  unsigned __int32 v35; // r11d
  unsigned __int32 v36; // edx
  unsigned int v37; // r9d
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // r9
  unsigned int v40; // eax
  unsigned int v41; // r9d
  unsigned __int64 v42; // rax
  char *v43; // r13
  size_t v44; // rbx
  __int64 v45; // r12
  int v46; // r9d
  unsigned int v48; // [rsp+20h] [rbp-B1h]
  CMILPoolResource *v49; // [rsp+40h] [rbp-91h] BYREF
  unsigned __int32 v50; // [rsp+48h] [rbp-89h]
  unsigned int v51; // [rsp+4Ch] [rbp-85h]
  unsigned int v52; // [rsp+50h] [rbp-81h] BYREF
  unsigned int v53; // [rsp+54h] [rbp-7Dh]
  unsigned int v54; // [rsp+58h] [rbp-79h]
  __int64 v55; // [rsp+60h] [rbp-71h] BYREF
  int v56; // [rsp+68h] [rbp-69h] BYREF
  int v57; // [rsp+6Ch] [rbp-65h] BYREF
  enum DXGI_FORMAT v58; // [rsp+70h] [rbp-61h] BYREF
  unsigned int v59; // [rsp+74h] [rbp-5Dh]
  unsigned int v60; // [rsp+78h] [rbp-59h]
  unsigned int v61; // [rsp+7Ch] [rbp-55h]
  __int64 v62; // [rsp+80h] [rbp-51h] BYREF
  char v63[8]; // [rsp+88h] [rbp-49h] BYREF
  __int64 v64; // [rsp+90h] [rbp-41h] BYREF
  __m128i v65; // [rsp+98h] [rbp-39h]
  struct tagRECT v66; // [rsp+A8h] [rbp-29h] BYREF
  _DWORD v67[4]; // [rsp+B8h] [rbp-19h] BYREF

  v5 = *a2;
  v49 = 0LL;
  v6 = (struct tagRECT *)a4;
  v62 = 0LL;
  v7 = a3;
  v55 = 0LL;
  v8 = 0;
  v66 = v5;
  left = v5.left;
  top = v5.top;
  right = (unsigned int)v5.right;
  bottom = v5.bottom;
  if ( a3 == 1 )
  {
    if ( *a4 > v5.left )
      left = *a4;
    if ( a4[1] > v5.top )
      top = a4[1];
    if ( a4[2] < v5.right )
      right = a4[2];
    if ( a4[3] < v5.bottom )
      bottom = a4[3];
    if ( (unsigned int)right <= left || bottom <= top )
    {
      bottom = 0;
      right = 0LL;
      top = 0;
      left = 0;
    }
    v7 = 0;
    v6 = 0LL;
  }
  if ( *(_DWORD *)(a1 + 172) > left )
    left = *(_DWORD *)(a1 + 172);
  v13 = *(_DWORD *)(a1 + 176);
  v53 = left;
  v66.left = left;
  if ( v13 > top )
    top = v13;
  v14 = *(_DWORD *)(a1 + 180);
  v60 = top;
  v66.top = top;
  if ( v14 < (unsigned int)right )
    right = v14;
  v15 = *(_DWORD *)(a1 + 184);
  v50 = right;
  v66.right = right;
  if ( v15 < bottom )
    bottom = v15;
  v61 = bottom;
  v66.bottom = bottom;
  if ( (unsigned int)right <= left || bottom <= top )
    goto LABEL_93;
  if ( *(_DWORD *)(a1 + 152) == DisplayId::None )
  {
    v16 = *(_QWORD *)(a1 + 16);
    ++*(_DWORD *)(v16 + 936);
    D3DSurfaceLevel = CD3DTexture::GetD3DSurfaceLevel(*(CD3DTexture **)(a1 + 160), right, &v49);
    v8 = D3DSurfaceLevel;
    if ( D3DSurfaceLevel < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, D3DSurfaceLevel, 0x360u);
      v26 = *(__int64 **)(v16 + 1016);
      v27 = (__int64 *)(v16 + 1008);
      while ( v26 != v27 && *((_DWORD *)v26 + 8) == *(_DWORD *)(v16 + 936) )
      {
        *((_DWORD *)v26 + 8) = 0;
        v26 = (__int64 *)v26[1];
      }
      v28 = *v26;
      if ( (__int64 *)*v26 != v27 )
      {
        v29 = *(_QWORD **)(v16 + 1016);
        *v26 = (__int64)v27;
        v30 = *(_QWORD **)(v16 + 1000);
        *(_QWORD *)(v16 + 1016) = v26;
        *v30 = v28;
        *(_QWORD *)(v28 + 8) = v30;
        *(_QWORD *)(v16 + 1000) = v29;
        *v29 = v16 + 992;
      }
      --*(_DWORD *)(v16 + 936);
      goto LABEL_93;
    }
    v18 = (__m128i *)v6;
    v19 = v49;
    v20 = CD3DSurface::CopyPixelsToBitmap((struct CD3DResourceManager **)v49, &v66, v7, v18, a5, 0, 0);
    v8 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x36Cu);
      v21 = *(__int64 **)(v16 + 1016);
      v22 = (__int64 *)(v16 + 1008);
      while ( v21 != v22 && *((_DWORD *)v21 + 8) == *(_DWORD *)(v16 + 936) )
      {
        *((_DWORD *)v21 + 8) = 0;
        v21 = (__int64 *)v21[1];
      }
    }
    else
    {
      v21 = *(__int64 **)(v16 + 1016);
      v22 = (__int64 *)(v16 + 1008);
      while ( v21 != v22 && *((_DWORD *)v21 + 8) == *(_DWORD *)(v16 + 936) )
      {
        *((_DWORD *)v21 + 8) = 0;
        v21 = (__int64 *)v21[1];
      }
    }
    v23 = *v21;
    if ( (__int64 *)*v21 != v22 )
    {
      v24 = *(_QWORD **)(v16 + 1016);
      *v21 = (__int64)v22;
      *(_QWORD *)(v16 + 1016) = v21;
      v25 = *(_QWORD **)(v16 + 1000);
      *v25 = v23;
      *(_QWORD *)(v23 + 8) = v25;
      *(_QWORD *)(v16 + 1000) = v24;
      *v24 = v16 + 992;
    }
    --*(_DWORD *)(v16 + 936);
    goto LABEL_94;
  }
  v31 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))a5)(
          a5,
          &GUID_d82bbf04_48b7_4100_86b5_a6e5bb0e3213,
          &v62);
  v8 = v31;
  if ( v31 < 0 )
  {
    v48 = 894;
    goto LABEL_91;
  }
  v31 = (*(__int64 (__fastcall **)(__int64, int *, int *))(*(_QWORD *)v62 + 48LL))(v62, &v56, &v57);
  v8 = v31;
  if ( v31 < 0 )
  {
    v48 = 896;
    goto LABEL_91;
  }
  v67[0] = 0;
  v67[1] = 0;
  v67[2] = v56;
  v67[3] = v57;
  v31 = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64, __int64 *))(*(_QWORD *)a5 + 24LL))(a5, v67, 2LL, &v55);
  v8 = v31;
  if ( v31 < 0 )
  {
    v48 = 905;
    goto LABEL_91;
  }
  v31 = (*(__int64 (__fastcall **)(__int64, enum DXGI_FORMAT *))(*(_QWORD *)v55 + 24LL))(v55, &v58);
  v8 = v31;
  if ( v31 < 0 )
  {
    v48 = 907;
    goto LABEL_91;
  }
  v51 = GetPixelFormatSize(v58) >> 3;
  v31 = (*(__int64 (__fastcall **)(__int64, char *, __int64 *))(*(_QWORD *)v55 + 64LL))(v55, v63, &v64);
  v8 = v31;
  if ( v31 < 0 )
  {
    v48 = 910;
    goto LABEL_91;
  }
  v31 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v55 + 56LL))(v55, &v52);
  v8 = v31;
  if ( v31 < 0 )
  {
    v48 = 911;
LABEL_91:
    v46 = v31;
    goto LABEL_92;
  }
  if ( !v7 || !v6 )
  {
    v7 = 1;
    v6 = &v66;
  }
  v32 = 0;
  v54 = 0;
  v33 = v50;
  while ( 1 )
  {
    v65 = *(__m128i *)v6;
    v34 = v65.m128i_u32[1];
    v35 = v65.m128i_u32[2];
    v36 = v65.m128i_u32[3];
    v37 = _mm_cvtsi128_si32(v65);
    if ( left > v37 )
      v37 = left;
    v59 = v37;
    if ( top > v65.m128i_i32[1] )
      v34 = top;
    if ( v33 < v65.m128i_i32[2] )
      v35 = v33;
    if ( bottom < v65.m128i_i32[3] )
      v36 = bottom;
    if ( v35 <= v37 || v36 <= v34 )
      goto LABEL_78;
    v38 = v52 * (unsigned __int64)(v34 - top);
    if ( v38 > 0xFFFFFFFF )
      break;
    v39 = v51 * (unsigned __int64)(v37 - left);
    if ( v39 > 0xFFFFFFFF )
    {
      v8 = -2147024362;
      v48 = 947;
      goto LABEL_82;
    }
    v40 = v39 + v38;
    v41 = -1;
    if ( v40 >= (unsigned int)v38 )
      v41 = v40;
    v8 = v40 < (unsigned int)v38 ? 0x80070216 : 0;
    if ( v40 < (unsigned int)v38 )
    {
      v48 = 949;
      goto LABEL_82;
    }
    v42 = v51 * (unsigned __int64)(v35 - v59);
    if ( v42 > 0xFFFFFFFF )
    {
      v8 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x3BBu);
      goto LABEL_93;
    }
    v8 = 0;
    v43 = (char *)(v64 + v41);
    if ( v34 < v36 )
    {
      v44 = (unsigned int)v42;
      v45 = v36 - v34;
      do
      {
        memset_0(v43, 0, v44);
        v43 += v52;
        --v45;
      }
      while ( v45 );
      top = v60;
      bottom = v61;
      v32 = v54;
    }
    v33 = v50;
    left = v53;
LABEL_78:
    ++v32;
    ++v6;
    v54 = v32;
    if ( v32 >= v7 )
      goto LABEL_93;
  }
  v8 = -2147024362;
  v48 = 943;
LABEL_82:
  v46 = v8;
LABEL_92:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v46, v48);
LABEL_93:
  v19 = v49;
LABEL_94:
  ReleaseInterfaceNoNULL<CD2DPencil>(v55);
  ReleaseInterfaceNoNULL<ID2D1Ink>(v62);
  if ( v19 )
    CMILPoolResource::Release(v19);
  return v8;
}
