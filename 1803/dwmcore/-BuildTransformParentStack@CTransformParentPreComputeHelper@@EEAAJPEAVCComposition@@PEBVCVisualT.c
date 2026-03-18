/*
 * XREFs of ?BuildTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@_K@Z @ 0x18000A980
 * Callers:
 *     ?PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x1800A2CF0 (-PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z.c)
 * Callees:
 *     ?IsAncestorInSameSpace@CVisualTree@@QEBA_NPEBVCVisual@@0@Z @ 0x18000B704 (-IsAncestorInSameSpace@CVisualTree@@QEBA_NPEBVCVisual@@0@Z.c)
 *     ?GetVisualNoRef@CVisualReferenceController@@UEBAPEAVCVisual@@XZ @ 0x180027F90 (-GetVisualNoRef@CVisualReferenceController@@UEBAPEAVCVisual@@XZ.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18004CC14 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z @ 0x18004F820 (-EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Push@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAJAEBQEAVCVisual@@@Z @ 0x1800BFCFC (-Push@-$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAJAEBQEAVCVisual@@@Z.c)
 *     memcpy_0 @ 0x1800DD3FB (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?ClearResolvingFlagsFromStack@CPreComputeHelper@@IEAAXPEBVCVisualTree@@@Z @ 0x1802126EC (-ClearResolvingFlagsFromStack@CPreComputeHelper@@IEAAXPEBVCVisualTree@@@Z.c)
 *     ?InvalidateVisual@CPreComputeHelper@@IEAAXPEAVCVisual@@PEBVCVisualTree@@_K@Z @ 0x180212750 (-InvalidateVisual@CPreComputeHelper@@IEAAXPEAVCVisual@@PEBVCVisualTree@@_K@Z.c)
 *     ?ResolveTransformParentCycle@CPreComputeHelper@@IEAAJPEBVCVisualTree@@_KPEAVCVisual@@@Z @ 0x180212924 (-ResolveTransformParentCycle@CPreComputeHelper@@IEAAJPEBVCVisualTree@@_KPEAVCVisual@@@Z.c)
 *     ?ResolveTransformParentOrphan@CPreComputeHelper@@IEAAJPEBVCVisualTree@@_KPEAPEAVCVisual@@@Z @ 0x180212A04 (-ResolveTransformParentOrphan@CPreComputeHelper@@IEAAJPEBVCVisualTree@@_KPEAPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CTransformParentPreComputeHelper::BuildTransformParentStack(
        const void **this,
        struct CComposition *a2,
        const struct CVisualTree *a3,
        struct CVisual *a4,
        unsigned __int64 a5)
{
  struct CVisual *v7; // rsi
  unsigned __int64 v8; // r12
  struct CTreeData *v9; // rdi
  __int64 v10; // rax
  const struct CVisual *v11; // rbp
  struct CVisual *v12; // rbx
  char v13; // r14
  __int64 v14; // rcx
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // ecx
  struct CVisual *v18; // rax
  char v19; // r9
  int v20; // eax
  struct CVisual *v21; // rcx
  __int64 v23; // r8
  unsigned int *v24; // rcx
  unsigned int *i; // rdx
  CVisualReferenceController **v26; // r14
  __int64 j; // rdx
  CVisualReferenceController *v28; // rcx
  struct CVisual *(__fastcall *v29)(CVisualReferenceController *__hidden); // rax
  struct CVisual *VisualNoRef; // rax
  char v31; // al
  CPreComputeHelper *v32; // rcx
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *Flink; // rcx
  unsigned int v35; // edi
  SIZE_T v36; // r8
  void *v37; // rbp
  unsigned __int64 v38; // rax
  int v39; // eax
  int v40; // eax
  int v41; // r9d
  int v42; // eax
  struct CTreeData *v43; // [rsp+30h] [rbp-48h] BYREF
  CVisualReferenceController **v44; // [rsp+38h] [rbp-40h]
  int v45; // [rsp+90h] [rbp+18h]
  struct CVisual *v46; // [rsp+98h] [rbp+20h] BYREF

  v7 = a4;
  v45 = 0;
  v46 = a4;
  if ( a4 != *((struct CVisual **)a3 + 3) )
  {
    v8 = a5;
    while ( 1 )
    {
      v9 = 0LL;
      if ( *((_BYTE *)a3 + 32) )
      {
        v9 = (struct CVisual *)((char *)v7 + 288);
      }
      else
      {
        TreeDataListHead = CVisual::GetTreeDataListHead(v7);
        if ( TreeDataListHead )
        {
          Flink = TreeDataListHead->Flink;
          if ( TreeDataListHead->Flink != TreeDataListHead )
          {
            while ( (const struct CVisualTree *)Flink[2].Flink != a3 )
            {
              Flink = Flink->Flink;
              if ( Flink == TreeDataListHead )
                goto LABEL_5;
            }
            v9 = (struct CTreeData *)&Flink[-14];
          }
        }
      }
LABEL_5:
      v43 = v9;
      if ( v9 && *((_QWORD *)v9 + 15) >= v8 )
      {
        v19 = 0;
        goto LABEL_19;
      }
      v10 = *((_QWORD *)v7 + 27);
      v11 = 0LL;
      if ( (*(_DWORD *)(v10 + 4) & 0x10000000) != 0 )
      {
        v23 = *(unsigned int *)(v10 + 12);
        v24 = (unsigned int *)(v10 + 12);
        for ( i = (unsigned int *)(v10 + 12); (*i & 0x7F000000) != 0x4000000; v23 = *i )
          i = (unsigned int *)((char *)i + (v23 & 0xFFFFFF) + 4);
        v44 = *(CVisualReferenceController ***)(i + 1);
        v26 = v44;
        if ( v44 )
        {
          for ( j = *v24; (*v24 & 0x7F000000) != 0x4000000; j = *v24 )
            v24 = (unsigned int *)((char *)v24 + (j & 0xFFFFFF) + 4);
          v44 = *(CVisualReferenceController ***)(v24 + 1);
          v28 = *v44;
          v29 = *(struct CVisual *(__fastcall **)(CVisualReferenceController *__hidden))(*(_QWORD *)*v44 + 152LL);
          if ( v29 == CVisualReferenceController::GetVisualNoRef )
            VisualNoRef = CVisualReferenceController::GetVisualNoRef(v28);
          else
            VisualNoRef = (struct CVisual *)((__int64 (__fastcall *)(CVisualReferenceController *, __int64, __int64, struct CVisual *(__fastcall *)(CVisualReferenceController *__hidden)))v29)(
                                              v28,
                                              j,
                                              v23,
                                              CVisualReferenceController::GetVisualNoRef);
          v11 = VisualNoRef;
        }
        v12 = v11;
        if ( v26 )
        {
          v13 = *((_BYTE *)v26 + 8);
          goto LABEL_10;
        }
      }
      else
      {
        v12 = 0LL;
      }
      v13 = 0;
LABEL_10:
      if ( !v11 )
        goto LABEL_11;
      if ( !v9 )
      {
        v39 = CVisual::EnsureTreeData(v7, a3, &v43);
        v45 = v39;
        if ( v39 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v39, 0x5Fu);
          goto LABEL_24;
        }
        v9 = v43;
      }
      if ( (*((_BYTE *)v9 + 16) & 8) != 0 )
      {
        v40 = CPreComputeHelper::ResolveTransformParentCycle((CPreComputeHelper *)this, a3, v8, v7);
        v45 = v40;
        if ( v40 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v40, 0x67u);
          goto LABEL_24;
        }
      }
      v31 = *((_BYTE *)v9 + 16);
      if ( (v31 & 4) != 0 && *((_QWORD *)v9 + 27) == v8 )
        goto LABEL_11;
      if ( v13 )
      {
        *((_BYTE *)v9 + 16) = v31 | 8;
      }
      else if ( !CVisualTree::IsAncestorInSameSpace(a3, v7, v11) )
      {
        CPreComputeHelper::InvalidateVisual(v32, v7, a3, v8);
LABEL_11:
        v12 = (struct CVisual *)*((_QWORD *)v7 + 10);
      }
      v14 = *((unsigned int *)this + 3);
      v15 = *((_DWORD *)this + 2);
      if ( v15 != (_DWORD)v14 )
        goto LABEL_13;
      v35 = 2 * v14;
      if ( (unsigned __int64)(2 * v14) > 0xFFFFFFFF )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x4Cu);
        goto LABEL_16;
      }
      if ( v35 <= 0x40 )
        v35 = 64;
      if ( 0xFFFFFFFFFFFFFFFFuLL / v35 <= 8 )
      {
        v41 = -2147024809;
        goto LABEL_74;
      }
      v36 = 8LL * v35;
      if ( !v36 )
        v36 = 1LL;
      v37 = HeapAlloc(WPF::g_processHeap, 0, v36);
      if ( !v37 )
      {
        v41 = -2147024882;
LABEL_74:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v41, 0x54u);
        goto LABEL_16;
      }
      v38 = 8LL * *((unsigned int *)this + 2);
      if ( v38 <= 0xFFFFFFFF )
      {
        memcpy_0(v37, this[3], (unsigned int)v38);
        operator delete((void *)this[3]);
        v15 = *((_DWORD *)this + 2);
        this[3] = v37;
        *((_DWORD *)this + 3) = v35;
LABEL_13:
        *((_QWORD *)this[3] + v15) = v7;
        v16 = *((_DWORD *)this + 8);
        v17 = *((_DWORD *)this + 2) + 1;
        *((_DWORD *)this + 2) = v17;
        if ( v16 <= v17 )
          v16 = v17;
        *((_DWORD *)this + 8) = v16;
        goto LABEL_16;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x56u);
      HeapFree(WPF::g_processHeap, 0, v37);
LABEL_16:
      v18 = (struct CVisual *)*((_QWORD *)a3 + 3);
      if ( v12 )
      {
        v46 = v12;
        v7 = v12;
        if ( v12 == v18 )
          break;
      }
      else
      {
        if ( v7 == v18 )
          break;
        v42 = CPreComputeHelper::ResolveTransformParentOrphan((CPreComputeHelper *)this, a3, v8, &v46);
        v45 = v42;
        if ( v42 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v42, 0x99u);
          goto LABEL_24;
        }
        v7 = v46;
      }
    }
  }
  v19 = 1;
LABEL_19:
  v20 = *((_DWORD *)this + 2);
  v21 = 0LL;
  if ( v20 )
  {
    v21 = (struct CVisual *)*((_QWORD *)this[3] + (unsigned int)(v20 - 1));
    v45 = 0;
  }
  if ( v19 && v21 != v7 )
    CWatermarkStack<CVisual *,64,2,10>::Push(this + 1, &v46);
LABEL_24:
  if ( v45 < 0 )
    CPreComputeHelper::ClearResolvingFlagsFromStack((CPreComputeHelper *)this, a3);
  return (unsigned int)v45;
}
