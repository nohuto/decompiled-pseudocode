/*
 * XREFs of ?ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z @ 0x1800B0A10
 * Callers:
 *     ?PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x1800551E0 (-PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ @ 0x18004EB40 (-GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18004EC04 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ @ 0x18004EC58 (-GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ.c)
 *     ?SetUnusedTreeData@CVisual@@QEAAXPEAVCTreeData@@@Z @ 0x18004F170 (-SetUnusedTreeData@CVisual@@QEAAXPEAVCTreeData@@@Z.c)
 *     ?OnClipChanged@CVisual@@AEAAXXZ @ 0x18004F6F8 (-OnClipChanged@CVisual@@AEAAXXZ.c)
 *     ?UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x18004FBE4 (-UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 *     ?ClearContentTreeDataCaches@CVisual@@IEAAXXZ @ 0x180050644 (-ClearContentTreeDataCaches@CVisual@@IEAAXXZ.c)
 *     ?GetRenderPassInfoList@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x180054DEC (-GetRenderPassInfoList@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x180054E04 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??0CTreeData@@IEAA@XZ @ 0x1800A04A8 (--0CTreeData@@IEAA@XZ.c)
 *     ?GetProcessAttributionNoRef@CResource@@UEBAPEAVCProcessAttribution@@XZ @ 0x1800A9B30 (-GetProcessAttributionNoRef@CResource@@UEBAPEAVCProcessAttribution@@XZ.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800B2164 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ @ 0x180135D38 (-ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ.c)
 *     ?ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ @ 0x18014E320 (-ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ.c)
 *     ?ClearResolvingFlagsFromStack@CPreComputeHelper@@IEAAXPEBVCVisualTree@@@Z @ 0x1801D02C0 (-ClearResolvingFlagsFromStack@CPreComputeHelper@@IEAAXPEBVCVisualTree@@@Z.c)
 */

__int64 __fastcall CTransformParentPreComputeHelper::ProcessTransformParentStack(
        CTransformParentPreComputeHelper *this,
        const struct CVisualTree *a2,
        __int64 a3,
        char a4)
{
  const struct CVisualTree *v4; // rbp
  CTransformParentPreComputeHelper *v5; // rsi
  __int64 v6; // rdi
  char v7; // r14
  int v8; // eax
  unsigned __int64 Blink; // r15
  unsigned int v10; // eax
  char v11; // r12
  struct CTreeData *UnusedTreeData; // rbx
  int v13; // r13d
  __int64 v14; // rax
  int v15; // eax
  unsigned int v16; // eax
  float v17; // xmm6_4
  float v18; // xmm3_4
  float v19; // xmm7_4
  float v20; // xmm4_4
  float v21; // xmm8_4
  float v22; // xmm9_4
  __int64 v23; // rcx
  __int64 v24; // xmm2_8
  float v25; // xmm5_4
  float v26; // xmm2_4
  __int64 v27; // xmm1_8
  float v28; // xmm1_4
  float v29; // xmm0_4
  bool v30; // r14
  char v31; // bp
  int v33; // edx
  int *v34; // rcx
  signed int updated; // eax
  __int64 v36; // rcx
  struct _LIST_ENTRY *RenderPassInfoList; // rax
  struct _LIST_ENTRY *v38; // r14
  struct CProcessAttribution *(__fastcall *v39)(CResource *); // rax
  struct CProcessAttribution *ProcessAttributionNoRef; // rax
  struct CProcessAttribution *v41; // rbp
  __int64 *v42; // rdi
  __int64 v43; // rax
  struct CProcessAttribution *(__fastcall *v44)(CResource *); // rax
  struct CProcessAttribution *v45; // rax
  struct CProcessAttribution *v46; // r14
  __int64 v47; // rax
  CVisual *v48; // rcx
  __int64 v49; // rax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *Flink; // rcx
  CTreeData *v52; // rax
  _QWORD *v53; // rcx
  __int64 v54; // rbp
  __int64 v55; // r15
  __int64 v56; // rax
  __int64 v57; // rbp
  __int64 v58; // r12
  __int64 v59; // rax
  int v60; // r8d
  int *v61; // rdx
  struct _LIST_ENTRY *v62; // r15
  signed int v63; // eax
  struct _LIST_ENTRY *TreeData; // [rsp+30h] [rbp-B8h]
  float v65; // [rsp+3Ch] [rbp-ACh]
  float v66; // [rsp+44h] [rbp-A4h]

  v4 = a2;
  v5 = this;
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
      v48 = *(CVisual **)(*(_QWORD *)CVisual::GetTransformParentDataInternal((CVisual *)v6) + 8LL);
    else
      v48 = *(CVisual **)(v6 + 80);
    TreeData = CVisual::FindTreeData(v48, v4);
    Blink = (unsigned __int64)TreeData[7].Blink;
  }
  while ( 1 )
  {
    v11 = 0;
    UnusedTreeData = 0LL;
    if ( *((_BYTE *)v4 + 32) )
    {
      UnusedTreeData = (struct CTreeData *)(v6 + 280);
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
        v52 = (CTreeData *)operator new(0x108uLL);
        UnusedTreeData = v52;
        if ( !v52 )
        {
          v13 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x112Cu);
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0xFBu);
          goto LABEL_34;
        }
        CTreeData::CTreeData(v52);
        *v53 = &CVisualTreeData::`vftable';
        v53[32] = 0LL;
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
      v17 = *(float *)(v6 + 116);
      v18 = 0.0;
      v19 = *(float *)(v6 + 120);
      v20 = 0.0;
      v21 = *(float *)(v6 + 132);
      v22 = *(float *)(v6 + 136);
      if ( v14 )
      {
        v18 = *(float *)(v14 + 132);
        v20 = *(float *)(v14 + 136);
      }
      v23 = *(_QWORD *)(v6 + 208);
      if ( (*(_DWORD *)(v23 + 4) & 0x400000) != 0 )
      {
        v60 = *(_DWORD *)(v23 + 12);
        v61 = (int *)(v23 + 12);
        if ( (v60 & 0x7F000000) != 0xA000000 )
        {
          do
          {
            v61 = (int *)((char *)v61 + (v60 & 0xFFFFFF) + 4);
            v60 = *v61;
          }
          while ( (*v61 & 0x7F000000) != 0xA000000 );
        }
        v24 = *(_QWORD *)(v61 + 1);
        v66 = *((float *)&v24 + 1);
      }
      else
      {
        LODWORD(v24) = 0;
        v66 = 0.0;
      }
      v25 = (float)(v66 * v20) + *(float *)(v6 + 108);
      v26 = (float)(*(float *)&v24 * v18) + *(float *)(v6 + 104);
      *(float *)(v6 + 120) = v25;
      *(float *)(v6 + 116) = v26;
      if ( (*(_DWORD *)(v23 + 4) & 0x800000) != 0 )
      {
        v33 = *(_DWORD *)(v23 + 12);
        v34 = (int *)(v23 + 12);
        if ( (v33 & 0x7F000000) != 0x9000000 )
        {
          do
          {
            v34 = (int *)((char *)v34 + (v33 & 0xFFFFFF) + 4);
            v33 = *v34;
          }
          while ( (*v34 & 0x7F000000) != 0x9000000 );
        }
        v27 = *(_QWORD *)(v34 + 1);
        v65 = *((float *)&v27 + 1);
      }
      else
      {
        LODWORD(v27) = 0;
        v65 = 0.0;
      }
      v28 = (float)(*(float *)&v27 * v18) + *(float *)(v6 + 124);
      v29 = (float)(v65 * v20) + *(float *)(v6 + 128);
      *(float *)(v6 + 136) = v29;
      *(float *)(v6 + 132) = v28;
      if ( v28 < 0.0 )
        *(_DWORD *)(v6 + 132) = 0;
      if ( v29 < 0.0 )
        *(_DWORD *)(v6 + 136) = 0;
      v30 = v17 != v26 || v19 != v25;
      if ( v21 == *(float *)(v6 + 132) && v22 == *(float *)(v6 + 136) )
      {
        v31 = 0;
      }
      else
      {
        v49 = *(_QWORD *)(v6 + 232);
        v31 = 1;
        if ( v49 && *(_BYTE *)(v49 + 96) )
          CVisual::OnClipChanged((CVisual *)v6);
        CVisual::ClearContentTreeDataCaches((CVisual *)v6);
      }
      if ( v30 || v31 )
        *(_DWORD *)(v6 + 88) |= 1u;
      v7 = a4;
      v4 = a2;
    }
    if ( *((_QWORD *)UnusedTreeData + 15) < Blink )
      break;
LABEL_11:
    v15 = *((_DWORD *)v5 + 2);
    Blink = *((_QWORD *)UnusedTreeData + 15);
    TreeData = (struct _LIST_ENTRY *)UnusedTreeData;
    if ( !v15 )
      goto LABEL_34;
    v16 = v15 - 1;
    *((_DWORD *)v5 + 2) = v16;
    v6 = *(_QWORD *)(*((_QWORD *)v5 + 3) + 8LL * v16);
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
    {
      v36 = *(_QWORD *)(v6 + 24);
      if ( (v36 & 2) != 0 )
        v36 = *(_QWORD *)(v36 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        LODWORD(v36) = v36 & 1;
      if ( (_DWORD)v36 )
      {
        v54 = 0LL;
        v55 = (unsigned int)v36;
        do
        {
          v56 = CPtrArrayBase::operator[](v6 + 24, v54);
          if ( v56 != *(_QWORD *)(v6 + 80) )
            (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v56 + 64LL))(v56, 0LL, v6);
          ++v54;
          --v55;
        }
        while ( v55 );
      }
      RenderPassInfoList = CVisual::GetRenderPassInfoList((CVisual *)v6);
      v38 = RenderPassInfoList;
      if ( RenderPassInfoList )
      {
        v62 = RenderPassInfoList->Flink;
        if ( RenderPassInfoList->Flink != RenderPassInfoList )
        {
          while ( 1 )
          {
            v63 = CMoveRenderPassInfo::ResetVisibleRegion((CMoveRenderPassInfo *)&v62[-6].Blink);
            if ( v63 < 0 )
              break;
            CMoveRenderPassInfo::ClearVisibleRegion((CMoveRenderPassInfo *)&v62[-6].Blink);
            v62 = v62->Flink;
            if ( v62 == v38 )
              goto LABEL_45;
          }
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v63, 0xFDEu);
        }
      }
LABEL_45:
      v39 = *(struct CProcessAttribution *(__fastcall **)(CResource *))(*(_QWORD *)v6 + 120LL);
      if ( v39 == CResource::GetProcessAttributionNoRef )
        ProcessAttributionNoRef = CResource::GetProcessAttributionNoRef((CResource *)v6);
      else
        ProcessAttributionNoRef = v39((CResource *)v6);
      *(_DWORD *)(v6 + 88) |= 0x15u;
      v41 = ProcessAttributionNoRef;
      if ( ProcessAttributionNoRef )
        ++*((_DWORD *)ProcessAttributionNoRef + 7);
      v42 = *(__int64 **)(v6 + 80);
      if ( v42 )
      {
        do
        {
          if ( ((*((_DWORD *)v42 + 22) << 25) & 0xA2000000) == 0xA2000000 )
            break;
          v43 = *v42;
          *((_DWORD *)v42 + 22) |= 0x51u;
          v44 = *(struct CProcessAttribution *(__fastcall **)(CResource *))(v43 + 120);
          v45 = v44 == CResource::GetProcessAttributionNoRef
              ? CResource::GetProcessAttributionNoRef((CResource *)v42)
              : v44((CResource *)v42);
          v46 = v45;
          if ( v45 )
          {
            if ( v45 != v41 )
              ++*((_DWORD *)v45 + 6);
          }
          else
          {
            v46 = v41;
          }
          v47 = v42[3];
          if ( (v47 & 2) != 0 )
            v47 = *(_QWORD *)(v47 & 0xFFFFFFFFFFFFFFFCuLL);
          else
            LODWORD(v47) = v47 & 1;
          if ( (_DWORD)v47 )
          {
            v57 = 0LL;
            v58 = (unsigned int)v47;
            do
            {
              v59 = CPtrArrayBase::operator[](v42 + 3, v57);
              if ( v59 != v42[10] )
                (*(void (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v59 + 64LL))(v59, 0LL, v42);
              ++v57;
              --v58;
            }
            while ( v58 );
          }
          v42 = (__int64 *)v42[10];
          v41 = v46;
        }
        while ( v42 );
        v5 = this;
      }
      v7 = a4;
      v4 = a2;
    }
    *((_QWORD *)UnusedTreeData + 22) = 0LL;
    goto LABEL_11;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, updated, 0x10Fu);
LABEL_34:
  if ( v13 < 0 )
    CPreComputeHelper::ClearResolvingFlagsFromStack(v5, v4);
  return (unsigned int)v13;
}
