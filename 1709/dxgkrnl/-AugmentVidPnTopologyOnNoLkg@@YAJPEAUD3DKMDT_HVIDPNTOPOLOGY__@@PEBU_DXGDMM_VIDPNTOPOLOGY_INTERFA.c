/*
 * XREFs of ?AugmentVidPnTopologyOnNoLkg@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAXPEBU_DXGDMM_INTERFACE@@IW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEQEA_KQEAI@Z @ 0x1C01A2120
 * Callers:
 *     ?AugmentVidPnTopology@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAXPEBU_DXGDMM_INTERFACE@@IEQEA_KPEAY0BA@I@Z @ 0x1C01A1E80 (-AugmentVidPnTopology@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNT.c)
 * Callees:
 *     ?AddPathToFirstAvailableTarget@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@@Z @ 0x1C01A1C68 (-AddPathToFirstAvailableTarget@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTER.c)
 *     ?AddPresentPath@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C01A1D88 (-AddPresentPath@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IIW4_D3DK.c)
 *     ?ReclaimClonedVidPnTarget@@YAJPEBU_DXGDMM_INTERFACE@@QEAXQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@EQEAI4@Z @ 0x1C01A2EE4 (-ReclaimClonedVidPnTarget@@YAJPEBU_DXGDMM_INTERFACE@@QEAXQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGD.c)
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
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // r9
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // r15
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // r15
  int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // rsi
  _QWORD *v42; // rax
  _QWORD *v43; // rax
  _QWORD *v44; // rax
  _QWORD *v45; // rax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE v46; // [rsp+20h] [rbp-48h]
  enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE v47; // [rsp+20h] [rbp-48h]

  if ( !a1 )
  {
    v14 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v14 + 24) = 2756LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( !a2 )
  {
    v15 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v15 + 24) = 2757LL;
    WdLogEvent5_WdAssertion(v15);
  }
  if ( !a3 )
  {
    v16 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v16 + 24) = 2758LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( !a4 )
  {
    v17 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v17 + 24) = 2759LL;
    WdLogEvent5_WdAssertion(v17);
  }
  v18 = -1;
  if ( a5 == -1 )
  {
    v19 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v19 + 24) = 2760LL;
    WdLogEvent5_WdAssertion(v19);
  }
  v20 = a9;
  if ( !a9 )
  {
    v21 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v21 + 24) = 2761LL;
    WdLogEvent5_WdAssertion(v21);
  }
  *v20 = 0LL;
  v22 = a10;
  if ( a10 )
    *a10 = -1;
  a6 = -1;
  AvailableTarget = AddPathToFirstAvailableTarget(a1, (__int64)a2, a5, (__int64)a4, v46, 2u);
  v25 = AvailableTarget;
  if ( AvailableTarget == -1071774925 )
  {
    v26 = WdLogNewEntry5_WdDmmEvent(v24);
    *(_QWORD *)(v26 + 24) = a1;
    *(_QWORD *)(v26 + 32) = a5;
    WdLogEvent5_WdDmmEvent(v26);
    v28 = AddPathToFirstAvailableTarget(a1, (__int64)a2, a5, v27, v47, 1u);
    v30 = v28;
    if ( v28 == -1071774925 )
    {
      v31 = WdLogNewEntry5_WdDmmEvent(v29);
      *(_QWORD *)(v31 + 24) = a1;
      *(_QWORD *)(v31 + 32) = a5;
      WdLogEvent5_WdDmmEvent(v31);
      a7 = -1;
      v32 = ReclaimClonedVidPnTarget(a4, a3, a1, a2, a8, &a7, (unsigned int *const)&a6);
      v30 = v32;
      if ( v32 == -1071774925 )
      {
        v34 = WdLogNewEntry5_WdTrace(v29, v33);
        *(_QWORD *)(v34 + 24) = a1;
        *(_QWORD *)(v34 + 32) = a5;
        return 3223192371LL;
      }
      if ( v32 >= 0 )
      {
        if ( a7 == -1 )
        {
          v36 = WdLogNewEntry5_WdAssertion(v29);
          *(_QWORD *)(v36 + 24) = 2887LL;
          WdLogEvent5_WdAssertion(v36);
        }
        v37 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v29);
        v38 = a7;
        v37[3] = a7;
        v37[4] = a1;
        v37[5] = a5;
        WdLogEvent5_WdDmmEvent(v37);
        v39 = AddPresentPath(a1, a2, a5, a7);
        v41 = v39;
        if ( v39 == -1071774975 || v39 == -1071774920 )
        {
          v42 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v40);
          v42[3] = a5;
          v42[4] = v38;
          v42[5] = a3;
          WdLogEvent5_WdDmmEvent(v42);
          return 3223192371LL;
        }
        if ( v39 < 0 )
        {
          v43 = (_QWORD *)WdLogNewEntry5_WdError(v40);
          v43[3] = a5;
          v43[4] = v38;
          v43[5] = a1;
          v43[6] = v41;
          WdLogEvent5_WdError(v43);
          return (unsigned int)v41;
        }
        v18 = a6;
        goto LABEL_29;
      }
LABEL_33:
      v44 = (_QWORD *)WdLogNewEntry5_WdError(v29);
      v44[3] = a1;
      v44[4] = a5;
      v44[5] = v30;
      WdLogEvent5_WdError(v44);
      return (unsigned int)v30;
    }
    if ( v28 < 0 )
      goto LABEL_33;
  }
  else if ( AvailableTarget < 0 )
  {
    v45 = (_QWORD *)WdLogNewEntry5_WdError(v24);
    v45[4] = a5;
    v45[3] = a1;
    v45[5] = v25;
    WdLogEvent5_WdError(v45);
    return (unsigned int)v25;
  }
LABEL_29:
  *v20 = 1LL;
  if ( v22 )
    *v22 = v18;
  return 0LL;
}
