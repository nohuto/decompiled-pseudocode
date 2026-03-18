/*
 * XREFs of ?BuildTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@_K@Z @ 0x1800B06F0
 * Callers:
 *     ?PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x1800551E0 (-PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z @ 0x18004EA40 (-EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18004EC04 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Push@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAJAEBQEAVCVisual@@@Z @ 0x1800B100C (-Push@-$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAJAEBQEAVCVisual@@@Z.c)
 *     memcpy_0 @ 0x1800C5D86 (memcpy_0.c)
 *     ?IsAncestorInSameSpace@CVisualTree@@QEBA_NPEBVCVisual@@0@Z @ 0x18017D2E0 (-IsAncestorInSameSpace@CVisualTree@@QEBA_NPEBVCVisual@@0@Z.c)
 *     ?ClearResolvingFlagsFromStack@CPreComputeHelper@@IEAAXPEBVCVisualTree@@@Z @ 0x1801D02C0 (-ClearResolvingFlagsFromStack@CPreComputeHelper@@IEAAXPEBVCVisualTree@@@Z.c)
 *     ?InvalidateVisual@CPreComputeHelper@@IEAAXPEAVCVisual@@PEBVCVisualTree@@_K@Z @ 0x1801D0324 (-InvalidateVisual@CPreComputeHelper@@IEAAXPEAVCVisual@@PEBVCVisualTree@@_K@Z.c)
 *     ?ResolveTransformParentCycle@CPreComputeHelper@@IEAAJPEBVCVisualTree@@_KPEAVCVisual@@@Z @ 0x1801D04F0 (-ResolveTransformParentCycle@CPreComputeHelper@@IEAAJPEBVCVisualTree@@_KPEAVCVisual@@@Z.c)
 *     ?ResolveTransformParentOrphan@CPreComputeHelper@@IEAAJPEBVCVisualTree@@_KPEAPEAVCVisual@@@Z @ 0x1801D05D4 (-ResolveTransformParentOrphan@CPreComputeHelper@@IEAAJPEBVCVisualTree@@_KPEAPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CTransformParentPreComputeHelper::BuildTransformParentStack(
        CTransformParentPreComputeHelper *this,
        struct CComposition *a2,
        struct CVisual **a3,
        struct CVisual *a4,
        unsigned __int64 a5)
{
  struct CVisual *v6; // rsi
  unsigned __int64 v8; // r13
  struct CTreeData *v9; // rdi
  unsigned __int64 v10; // r11
  __int64 v11; // rax
  const struct CVisual *v12; // r14
  struct CVisual *v13; // rbx
  char v14; // r15
  __int64 v15; // rax
  void *v16; // rdi
  unsigned int v17; // eax
  char v18; // r9
  struct CVisual *v19; // rax
  _DWORD *v20; // rcx
  int v21; // ebx
  int v23; // r8d
  int *v24; // rcx
  int *v25; // rdx
  __int64 v26; // rdx
  int i; // r8d
  char v28; // al
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v30; // r10
  struct _LIST_ENTRY *Flink; // rax
  unsigned int v32; // r14d
  SIZE_T v33; // r8
  unsigned __int64 v34; // rax
  CPreComputeHelper *v35; // rcx
  DWORD v36; // r9d
  struct CTreeData *v37; // [rsp+30h] [rbp-48h] BYREF
  __int64 v38; // [rsp+38h] [rbp-40h]
  signed int v39; // [rsp+90h] [rbp+18h]
  struct CVisual *v40; // [rsp+98h] [rbp+20h] BYREF

  v6 = a4;
  v39 = 0;
  v40 = a4;
  if ( a4 == a3[3] )
  {
LABEL_18:
    v18 = 1;
LABEL_19:
    v19 = 0LL;
    v20 = (_DWORD *)((char *)this + 8);
    if ( *((_DWORD *)this + 2) )
    {
      v21 = 0;
      v19 = *(struct CVisual **)(*((_QWORD *)this + 3) + 8LL * (unsigned int)(*v20 - 1));
    }
    else
    {
      v21 = v39;
    }
    if ( v18 && v19 != v6 )
      CWatermarkStack<CVisual *,64,2,10>::Push(v20, &v40);
    goto LABEL_24;
  }
  v8 = a5;
  while ( 1 )
  {
    v9 = 0LL;
    v10 = 0xFFFFFFFFLL;
    if ( *((_BYTE *)a3 + 32) )
    {
      v9 = (struct CVisual *)((char *)v6 + 280);
    }
    else
    {
      TreeDataListHead = CVisual::GetTreeDataListHead(v6);
      v30 = TreeDataListHead;
      if ( TreeDataListHead )
      {
        Flink = TreeDataListHead->Flink;
        if ( Flink != v30 )
        {
          while ( (struct CVisual **)Flink[2].Flink != a3 )
          {
            Flink = Flink->Flink;
            if ( Flink == v30 )
              goto LABEL_5;
          }
          v9 = (struct CTreeData *)&Flink[-14];
        }
      }
    }
LABEL_5:
    v37 = v9;
    if ( v9 && *((_QWORD *)v9 + 15) >= v8 )
    {
      v18 = 0;
      goto LABEL_19;
    }
    v11 = *((_QWORD *)v6 + 26);
    v12 = 0LL;
    if ( (*(_DWORD *)(v11 + 4) & 0x10000000) == 0 )
    {
      v13 = 0LL;
LABEL_9:
      v14 = 0;
      goto LABEL_10;
    }
    v23 = *(_DWORD *)(v11 + 12);
    v24 = (int *)(v11 + 12);
    v25 = (int *)(v11 + 12);
    if ( (v23 & 0x7F000000) != 0x4000000 )
    {
      do
      {
        v25 = (int *)((char *)v25 + (v23 & 0xFFFFFF) + 4);
        v23 = *v25;
      }
      while ( (*v25 & 0x7F000000) != 0x4000000 );
    }
    v38 = *(_QWORD *)(v25 + 1);
    v26 = v38;
    if ( v38 )
    {
      for ( i = *v24; (*v24 & 0x7F000000) != 0x4000000; i = *v24 )
        v24 = (int *)((char *)v24 + (i & 0xFFFFFF) + 4);
      v38 = *(_QWORD *)(v24 + 1);
      v12 = *(const struct CVisual **)(*(_QWORD *)v38 + 8LL);
    }
    v13 = v12;
    if ( !v26 )
      goto LABEL_9;
    v14 = *(_BYTE *)(v26 + 8);
LABEL_10:
    if ( !v12 )
      goto LABEL_11;
    if ( !v9 )
    {
      v39 = CVisual::EnsureTreeData(v6, (const struct CVisualTree *)a3, &v37);
      if ( v39 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v39, 0x5Fu);
        goto LABEL_79;
      }
      v9 = v37;
      v10 = 0xFFFFFFFFLL;
    }
    if ( (*((_BYTE *)v9 + 16) & 8) != 0 )
      break;
LABEL_35:
    v28 = *((_BYTE *)v9 + 16);
    if ( (v28 & 4) != 0 && *((_QWORD *)v9 + 27) == v8 )
      goto LABEL_11;
    if ( v14 )
    {
      *((_BYTE *)v9 + 16) = v28 | 8;
    }
    else
    {
      if ( !CVisualTree::IsAncestorInSameSpace((CVisualTree *)a3, v6, v12) )
      {
        CPreComputeHelper::InvalidateVisual(v35, v6, (const struct CVisualTree *)a3, v8);
        v10 = 0xFFFFFFFFLL;
LABEL_11:
        v13 = (struct CVisual *)*((_QWORD *)v6 + 10);
        goto LABEL_12;
      }
      v10 = 0xFFFFFFFFLL;
    }
LABEL_12:
    v15 = *((unsigned int *)this + 3);
    v16 = 0LL;
    if ( *((_DWORD *)this + 2) != (_DWORD)v15 )
      goto LABEL_13;
    v32 = 2 * v15;
    if ( 2 * v15 <= v10 )
    {
      if ( v32 <= 0x40 )
        v32 = 64;
      if ( 0xFFFFFFFFFFFFFFFFuLL / v32 <= 8 )
      {
        v36 = -2147024809;
LABEL_70:
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v36, 0x54u);
LABEL_71:
        if ( v16 )
          HeapFree(WPF::g_processHeap, 0, v16);
        goto LABEL_16;
      }
      v33 = 8LL * v32;
      if ( !v33 )
        v33 = 1LL;
      v16 = HeapAlloc(WPF::g_processHeap, 0, v33);
      if ( !v16 )
      {
        v36 = -2147024882;
        goto LABEL_70;
      }
      v34 = 8LL * *((unsigned int *)this + 2);
      if ( v34 > 0xFFFFFFFF )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070216, 0x56u);
        goto LABEL_71;
      }
      memcpy_0(v16, *((const void **)this + 3), (unsigned int)v34);
      WPF::ProcessHeapImpl::Free(*((void **)this + 3));
      *((_QWORD *)this + 3) = v16;
      *((_DWORD *)this + 3) = v32;
LABEL_13:
      *(_QWORD *)(*((_QWORD *)this + 3) + 8LL * (unsigned int)(*((_DWORD *)this + 2))++) = v6;
      v17 = *((_DWORD *)this + 8);
      if ( v17 <= *((_DWORD *)this + 2) )
        v17 = *((_DWORD *)this + 2);
      *((_DWORD *)this + 8) = v17;
      goto LABEL_16;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070216, 0x4Cu);
LABEL_16:
    if ( v13 )
    {
      v6 = v13;
      v40 = v13;
      if ( v13 == a3[3] )
        goto LABEL_18;
    }
    else
    {
      if ( v6 == a3[3] )
        goto LABEL_18;
      v39 = CPreComputeHelper::ResolveTransformParentOrphan(this, (const struct CVisualTree *)a3, v8, &v40);
      if ( v39 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v39, 0x99u);
        goto LABEL_79;
      }
      v6 = v40;
    }
  }
  v39 = CPreComputeHelper::ResolveTransformParentCycle(this, (const struct CVisualTree *)a3, v8, v6);
  if ( v39 >= 0 )
  {
    v10 = 0xFFFFFFFFLL;
    goto LABEL_35;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v39, 0x67u);
LABEL_79:
  v21 = v39;
LABEL_24:
  if ( v21 < 0 )
    CPreComputeHelper::ClearResolvingFlagsFromStack(this, (const struct CVisualTree *)a3);
  return (unsigned int)v21;
}
