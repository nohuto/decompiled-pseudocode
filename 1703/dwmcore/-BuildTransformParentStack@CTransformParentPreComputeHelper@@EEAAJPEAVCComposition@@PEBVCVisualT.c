/*
 * XREFs of ?BuildTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@_K@Z @ 0x180094380
 * Callers:
 *     ?PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x180097B50 (-PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@@Z.c)
 * Callees:
 *     ?IsAncestorInSameSpace@CVisualTree@@QEBA_NPEBVCVisual@@0@Z @ 0x180012278 (-IsAncestorInSameSpace@CVisualTree@@QEBA_NPEBVCVisual@@0@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x1800855D8 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z @ 0x18008AE80 (-EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z.c)
 *     ?Push@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAJAEBQEAVCVisual@@@Z @ 0x1800C194C (-Push@-$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAJAEBQEAVCVisual@@@Z.c)
 *     memcpy_0 @ 0x1800D5396 (memcpy_0.c)
 *     ?ClearResolvingFlagsFromStack@CPreComputeHelper@@IEAAXPEBVCVisualTree@@@Z @ 0x1801B3D58 (-ClearResolvingFlagsFromStack@CPreComputeHelper@@IEAAXPEBVCVisualTree@@@Z.c)
 *     ?InvalidateVisual@CPreComputeHelper@@IEAAXPEAVCVisual@@PEBVCVisualTree@@_K@Z @ 0x1801B3DBC (-InvalidateVisual@CPreComputeHelper@@IEAAXPEAVCVisual@@PEBVCVisualTree@@_K@Z.c)
 *     ?ResolveTransformParentCycle@CPreComputeHelper@@IEAAJPEBVCVisualTree@@_KPEAVCVisual@@@Z @ 0x1801B3F98 (-ResolveTransformParentCycle@CPreComputeHelper@@IEAAJPEBVCVisualTree@@_KPEAVCVisual@@@Z.c)
 *     ?ResolveTransformParentOrphan@CPreComputeHelper@@IEAAJPEBVCVisualTree@@_KPEAPEAVCVisual@@@Z @ 0x1801B407C (-ResolveTransformParentOrphan@CPreComputeHelper@@IEAAJPEBVCVisualTree@@_KPEAPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CTransformParentPreComputeHelper::BuildTransformParentStack(
        const void **this,
        struct CComposition *a2,
        struct CVisual **a3,
        struct CVisual *a4,
        unsigned __int64 a5)
{
  struct CVisual *v6; // rsi
  bool v7; // zf
  char v9; // r13
  struct CTreeData *v10; // rdi
  __int64 v11; // rax
  const struct CVisual **v12; // r14
  struct CVisual *v13; // rbx
  char v14; // r15
  __int64 v15; // rax
  void *v16; // rdi
  unsigned int v17; // eax
  int v18; // r8d
  int *v19; // rcx
  int *v20; // rdx
  __int64 v21; // rdx
  int i; // r8d
  char v23; // al
  struct CVisual *v24; // rax
  _DWORD *v25; // rcx
  int v26; // ebx
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *Flink; // rdx
  CPreComputeHelper *v30; // rcx
  unsigned int v31; // r14d
  SIZE_T v32; // r8
  unsigned __int64 v33; // rax
  int v34; // r9d
  struct CTreeData *v35; // [rsp+30h] [rbp-48h] BYREF
  __int64 v36; // [rsp+38h] [rbp-40h]
  int v37; // [rsp+90h] [rbp+18h]
  struct CVisual *v38; // [rsp+98h] [rbp+20h] BYREF

  v6 = a4;
  v7 = a4 == a3[3];
  v37 = 0;
  v38 = a4;
LABEL_2:
  if ( !v7 )
  {
    v9 = 0;
    while ( 1 )
    {
      v10 = 0LL;
      if ( *((_BYTE *)a3 + 32) )
      {
        v10 = (struct CVisual *)((char *)v6 + 264);
      }
      else
      {
        TreeDataListHead = CVisual::GetTreeDataListHead(v6);
        if ( TreeDataListHead )
        {
          Flink = TreeDataListHead->Flink;
          if ( TreeDataListHead->Flink != TreeDataListHead )
          {
            while ( (struct CVisual **)Flink[2].Flink != a3 )
            {
              Flink = Flink->Flink;
              if ( Flink == TreeDataListHead )
                goto LABEL_6;
            }
            v10 = (struct CTreeData *)&Flink[-14];
          }
        }
      }
LABEL_6:
      v35 = v10;
      if ( v10 && *((_QWORD *)v10 + 15) >= a5 )
        goto LABEL_31;
      v11 = *((_QWORD *)v6 + 26);
      v12 = 0LL;
      if ( (*(_DWORD *)(v11 + 4) & 0x10000000) != 0 )
      {
        v18 = *(_DWORD *)(v11 + 12);
        v19 = (int *)(v11 + 12);
        v20 = (int *)(v11 + 12);
        if ( (v18 & 0x7F000000) != 0x4000000 )
        {
          do
          {
            v20 = (int *)((char *)v20 + (v18 & 0xFFFFFF) + 4);
            v18 = *v20;
          }
          while ( (*v20 & 0x7F000000) != 0x4000000 );
        }
        v36 = *(_QWORD *)(v20 + 1);
        v21 = v36;
        if ( v36 )
        {
          for ( i = *v19; (*v19 & 0x7F000000) != 0x4000000; i = *v19 )
            v19 = (int *)((char *)v19 + (i & 0xFFFFFF) + 4);
          v36 = *(_QWORD *)(v19 + 1);
          v12 = *(const struct CVisual ***)(*(_QWORD *)v36 + 8LL);
        }
        v13 = (struct CVisual *)v12;
        if ( v21 )
        {
          v14 = *(_BYTE *)(v21 + 8);
          goto LABEL_11;
        }
      }
      else
      {
        v13 = 0LL;
      }
      v14 = 0;
LABEL_11:
      if ( !v12 )
        goto LABEL_12;
      if ( !v10 )
      {
        v37 = CVisual::EnsureTreeData(v6, (const struct CVisualTree *)a3, &v35);
        if ( v37 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v37, 0x5Fu);
          goto LABEL_78;
        }
        v10 = v35;
      }
      if ( (*((_BYTE *)v10 + 16) & 8) != 0 )
      {
        v37 = CPreComputeHelper::ResolveTransformParentCycle(
                (CPreComputeHelper *)this,
                (const struct CVisualTree *)a3,
                a5,
                v6);
        if ( v37 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v37, 0x67u);
LABEL_78:
          v26 = v37;
          goto LABEL_36;
        }
      }
      v23 = *((_BYTE *)v10 + 16);
      if ( (v23 & 4) != 0 && *((_QWORD *)v10 + 27) == a5 )
        goto LABEL_12;
      if ( v14 )
      {
        *((_BYTE *)v10 + 16) = v23 | 8;
      }
      else if ( !CVisualTree::IsAncestorInSameSpace((const struct CVisual ***)a3, (const struct CVisual **)v6, v12) )
      {
        CPreComputeHelper::InvalidateVisual(v30, v6, (const struct CVisualTree *)a3, a5);
LABEL_12:
        v13 = (struct CVisual *)*((_QWORD *)v6 + 10);
      }
      v15 = *((unsigned int *)this + 3);
      v16 = 0LL;
      if ( *((_DWORD *)this + 2) != (_DWORD)v15 )
        goto LABEL_14;
      v31 = 2 * v15;
      if ( (unsigned __int64)(2 * v15) > 0xFFFFFFFF )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x4Cu);
        goto LABEL_17;
      }
      if ( v31 <= 0x40 )
        v31 = 64;
      if ( 0xFFFFFFFFFFFFFFFFuLL / v31 <= 8 )
      {
        v34 = -2147024809;
LABEL_68:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v34, 0x54u);
        goto LABEL_69;
      }
      v32 = 8LL * v31;
      if ( !v32 )
        v32 = 1LL;
      v16 = HeapAlloc(WPF::g_processHeap, 0, v32);
      if ( !v16 )
      {
        v34 = -2147024882;
        goto LABEL_68;
      }
      v33 = 8LL * *((unsigned int *)this + 2);
      if ( v33 <= 0xFFFFFFFF )
      {
        memcpy_0(v16, this[3], (unsigned int)v33);
        WPF::ProcessHeapImpl::Free((void *)this[3]);
        this[3] = v16;
        *((_DWORD *)this + 3) = v31;
LABEL_14:
        *((_QWORD *)this[3] + (unsigned int)(*((_DWORD *)this + 2))++) = v6;
        v17 = *((_DWORD *)this + 8);
        if ( v17 <= *((_DWORD *)this + 2) )
          v17 = *((_DWORD *)this + 2);
        *((_DWORD *)this + 8) = v17;
        goto LABEL_17;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x56u);
LABEL_69:
      if ( v16 )
        HeapFree(WPF::g_processHeap, 0, v16);
LABEL_17:
      if ( v13 )
      {
        v7 = v13 == a3[3];
        v6 = v13;
        v38 = v13;
        goto LABEL_2;
      }
      if ( v6 == a3[3] )
        break;
      v37 = CPreComputeHelper::ResolveTransformParentOrphan(
              (CPreComputeHelper *)this,
              (const struct CVisualTree *)a3,
              a5,
              &v38);
      if ( v37 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v37, 0x99u);
        goto LABEL_78;
      }
      v6 = v38;
    }
  }
  v9 = 1;
LABEL_31:
  v24 = 0LL;
  v25 = this + 1;
  if ( *((_DWORD *)this + 2) )
  {
    v26 = 0;
    v24 = (struct CVisual *)*((_QWORD *)this[3] + (unsigned int)(*v25 - 1));
  }
  else
  {
    v26 = v37;
  }
  if ( v9 && v24 != v6 )
    CWatermarkStack<CVisual *,64,2,10>::Push(v25, &v38);
LABEL_36:
  if ( v26 < 0 )
    CPreComputeHelper::ClearResolvingFlagsFromStack((CPreComputeHelper *)this, (const struct CVisualTree *)a3);
  return (unsigned int)v26;
}
