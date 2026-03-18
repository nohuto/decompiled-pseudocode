/*
 * XREFs of ?FindFirstAvailableTarget@DMMVIDPNTOPOLOGY@@QEBAJIW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@PEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2@Z @ 0x1C01DA060
 * Callers:
 *     ?FindFirstAvailableTarget@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@PEAI@Z @ 0x1C01D8230 (-FindFirstAvailableTarget@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY_.c)
 *     ?_AugmentVidPnTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDMMVIDPNTOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C01E1984 (-_AugmentVidPnTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDMMVIDPNTOPOLOGY@@PEAU_D3DKM.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C00022A0 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     IsInternalVideoOutput @ 0x1C000CD50 (IsInternalVideoOutput.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEAAPEAVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0021310 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEAAPEAVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C00E0D48 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::FindFirstAvailableTarget(
        DMMVIDPNTOPOLOGY *a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        _DWORD *a5,
        _DWORD *a6)
{
  __int64 v6; // r12
  int v8; // r13d
  __int64 v10; // rax
  __int64 v11; // rax
  _DWORD *v12; // rsi
  _DWORD *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 Container; // r15
  bool v18; // bp
  char *v19; // rcx
  DMMVIDEOPRESENTTARGETSET *v20; // rbx
  struct DMMVIDEOPRESENTTARGET *NextTarget; // rbx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v25; // rax
  DMMVIDEOPRESENTTARGETSET *v27; // [rsp+78h] [rbp+20h]

  v6 = (unsigned int)a2;
  v8 = a3;
  if ( !a4 )
  {
    v10 = WdLogNewEntry5_WdAssertion(a1, a2, a3, 0LL);
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !v8 )
  {
    v11 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
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
  v18 = (_DWORD)v6 == -1;
  v27 = *(DMMVIDEOPRESENTTARGETSET **)(Container + 312);
  v19 = (char *)v27 + 24;
  v20 = (DMMVIDEOPRESENTTARGETSET *)*((_QWORD *)v27 + 3);
  if ( v20 == (DMMVIDEOPRESENTTARGETSET *)((char *)v27 + 24) )
    NextTarget = 0LL;
  else
    NextTarget = (DMMVIDEOPRESENTTARGETSET *)((char *)v20 - 8);
  if ( NextTarget )
  {
    while ( 1 )
    {
      if ( v18 )
      {
        v22 = *((_QWORD *)NextTarget + 12);
        if ( *(_QWORD *)(v22 + 104)
          && (v8 != 2 || IsInternalVideoOutput(*(_DWORD *)(v22 + 80)))
          && (unsigned int)DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(a1, *((_DWORD *)NextTarget + 6), v15, v16) == -1 )
        {
LABEL_21:
          v13 = a6;
          v12 = a5;
          break;
        }
      }
      else
      {
        v18 = *((_DWORD *)NextTarget + 6) == (_DWORD)v6;
      }
      NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget(v27, NextTarget, v15, v16);
      if ( !NextTarget )
        goto LABEL_21;
    }
  }
  if ( v18 )
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
      v25 = WdLogNewEntry5_WdDmmEvent(v19, v14, v15, v16);
      *(_QWORD *)(v25 + 24) = Container;
      WdLogEvent5_WdDmmEvent(v25);
      return 3223192371LL;
    }
  }
  else
  {
    v23 = WdLogNewEntry5_WdError(v19, v14);
    *(_QWORD *)(v23 + 24) = Container;
    *(_QWORD *)(v23 + 32) = v6;
    WdLogEvent5_WdError(v23);
    return 3223192325LL;
  }
}
