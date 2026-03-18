/*
 * XREFs of ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00E1044
 * Callers:
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAU_D3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00887D8 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_1_ @ 0x1C00A2E80 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectAllPathsAdaptersCallback_1_.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C00E0C78 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@E@Z @ 0x1C00E4468 (-_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKM.c)
 *     ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00F00F4 (-_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C01D3910 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 *     DmmRemovePathsFromVidPnSource @ 0x1C01D66F0 (DmmRemovePathsFromVidPnSource.c)
 *     ?RemovePath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@II@Z @ 0x1C01DBA30 (-RemovePath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@II@Z.c)
 * Callees:
 *     ??A?$Vector@_K@@QEAAAEA_K_K@Z @ 0x1C000244C (--A-$Vector@_K@@QEAAAEA_K_K@Z.c)
 *     ?_SetEmptyCofuncModeSet@DMMVIDPNTARGET@@IEAAJXZ @ 0x1C0008400 (-_SetEmptyCofuncModeSet@DMMVIDPNTARGET@@IEAAJXZ.c)
 *     ?_SetEmptyCofuncModeSet@DMMVIDPNSOURCE@@IEAAJXZ @ 0x1C000A394 (-_SetEmptyCofuncModeSet@DMMVIDPNSOURCE@@IEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C00E15B4 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?DisallowModifyingAction@ProtectableFromChange@@QEAAXE@Z @ 0x1C00E1680 (-DisallowModifyingAction@ProtectableFromChange@@QEAAXE@Z.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::RemovePath(char **this, char *a2, __int64 a3, struct DMMVIDPNPRESENTPATH **a4)
{
  __int64 v4; // rbp
  __int64 v5; // rbx
  DMMVIDPNTOPOLOGY *v7; // rdi
  DMMVIDPNTOPOLOGY *v8; // rsi
  char **v9; // rsi
  DMMVIDPNTOPOLOGY *v10; // rbx
  DMMVIDPNTOPOLOGY *v11; // rbx
  _QWORD *v12; // rax
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  unsigned __int64 v15; // rcx
  unsigned int *v16; // rsi
  DMMVIDPNTOPOLOGY *v17; // rdx
  __int64 v18; // r8
  char *v19; // rdx
  DMMVIDPNTOPOLOGY *v20; // rdx
  __int64 v21; // r8
  DMMVIDPNTOPOLOGY *v22; // rcx
  __int64 v23; // r9
  char *v24; // rcx
  _QWORD *v26; // rax
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned __int64 v31; // rax
  __int64 v32; // rax
  char *v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  _QWORD *v38; // rax
  unsigned __int64 v39; // [rsp+50h] [rbp+8h] BYREF

  v4 = (unsigned int)a3;
  v5 = (unsigned int)a2;
  v7 = (DMMVIDPNTOPOLOGY *)this;
  if ( a4 )
    *a4 = 0LL;
  if ( *((_BYTE *)this + 76) <= 2u )
  {
    v27 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v27);
  }
  if ( (*((_BYTE *)v7 + 78) & 4) == 0 )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdError(this, a2);
LABEL_50:
    v28[3] = v7;
    WdLogEvent5_WdError(v28);
    return 3221225506LL;
  }
  v8 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)v7 + 3);
  if ( v8 == (DMMVIDPNTOPOLOGY *)((char *)v7 + 24) )
  {
    v9 = 0LL;
  }
  else
  {
    v9 = (char **)((char *)v8 - 8);
    if ( !v9 )
    {
LABEL_82:
      v38 = (_QWORD *)WdLogNewEntry5_WdError(this, a2);
      v38[3] = v5;
      v38[4] = v4;
      v38[5] = v7;
      WdLogEvent5_WdError(v38);
      return 3223192359LL;
    }
    do
    {
      if ( *((_DWORD *)v9[11] + 6) == (_DWORD)v5 && *((_DWORD *)v9[12] + 6) == (_DWORD)v4 )
        break;
      this = (char **)v9[1];
      v9 = this - 1;
      if ( this == (char **)((char *)v7 + 24) )
        v9 = 0LL;
    }
    while ( v9 );
  }
  if ( !v9 )
    goto LABEL_82;
  if ( *((_BYTE *)v7 + 76) <= 2u )
  {
    v29 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v29);
  }
  if ( *((_QWORD *)v7 + 12) <= 2uLL )
  {
    v30 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v30);
  }
  if ( (*(_BYTE *)(*((_QWORD *)v7 + 13) + 2LL) & 1) != 0 )
  {
    v39 = 0LL;
    if ( (int)DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v7, v5, &v39) < 0 || (v31 = v39) == 0 )
    {
      v32 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
      WdLogEvent5_WdAssertion(v32);
      v31 = v39;
    }
    if ( v31 < 2 )
    {
      v28 = (_QWORD *)WdLogNewEntry5_WdError(this, a2);
      v28[4] = v5;
      v28[5] = v4;
      goto LABEL_50;
    }
  }
  v10 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)v7 + 3);
  if ( v10 == (DMMVIDPNTOPOLOGY *)((char *)v7 + 24) )
  {
    v11 = 0LL;
  }
  else
  {
    v11 = (DMMVIDPNTOPOLOGY *)((char *)v10 - 8);
    if ( v11 )
    {
      a3 = *((unsigned int *)v9[11] + 6);
      do
      {
        if ( *(_DWORD *)(*((_QWORD *)v11 + 11) + 24LL) == (_DWORD)a3 )
        {
          a2 = (char *)*((_QWORD *)v11 + 12);
          this = (char **)*((unsigned int *)v9[12] + 6);
          if ( *((_DWORD *)a2 + 6) == (_DWORD)this )
            break;
        }
        this = (char **)*((_QWORD *)v11 + 1);
        v11 = (DMMVIDPNTOPOLOGY *)(this - 1);
        if ( this == (char **)((char *)v7 + 24) )
          v11 = 0LL;
      }
      while ( v11 );
    }
  }
  if ( !v11 )
    goto LABEL_71;
  a2 = (char *)v7 + 24;
  this = (char **)*((_QWORD *)v7 + 3);
  if ( this == (char **)((char *)v7 + 24) )
    goto LABEL_71;
  if ( !--this )
    goto LABEL_71;
  do
  {
    if ( this == (char **)v11 )
      break;
    v33 = this[1];
    this = (char **)(v33 - 8);
    if ( v33 == a2 )
      this = 0LL;
  }
  while ( this );
  if ( this )
  {
    v12 = (_QWORD *)((char *)v11 + 8);
    v13 = *((_QWORD *)v11 + 1);
    v14 = (_QWORD *)*((_QWORD *)v11 + 2);
    if ( *(DMMVIDPNTOPOLOGY **)(v13 + 8) != (DMMVIDPNTOPOLOGY *)((char *)v11 + 8) || (_QWORD *)*v14 != v12 )
      __fastfail(3u);
    *v14 = v13;
    *(_QWORD *)(v13 + 8) = v14;
    *v12 = 0LL;
    *((_QWORD *)v11 + 2) = 0LL;
    --*((_QWORD *)v7 + 5);
  }
  else
  {
LABEL_71:
    v11 = 0LL;
    v34 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v34);
  }
  v15 = (unsigned int)(*((_DWORD *)v11 + 26) - 1);
  *((_DWORD *)v7 + 49) &= ~(1 << (*((_BYTE *)v11 + 104) - 1));
  v16 = (unsigned int *)*((_QWORD *)v11 + 12);
  v17 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)v7 + 3);
  v18 = v16[6];
  if ( v17 != (DMMVIDPNTOPOLOGY *)((char *)v7 + 24) )
  {
    v19 = (char *)v17 - 8;
    if ( v19 )
    {
      do
      {
        if ( *(_DWORD *)(*((_QWORD *)v19 + 12) + 24LL) == (_DWORD)v18 )
          break;
        v15 = *((_QWORD *)v19 + 1);
        v19 = (char *)(v15 - 8);
        if ( (DMMVIDPNTOPOLOGY *)v15 == (DMMVIDPNTOPOLOGY *)((char *)v7 + 24) )
          v19 = 0LL;
      }
      while ( v19 );
      if ( v19 )
      {
        v35 = WdLogNewEntry5_WdAssertion(v15, v19, v18, a4);
        WdLogEvent5_WdAssertion(v35);
      }
    }
  }
  DMMVIDPNTARGET::_SetEmptyCofuncModeSet((DMMVIDPNTARGET *)v16);
  v21 = *((_QWORD *)v11 + 11);
  v22 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)v7 + 3);
  v23 = *(unsigned int *)(v21 + 24);
  if ( v22 == (DMMVIDPNTOPOLOGY *)((char *)v7 + 24) )
    goto LABEL_33;
  v24 = (char *)v22 - 8;
  if ( !v24 )
    goto LABEL_33;
  do
  {
    if ( *(_DWORD *)(*((_QWORD *)v24 + 11) + 24LL) == (_DWORD)v23 )
      break;
    v20 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)v24 + 1);
    v24 = (char *)v20 - 8;
    if ( v20 == (DMMVIDPNTOPOLOGY *)((char *)v7 + 24) )
      v24 = 0LL;
  }
  while ( v24 );
  if ( !v24 )
LABEL_33:
    DMMVIDPNSOURCE::_SetEmptyCofuncModeSet(*((DMMVIDPNSOURCE **)v11 + 11));
  if ( a4 )
    *a4 = v11;
  else
    (**(void (__fastcall ***)(char *, __int64))v11)((char *)v11, 1LL);
  if ( *((_QWORD *)v7 + 17) <= 2uLL )
  {
    v36 = WdLogNewEntry5_WdAssertion(v24, v20, v21, v23);
    WdLogEvent5_WdAssertion(v36);
  }
  if ( *(_QWORD *)(*((_QWORD *)v7 + 18) + 16LL) != 255LL )
  {
    v26 = (_QWORD *)Vector<unsigned __int64>::operator[]((__int64)v7 + 120, 2uLL);
    --*v26;
  }
  if ( *((_QWORD *)v7 + 17) <= 2uLL )
  {
    v37 = WdLogNewEntry5_WdAssertion(v24, v20, v21, v23);
    WdLogEvent5_WdAssertion(v37);
  }
  if ( !*(_QWORD *)(*((_QWORD *)v7 + 18) + 16LL) )
    ProtectableFromChange::DisallowModifyingAction((DMMVIDPNTOPOLOGY *)((char *)v7 + 56), 2u);
  return 0LL;
}
