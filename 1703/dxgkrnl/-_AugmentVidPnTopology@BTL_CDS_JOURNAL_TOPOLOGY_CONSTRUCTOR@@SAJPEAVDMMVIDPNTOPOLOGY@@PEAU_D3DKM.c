/*
 * XREFs of ?_AugmentVidPnTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDMMVIDPNTOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C01E1984
 * Callers:
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C00A8CB8 (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C00022A0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00E42D8 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?FindFirstAvailableTarget@DMMVIDPNTOPOLOGY@@QEBAJIW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@PEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2@Z @ 0x1C01DA060 (-FindFirstAvailableTarget@DMMVIDPNTOPOLOGY@@QEBAJIW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@P.c)
 */

__int64 __fastcall BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR::_AugmentVidPnTopology(
        struct DMMVIDPNTOPOLOGY *a1,
        struct _D3DKMT_AUGMENT_CDSJ *a2)
{
  __int64 v3; // r14
  __int64 Container; // rax
  VIDPN_MGR *v6; // rbx
  int FirstAvailableTarget; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbp
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD *v20; // rsi
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  _QWORD *v29; // rsi
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  _QWORD *v46; // rsi
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rax
  unsigned int v53; // [rsp+70h] [rbp+8h] BYREF
  int v54; // [rsp+78h] [rbp+10h] BYREF
  int v55; // [rsp+80h] [rbp+18h] BYREF

  LODWORD(v3) = -1;
  *((_DWORD *)a2 + 4) = -1;
  *((_DWORD *)a2 + 5) = -2;
  *((_DWORD *)a2 + 6) = -2;
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)a1 + 160);
  v53 = -1;
  v54 = -2;
  v55 = -2;
  v6 = *(VIDPN_MGR **)(Container + 48);
  while ( 1 )
  {
    FirstAvailableTarget = DMMVIDPNTOPOLOGY::FindFirstAvailableTarget(a1, (unsigned int)v3, 1LL, &v53, &v54, &v55);
    v12 = FirstAvailableTarget;
    if ( FirstAvailableTarget == -1071774925 )
      break;
    if ( FirstAvailableTarget < 0 )
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdError(v9, v8);
      v29[3] = v12;
      if ( !*((_QWORD *)v6 + 1) )
      {
        v40 = WdLogNewEntry5_WdAssertion(v37, v36, v38, v39);
        WdLogEvent5_WdAssertion(v40);
      }
      v41 = *(int *)(*(_QWORD *)(*((_QWORD *)v6 + 1) + 16LL) + 272LL);
      v29[4] = v41;
      if ( !*((_QWORD *)v6 + 1) )
      {
        v42 = WdLogNewEntry5_WdAssertion(v41, v36, v38, v39);
        WdLogEvent5_WdAssertion(v42);
      }
      v29[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v6 + 1) + 16LL) + 268LL);
      v35 = *((unsigned int *)a2 + 3);
LABEL_22:
      v29[6] = v35;
      WdLogEvent5_WdError(v29);
      return (unsigned int)v12;
    }
    v3 = v53;
    v13 = VIDPN_MGR::AddPathToVidPnTopology(
            v6,
            a1,
            *((unsigned int *)a2 + 3),
            v53,
            (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
            0xFFFFu,
            0,
            D3DKMDT_MCC_ENFORCE);
    v12 = v13;
    if ( v13 != -1071774975 )
    {
      if ( v13 < 0 )
      {
        v29 = (_QWORD *)WdLogNewEntry5_WdError(v15, v14);
        v29[3] = v12;
        if ( !*((_QWORD *)v6 + 1) )
        {
          v32 = WdLogNewEntry5_WdAssertion(v28, v27, v30, v31);
          WdLogEvent5_WdAssertion(v32);
        }
        v33 = *(int *)(*(_QWORD *)(*((_QWORD *)v6 + 1) + 16LL) + 272LL);
        v29[4] = v33;
        if ( !*((_QWORD *)v6 + 1) )
        {
          v34 = WdLogNewEntry5_WdAssertion(v33, v27, v30, v31);
          WdLogEvent5_WdAssertion(v34);
        }
        v29[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v6 + 1) + 16LL) + 268LL);
        v35 = *((unsigned int *)a2 + 3);
        v29[7] = v3;
        goto LABEL_22;
      }
      *((_DWORD *)a2 + 5) = v54;
      *((_DWORD *)a2 + 6) = v55;
      *((_DWORD *)a2 + 4) = v3;
      return (unsigned int)v12;
    }
    v20 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v15, v14, v16, v17);
    if ( !*((_QWORD *)v6 + 1) )
    {
      v23 = WdLogNewEntry5_WdAssertion(v19, v18, v21, v22);
      WdLogEvent5_WdAssertion(v23);
    }
    v24 = *(_QWORD *)(*((_QWORD *)v6 + 1) + 16LL);
    v25 = *(int *)(v24 + 272);
    v20[3] = v25;
    if ( !*((_QWORD *)v6 + 1) )
    {
      v26 = WdLogNewEntry5_WdAssertion(v25, v24, v21, v22);
      WdLogEvent5_WdAssertion(v26);
    }
    v20[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v6 + 1) + 16LL) + 268LL);
    v20[5] = *((unsigned int *)a2 + 3);
    v20[6] = v3;
    WdLogEvent5_WdDmmEvent(v20);
  }
  v46 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v9, v8, v10, v11);
  if ( !*((_QWORD *)v6 + 1) )
  {
    v49 = WdLogNewEntry5_WdAssertion(v45, v44, v47, v48);
    WdLogEvent5_WdAssertion(v49);
  }
  v50 = *(_QWORD *)(*((_QWORD *)v6 + 1) + 16LL);
  v51 = *(int *)(v50 + 272);
  v46[3] = v51;
  if ( !*((_QWORD *)v6 + 1) )
  {
    v52 = WdLogNewEntry5_WdAssertion(v51, v50, v47, v48);
    WdLogEvent5_WdAssertion(v52);
  }
  v46[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v6 + 1) + 16LL) + 268LL);
  v46[5] = *((unsigned int *)a2 + 3);
  WdLogEvent5_WdDmmEvent(v46);
  return 3223192371LL;
}
