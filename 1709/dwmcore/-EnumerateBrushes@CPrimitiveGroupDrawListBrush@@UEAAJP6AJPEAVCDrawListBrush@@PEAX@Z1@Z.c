/*
 * XREFs of ?EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEAAJP6AJPEAVCDrawListBrush@@PEAX@Z1@Z @ 0x18009F190
 * Callers:
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@@Z @ 0x180048CC0 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@@Z.c)
 * Callees:
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x180035760 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?GetIteratorForState@CPrimitiveGroupDrawListGenerator@@QEBA?AVIterator@CPrimitiveBuffer@@I@Z @ 0x180046DCC (-GetIteratorForState@CPrimitiveGroupDrawListGenerator@@QEBA-AVIterator@CPrimitiveBuffer@@I@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x180070D50 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _lambda_e895dadb580e6fc31ae2a2922a07237f_::_lambda_invoker_cdecl_ @ 0x18009F7D0 (_lambda_e895dadb580e6fc31ae2a2922a07237f_--_lambda_invoker_cdecl_.c)
 *     ?IsHollowRect@CoordMap@@QEBA_NAEBUD2D_RECT_F@@@Z @ 0x18009F824 (-IsHollowRect@CoordMap@@QEBA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01H@Z @ 0x18009F8A8 (-AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01H@Z.c)
 *     ?TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z @ 0x1800B5CA0 (-TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@P.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?ComputeTexPositions@CoordMap@@QEBAJHV?$span@$$CBM@gsl@@0AEAV?$DynArray@M$0A@@@1M@Z @ 0x180155634 (-ComputeTexPositions@CoordMap@@QEBAJHV-$span@$$CBM@gsl@@0AEAV-$DynArray@M$0A@@@1M@Z.c)
 */

__int64 __fastcall CPrimitiveGroupDrawListBrush::EnumerateBrushes(
        CPrimitiveGroupDrawListBrush *this,
        int (*a2)(struct CDrawListBrush *, void *),
        void *a3)
{
  signed int v4; // esi
  bool v5; // zf
  unsigned int v6; // r8d
  __int64 v7; // rcx
  __int64 v8; // r11
  __int64 i; // r13
  float v10; // xmm9_4
  float v11; // xmm10_4
  float v12; // xmm7_4
  float v13; // xmm8_4
  char v14; // al
  __int64 v15; // r11
  __int64 v16; // rdi
  __int64 v17; // rsi
  int Current; // eax
  __int64 v19; // rcx
  char *v20; // r15
  int v21; // edx
  __int64 v22; // rcx
  __int64 v23; // rcx
  char *v24; // rdi
  char v25; // al
  FLOAT v26; // xmm0_4
  FLOAT v27; // xmm1_4
  char *v28; // r8
  char *v29; // rdx
  int v30; // r9d
  FLOAT v31; // xmm0_4
  unsigned int v32; // xmm1_4
  unsigned int v33; // xmm0_4
  int v34; // eax
  __int128 v35; // xmm1
  signed int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // rcx
  int v39; // eax
  struct CThreadContext *v40; // rcx
  __int16 v42; // ax
  FLOAT v43; // xmm5_4
  FLOAT v44; // xmm4_4
  unsigned int v45; // xmm3_4
  unsigned int v46; // xmm2_4
  __int128 v47; // xmm1
  struct D2D_RECT_F *v48; // r9
  FLOAT v49; // xmm7_4
  FLOAT v50; // xmm6_4
  __int128 v51; // xmm0
  int v52; // r9d
  signed int v53; // eax
  signed int v54; // eax
  FLOAT v55; // xmm1_4
  FLOAT v56; // xmm2_4
  unsigned int v57; // [rsp+48h] [rbp-C0h]
  struct D2D_RECT_F v58; // [rsp+50h] [rbp-B8h] BYREF
  _DWORD v59[2]; // [rsp+60h] [rbp-A8h] BYREF
  _DWORD v60[2]; // [rsp+68h] [rbp-A0h] BYREF
  void *v61; // [rsp+70h] [rbp-98h]
  __int64 v62; // [rsp+78h] [rbp-90h]
  struct D2D_MATRIX_3X2_F v63; // [rsp+88h] [rbp-80h] BYREF
  int (*v64)(struct CDrawListBrush *, void *); // [rsp+A0h] [rbp-68h]
  struct CThreadContext *v65; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v66; // [rsp+B8h] [rbp-50h]
  __int128 v67; // [rsp+C8h] [rbp-40h] BYREF
  char v68[8]; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v69; // [rsp+E0h] [rbp-28h]
  __int64 v70; // [rsp+E8h] [rbp-20h]
  unsigned int v71; // [rsp+F0h] [rbp-18h]
  struct D2D_RECT_F v72; // [rsp+F8h] [rbp-10h] BYREF
  __int128 v73; // [rsp+108h] [rbp+0h]
  int v74; // [rsp+118h] [rbp+10h]
  FLOAT *v75; // [rsp+128h] [rbp+20h] BYREF
  int *v76; // [rsp+130h] [rbp+28h]
  int v77; // [rsp+138h] [rbp+30h]
  __int64 v78; // [rsp+13Ch] [rbp+34h]
  unsigned int v79; // [rsp+144h] [rbp+3Ch]
  int v80; // [rsp+148h] [rbp+40h] BYREF
  __int16 v81; // [rsp+14Ch] [rbp+44h]
  char v82; // [rsp+14Eh] [rbp+46h]
  __int128 v83; // [rsp+150h] [rbp+48h] BYREF
  __int128 v84; // [rsp+160h] [rbp+58h] BYREF
  char v85; // [rsp+170h] [rbp+68h]
  void *v86[2]; // [rsp+178h] [rbp+70h] BYREF
  int v87; // [rsp+188h] [rbp+80h]
  __int64 v88; // [rsp+18Ch] [rbp+84h]
  _BYTE v89[16]; // [rsp+198h] [rbp+90h] BYREF
  void *lpMem; // [rsp+1A8h] [rbp+A0h] BYREF
  _BYTE *v91; // [rsp+1B0h] [rbp+A8h]
  int v92; // [rsp+1B8h] [rbp+B0h]
  __int64 v93; // [rsp+1BCh] [rbp+B4h]
  _BYTE v94[160]; // [rsp+1C8h] [rbp+C0h] BYREF
  void *v95; // [rsp+268h] [rbp+160h]
  _BYTE *v96; // [rsp+270h] [rbp+168h]
  int v97; // [rsp+278h] [rbp+170h]
  __int64 v98; // [rsp+27Ch] [rbp+174h]
  _BYTE v99[160]; // [rsp+288h] [rbp+180h] BYREF
  void *v100; // [rsp+328h] [rbp+220h]
  _BYTE *v101; // [rsp+330h] [rbp+228h]
  int v102; // [rsp+338h] [rbp+230h]
  __int64 v103; // [rsp+33Ch] [rbp+234h]
  _BYTE v104[48]; // [rsp+348h] [rbp+240h] BYREF
  void *retaddr; // [rsp+420h] [rbp+318h]

  v61 = a3;
  v64 = a2;
  lpMem = v94;
  v4 = 0;
  v91 = v94;
  v92 = 10;
  v5 = *((_DWORD *)this + 6) == 1;
  v95 = v99;
  v96 = v99;
  v100 = v104;
  v101 = v104;
  v102 = 3;
  v103 = 3LL;
  v93 = 10LL;
  v97 = 10;
  v98 = 10LL;
  if ( v5 )
  {
    v42 = *((_WORD *)this + 32);
    v43 = *((float *)this + 10);
    v44 = *((float *)this + 11);
    v45 = *((_DWORD *)this + 13);
    v46 = *((_DWORD *)this + 14);
    v47 = *(_OWORD *)((char *)this + 84);
    v48 = (struct D2D_RECT_F *)*((unsigned __int8 *)this + 100);
    v49 = *((FLOAT *)this + 7);
    v50 = *((FLOAT *)this + 8);
    LODWORD(v76) = *((_DWORD *)this + 9);
    LODWORD(v78) = *((_DWORD *)this + 12);
    v80 = *((_DWORD *)this + 15);
    v51 = *(_OWORD *)((char *)this + 68);
    v81 = v42;
    LOBYTE(v42) = *((_BYTE *)this + 66);
    v83 = v51;
    v82 = v42;
    v75 = (FLOAT *)__PAIR64__(LODWORD(v50), LODWORD(v49));
    *((FLOAT *)&v76 + 1) = v43;
    v77 = LODWORD(v44);
    HIDWORD(v78) = v45;
    v79 = v46;
    v72.left = v49;
    v72.top = v50;
    v72.right = v43;
    v72.bottom = v44;
    *(_QWORD *)&v73 = __PAIR64__(v46, v45);
    v84 = v47;
    v85 = (char)v48;
    D2DMatrixHelper::TransformRect_AxisAlignedPreserving(
      (CPrimitiveGroupDrawListBrush *)((char *)this + 8),
      &v72,
      &v63,
      v48);
    v53 = CoordMap::AddNineGrid(
            (CoordMap *)&lpMem,
            0,
            (const struct D2D_RECT_F *)((char *)this + 8),
            (const struct Insets *)&v83,
            (const struct D2D_RECT_F *)&v63,
            (const struct Insets *)&v84,
            v52);
    v4 = v53;
    if ( v53 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v53, 0x38u);
      goto LABEL_52;
    }
  }
  v6 = 0;
  v57 = 0;
  if ( !*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 18) + 24LL) + 8LL) )
    goto LABEL_52;
  while ( 1 )
  {
    v7 = *((_QWORD *)this + 18);
    v62 = **(_QWORD **)(v7 + 24) + 144LL * v6;
    CPrimitiveGroupDrawListGenerator::GetIteratorForState(v7, (__int64)v68, v6);
    if ( (*(_BYTE *)(v8 + 4) & 2) == 0
      && *(_DWORD *)v8
      && *(_DWORD *)(v8 + 40) < *(_DWORD *)(*((_QWORD *)this + 18) + 80LL) )
    {
      break;
    }
LABEL_51:
    v6 = v57 + 1;
    v57 = v6;
    if ( v6 >= *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 18) + 24LL) + 8LL) )
      goto LABEL_52;
  }
  for ( i = v69; ; i += v71 )
  {
    v10 = fmaxf(*(float *)i, *((float *)this + 2));
    v11 = fminf(*(float *)(i + 8), *((float *)this + 4));
    v12 = fmaxf(*(float *)(i + 4), *((float *)this + 3));
    v13 = fminf(*(float *)(i + 12), *((float *)this + 5));
    v58.left = v10;
    v58.top = v12;
    v58.right = v11;
    v58.bottom = v13;
    if ( v11 <= v10 || (v14 = 1, v13 <= v12) )
      v14 = 0;
    if ( v14 && !CoordMap::IsHollowRect((CoordMap *)&lpMem, &v58) )
      break;
LABEL_50:
    if ( i == v70 )
      goto LABEL_51;
  }
  v16 = 3LL * *(unsigned int *)(v15 + 40);
  v17 = *(_QWORD *)(*((_QWORD *)this + 18) + 120LL);
  Current = CThreadContext::GetCurrent((struct CThreadContext **)v63.m[2]);
  if ( Current < 0 )
    ModuleFailFastForHRESULT((unsigned int)Current, retaddr);
  v19 = *(_QWORD *)&v63.m[2][0];
  v20 = 0LL;
  v21 = *(_DWORD *)(*(_QWORD *)&v63.m[2][0] + 124LL);
  if ( v21 )
  {
    v20 = *(char **)(*(_QWORD *)&v63.m[2][0] + 128LL);
    *(_QWORD *)(*(_QWORD *)&v63.m[2][0] + 128LL) = *(_QWORD *)v20;
    *(_DWORD *)(v19 + 124) = v21 - 1;
  }
  if ( v20 || (v20 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0xB0uLL)) != 0LL )
  {
    *(_OWORD *)(v20 + 8) = 0LL;
    *(_QWORD *)v20 = &CSurfaceDrawListBrush::`vftable';
    v22 = *(_QWORD *)(v17 + 8 * v16);
    *((_QWORD *)v20 + 18) = v22;
    if ( v22 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 8LL))(v22);
    v23 = *(_QWORD *)(v17 + 8 * v16 + 8);
    *((_QWORD *)v20 + 19) = v23;
    if ( v23 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
    v20[160] = *(_BYTE *)(v17 + 8 * v16 + 16);
    v20[168] = 0;
  }
  else
  {
    v20 = 0LL;
  }
  if ( v20 )
  {
    v4 = 0;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x16u);
    v4 = -2147024882;
  }
  v24 = 0LL;
  if ( v20 )
    v24 = v20;
  if ( v4 >= 0 )
  {
    v24[168] = 1;
    if ( HIDWORD(v93) || HIDWORD(v98) || (v25 = 1, HIDWORD(v103)) )
      v25 = 0;
    if ( !v25 )
    {
      v75 = (FLOAT *)&v80;
      *((_QWORD *)&v66 + 1) = 2LL;
      v76 = &v80;
      *(_QWORD *)&v63.m[1][0] = 2LL;
      v86[0] = v89;
      *(float *)v60 = v10;
      v86[1] = v89;
      *(float *)&v60[1] = v11;
      *(_QWORD *)&v66 = v59;
      *(_QWORD *)&v63.m11 = v60;
      v67 = v66;
      *(float *)v59 = v12;
      *(float *)&v59[1] = v13;
      v77 = 2;
      v78 = 2LL;
      v87 = 2;
      v88 = 2LL;
      v72 = *(struct D2D_RECT_F *)&v63.m11;
      v54 = CoordMap::ComputeTexPositions(
              (unsigned int)&lpMem,
              0,
              (unsigned int)&v72,
              (unsigned int)&v67,
              (__int64)&v75,
              (__int64)v86,
              LODWORD(FLOAT_1_1920929eN7));
      v4 = v54;
      if ( v54 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v54, 0x86u);
        DynArrayImpl<1>::~DynArrayImpl<1>(v86);
        DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v75);
        goto LABEL_74;
      }
      v55 = v75[HIDWORD(v78) - 1];
      v56 = *(float *)v86[0];
      v58.left = *v75;
      v58.top = v56;
      v58.bottom = *((FLOAT *)v86[0] + (unsigned int)(HIDWORD(v88) - 1));
      v58.right = v55;
      DynArrayImpl<1>::~DynArrayImpl<1>(v86);
      DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v75);
    }
    v26 = *(float *)(i + 64);
    v27 = *(float *)(i + 68);
    v72.right = 0.0;
    v28 = (char *)(i + 88);
    v29 = (char *)this + 64;
    v30 = *(_DWORD *)(i + 44);
    v72.left = v26;
    v31 = *(float *)(i + 72);
    v72.top = v27;
    v32 = *(_DWORD *)(i + 76);
    v72.bottom = v31;
    v33 = *(_DWORD *)(i + 80);
    *(_QWORD *)&v73 = v32;
    *((_QWORD *)&v73 + 1) = __PAIR64__(*(_DWORD *)(i + 84), v33);
    v74 = 1065353216;
    *((_DWORD *)v24 + 6) = 0;
    if ( v24 + 28 != (char *)this + 28 )
    {
      *(_OWORD *)(v24 + 28) = *(_OWORD *)((char *)this + 28);
      *(_OWORD *)(v24 + 44) = *(_OWORD *)((char *)this + 44);
      *((_DWORD *)v24 + 15) = *((_DWORD *)this + 15);
    }
    if ( v24 + 64 != v29 )
    {
      *((_WORD *)v24 + 32) = *(_WORD *)v29;
      v24[66] = *((_BYTE *)this + 66);
    }
    *((_DWORD *)v24 + 6) = 2;
    if ( v24 + 68 != (char *)&v72 )
    {
      v34 = v74;
      v35 = v73;
      *(struct D2D_RECT_F *)(v24 + 68) = v72;
      *(_OWORD *)(v24 + 84) = v35;
      *((_DWORD *)v24 + 25) = v34;
    }
    v24[140] = 1;
    if ( v24 + 104 != (char *)&v58 )
      *(struct D2D_RECT_F *)(v24 + 104) = v58;
    *((_DWORD *)v24 + 30) = v30;
    if ( i == -88 )
    {
      *(_OWORD *)(v24 + 124) = _xmm;
    }
    else if ( v24 + 124 != v28 )
    {
      *(_OWORD *)(v24 + 124) = *(_OWORD *)v28;
    }
    if ( v64 == lambda_e895dadb580e6fc31ae2a2922a07237f_::_lambda_invoker_cdecl_ )
      v36 = lambda_e895dadb580e6fc31ae2a2922a07237f_::_lambda_invoker_cdecl_((struct CDrawListBrush *)v24, v61);
    else
      v36 = ((__int64 (__fastcall *)(char *, void *))v64)(v24, v61);
    v4 = v36;
    if ( v36 >= 0 )
    {
      v37 = *((_QWORD *)v24 + 19);
      if ( v37 )
      {
        *((_QWORD *)v24 + 19) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
      }
      v38 = *((_QWORD *)v24 + 18);
      if ( v38 )
      {
        *((_QWORD *)v24 + 18) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
      }
      v39 = CThreadContext::GetCurrent(&v65);
      if ( v39 < 0 )
        ModuleFailFastForHRESULT((unsigned int)v39, retaddr);
      v40 = v65;
      if ( *((_DWORD *)v65 + 31) >= *((_DWORD *)v65 + 30) )
      {
        WPF::ProcessHeapImpl::Free(v24);
      }
      else
      {
        *(_QWORD *)v24 = *((_QWORD *)v65 + 16);
        ++*((_DWORD *)v40 + 31);
        *((_QWORD *)v40 + 16) = v24;
      }
      goto LABEL_50;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v36, 0x97u);
LABEL_74:
    CSurfaceDrawListBrush::`vector deleting destructor'((CSurfaceDrawListBrush *)v24, 1);
    goto LABEL_52;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0x73u);
  if ( v24 )
    goto LABEL_74;
LABEL_52:
  if ( v100 != v101 )
  {
    WPF::ProcessHeapImpl::Free(v100);
    v100 = 0LL;
  }
  if ( v95 != v96 )
  {
    WPF::ProcessHeapImpl::Free(v95);
    v95 = 0LL;
  }
  if ( lpMem != v91 )
    WPF::ProcessHeapImpl::Free(lpMem);
  return (unsigned int)v4;
}
