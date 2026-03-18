/*
 * XREFs of ?ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z @ 0x1800946B0
 * Callers:
 *     ?PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x180097B50 (-PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@@Z.c)
 * Callees:
 *     ??0CTreeData@@IEAA@XZ @ 0x18004F06C (--0CTreeData@@IEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z @ 0x180083880 (-PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z.c)
 *     ?GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ @ 0x180085500 (-GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x1800855D8 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ @ 0x18008562C (-GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ.c)
 *     ?SetUnusedTreeData@CVisual@@QEAAXPEAVCTreeData@@@Z @ 0x180086270 (-SetUnusedTreeData@CVisual@@QEAAXPEAVCTreeData@@@Z.c)
 *     ?ClearContentTreeDataCaches@CVisual@@IEAAXXZ @ 0x1800869D8 (-ClearContentTreeDataCaches@CVisual@@IEAAXXZ.c)
 *     ?OnClipChanged@CVisual@@AEAAXXZ @ 0x180086BB0 (-OnClipChanged@CVisual@@AEAAXXZ.c)
 *     ?UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x1800881FC (-UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18008B108 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?ClearResolvingFlagsFromStack@CPreComputeHelper@@IEAAXPEBVCVisualTree@@@Z @ 0x1801B3D58 (-ClearResolvingFlagsFromStack@CPreComputeHelper@@IEAAXPEBVCVisualTree@@@Z.c)
 */

__int64 __fastcall CTransformParentPreComputeHelper::ProcessTransformParentStack(
        CTransformParentPreComputeHelper *this,
        const struct CVisualTree *a2,
        __int64 a3,
        char a4)
{
  const struct CVisualTree *v4; // rbp
  __int64 v6; // rdi
  char v7; // r14
  int v8; // eax
  unsigned __int64 Blink; // r15
  unsigned int v10; // eax
  char v11; // r13
  struct CTreeData *UnusedTreeData; // rbx
  int v13; // r12d
  __int64 v14; // rax
  float v15; // xmm5_4
  float v16; // xmm1_4
  float v17; // xmm6_4
  float v18; // xmm4_4
  float v19; // xmm7_4
  float v20; // xmm8_4
  __int64 v21; // rcx
  __int64 v22; // xmm2_8
  float v23; // xmm3_4
  float v24; // xmm2_4
  __int64 v25; // xmm0_8
  float v26; // xmm0_4
  float v27; // xmm1_4
  bool v28; // r14
  char v29; // bp
  int v30; // eax
  unsigned int v31; // eax
  int v32; // edx
  int *v33; // rcx
  int updated; // eax
  CVisual *v36; // rcx
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v39; // rax
  CTreeData *v40; // rax
  _QWORD *v41; // rcx
  int v42; // r8d
  int *v43; // rdx
  float v44; // [rsp+44h] [rbp-A4h]
  float v45; // [rsp+4Ch] [rbp-9Ch]
  struct _LIST_ENTRY *TreeData; // [rsp+F0h] [rbp+8h]

  v4 = a2;
  v6 = 0LL;
  v7 = a4;
  v8 = *((_DWORD *)this + 2);
  Blink = 1LL;
  TreeData = 0LL;
  if ( v8 )
  {
    v10 = v8 - 1;
    *((_DWORD *)this + 2) = v10;
    v6 = *(_QWORD *)(*((_QWORD *)this + 3) + 8LL * v10);
  }
  if ( v6 != *((_QWORD *)a2 + 3) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v6 + 208) + 4LL) & 0x10000000) != 0 )
      v36 = *(CVisual **)(*(_QWORD *)CVisual::GetTransformParentDataInternal((CVisual *)v6) + 8LL);
    else
      v36 = *(CVisual **)(v6 + 80);
    TreeData = CVisual::FindTreeData(v36, v4);
    Blink = (unsigned __int64)TreeData[7].Blink;
  }
  while ( 1 )
  {
    v11 = 0;
    UnusedTreeData = 0LL;
    if ( *((_BYTE *)v4 + 32) )
    {
      UnusedTreeData = (struct CTreeData *)(v6 + 264);
    }
    else
    {
      TreeDataListHead = CVisual::GetTreeDataListHead((CVisual *)v6);
      if ( TreeDataListHead )
      {
        Flink = TreeDataListHead->Flink;
        if ( TreeDataListHead->Flink != TreeDataListHead )
        {
          while ( (const struct CVisualTree *)Flink[2].Flink != v4 )
          {
            Flink = Flink->Flink;
            if ( Flink == TreeDataListHead )
              goto LABEL_6;
          }
          UnusedTreeData = (struct CTreeData *)&Flink[-14];
        }
      }
    }
LABEL_6:
    if ( !UnusedTreeData )
    {
      UnusedTreeData = CVisual::GetUnusedTreeData((CVisual *)v6);
      if ( UnusedTreeData )
      {
        CVisual::SetUnusedTreeData((CVisual *)v6, 0LL);
      }
      else
      {
        v40 = (CTreeData *)operator new(0x108uLL);
        UnusedTreeData = v40;
        if ( !v40 )
        {
          v13 = -2147024882;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x10DCu);
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xFBu);
          goto LABEL_36;
        }
        CTreeData::CTreeData(v40);
        *v41 = &CVisualTreeData::`vftable';
        v41[32] = 0LL;
      }
      (*(void (__fastcall **)(struct CTreeData *, const struct CVisualTree *, __int64))(*(_QWORD *)UnusedTreeData + 8LL))(
        UnusedTreeData,
        v4,
        v6);
    }
    v13 = 0;
    if ( (*(_DWORD *)(*(_QWORD *)(v6 + 208) + 4LL) & 0x10000000) != 0 )
    {
      *((_BYTE *)UnusedTreeData + 16) &= ~8u;
      v11 = (*((_BYTE *)UnusedTreeData + 16) & 4) == 0 || *((_QWORD *)UnusedTreeData + 27) != a3;
    }
    v14 = *(_QWORD *)(v6 + 80);
    if ( !v14 || (*(_BYTE *)(v14 + 88) & 1) != 0 )
    {
      v15 = *(float *)(v6 + 112);
      v16 = 0.0;
      v17 = *(float *)(v6 + 116);
      v18 = 0.0;
      v19 = *(float *)(v6 + 128);
      v20 = *(float *)(v6 + 132);
      if ( v14 )
      {
        v16 = *(float *)(v14 + 128);
        v18 = *(float *)(v14 + 132);
      }
      v21 = *(_QWORD *)(v6 + 208);
      if ( (*(_DWORD *)(v21 + 4) & 0x400000) != 0 )
      {
        v42 = *(_DWORD *)(v21 + 12);
        v43 = (int *)(v21 + 12);
        if ( (v42 & 0x7F000000) != 0xA000000 )
        {
          do
          {
            v43 = (int *)((char *)v43 + (v42 & 0xFFFFFF) + 4);
            v42 = *v43;
          }
          while ( (*v43 & 0x7F000000) != 0xA000000 );
        }
        v22 = *(_QWORD *)(v43 + 1);
        v45 = *((float *)&v22 + 1);
      }
      else
      {
        LODWORD(v22) = 0;
        v45 = 0.0;
      }
      v23 = (float)(v45 * v18) + *(float *)(v6 + 104);
      v24 = (float)(*(float *)&v22 * v16) + *(float *)(v6 + 100);
      *(float *)(v6 + 116) = v23;
      *(float *)(v6 + 112) = v24;
      if ( (*(_DWORD *)(v21 + 4) & 0x800000) != 0 )
      {
        v32 = *(_DWORD *)(v21 + 12);
        v33 = (int *)(v21 + 12);
        if ( (v32 & 0x7F000000) != 0x9000000 )
        {
          do
          {
            v33 = (int *)((char *)v33 + (v32 & 0xFFFFFF) + 4);
            v32 = *v33;
          }
          while ( (*v33 & 0x7F000000) != 0x9000000 );
        }
        v25 = *(_QWORD *)(v33 + 1);
        v44 = *((float *)&v25 + 1);
      }
      else
      {
        LODWORD(v25) = 0;
        v44 = 0.0;
      }
      v26 = (float)(*(float *)&v25 * v16) + *(float *)(v6 + 120);
      v27 = (float)(v44 * v18) + *(float *)(v6 + 124);
      *(float *)(v6 + 132) = v27;
      *(float *)(v6 + 128) = v26;
      if ( v26 < 0.0 )
        *(_DWORD *)(v6 + 128) = 0;
      if ( v27 < 0.0 )
        *(_DWORD *)(v6 + 132) = 0;
      v28 = v15 != v24 || v17 != v23;
      if ( v19 == *(float *)(v6 + 128) && v20 == *(float *)(v6 + 132) )
      {
        v29 = 0;
      }
      else
      {
        v39 = *(_QWORD *)(v6 + 232);
        v29 = 1;
        if ( v39 && *(_BYTE *)(v39 + 96) )
          CVisual::OnClipChanged((CVisual *)v6);
        CVisual::ClearContentTreeDataCaches((CVisual *)v6);
      }
      if ( v28 || v29 )
        *(_BYTE *)(v6 + 88) |= 1u;
      v7 = a4;
      v4 = a2;
    }
    if ( *((_QWORD *)UnusedTreeData + 15) < Blink )
      break;
LABEL_30:
    v30 = *((_DWORD *)this + 2);
    Blink = *((_QWORD *)UnusedTreeData + 15);
    TreeData = (struct _LIST_ENTRY *)UnusedTreeData;
    if ( !v30 )
      goto LABEL_36;
    v31 = v30 - 1;
    *((_DWORD *)this + 2) = v31;
    v6 = *(_QWORD *)(*((_QWORD *)this + 3) + 8LL * v31);
  }
  updated = CVisual::UpdateWorldTransform(
              (CVisual *)v6,
              (CVisual **)v4,
              UnusedTreeData,
              v11,
              (const struct CTreeData *)TreeData);
  v13 = updated;
  if ( updated >= 0 )
  {
    if ( !v7 )
      CVisual::PropagateFlags((struct CVisual *)v6, 1, 1, 0, 0, 0, 0, 0);
    *((_QWORD *)UnusedTreeData + 22) = 0LL;
    goto LABEL_30;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x10Fu);
LABEL_36:
  if ( v13 < 0 )
    CPreComputeHelper::ClearResolvingFlagsFromStack(this, v4);
  return (unsigned int)v13;
}
