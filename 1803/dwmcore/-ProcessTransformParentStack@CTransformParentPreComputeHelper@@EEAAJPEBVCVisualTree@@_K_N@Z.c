/*
 * XREFs of ?ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z @ 0x18000ACD0
 * Callers:
 *     ?PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x1800A2CF0 (-PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z.c)
 * Callees:
 *     ?GetTransformParentNoRef@CVisual@@QEBAPEAV1@XZ @ 0x18000B384 (-GetTransformParentNoRef@CVisual@@QEBAPEAV1@XZ.c)
 *     ?UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x18000B418 (-UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?GetVisualNoRef@CVisualReferenceController@@UEBAPEAVCVisual@@XZ @ 0x180027F90 (-GetVisualNoRef@CVisualReferenceController@@UEBAPEAVCVisual@@XZ.c)
 *     ??0CTreeData@@IEAA@XZ @ 0x180029F68 (--0CTreeData@@IEAA@XZ.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x180049AAC (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18004CC14 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ @ 0x18004CC64 (-GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ.c)
 *     ?SetUnusedTreeData@CVisual@@QEAAXPEAVCTreeData@@@Z @ 0x18004D028 (-SetUnusedTreeData@CVisual@@QEAAXPEAVCTreeData@@@Z.c)
 *     ?OnClipChanged@CVisual@@AEAAXXZ @ 0x18004D6CC (-OnClipChanged@CVisual@@AEAAXXZ.c)
 *     ?ClearContentTreeDataCaches@CVisual@@IEAAXXZ @ 0x18004E754 (-ClearContentTreeDataCaches@CVisual@@IEAAXXZ.c)
 *     ?GetRenderPassInfoList@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x180050F60 (-GetRenderPassInfoList@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetProcessAttributionNoRef@CResource@@UEBAPEAVCProcessAttribution@@XZ @ 0x1800512E0 (-GetProcessAttributionNoRef@CResource@@UEBAPEAVCProcessAttribution@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800B963C (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ @ 0x180158600 (-ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ.c)
 *     ?ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ @ 0x180177BB0 (-ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ.c)
 *     ?ClearResolvingFlagsFromStack@CPreComputeHelper@@IEAAXPEBVCVisualTree@@@Z @ 0x1802126EC (-ClearResolvingFlagsFromStack@CPreComputeHelper@@IEAAXPEBVCVisualTree@@@Z.c)
 */

__int64 __fastcall CTransformParentPreComputeHelper::ProcessTransformParentStack(
        CTransformParentPreComputeHelper *this,
        const struct CVisualTree *a2,
        __int64 a3,
        char a4)
{
  CTransformParentPreComputeHelper *v4; // rsi
  int v5; // ecx
  __int64 v6; // rbx
  const struct CVisualTree *v7; // rbp
  char v8; // r14
  unsigned __int64 v9; // r15
  __int64 v10; // rax
  bool v11; // r12
  struct CVisual *(__fastcall *v12)(CVisualReferenceController *__hidden); // r10
  struct CTreeData *UnusedTreeData; // rdi
  __int64 v14; // rax
  int v15; // r13d
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  int v18; // eax
  unsigned int v19; // eax
  float v20; // xmm6_4
  float v21; // xmm3_4
  float v22; // xmm7_4
  float v23; // xmm4_4
  float v24; // xmm8_4
  float v25; // xmm9_4
  __int64 v26; // rcx
  float v27; // xmm2_4
  float v28; // xmm5_4
  float v29; // xmm1_4
  float v30; // xmm0_4
  bool v31; // r14
  char v32; // bp
  int v33; // edx
  int *v34; // rcx
  int v35; // edx
  int *v36; // rcx
  __int64 (*v37)(void); // rax
  int updated; // eax
  __int64 v41; // rcx
  struct _LIST_ENTRY *RenderPassInfoList; // rax
  struct _LIST_ENTRY *v43; // r14
  struct CProcessAttribution *(__fastcall *v44)(CResource *__hidden); // rax
  struct CProcessAttribution *ProcessAttributionNoRef; // rax
  struct CProcessAttribution *v46; // rbp
  __int64 *v47; // rbx
  __int64 v48; // rax
  struct CProcessAttribution *(__fastcall *v49)(CResource *__hidden); // rax
  struct CProcessAttribution *v50; // rax
  struct CProcessAttribution *v51; // r14
  __int64 v52; // rax
  CVisual *TransformParentNoRef; // rax
  __int64 v54; // rax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *Flink; // rcx
  CTreeData *v57; // rax
  void **v58; // rax
  _QWORD *v59; // rcx
  __int64 v60; // rbp
  __int64 v61; // r15
  __int64 v62; // rax
  __int64 v63; // rbp
  __int64 v64; // r12
  __int64 v65; // rax
  int v66; // r8d
  int *v67; // rdx
  struct _LIST_ENTRY *v68; // r15
  int v69; // eax
  __int64 v70; // [rsp+30h] [rbp-B8h]
  CVisualReferenceController **v71; // [rsp+30h] [rbp-B8h]
  struct CTreeData *TreeData; // [rsp+38h] [rbp-B0h]
  float v73[4]; // [rsp+40h] [rbp-A8h]

  v4 = this;
  v5 = *((_DWORD *)this + 2);
  v6 = 0LL;
  v7 = a2;
  v8 = a4;
  v9 = 1LL;
  v10 = 0LL;
  TreeData = 0LL;
  if ( v5 )
  {
    *((_DWORD *)v4 + 2) = v5 - 1;
    v6 = *(_QWORD *)(*((_QWORD *)v4 + 3) + 8LL * (unsigned int)(v5 - 1));
    v10 = v6;
  }
  if ( v10 != *((_QWORD *)a2 + 3) )
  {
    TransformParentNoRef = CVisual::GetTransformParentNoRef((CVisual *)v6);
    if ( !TransformParentNoRef )
      TransformParentNoRef = *(CVisual **)(v6 + 80);
    TreeData = CVisual::FindTreeData(TransformParentNoRef, v7);
    v9 = *((_QWORD *)TreeData + 15);
  }
  while ( 1 )
  {
    v11 = 0;
    v12 = CVisualReferenceController::GetVisualNoRef;
    UnusedTreeData = 0LL;
    if ( *((_BYTE *)v7 + 32) )
    {
      UnusedTreeData = (struct CTreeData *)(v6 + 288);
    }
    else
    {
      TreeDataListHead = CVisual::GetTreeDataListHead((CVisual *)v6);
      if ( TreeDataListHead )
      {
        Flink = TreeDataListHead->Flink;
        if ( TreeDataListHead->Flink != TreeDataListHead )
        {
          while ( (const struct CVisualTree *)Flink[2].Flink != v7 )
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
        v58 = *(void ***)UnusedTreeData;
      }
      else
      {
        v57 = (CTreeData *)operator new(0x108uLL);
        UnusedTreeData = v57;
        if ( !v57 )
        {
          v15 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1282u);
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xEBu);
          goto LABEL_41;
        }
        CTreeData::CTreeData(v57);
        v58 = &CVisualTreeData::`vftable';
        *v59 = &CVisualTreeData::`vftable';
        v59[32] = 0LL;
      }
      ((void (__fastcall *)(struct CTreeData *, const struct CVisualTree *, __int64))v58[1])(UnusedTreeData, v7, v6);
      v12 = CVisualReferenceController::GetVisualNoRef;
    }
    v14 = *(_QWORD *)(v6 + 216);
    v15 = 0;
    if ( (*(_DWORD *)(v14 + 4) & 0x10000000) != 0 )
    {
      v35 = *(_DWORD *)(v14 + 12);
      v36 = (int *)(v14 + 12);
      if ( (v35 & 0x7F000000) != 0x4000000 )
      {
        do
        {
          v36 = (int *)((char *)v36 + (v35 & 0xFFFFFF) + 4);
          v35 = *v36;
        }
        while ( (*v36 & 0x7F000000) != 0x4000000 );
      }
      v71 = *(CVisualReferenceController ***)(v36 + 1);
      if ( v71 )
      {
        v37 = *(__int64 (**)(void))(*(_QWORD *)*v71 + 152LL);
        if ( (char *)v37 == (char *)v12 ? CVisualReferenceController::GetVisualNoRef(*v71) : (struct CVisual *)v37() )
        {
          *((_BYTE *)UnusedTreeData + 16) &= ~8u;
          v11 = (*((_BYTE *)UnusedTreeData + 16) & 4) == 0 || *((_QWORD *)UnusedTreeData + 27) != a3;
        }
      }
    }
    v16 = *(_QWORD *)(v6 + 80);
    if ( !v16 || (*(_BYTE *)(v16 + 88) & 1) != 0 )
    {
      v20 = *(float *)(v6 + 116);
      v21 = 0.0;
      v22 = *(float *)(v6 + 120);
      v23 = 0.0;
      v24 = *(float *)(v6 + 132);
      v25 = *(float *)(v6 + 136);
      if ( v16 )
      {
        v21 = *(float *)(v16 + 132);
        v23 = *(float *)(v16 + 136);
      }
      v26 = *(_QWORD *)(v6 + 216);
      if ( (*(_DWORD *)(v26 + 4) & 0x400000) != 0 )
      {
        v66 = *(_DWORD *)(v26 + 12);
        v67 = (int *)(v26 + 12);
        if ( (v66 & 0x7F000000) != 0xA000000 )
        {
          do
          {
            v67 = (int *)((char *)v67 + (v66 & 0xFFFFFF) + 4);
            v66 = *v67;
          }
          while ( (*v67 & 0x7F000000) != 0xA000000 );
        }
        *(_QWORD *)v73 = *(_QWORD *)(v67 + 1);
      }
      else
      {
        *(_QWORD *)v73 = 0LL;
      }
      v27 = (float)(v73[0] * v21) + *(float *)(v6 + 104);
      v28 = (float)(v73[1] * v23) + *(float *)(v6 + 108);
      *(float *)(v6 + 116) = v27;
      *(float *)(v6 + 120) = v28;
      if ( (*(_DWORD *)(v26 + 4) & 0x800000) != 0 )
      {
        v33 = *(_DWORD *)(v26 + 12);
        v34 = (int *)(v26 + 12);
        if ( (v33 & 0x7F000000) != 0x9000000 )
        {
          do
          {
            v34 = (int *)((char *)v34 + (v33 & 0xFFFFFF) + 4);
            v33 = *v34;
          }
          while ( (*v34 & 0x7F000000) != 0x9000000 );
        }
        v70 = *(_QWORD *)(v34 + 1);
      }
      else
      {
        v70 = 0LL;
      }
      v29 = (float)(*(float *)&v70 * v21) + *(float *)(v6 + 124);
      v30 = (float)(*((float *)&v70 + 1) * v23) + *(float *)(v6 + 128);
      *(float *)(v6 + 132) = v29;
      *(float *)(v6 + 136) = v30;
      if ( v29 < 0.0 )
      {
        *(_DWORD *)(v6 + 132) = 0;
        v29 = 0.0;
      }
      if ( v30 < 0.0 )
      {
        *(_DWORD *)(v6 + 136) = 0;
        v30 = 0.0;
      }
      v31 = v20 != v27 || v22 != v28;
      if ( v24 == v29 && v25 == v30 )
      {
        v32 = 0;
      }
      else
      {
        v54 = *(_QWORD *)(v6 + 240);
        v32 = 1;
        if ( v54 && *(_BYTE *)(v54 + 128) )
          CVisual::OnClipChanged((CVisual *)v6);
        CVisual::ClearContentTreeDataCaches((CVisual *)v6);
      }
      if ( v31 || v32 )
        *(_DWORD *)(v6 + 88) |= 1u;
      v8 = a4;
      v7 = a2;
    }
    v17 = *((_QWORD *)UnusedTreeData + 15);
    if ( v17 < v9 )
      break;
LABEL_11:
    v9 = v17;
    TreeData = UnusedTreeData;
    v18 = *((_DWORD *)v4 + 2);
    if ( !v18 )
      goto LABEL_41;
    v19 = v18 - 1;
    *((_DWORD *)v4 + 2) = v19;
    v6 = *(_QWORD *)(*((_QWORD *)v4 + 3) + 8LL * v19);
  }
  updated = CVisual::UpdateWorldTransform((CVisual *)v6, v7, UnusedTreeData, v11, TreeData);
  v15 = updated;
  if ( updated >= 0 )
  {
    if ( !v8 )
    {
      v41 = *(_QWORD *)(v6 + 24);
      if ( (v41 & 2) != 0 )
        v41 = *(_QWORD *)(v41 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        LODWORD(v41) = v41 & 1;
      if ( (_DWORD)v41 )
      {
        v60 = 0LL;
        v61 = (unsigned int)v41;
        do
        {
          v62 = CPtrArrayBase::operator[](v6 + 24, v60);
          if ( v62 != *(_QWORD *)(v6 + 80) )
            (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v62 + 64LL))(v62, 0LL, v6);
          ++v60;
          --v61;
        }
        while ( v61 );
      }
      RenderPassInfoList = CVisual::GetRenderPassInfoList((CVisual *)v6);
      v43 = RenderPassInfoList;
      if ( RenderPassInfoList )
      {
        v68 = RenderPassInfoList->Flink;
        if ( RenderPassInfoList->Flink != RenderPassInfoList )
        {
          while ( 1 )
          {
            v69 = CMoveRenderPassInfo::ResetVisibleRegion((CMoveRenderPassInfo *)&v68[-6].Blink);
            if ( v69 < 0 )
              break;
            CMoveRenderPassInfo::ClearVisibleRegion((CMoveRenderPassInfo *)&v68[-6].Blink);
            v68 = v68->Flink;
            if ( v68 == v43 )
              goto LABEL_50;
          }
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v69, 0x1134u);
        }
      }
LABEL_50:
      v44 = *(struct CProcessAttribution *(__fastcall **)(CResource *__hidden))(*(_QWORD *)v6 + 120LL);
      if ( v44 == CResource::GetProcessAttributionNoRef )
        ProcessAttributionNoRef = CResource::GetProcessAttributionNoRef((CResource *)v6);
      else
        ProcessAttributionNoRef = v44((CResource *)v6);
      *(_DWORD *)(v6 + 88) |= 0x15u;
      v46 = ProcessAttributionNoRef;
      if ( ProcessAttributionNoRef )
        ++*((_DWORD *)ProcessAttributionNoRef + 7);
      v47 = *(__int64 **)(v6 + 80);
      if ( v47 )
      {
        do
        {
          if ( ((*((_DWORD *)v47 + 22) << 25) & 0xA2000000) == 0xA2000000 )
            break;
          v48 = *v47;
          *((_DWORD *)v47 + 22) |= 0x51u;
          v49 = *(struct CProcessAttribution *(__fastcall **)(CResource *__hidden))(v48 + 120);
          v50 = v49 == CResource::GetProcessAttributionNoRef
              ? CResource::GetProcessAttributionNoRef((CResource *)v47)
              : v49((CResource *)v47);
          v51 = v50;
          if ( v50 )
          {
            if ( v50 != v46 )
              ++*((_DWORD *)v50 + 6);
          }
          else
          {
            v51 = v46;
          }
          v52 = v47[3];
          if ( (v52 & 2) != 0 )
            v52 = *(_QWORD *)(v52 & 0xFFFFFFFFFFFFFFFCuLL);
          else
            LODWORD(v52) = v52 & 1;
          if ( (_DWORD)v52 )
          {
            v63 = 0LL;
            v64 = (unsigned int)v52;
            do
            {
              v65 = CPtrArrayBase::operator[](v47 + 3, v63);
              if ( v65 != v47[10] )
                (*(void (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v65 + 64LL))(v65, 0LL, v47);
              ++v63;
              --v64;
            }
            while ( v64 );
          }
          v47 = (__int64 *)v47[10];
          v46 = v51;
        }
        while ( v47 );
        v4 = this;
      }
      v8 = a4;
      v7 = a2;
    }
    *((_QWORD *)UnusedTreeData + 22) = 0LL;
    v17 = *((_QWORD *)UnusedTreeData + 15);
    goto LABEL_11;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0xFDu);
LABEL_41:
  if ( v15 < 0 )
    CPreComputeHelper::ClearResolvingFlagsFromStack(v4, v7);
  return (unsigned int)v15;
}
