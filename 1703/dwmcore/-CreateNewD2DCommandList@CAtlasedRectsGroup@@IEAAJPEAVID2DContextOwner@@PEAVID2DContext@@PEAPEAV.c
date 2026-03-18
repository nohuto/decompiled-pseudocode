/*
 * XREFs of ?CreateNewD2DCommandList@CAtlasedRectsGroup@@IEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCD2DCommandList@@@Z @ 0x1800AF1A4
 * Callers:
 *     ?GetClippedD2D1CommandListForContext@CAtlasedRectsGroup@@QEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAVCPolygon@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x1800AF770 (-GetClippedD2D1CommandListForContext@CAtlasedRectsGroup@@QEAAJPEAVID2DContextOwner@@PEAVID2DCont.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z @ 0x180001C80 (--$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?InferAffineMatrix@MILMatrix3x2@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x180045414 (-InferAffineMatrix@MILMatrix3x2@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@.c)
 *     ?SetProduct@MILMatrix3x2@@QEAAXAEBV1@0@Z @ 0x1800454DC (-SetProduct@MILMatrix3x2@@QEAAXAEBV1@0@Z.c)
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x18004BD30 (-RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?CreateFromHeap@CD2DSharedBuffer@@SAJIPEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x1800AEB10 (-CreateFromHeap@CD2DSharedBuffer@@SAJIPEAPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasedRectsGroup::CreateNewD2DCommandList(
        __int64 **this,
        struct ID2DContextOwner *a2,
        struct ID2DContext *a3,
        struct CD2DCommandList **a4)
{
  struct ID2DContext *v4; // r12
  CAtlasedRectsGroup *v6; // rsi
  char v7; // r13
  struct ID2D1PrivateCompositorBuffer *v8; // r14
  struct ID2D1PrivateCompositorBuffer *v9; // r15
  unsigned int v10; // edi
  __int64 *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  int v14; // eax
  int v15; // ebx
  int v16; // eax
  int v17; // eax
  __int64 v18; // rax
  _DWORD *v19; // rbx
  unsigned int v20; // ebx
  char *v21; // r12
  __int64 v22; // rdx
  const __m128i *v23; // r13
  unsigned __int8 *v24; // r14
  __int64 v25; // r15
  __int64 v26; // rdi
  unsigned int v27; // esi
  __m128 v28; // xmm6
  float v29; // xmm7_4
  int *v30; // rax
  int v31; // ecx
  char *v32; // rdx
  __int128 v33; // xmm1
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  int v40; // eax
  __int64 v41; // r10
  unsigned int v42; // edx
  __int64 v43; // rcx
  unsigned int v44; // eax
  __int64 v45; // rcx
  unsigned int v46; // edx
  unsigned int v47; // eax
  __int64 v48; // rax
  int v50; // eax
  int v51; // eax
  int v52; // r9d
  unsigned int v53; // [rsp+28h] [rbp-E0h]
  unsigned int v54; // [rsp+6Ch] [rbp-9Ch]
  __int64 v55; // [rsp+70h] [rbp-98h] BYREF
  void *v56; // [rsp+78h] [rbp-90h] BYREF
  struct ID2D1PrivateCompositorBuffer *v57; // [rsp+80h] [rbp-88h] BYREF
  __int64 v58; // [rsp+88h] [rbp-80h] BYREF
  struct ID2D1PrivateCompositorBuffer *v59; // [rsp+90h] [rbp-78h] BYREF
  __int128 v60; // [rsp+98h] [rbp-70h]
  float v61[6]; // [rsp+A8h] [rbp-60h] BYREF
  CAtlasedRectsGroup *v62; // [rsp+C0h] [rbp-48h]
  struct ID2DContext *v63; // [rsp+C8h] [rbp-40h]
  __int64 v64; // [rsp+D0h] [rbp-38h] BYREF
  struct CD2DCommandList **v65; // [rsp+D8h] [rbp-30h]
  __int128 v66; // [rsp+E0h] [rbp-28h]
  char v67[8]; // [rsp+F8h] [rbp-10h] BYREF
  __int128 v68; // [rsp+100h] [rbp-8h] BYREF
  __m128 v69; // [rsp+110h] [rbp+8h] BYREF
  __int128 v70; // [rsp+120h] [rbp+18h] BYREF
  __int64 v71; // [rsp+130h] [rbp+28h]
  _BYTE v72[32]; // [rsp+138h] [rbp+30h] BYREF
  __int128 v73; // [rsp+158h] [rbp+50h] BYREF
  __int128 v74; // [rsp+168h] [rbp+60h]
  __int128 v75; // [rsp+178h] [rbp+70h]
  __int128 v76; // [rsp+188h] [rbp+80h]
  __int128 v77; // [rsp+198h] [rbp+90h]
  __m256i v78; // [rsp+1A8h] [rbp+A0h]
  __int128 v79; // [rsp+1C8h] [rbp+C0h]
  __int128 v80; // [rsp+1D8h] [rbp+D0h]
  int v81; // [rsp+1E8h] [rbp+E0h]

  v4 = a3;
  v63 = a3;
  v65 = a4;
  v6 = (CAtlasedRectsGroup *)this;
  v7 = 0;
  v62 = (CAtlasedRectsGroup *)this;
  v8 = 0LL;
  v58 = 0LL;
  v9 = 0LL;
  v55 = 0LL;
  v10 = 0;
  v57 = 0LL;
  v59 = 0LL;
  if ( *((_DWORD *)this + 18) )
  {
    v11 = this[10];
    v12 = *((unsigned int *)v6 + 18);
    do
    {
      v13 = *v11++;
      v10 += *(_DWORD *)(v13 + 60);
      --v12;
    }
    while ( v12 );
  }
  v54 = 0;
  v14 = (**(__int64 (__fastcall ***)(struct ID2DContextOwner *, __int64, __int64 *))a2)(
          a2,
          (*((_QWORD *)v6 + 8) + 8LL) & -(__int64)(*((_QWORD *)v6 + 8) != 0LL),
          &v58);
  v15 = v14;
  if ( v14 < 0 )
  {
    v53 = 173;
    goto LABEL_46;
  }
  v64 = v58;
  v16 = CD2DSharedBuffer::CreateFromHeap(0x90uLL, &v57);
  v15 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xB1u);
    v8 = v57;
    goto LABEL_29;
  }
  v17 = CD2DSharedBuffer::CreateFromHeap(148 * v10, &v59);
  v15 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xB4u);
    v8 = v57;
    v9 = v59;
    goto LABEL_29;
  }
  v8 = v57;
  v18 = (*(__int64 (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)v57 + 24LL))(v57);
  v9 = v59;
  v19 = (_DWORD *)v18;
  v56 = (void *)(*(__int64 (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)v59 + 24LL))(v59);
  memset_0(v19, 0, 0x90uLL);
  memset_0(v56, 0, 148LL * v10);
  v19[5] = v10;
  *v19 = 1;
  v19[1] = 1;
  v19[11] = 1;
  v20 = 0;
  if ( *((_DWORD *)v6 + 18) )
  {
    v21 = (char *)v56;
    do
    {
      v22 = *(_QWORD *)(*((_QWORD *)v6 + 10) + 8LL * v20);
      v23 = *(const __m128i **)(v22 + 88);
      v24 = *(unsigned __int8 **)(v22 + 104);
      if ( *(_DWORD *)(v22 + 60) )
      {
        v25 = *(unsigned int *)(v22 + 60);
        v26 = *(_QWORD *)(v22 + 72) - (_QWORD)v23;
        v27 = v54;
        *(_QWORD *)&v60 = 0x3F8000003F800000LL;
        DWORD2(v60) = 1065353216;
        do
        {
          v28 = (__m128)_mm_loadu_si128(v23);
          v29 = (float)*v24;
          v68 = *(__int128 *)((char *)v23 + v26);
          v69 = v28;
          memset_0(&v73, 0, 0x94uLL);
          HIDWORD(v75) = 0;
          LODWORD(v66) = v28.m128_i32[0];
          DWORD1(v66) = _mm_shuffle_ps(v28, v28, 85).m128_u32[0];
          DWORD2(v66) = _mm_shuffle_ps(v28, v28, 170).m128_u32[0];
          HIDWORD(v66) = _mm_shuffle_ps(v28, v28, 255).m128_u32[0];
          v74 = _xmm;
          v73 = v66;
          *(_QWORD *)&v75 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
          MILMatrix3x2::InferAffineMatrix((__int64)v72, v69.m128_f32, (float *)&v68);
          v28.m128_f32[0] = 1.0
                          / (float)*(int *)((*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v58 + 40LL))(
                                              v58,
                                              &v56)
                                          + 4);
          v30 = (int *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v58 + 40LL))(v58, v67);
          v61[1] = 0.0;
          v61[2] = 0.0;
          v31 = *v30;
          v61[4] = 0.0;
          v61[5] = 0.0;
          v61[3] = v28.m128_f32[0];
          v61[0] = 1.0 / (float)v31;
          MILMatrix3x2::SetProduct(
            (MILMatrix3x2 *)&v70,
            (const struct MILMatrix3x2 *)v72,
            (const struct MILMatrix3x2 *)v61);
          v81 = -1;
          v78.m256i_i64[0] = v71;
          *((float *)&v60 + 3) = v29 / 255.0;
          v76 = v60;
          v32 = &v21[148 * v27];
          v77 = v70;
          *(_OWORD *)&v78.m256i_u64[1] = _xmm;
          v33 = v74;
          *(_OWORD *)v32 = v73;
          *((_OWORD *)v32 + 1) = v33;
          ++v23;
          v34 = v76;
          *((_OWORD *)v32 + 2) = v75;
          v35 = v77;
          ++v27;
          ++v24;
          *((_OWORD *)v32 + 3) = v34;
          v36 = *(_OWORD *)v78.m256i_i8;
          *((_OWORD *)v32 + 4) = v35;
          v37 = *(_OWORD *)&v78.m256i_u64[2];
          *((_OWORD *)v32 + 5) = v36;
          v38 = v79;
          *((_OWORD *)v32 + 6) = v37;
          v39 = v80;
          v40 = v81;
          *((_OWORD *)v32 + 7) = v38;
          *((_OWORD *)v32 + 8) = v39;
          *((_DWORD *)v32 + 36) = v40;
          --v25;
        }
        while ( v25 );
        v54 = v27;
        v6 = v62;
      }
      ++v20;
    }
    while ( v20 < *((_DWORD *)v6 + 18) );
    v8 = v57;
    v9 = v59;
    v4 = v63;
    v7 = 0;
  }
  v14 = (*(__int64 (__fastcall **)(struct ID2DContext *, struct ID2D1PrivateCompositorBuffer *, struct ID2D1PrivateCompositorBuffer *, __int64 *, __int64, _QWORD, _QWORD, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v4 + 264LL))(
          v4,
          v8,
          v9,
          &v64,
          1LL,
          0LL,
          0LL,
          0LL,
          0LL,
          &v55);
  v15 = v14;
  if ( v14 < 0 )
  {
    v53 = 250;
LABEL_46:
    v52 = v14;
    goto LABEL_47;
  }
  v41 = v55;
  v42 = v54;
  v56 = (char *)v6 + 56;
  v43 = *(unsigned int *)(v55 + 80);
  v44 = v43 + 1;
  if ( (int)v43 + 1 >= (unsigned int)v43 )
    v42 = v43 + 1;
  v15 = v44 < (unsigned int)v43 ? 0x80070216 : 0;
  if ( v44 < (unsigned int)v43 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xB5u);
  }
  else if ( v42 > *(_DWORD *)(v55 + 76) )
  {
    v50 = DynArrayImpl<0>::AddMultipleAndSet(v55 + 56, 8u, 1, &v56);
    v15 = v50;
    if ( v50 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v50, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)(v55 + 56) + 8 * v43) = v56;
    *(_DWORD *)(v41 + 80) = v42;
  }
  if ( v15 < 0 )
  {
    v53 = 252;
    goto LABEL_41;
  }
  v45 = *((unsigned int *)v6 + 28);
  v7 = 1;
  v46 = v54;
  v47 = v45 + 1;
  if ( (int)v45 + 1 >= (unsigned int)v45 )
    v46 = v45 + 1;
  v15 = v47 < (unsigned int)v45 ? 0x80070216 : 0;
  if ( v47 < (unsigned int)v45 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xB5u);
  }
  else if ( v46 > *((_DWORD *)v6 + 27) )
  {
    v51 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v6 + 88, 8u, 1, &v55);
    v15 = v51;
    if ( v51 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v51, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)v6 + 11) + 8 * v45) = v55;
    *((_DWORD *)v6 + 28) = v46;
  }
  if ( v15 < 0 )
  {
    v53 = 255;
LABEL_41:
    v52 = v15;
LABEL_47:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v52, v53);
    goto LABEL_29;
  }
  v48 = v55;
  v55 = 0LL;
  *v65 = (struct CD2DCommandList *)v48;
LABEL_29:
  if ( v15 < 0 && v7 )
    CD2DResource::RemoveResourceNotifier(
      (CD2DResource *)(v55 + 16),
      (const struct IDeviceResourceNotify *)(((unsigned __int64)v6 + 56) & -(__int64)(v6 != 0LL)));
  ReleaseInterfaceNoNULL<ID2D1Ink>(v55);
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v8);
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v9);
  ReleaseInterfaceNoNULL<CD2DPencil>(v58);
  return (unsigned int)v15;
}
