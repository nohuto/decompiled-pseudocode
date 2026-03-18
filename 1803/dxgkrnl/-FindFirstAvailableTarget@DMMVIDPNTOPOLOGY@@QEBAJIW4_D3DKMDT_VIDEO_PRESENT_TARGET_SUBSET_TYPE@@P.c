/*
 * XREFs of ?FindFirstAvailableTarget@DMMVIDPNTOPOLOGY@@QEBAJIW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@PEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2PEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@@Z @ 0x1C021ECFC
 * Callers:
 *     ?FindFirstAvailableTarget@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@PEAI@Z @ 0x1C021A7D0 (-FindFirstAvailableTarget@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY_.c)
 *     ?_AugmentVidPnTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C0229A7C (-_AugmentVidPnTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMT.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0002EA0 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000A86C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEAAPEAVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0024E70 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEAAPEAVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C00BBE40 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::FindFirstAvailableTarget(
        DMMVIDPNTOPOLOGY *a1,
        unsigned int a2,
        int a3,
        _DWORD *a4,
        _DWORD *a5,
        _DWORD *a6,
        _DWORD *a7)
{
  __int64 v7; // r12
  __int64 v11; // rax
  __int64 v12; // rax
  _DWORD *v13; // r15
  _DWORD *v14; // r14
  _DWORD *v15; // rsi
  __int64 Container; // r13
  bool v17; // di
  struct DMMVIDEOPRESENTTARGET *NextTarget; // rbx
  DMMVIDEOPRESENTTARGETSET *v19; // rdx
  char *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v24; // rax
  DMMVIDEOPRESENTTARGETSET *v27; // [rsp+78h] [rbp+20h]

  v7 = a2;
  if ( !a4 )
  {
    v11 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !a3 )
  {
    v12 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v12);
  }
  v13 = a5;
  *a4 = -1;
  if ( a5 )
    *a5 = -2;
  v14 = a6;
  if ( a6 )
    *a6 = -2;
  v15 = a7;
  if ( a7 )
    *a7 = 0;
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)a1 + 160);
  v17 = (_DWORD)v7 == -1;
  NextTarget = 0LL;
  v27 = *(DMMVIDEOPRESENTTARGETSET **)(Container + 312);
  v19 = (DMMVIDEOPRESENTTARGETSET *)*((_QWORD *)v27 + 3);
  v20 = (char *)v19 - 8;
  if ( v19 != (DMMVIDEOPRESENTTARGETSET *)((char *)v27 + 24) )
    NextTarget = (DMMVIDEOPRESENTTARGETSET *)((char *)v19 - 8);
  if ( NextTarget )
  {
    while ( 1 )
    {
      if ( v17 )
      {
        v21 = *((_QWORD *)NextTarget + 12);
        if ( *(_QWORD *)(v21 + 104)
          && (a3 != 2 || IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(v21 + 80)))
          && (unsigned int)DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(a1, *((_DWORD *)NextTarget + 6)) == -1 )
        {
LABEL_22:
          v15 = a7;
          v14 = a6;
          v13 = a5;
          break;
        }
      }
      else
      {
        v17 = *((_DWORD *)NextTarget + 6) == (_DWORD)v7;
      }
      NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget(v27, NextTarget);
      if ( !NextTarget )
        goto LABEL_22;
    }
  }
  if ( v17 )
  {
    if ( NextTarget )
    {
      *a4 = *((_DWORD *)NextTarget + 6);
      if ( v13 )
        *v13 = *(_DWORD *)(*((_QWORD *)NextTarget + 12) + 80LL);
      if ( v14 )
        *v14 = *(_DWORD *)(*((_QWORD *)NextTarget + 12) + 84LL);
      if ( v15 )
        *v15 = *(_DWORD *)(*((_QWORD *)NextTarget + 12) + 88LL);
      return 0LL;
    }
    else
    {
      v24 = WdLogNewEntry5_WdDmmEvent(v20);
      *(_QWORD *)(v24 + 24) = Container;
      WdLogEvent5_WdDmmEvent(v24);
      return 3223192371LL;
    }
  }
  else
  {
    v22 = WdLogNewEntry5_WdError(v20);
    *(_QWORD *)(v22 + 24) = Container;
    *(_QWORD *)(v22 + 32) = v7;
    WdLogEvent5_WdError(v22);
    return 3223192325LL;
  }
}
