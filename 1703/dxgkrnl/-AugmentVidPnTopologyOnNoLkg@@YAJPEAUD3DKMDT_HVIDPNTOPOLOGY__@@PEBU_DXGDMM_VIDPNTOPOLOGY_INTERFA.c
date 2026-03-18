/*
 * XREFs of ?AugmentVidPnTopologyOnNoLkg@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAXPEBU_DXGDMM_INTERFACE@@IW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEQEA_KQEAI@Z @ 0x1C018D9AC
 * Callers:
 *     ?AugmentVidPnTopology@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAXPEBU_DXGDMM_INTERFACE@@IEQEA_KPEAY0BA@I@Z @ 0x1C018D70C (-AugmentVidPnTopology@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNT.c)
 * Callees:
 *     ?AddPathToFirstAvailableTarget@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@@Z @ 0x1C018D4F4 (-AddPathToFirstAvailableTarget@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTER.c)
 *     ?AddPresentPath@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C018D614 (-AddPresentPath@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IIW4_D3DK.c)
 *     ?ReclaimClonedVidPnTarget@@YAJPEBU_DXGDMM_INTERFACE@@QEAXQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@EQEAI4@Z @ 0x1C018E6A0 (-ReclaimClonedVidPnTarget@@YAJPEBU_DXGDMM_INTERFACE@@QEAXQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGD.c)
 */

__int64 __fastcall AugmentVidPnTopologyOnNoLkg(
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a1,
        const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *a2,
        void *a3,
        const struct _DXGDMM_INTERFACE *a4,
        unsigned int a5,
        enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS a6,
        unsigned int a7,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE a8,
        unsigned __int64 *const a9,
        unsigned int *const a10)
{
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE v18; // esi
  __int64 v19; // rax
  unsigned __int64 *v20; // r13
  __int64 v21; // rax
  unsigned int *v22; // r14
  int AvailableTarget; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // r9
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // r15
  __int64 v37; // rax
  int v38; // eax
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rax
  __int64 v43; // rax
  _QWORD *v44; // rax
  __int64 v45; // r15
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rsi
  _QWORD *v52; // rax
  _QWORD *v53; // rax
  _QWORD *v54; // rax
  _QWORD *v55; // rax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE v56; // [rsp+20h] [rbp-48h]
  enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE v57; // [rsp+20h] [rbp-48h]

  if ( !a1 )
  {
    v14 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    *(_QWORD *)(v14 + 24) = 2775LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( !a2 )
  {
    v15 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v15 + 24) = 2776LL;
    WdLogEvent5_WdAssertion(v15);
  }
  if ( !a3 )
  {
    v16 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v16 + 24) = 2777LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( !a4 )
  {
    v17 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v17 + 24) = 2778LL;
    WdLogEvent5_WdAssertion(v17);
  }
  v18 = -1;
  if ( a5 == -1 )
  {
    v19 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v19 + 24) = 2779LL;
    WdLogEvent5_WdAssertion(v19);
  }
  v20 = a9;
  if ( !a9 )
  {
    v21 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v21 + 24) = 2780LL;
    WdLogEvent5_WdAssertion(v21);
  }
  *v20 = 0LL;
  v22 = a10;
  if ( a10 )
    *a10 = -1;
  a6 = -1;
  AvailableTarget = AddPathToFirstAvailableTarget(a1, (__int64)a2, a5, (__int64)a4, v56, 2u);
  v28 = AvailableTarget;
  if ( AvailableTarget == -1071774925 )
  {
    v29 = WdLogNewEntry5_WdDmmEvent(v25, v24, v26, v27);
    *(_QWORD *)(v29 + 24) = a1;
    *(_QWORD *)(v29 + 32) = a5;
    WdLogEvent5_WdDmmEvent(v29);
    v31 = AddPathToFirstAvailableTarget(a1, (__int64)a2, a5, v30, v57, 1u);
    v36 = v31;
    if ( v31 == -1071774925 )
    {
      v37 = WdLogNewEntry5_WdDmmEvent(v33, v32, v34, v35);
      *(_QWORD *)(v37 + 24) = a1;
      *(_QWORD *)(v37 + 32) = a5;
      WdLogEvent5_WdDmmEvent(v37);
      a7 = -1;
      v38 = ReclaimClonedVidPnTarget(a4, a3, a1, a2, a8, &a7, (unsigned int *const)&a6);
      v36 = v38;
      if ( v38 == -1071774925 )
      {
        v41 = WdLogNewEntry5_WdTrace(v33, v32, v39, v40);
        *(_QWORD *)(v41 + 24) = a1;
        *(_QWORD *)(v41 + 32) = a5;
        return 3223192371LL;
      }
      if ( v38 >= 0 )
      {
        if ( a7 == -1 )
        {
          v43 = WdLogNewEntry5_WdAssertion(v33, v32, v39, v40);
          *(_QWORD *)(v43 + 24) = 2906LL;
          WdLogEvent5_WdAssertion(v43);
        }
        v44 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v33, v32, v39, v40);
        v45 = a7;
        v44[3] = a7;
        v44[4] = a1;
        v44[5] = a5;
        WdLogEvent5_WdDmmEvent(v44);
        v46 = AddPresentPath(a1, a2, a5, a7);
        v51 = v46;
        if ( v46 == -1071774975 || v46 == -1071774920 )
        {
          v52 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v48, v47, v49, v50);
          v52[3] = a5;
          v52[4] = v45;
          v52[5] = a3;
          WdLogEvent5_WdDmmEvent(v52);
          return 3223192371LL;
        }
        if ( v46 < 0 )
        {
          v53 = (_QWORD *)WdLogNewEntry5_WdError(v48, v47);
          v53[3] = a5;
          v53[4] = v45;
          v53[5] = a1;
          v53[6] = v51;
          WdLogEvent5_WdError(v53);
          return (unsigned int)v51;
        }
        v18 = a6;
        goto LABEL_29;
      }
LABEL_33:
      v54 = (_QWORD *)WdLogNewEntry5_WdError(v33, v32);
      v54[3] = a1;
      v54[4] = a5;
      v54[5] = v36;
      WdLogEvent5_WdError(v54);
      return (unsigned int)v36;
    }
    if ( v31 < 0 )
      goto LABEL_33;
  }
  else if ( AvailableTarget < 0 )
  {
    v55 = (_QWORD *)WdLogNewEntry5_WdError(v25, v24);
    v55[4] = a5;
    v55[3] = a1;
    v55[5] = v28;
    WdLogEvent5_WdError(v55);
    return (unsigned int)v28;
  }
LABEL_29:
  *v20 = 1LL;
  if ( v22 )
    *v22 = v18;
  return 0LL;
}
