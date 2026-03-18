/*
 * XREFs of ?_AugmentVidPnTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C01FC05C
 * Callers:
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C00E5108 (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_C.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000E5D0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00A80A8 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?FindFirstAvailableTarget@DMMVIDPNTOPOLOGY@@QEBAJIW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@PEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2@Z @ 0x1C01F2FB4 (-FindFirstAvailableTarget@DMMVIDPNTOPOLOGY@@QEBAJIW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@P.c)
 */

__int64 __fastcall BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR::_AugmentVidPnTopology(
        struct DMMVIDPNTOPOLOGY *a1,
        struct D3DKMT_AUGMENT_CDSJ *a2)
{
  __int64 v3; // r14
  __int64 Container; // rax
  VIDPN_MGR *v6; // rbx
  int FirstAvailableTarget; // eax
  __int64 v8; // rcx
  __int64 v9; // rbp
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  _QWORD *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v28; // rcx
  _QWORD *v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  unsigned int v33; // [rsp+70h] [rbp+8h] BYREF
  int v34; // [rsp+78h] [rbp+10h] BYREF
  int v35; // [rsp+80h] [rbp+18h] BYREF

  LODWORD(v3) = -1;
  *((_DWORD *)a2 + 4) = -1;
  *((_DWORD *)a2 + 5) = -2;
  *((_DWORD *)a2 + 6) = -2;
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)a1 + 160);
  v33 = -1;
  v34 = -2;
  v35 = -2;
  v6 = *(VIDPN_MGR **)(Container + 48);
  while ( 1 )
  {
    FirstAvailableTarget = DMMVIDPNTOPOLOGY::FindFirstAvailableTarget(a1, v3, 1, &v33, &v34, &v35);
    v9 = FirstAvailableTarget;
    if ( FirstAvailableTarget == -1071774925 )
      break;
    if ( FirstAvailableTarget < 0 )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdError(v8);
      v18[3] = v9;
      if ( !*((_QWORD *)v6 + 1) )
      {
        v24 = WdLogNewEntry5_WdAssertion(v23);
        WdLogEvent5_WdAssertion(v24);
      }
      v25 = *(int *)(*(_QWORD *)(*((_QWORD *)v6 + 1) + 16LL) + 272LL);
      v18[4] = v25;
      if ( !*((_QWORD *)v6 + 1) )
      {
        v26 = WdLogNewEntry5_WdAssertion(v25);
        WdLogEvent5_WdAssertion(v26);
      }
      v18[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v6 + 1) + 16LL) + 268LL);
      v22 = *((unsigned int *)a2 + 3);
LABEL_22:
      v18[6] = v22;
      WdLogEvent5_WdError(v18);
      return (unsigned int)v9;
    }
    v3 = v33;
    v10 = VIDPN_MGR::AddPathToVidPnTopology(
            v6,
            a1,
            *((_DWORD *)a2 + 3),
            v33,
            (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
            0xFFFFu,
            0,
            D3DKMDT_MCC_ENFORCE);
    v9 = v10;
    if ( v10 != -1071774975 )
    {
      if ( v10 < 0 )
      {
        v18 = (_QWORD *)WdLogNewEntry5_WdError(v11);
        v18[3] = v9;
        if ( !*((_QWORD *)v6 + 1) )
        {
          v19 = WdLogNewEntry5_WdAssertion(v17);
          WdLogEvent5_WdAssertion(v19);
        }
        v20 = *(int *)(*(_QWORD *)(*((_QWORD *)v6 + 1) + 16LL) + 272LL);
        v18[4] = v20;
        if ( !*((_QWORD *)v6 + 1) )
        {
          v21 = WdLogNewEntry5_WdAssertion(v20);
          WdLogEvent5_WdAssertion(v21);
        }
        v18[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v6 + 1) + 16LL) + 268LL);
        v22 = *((unsigned int *)a2 + 3);
        v18[7] = v3;
        goto LABEL_22;
      }
      *((_DWORD *)a2 + 5) = v34;
      *((_DWORD *)a2 + 6) = v35;
      *((_DWORD *)a2 + 4) = v3;
      return (unsigned int)v9;
    }
    v13 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v11);
    if ( !*((_QWORD *)v6 + 1) )
    {
      v14 = WdLogNewEntry5_WdAssertion(v12);
      WdLogEvent5_WdAssertion(v14);
    }
    v15 = *(int *)(*(_QWORD *)(*((_QWORD *)v6 + 1) + 16LL) + 272LL);
    v13[3] = v15;
    if ( !*((_QWORD *)v6 + 1) )
    {
      v16 = WdLogNewEntry5_WdAssertion(v15);
      WdLogEvent5_WdAssertion(v16);
    }
    v13[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v6 + 1) + 16LL) + 268LL);
    v13[5] = *((unsigned int *)a2 + 3);
    v13[6] = v3;
    WdLogEvent5_WdDmmEvent(v13);
  }
  v29 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v8);
  if ( !*((_QWORD *)v6 + 1) )
  {
    v30 = WdLogNewEntry5_WdAssertion(v28);
    WdLogEvent5_WdAssertion(v30);
  }
  v31 = *(int *)(*(_QWORD *)(*((_QWORD *)v6 + 1) + 16LL) + 272LL);
  v29[3] = v31;
  if ( !*((_QWORD *)v6 + 1) )
  {
    v32 = WdLogNewEntry5_WdAssertion(v31);
    WdLogEvent5_WdAssertion(v32);
  }
  v29[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)v6 + 1) + 16LL) + 268LL);
  v29[5] = *((unsigned int *)a2 + 3);
  WdLogEvent5_WdDmmEvent(v29);
  return 3223192371LL;
}
