/*
 * XREFs of ?FindFirstAvailableTarget@DMMVIDPNTOPOLOGY@@QEBAJIW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@PEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2@Z @ 0x1C01F2FB4
 * Callers:
 *     ?FindFirstAvailableTarget@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@PEAI@Z @ 0x1C01F14D0 (-FindFirstAvailableTarget@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY_.c)
 *     ?_AugmentVidPnTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C01FC05C (-_AugmentVidPnTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMT.c)
 * Callees:
 *     IsInternalVideoOutput @ 0x1C00083E4 (IsInternalVideoOutput.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000E5D0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEAAPEAVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C001E0A0 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEAAPEAVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C00A42F8 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::FindFirstAvailableTarget(
        DMMVIDPNTOPOLOGY *a1,
        unsigned int a2,
        int a3,
        _DWORD *a4,
        _DWORD *a5,
        _DWORD *a6)
{
  __int64 v6; // r12
  __int64 v10; // rax
  __int64 v11; // rax
  _DWORD *v12; // rsi
  _DWORD *v13; // rdi
  __int64 Container; // rax
  struct DMMVIDEOPRESENTTARGET *NextTarget; // rbx
  __int64 v16; // r15
  DMMVIDEOPRESENTTARGETSET *v17; // rdx
  char *v18; // rcx
  bool v19; // bp
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v23; // rax
  DMMVIDEOPRESENTTARGETSET *v25; // [rsp+78h] [rbp+20h]

  v6 = a2;
  if ( !a4 )
  {
    v10 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !a3 )
  {
    v11 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v11);
  }
  v12 = a5;
  *a4 = -1;
  if ( a5 )
    *a5 = -2;
  v13 = a6;
  if ( a6 )
    *a6 = -2;
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)a1 + 160);
  NextTarget = 0LL;
  v16 = Container;
  v25 = *(DMMVIDEOPRESENTTARGETSET **)(Container + 312);
  v17 = (DMMVIDEOPRESENTTARGETSET *)*((_QWORD *)v25 + 3);
  v18 = (char *)v17 - 8;
  if ( v17 != (DMMVIDEOPRESENTTARGETSET *)((char *)v25 + 24) )
    NextTarget = (DMMVIDEOPRESENTTARGETSET *)((char *)v17 - 8);
  v19 = (_DWORD)v6 == -1;
  if ( NextTarget )
  {
    while ( 1 )
    {
      if ( v19 )
      {
        v20 = *((_QWORD *)NextTarget + 12);
        if ( *(_QWORD *)(v20 + 104)
          && (a3 != 2 || IsInternalVideoOutput(*(_DWORD *)(v20 + 80)))
          && (unsigned int)DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(a1, *((unsigned int *)NextTarget + 6)) == -1 )
        {
LABEL_20:
          v13 = a6;
          v12 = a5;
          break;
        }
      }
      else
      {
        v19 = *((_DWORD *)NextTarget + 6) == (_DWORD)v6;
      }
      NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget(v25, NextTarget);
      if ( !NextTarget )
        goto LABEL_20;
    }
  }
  if ( v19 )
  {
    if ( NextTarget )
    {
      *a4 = *((_DWORD *)NextTarget + 6);
      if ( v12 )
        *v12 = *(_DWORD *)(*((_QWORD *)NextTarget + 12) + 80LL);
      if ( v13 )
        *v13 = *(_DWORD *)(*((_QWORD *)NextTarget + 12) + 84LL);
      return 0LL;
    }
    else
    {
      v23 = WdLogNewEntry5_WdDmmEvent(v18);
      *(_QWORD *)(v23 + 24) = v16;
      WdLogEvent5_WdDmmEvent(v23);
      return 3223192371LL;
    }
  }
  else
  {
    v21 = WdLogNewEntry5_WdError(v18);
    *(_QWORD *)(v21 + 24) = v16;
    *(_QWORD *)(v21 + 32) = v6;
    WdLogEvent5_WdError(v21);
    return 3223192325LL;
  }
}
