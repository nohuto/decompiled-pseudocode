/*
 * XREFs of ?PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x1800551E0
 * Callers:
 *     ?PreComputeWorker@CVisualTree@@IEAAJPEAVCDirtyRegion@@@Z @ 0x180030CC0 (-PreComputeWorker@CVisualTree@@IEAAJPEAVCDirtyRegion@@@Z.c)
 * Callees:
 *     ?IsInTree@CVisualTree@@QEBA_NPEBVCVisual@@@Z @ 0x180031A14 (-IsInTree@CVisualTree@@QEBA_NPEBVCVisual@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18004EC04 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?ComputeLayoutSize@CVisual@@QEAA_NXZ @ 0x18004F460 (-ComputeLayoutSize@CVisual@@QEAA_NXZ.c)
 *     ??$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCPreComputeContext@@W4WalkReason@@@Z @ 0x18005B220 (--$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEA.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?DirtyIfChanged@CPreComputeHelper@@QEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@_N@Z @ 0x1800B0634 (-DirtyIfChanged@CPreComputeHelper@@QEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@_N@Z.c)
 *     ?BuildTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@_K@Z @ 0x1800B06F0 (-BuildTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualT.c)
 *     ?ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z @ 0x1800B0A10 (-ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z.c)
 *     ?Push@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAJAEBQEAVCVisual@@@Z @ 0x1800B100C (-Push@-$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAJAEBQEAVCVisual@@@Z.c)
 *     ?Pop@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAA_NPEAPEAVCVisual@@@Z @ 0x1800B1154 (-Pop@-$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAA_NPEAPEAVCVisual@@@Z.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800B540C (-Push@-$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmap.c)
 *     ?Create@CContentBounder@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800BD448 (-Create@CContentBounder@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPreComputeContext::PreCompute(
        CPreComputeContext *this,
        const struct CVisualTree *a2,
        struct CDirtyRegion *a3,
        struct CBackdropRegion *a4)
{
  __int64 v5; // r10
  unsigned int v6; // esi
  int v7; // r12d
  int v8; // eax
  int v9; // eax
  int v10; // eax
  CVisualTree *v11; // r10
  __int64 v12; // rax
  __int64 v13; // rdi
  unsigned int v14; // r14d
  unsigned int v15; // r8d
  struct CComposition *v16; // r15
  CVisual *v17; // r11
  CVisual *v18; // rax
  CVisual *v19; // rcx
  char *v20; // rdi
  unsigned __int64 v21; // rsi
  struct _LIST_ENTRY *v22; // rax
  __int64 (__usercall *v23)@<rax>(CTransformParentPreComputeHelper *__hidden@<rcx>, struct CComposition *@<rdx>, const struct CVisualTree *@<r8>, struct CVisual *@<r9>, unsigned __int64); // rax
  CTransformParentPreComputeHelper *v24; // rcx
  int v25; // eax
  __int64 (__fastcall *v26)(CTransformParentPreComputeHelper *__hidden, const struct CVisualTree *, unsigned __int64, bool); // rax
  CTransformParentPreComputeHelper *v27; // rcx
  int v28; // eax
  unsigned int v29; // edi
  int v30; // eax
  int v31; // eax
  int v32; // eax
  __int64 v33; // r14
  int v34; // r15d
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // eax
  int v44; // eax
  int v45; // eax
  int v46; // eax
  __int64 v47; // rdi
  int v48; // eax
  int v49; // eax
  int v50; // eax
  CVisualTree *v51; // rdx
  unsigned int v53; // eax
  __int64 v54; // rsi
  unsigned int v55; // eax
  __int64 v56; // rdi
  __int64 v57; // rdi
  __int64 v58; // rdi
  unsigned int v59; // eax
  __int64 v60; // rdi
  unsigned int v61; // eax
  __int64 v62; // rdi
  unsigned int v63; // eax
  __int64 v64; // rdi
  unsigned int v65; // eax
  __int64 v66; // rdi
  unsigned int v67; // eax
  __int64 v68; // rdi
  unsigned int v69; // eax
  __int64 v70; // rdi
  unsigned int v71; // eax
  __int64 v72; // rdi
  unsigned int v73; // eax
  __int64 v74; // rdi
  unsigned int v75; // eax
  int v76; // eax
  int v77; // eax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v79; // r10
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v81; // r14
  __int64 v82; // rcx
  const struct CVisual *v83; // rax
  struct CVisual *v84; // r10
  const struct CVisualTree *v85; // r11
  int v86; // eax
  SIZE_T v87; // r8
  LPVOID v88; // rsi
  int v89; // r9d
  SIZE_T v90; // r8
  LPVOID v91; // rsi
  int v92; // r9d
  SIZE_T v93; // r8
  LPVOID v94; // rsi
  int v95; // r9d
  SIZE_T v96; // r8
  LPVOID v97; // rsi
  int v98; // r9d
  LPVOID v99; // rsi
  int v100; // r9d
  SIZE_T v101; // r8
  LPVOID v102; // rsi
  int v103; // r9d
  SIZE_T v104; // r8
  LPVOID v105; // rsi
  int v106; // r9d
  SIZE_T v107; // r8
  LPVOID v108; // rsi
  int v109; // r9d
  SIZE_T v110; // r8
  LPVOID v111; // rsi
  int v112; // r9d
  SIZE_T v113; // r8
  LPVOID v114; // rsi
  int v115; // r9d
  SIZE_T v116; // r8
  LPVOID v117; // rbp
  int v118; // r9d
  SIZE_T v119; // r8
  LPVOID v120; // rsi
  int v121; // r9d
  SIZE_T v122; // r8
  LPVOID v123; // rsi
  int v124; // r9d
  SIZE_T v125; // r8
  LPVOID v126; // rdi
  unsigned int v127[4]; // [rsp+20h] [rbp-68h]
  unsigned int v128; // [rsp+20h] [rbp-68h]
  __int64 v129; // [rsp+30h] [rbp-58h] BYREF
  int v130; // [rsp+38h] [rbp-50h]
  void *lpMem; // [rsp+40h] [rbp-48h]
  int v132; // [rsp+48h] [rbp-40h]
  CVisual *v133; // [rsp+90h] [rbp+8h] BYREF
  CVisualTree *v134; // [rsp+98h] [rbp+10h]

  v134 = a2;
  v5 = *(_QWORD *)(*(_QWORD *)this + 488LL);
  if ( v5 && *(_BYTE *)(v5 + 24) )
    *(_BYTE *)(v5 + 26) = 1;
  v6 = 0;
  *((_QWORD *)this + 75) = a3;
  *((_QWORD *)this + 76) = a4;
  v7 = 0;
  if ( !*((_QWORD *)this + 66) )
  {
    v76 = CContentBounder::Create(*(struct CComposition **)this, (struct CContentBounder **)this + 66);
    v7 = v76;
    if ( v76 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v76, 0x3A1u);
  }
  if ( v7 < 0 )
  {
    v128 = 55;
    goto LABEL_309;
  }
  *((_DWORD *)this + 2) = 0;
  LODWORD(v133) = 1;
  v8 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((char *)this + 8, &v133);
  v7 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x3Au);
    goto LABEL_73;
  }
  *((_DWORD *)this + 10) = 0;
  LODWORD(v133) = 1;
  v9 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((char *)this + 40, &v133);
  v7 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x3Du);
    goto LABEL_73;
  }
  LODWORD(v133) = 0;
  *((_DWORD *)this + 18) = 0;
  v10 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((char *)this + 72, &v133);
  v7 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x40u);
    goto LABEL_73;
  }
  v11 = v134;
  v7 = 0;
  *((_DWORD *)this + 26) = 0;
  v12 = *((_QWORD *)v11 + 3);
  v13 = *(_QWORD *)(v12 + 80);
  if ( v13 && (*(_BYTE *)(v13 + 88) & 1) != 0 )
  {
    v133 = *(CVisual **)(v12 + 80);
    v129 = 0LL;
    lpMem = 0LL;
    v130 = 0;
    v132 = 0;
    do
    {
      v77 = CWatermarkStack<CVisual *,64,2,10>::Push(&v129, &v133);
      v7 = v77;
      if ( v77 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v77, 0x3E4u);
        goto LABEL_157;
      }
      v13 = *(_QWORD *)(v13 + 80);
      v133 = (CVisual *)v13;
    }
    while ( v13 );
    do
    {
      CWatermarkStack<CVisual *,64,2,10>::Pop(&v129, &v133);
      CVisual::ComputeLayoutSize(v133);
    }
    while ( (_DWORD)v129 );
LABEL_157:
    WPF::ProcessHeapImpl::Free(lpMem);
    v11 = v134;
  }
  if ( v7 < 0 )
  {
    v128 = 70;
    goto LABEL_309;
  }
  v7 = 0;
  v14 = 0;
  v15 = *(_DWORD *)(*(_QWORD *)this + 1016LL);
  LODWORD(v133) = v15;
  if ( !v15 )
    goto LABEL_35;
  while ( 1 )
  {
    v16 = *(struct CComposition **)this;
    v17 = *(CVisual **)(*(_QWORD *)(*(_QWORD *)this + 992LL) + 8LL * v14);
    v18 = v17;
    v19 = v17;
    if ( v17 )
      break;
LABEL_34:
    if ( ++v14 >= v15 )
      goto LABEL_35;
  }
  while ( v18 != *((CVisual **)v11 + 3) )
  {
    if ( v19 )
    {
      v19 = (CVisual *)*((_QWORD *)v19 + 10);
      if ( v19 )
        v19 = (CVisual *)*((_QWORD *)v19 + 10);
    }
    if ( v18 != v19 )
    {
      v18 = (CVisual *)*((_QWORD *)v18 + 10);
      if ( v18 )
        continue;
    }
    goto LABEL_34;
  }
  v20 = (char *)this + 936;
  v7 = 0;
  *((_DWORD *)this + 236) = 0;
  v21 = *((_QWORD *)v16 + 45);
  if ( *((_BYTE *)v11 + 32) )
  {
    v22 = (struct _LIST_ENTRY *)((char *)v17 + 280);
    goto LABEL_22;
  }
  TreeDataListHead = CVisual::GetTreeDataListHead(v17);
  v79 = TreeDataListHead;
  if ( TreeDataListHead )
  {
    Flink = TreeDataListHead->Flink;
    if ( TreeDataListHead->Flink != TreeDataListHead )
    {
      while ( 1 )
      {
        v22 = Flink - 14;
        if ( (CVisualTree *)Flink[2].Flink == v134 )
          break;
        Flink = Flink->Flink;
        if ( Flink == v79 )
          goto LABEL_162;
      }
      v11 = v134;
      v15 = (unsigned int)v133;
LABEL_22:
      if ( v22 && v22[7].Blink >= (struct _LIST_ENTRY *)v21 )
        goto LABEL_32;
      goto LABEL_24;
    }
  }
LABEL_162:
  v11 = v134;
LABEL_24:
  v127[1] = HIDWORD(v21);
  v23 = **(__int64 (__usercall ***)@<rax>(CTransformParentPreComputeHelper *__hidden@<rcx>, struct CComposition *@<rdx>, const struct CVisualTree *@<r8>, struct CVisual *@<r9>, unsigned __int64))v20;
  v24 = (CPreComputeContext *)((char *)this + 936);
  if ( v23 == CTransformParentPreComputeHelper::BuildTransformParentStack )
    v25 = CTransformParentPreComputeHelper::BuildTransformParentStack(v24, v16, v11, v17, v21);
  else
    v25 = ((__int64 (__fastcall *)(CTransformParentPreComputeHelper *, struct CComposition *, CVisualTree *, CVisual *))v23)(
            v24,
            v16,
            v11,
            v17);
  v7 = v25;
  if ( v25 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0x20u);
  }
  else
  {
    v26 = *(__int64 (__fastcall **)(CTransformParentPreComputeHelper *__hidden, const struct CVisualTree *, unsigned __int64, bool))(*(_QWORD *)v20 + 8LL);
    v27 = (CPreComputeContext *)((char *)this + 936);
    if ( v26 == CTransformParentPreComputeHelper::ProcessTransformParentStack )
      v28 = CTransformParentPreComputeHelper::ProcessTransformParentStack(v27, v134, v21, 0);
    else
      v28 = v26(v27, v134, v21, 0);
    v7 = v28;
    if ( v28 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0x22u);
  }
  v11 = v134;
  v15 = (unsigned int)v133;
LABEL_32:
  if ( v7 >= 0 )
  {
    v6 = 0;
    goto LABEL_34;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x420u);
  v11 = v134;
  v6 = 0;
LABEL_35:
  if ( v7 < 0 )
  {
    v128 = 75;
LABEL_309:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, v128);
    goto LABEL_73;
  }
  v7 = 0;
  v29 = *(_DWORD *)(*(_QWORD *)this + 1048LL);
  if ( v29 )
  {
    v81 = 0LL;
    while ( 1 )
    {
      v82 = *(_QWORD *)(v81 + *(_QWORD *)(*(_QWORD *)this + 1024LL));
      v83 = (const struct CVisual *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v82 + 168LL))(v82);
      if ( CVisualTree::IsInTree((const struct CVisual **)v134, v83) )
      {
        v86 = CPreComputeHelper::DirtyIfChanged(
                (CPreComputeContext *)((char *)this + 976),
                *(struct CComposition **)this,
                v85,
                v84,
                0);
        v7 = v86;
        if ( v86 < 0 )
          break;
      }
      ++v6;
      v81 += 8LL;
      if ( v6 >= v29 )
        goto LABEL_174;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v86, 0x43Bu);
LABEL_174:
    v11 = v134;
  }
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x50u);
  }
  else
  {
    v127[0] = 1;
    v30 = CVisualTreeIterator::WalkSubtree<CPreComputeContext>(
            (char *)this + 448,
            v11,
            *((_QWORD *)v11 + 3),
            this,
            *(_QWORD *)v127);
    v7 = v30;
    if ( v30 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, 0x57u);
    }
    else
    {
      v31 = *((_DWORD *)this + 2);
      if ( v31 )
        *((_DWORD *)this + 2) = v31 - 1;
      v32 = *((_DWORD *)this + 4);
      v33 = 64LL;
      v34 = -2147024882;
      if ( v32 != 10 )
      {
        *((_DWORD *)this + 4) = v32 + 1;
        goto LABEL_43;
      }
      v56 = 64LL;
      if ( *((_DWORD *)this + 8) > 0x40u )
        v56 = *((unsigned int *)this + 8);
      if ( (unsigned __int64)(3 * v56) > 0xFFFFFFFF )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xEFu);
      }
      else if ( (unsigned int)(3 * v56) <= *((_DWORD *)this + 3) )
      {
        if ( (_DWORD)v56 && 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v56 > 4 )
        {
          v87 = 4 * v56;
          if ( !(4 * v56) )
            v87 = 1LL;
          v88 = HeapAlloc(WPF::g_processHeap, 0, v87);
          if ( v88 )
          {
            WPF::ProcessHeapImpl::Free(*((void **)this + 3));
            *((_QWORD *)this + 3) = v88;
            *((_DWORD *)this + 3) = v56;
            goto LABEL_94;
          }
          v89 = -2147024882;
        }
        else
        {
          v89 = -2147024809;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v89, 0x100u);
      }
LABEL_94:
      *((_DWORD *)this + 8) = 0;
      *((_DWORD *)this + 4) = 0;
LABEL_43:
      v35 = *((_DWORD *)this + 10);
      if ( v35 )
        *((_DWORD *)this + 10) = v35 - 1;
      v36 = *((_DWORD *)this + 12);
      if ( v36 != 10 )
      {
        *((_DWORD *)this + 12) = v36 + 1;
        goto LABEL_47;
      }
      v57 = 64LL;
      if ( *((_DWORD *)this + 16) > 0x40u )
        v57 = *((unsigned int *)this + 16);
      if ( (unsigned __int64)(3 * v57) > 0xFFFFFFFF )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xEFu);
      }
      else if ( (unsigned int)(3 * v57) <= *((_DWORD *)this + 11) )
      {
        if ( (_DWORD)v57 && 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v57 > 4 )
        {
          v90 = 4 * v57;
          if ( !(4 * v57) )
            v90 = 1LL;
          v91 = HeapAlloc(WPF::g_processHeap, 0, v90);
          if ( v91 )
          {
            WPF::ProcessHeapImpl::Free(*((void **)this + 7));
            *((_QWORD *)this + 7) = v91;
            *((_DWORD *)this + 11) = v57;
            goto LABEL_99;
          }
          v92 = -2147024882;
        }
        else
        {
          v92 = -2147024809;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v92, 0x100u);
      }
LABEL_99:
      *((_DWORD *)this + 16) = 0;
      *((_DWORD *)this + 12) = 0;
LABEL_47:
      v37 = *((_DWORD *)this + 18);
      if ( v37 )
        *((_DWORD *)this + 18) = v37 - 1;
      v38 = *((_DWORD *)this + 20);
      if ( v38 != 10 )
      {
        *((_DWORD *)this + 20) = v38 + 1;
        goto LABEL_51;
      }
      v58 = 64LL;
      if ( *((_DWORD *)this + 24) > 0x40u )
        v58 = *((unsigned int *)this + 24);
      if ( (unsigned __int64)(3 * v58) > 0xFFFFFFFF )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xEFu);
      }
      else if ( (unsigned int)(3 * v58) <= *((_DWORD *)this + 19) )
      {
        if ( (_DWORD)v58 && 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v58 > 4 )
        {
          v93 = 4 * v58;
          if ( !(4 * v58) )
            v93 = 1LL;
          v94 = HeapAlloc(WPF::g_processHeap, 0, v93);
          if ( v94 )
          {
            WPF::ProcessHeapImpl::Free(*((void **)this + 11));
            *((_QWORD *)this + 11) = v94;
            *((_DWORD *)this + 19) = v58;
            goto LABEL_104;
          }
          v95 = -2147024882;
        }
        else
        {
          v95 = -2147024809;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v95, 0x100u);
      }
LABEL_104:
      *((_DWORD *)this + 24) = 0;
      *((_DWORD *)this + 20) = 0;
LABEL_51:
      v39 = *((_DWORD *)this + 28);
      if ( v39 != 10 )
      {
        *((_DWORD *)this + 28) = v39 + 1;
        goto LABEL_53;
      }
      v59 = *((_DWORD *)this + 32);
      v60 = 64LL;
      if ( v59 > 0x40 )
        v60 = v59;
      if ( (unsigned __int64)(3 * v60) > 0xFFFFFFFF )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xEFu);
      }
      else if ( (unsigned int)(3 * v60) <= *((_DWORD *)this + 27) )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v60 <= 0x10 )
        {
          v98 = -2147024809;
        }
        else
        {
          v96 = 16LL * (unsigned int)v60;
          if ( !v96 )
            v96 = 1LL;
          v97 = HeapAlloc(WPF::g_processHeap, 0, v96);
          if ( v97 )
          {
            WPF::ProcessHeapImpl::Free(*((void **)this + 15));
            *((_QWORD *)this + 15) = v97;
            *((_DWORD *)this + 27) = v60;
            goto LABEL_109;
          }
          v98 = -2147024882;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v98, 0x100u);
      }
LABEL_109:
      *((_DWORD *)this + 32) = 0;
      *((_DWORD *)this + 28) = 0;
LABEL_53:
      v40 = *((_DWORD *)this + 228);
      if ( v40 != 10 )
      {
        *((_DWORD *)this + 228) = v40 + 1;
        goto LABEL_55;
      }
      v61 = *((_DWORD *)this + 232);
      v62 = 64LL;
      if ( v61 > 0x40 )
        v62 = v61;
      if ( (unsigned __int64)(3 * v62) > 0xFFFFFFFF )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xEFu);
      }
      else if ( (unsigned int)(3 * v62) <= *((_DWORD *)this + 227) )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v62 <= 1 )
        {
          v100 = -2147024809;
        }
        else
        {
          v99 = HeapAlloc(WPF::g_processHeap, 0, (unsigned int)v62);
          if ( v99 )
          {
            WPF::ProcessHeapImpl::Free(*((void **)this + 115));
            *((_QWORD *)this + 115) = v99;
            *((_DWORD *)this + 227) = v62;
            goto LABEL_114;
          }
          v100 = -2147024882;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v100, 0x100u);
      }
LABEL_114:
      *((_DWORD *)this + 232) = 0;
      *((_DWORD *)this + 228) = 0;
LABEL_55:
      v41 = *((_DWORD *)this + 220);
      if ( v41 != 10 )
      {
        *((_DWORD *)this + 220) = v41 + 1;
        goto LABEL_57;
      }
      v63 = *((_DWORD *)this + 224);
      v64 = 64LL;
      if ( v63 > 0x40 )
        v64 = v63;
      if ( (unsigned __int64)(3 * v64) > 0xFFFFFFFF )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xEFu);
      }
      else if ( (unsigned int)(3 * v64) <= *((_DWORD *)this + 219) )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v64 <= 4 )
        {
          v103 = -2147024809;
        }
        else
        {
          v101 = 4 * v64;
          if ( !(4 * v64) )
            v101 = 1LL;
          v102 = HeapAlloc(WPF::g_processHeap, 0, v101);
          if ( v102 )
          {
            WPF::ProcessHeapImpl::Free(*((void **)this + 111));
            *((_QWORD *)this + 111) = v102;
            *((_DWORD *)this + 219) = v64;
            goto LABEL_119;
          }
          v103 = -2147024882;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v103, 0x100u);
      }
LABEL_119:
      *((_DWORD *)this + 224) = 0;
      *((_DWORD *)this + 220) = 0;
LABEL_57:
      v42 = *((_DWORD *)this + 212);
      if ( v42 != 10 )
      {
        *((_DWORD *)this + 212) = v42 + 1;
        goto LABEL_59;
      }
      v65 = *((_DWORD *)this + 216);
      v66 = 64LL;
      if ( v65 > 0x40 )
        v66 = v65;
      if ( (unsigned __int64)(3 * v66) > 0xFFFFFFFF )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xEFu);
      }
      else if ( (unsigned int)(3 * v66) <= *((_DWORD *)this + 211) )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v66 <= 4 )
        {
          v106 = -2147024809;
        }
        else
        {
          v104 = 4 * v66;
          if ( !(4 * v66) )
            v104 = 1LL;
          v105 = HeapAlloc(WPF::g_processHeap, 0, v104);
          if ( v105 )
          {
            WPF::ProcessHeapImpl::Free(*((void **)this + 107));
            *((_QWORD *)this + 107) = v105;
            *((_DWORD *)this + 211) = v66;
            goto LABEL_124;
          }
          v106 = -2147024882;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v106, 0x100u);
      }
LABEL_124:
      *((_DWORD *)this + 216) = 0;
      *((_DWORD *)this + 212) = 0;
LABEL_59:
      v43 = *((_DWORD *)this + 204);
      if ( v43 != 10 )
      {
        *((_DWORD *)this + 204) = v43 + 1;
        goto LABEL_61;
      }
      v67 = *((_DWORD *)this + 208);
      v68 = 64LL;
      if ( v67 > 0x40 )
        v68 = v67;
      if ( (unsigned __int64)(3 * v68) > 0xFFFFFFFF )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xEFu);
      }
      else if ( (unsigned int)(3 * v68) <= *((_DWORD *)this + 203) )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v68 <= 4 )
        {
          v109 = -2147024809;
        }
        else
        {
          v107 = 4 * v68;
          if ( !(4 * v68) )
            v107 = 1LL;
          v108 = HeapAlloc(WPF::g_processHeap, 0, v107);
          if ( v108 )
          {
            WPF::ProcessHeapImpl::Free(*((void **)this + 103));
            *((_QWORD *)this + 103) = v108;
            *((_DWORD *)this + 203) = v68;
            goto LABEL_129;
          }
          v109 = -2147024882;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v109, 0x100u);
      }
LABEL_129:
      *((_DWORD *)this + 208) = 0;
      *((_DWORD *)this + 204) = 0;
LABEL_61:
      v44 = *((_DWORD *)this + 196);
      if ( v44 != 10 )
      {
        *((_DWORD *)this + 196) = v44 + 1;
        goto LABEL_63;
      }
      v69 = *((_DWORD *)this + 200);
      v70 = 64LL;
      if ( v69 > 0x40 )
        v70 = v69;
      if ( (unsigned __int64)(3 * v70) > 0xFFFFFFFF )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xEFu);
      }
      else if ( (unsigned int)(3 * v70) <= *((_DWORD *)this + 195) )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v70 <= 4 )
        {
          v112 = -2147024809;
        }
        else
        {
          v110 = 4 * v70;
          if ( !(4 * v70) )
            v110 = 1LL;
          v111 = HeapAlloc(WPF::g_processHeap, 0, v110);
          if ( v111 )
          {
            WPF::ProcessHeapImpl::Free(*((void **)this + 99));
            *((_QWORD *)this + 99) = v111;
            *((_DWORD *)this + 195) = v70;
            goto LABEL_134;
          }
          v112 = -2147024882;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v112, 0x100u);
      }
LABEL_134:
      *((_DWORD *)this + 200) = 0;
      *((_DWORD *)this + 196) = 0;
LABEL_63:
      v45 = *((_DWORD *)this + 188);
      if ( v45 != 10 )
      {
        *((_DWORD *)this + 188) = v45 + 1;
        goto LABEL_65;
      }
      v71 = *((_DWORD *)this + 192);
      v72 = 64LL;
      if ( v71 > 0x40 )
        v72 = v71;
      if ( (unsigned __int64)(3 * v72) > 0xFFFFFFFF )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xEFu);
      }
      else if ( (unsigned int)(3 * v72) <= *((_DWORD *)this + 187) )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v72 <= 4 )
        {
          v115 = -2147024809;
        }
        else
        {
          v113 = 4 * v72;
          if ( !(4 * v72) )
            v113 = 1LL;
          v114 = HeapAlloc(WPF::g_processHeap, 0, v113);
          if ( v114 )
          {
            WPF::ProcessHeapImpl::Free(*((void **)this + 95));
            *((_QWORD *)this + 95) = v114;
            *((_DWORD *)this + 187) = v72;
            goto LABEL_139;
          }
          v115 = -2147024882;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v115, 0x100u);
      }
LABEL_139:
      *((_DWORD *)this + 192) = 0;
      *((_DWORD *)this + 188) = 0;
LABEL_65:
      v46 = *((_DWORD *)this + 180);
      v47 = 8LL;
      if ( v46 != 8 )
      {
        *((_DWORD *)this + 180) = v46 + 1;
        goto LABEL_67;
      }
      v53 = *((_DWORD *)this + 184);
      v54 = 8LL;
      if ( v53 > 8 )
        v54 = v53;
      if ( (unsigned __int64)(3 * v54) > 0xFFFFFFFF )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xEFu);
      }
      else if ( (unsigned int)(3 * v54) <= *((_DWORD *)this + 179) )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v54 <= 0x44 )
        {
          v118 = -2147024809;
        }
        else
        {
          v116 = 68LL * (unsigned int)v54;
          if ( !v116 )
            v116 = 1LL;
          v117 = HeapAlloc(WPF::g_processHeap, 0, v116);
          if ( v117 )
          {
            WPF::ProcessHeapImpl::Free(*((void **)this + 91));
            *((_QWORD *)this + 91) = v117;
            *((_DWORD *)this + 179) = v54;
            goto LABEL_84;
          }
          v118 = -2147024882;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v118, 0x100u);
      }
LABEL_84:
      *((_DWORD *)this + 184) = 0;
      *((_DWORD *)this + 180) = 0;
LABEL_67:
      v48 = *((_DWORD *)this + 172);
      if ( v48 != 8 )
      {
        *((_DWORD *)this + 172) = v48 + 1;
        goto LABEL_69;
      }
      v55 = *((_DWORD *)this + 176);
      if ( v55 > 8 )
        v47 = v55;
      if ( (unsigned __int64)(3 * v47) > 0xFFFFFFFF )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xEFu);
      }
      else if ( (unsigned int)(3 * v47) <= *((_DWORD *)this + 171) )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v47 <= 0x44 )
        {
          v121 = -2147024809;
        }
        else
        {
          v119 = 68LL * (unsigned int)v47;
          if ( !v119 )
            v119 = 1LL;
          v120 = HeapAlloc(WPF::g_processHeap, 0, v119);
          if ( v120 )
          {
            WPF::ProcessHeapImpl::Free(*((void **)this + 87));
            *((_QWORD *)this + 87) = v120;
            *((_DWORD *)this + 171) = v47;
            goto LABEL_89;
          }
          v121 = -2147024882;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v121, 0x100u);
      }
LABEL_89:
      *((_DWORD *)this + 176) = 0;
      *((_DWORD *)this + 172) = 0;
LABEL_69:
      v49 = *((_DWORD *)this + 164);
      if ( v49 != 10 )
      {
        *((_DWORD *)this + 164) = v49 + 1;
        goto LABEL_71;
      }
      v73 = *((_DWORD *)this + 168);
      v74 = 64LL;
      if ( v73 > 0x40 )
        v74 = v73;
      if ( (unsigned __int64)(3 * v74) > 0xFFFFFFFF )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xEFu);
      }
      else if ( (unsigned int)(3 * v74) <= *((_DWORD *)this + 163) )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v74 <= 8 )
        {
          v124 = -2147024809;
        }
        else
        {
          v122 = 8 * v74;
          if ( !(8 * v74) )
            v122 = 1LL;
          v123 = HeapAlloc(WPF::g_processHeap, 0, v122);
          if ( v123 )
          {
            WPF::ProcessHeapImpl::Free(*((void **)this + 83));
            *((_QWORD *)this + 83) = v123;
            *((_DWORD *)this + 163) = v74;
            goto LABEL_144;
          }
          v124 = -2147024882;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v124, 0x100u);
      }
LABEL_144:
      *((_DWORD *)this + 168) = 0;
      *((_DWORD *)this + 164) = 0;
LABEL_71:
      v50 = *((_DWORD *)this + 156);
      if ( v50 != 10 )
      {
        *((_DWORD *)this + 156) = v50 + 1;
        goto LABEL_73;
      }
      v75 = *((_DWORD *)this + 160);
      if ( v75 > 0x40 )
        v33 = v75;
      if ( (unsigned __int64)(3 * v33) > 0xFFFFFFFF )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xEFu);
        goto LABEL_149;
      }
      if ( (unsigned int)(3 * v33) > *((_DWORD *)this + 155) )
        goto LABEL_149;
      if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v33 <= 8 )
      {
        v34 = -2147024809;
      }
      else
      {
        v125 = 8 * v33;
        if ( !(8 * v33) )
          v125 = 1LL;
        v126 = HeapAlloc(WPF::g_processHeap, 0, v125);
        if ( v126 )
        {
          WPF::ProcessHeapImpl::Free(*((void **)this + 79));
          *((_QWORD *)this + 79) = v126;
          *((_DWORD *)this + 155) = v33;
          goto LABEL_149;
        }
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v34, 0x100u);
LABEL_149:
      *((_DWORD *)this + 160) = 0;
      *((_DWORD *)this + 156) = 0;
    }
  }
LABEL_73:
  v51 = v134;
  *((_QWORD *)this + 75) = 0LL;
  *((_QWORD *)this + 76) = 0LL;
  *((_DWORD *)this + 34) = 0;
  if ( *((_BYTE *)v51 + 32) )
  {
    if ( *((_DWORD *)this + 140) )
      UpdateWindowInputSinkHints(*((_QWORD *)this + 67));
    *((_DWORD *)this + 140) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)this + 536, 16LL);
    if ( *((_DWORD *)this + 148) )
      NtUpdateInputSinkTransforms(*((_QWORD *)this + 71));
    *((_DWORD *)this + 148) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)this + 568, 72LL);
  }
  return (unsigned int)v7;
}
