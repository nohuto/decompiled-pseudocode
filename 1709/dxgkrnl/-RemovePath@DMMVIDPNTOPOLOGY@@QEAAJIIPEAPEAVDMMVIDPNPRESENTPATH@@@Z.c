/*
 * XREFs of ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00A45F0
 * Callers:
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C007B478 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C00A4228 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@E@Z @ 0x1C00A823C (-_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKM.c)
 *     ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00B2160 (-_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_1_ @ 0x1C00F6230 (_BtlPreAcquireSharedAccess_-CCD_BTL_ACTIVE_PATHS_COLLECTOR--_CollectAllPathsAdaptersCallback_1_.c)
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x1C01EDC70 (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C01EEFF0 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 *     ?RemovePath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@II@Z @ 0x1C01F4330 (-RemovePath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@II@Z.c)
 * Callees:
 *     ?_SetEmptyCofuncModeSet@DMMVIDPNTARGET@@IEAAJXZ @ 0x1C0004F1C (-_SetEmptyCofuncModeSet@DMMVIDPNTARGET@@IEAAJXZ.c)
 *     ?_SetEmptyCofuncModeSet@DMMVIDPNSOURCE@@IEAAJXZ @ 0x1C000AFEC (-_SetEmptyCofuncModeSet@DMMVIDPNSOURCE@@IEAAJXZ.c)
 *     ??A?$Vector@_K@@QEAAAEA_K_K@Z @ 0x1C000E660 (--A-$Vector@_K@@QEAAAEA_K_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C00A38D4 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?DisallowModifyingAction@ProtectableFromChange@@QEAAXE@Z @ 0x1C00A62A4 (-DisallowModifyingAction@ProtectableFromChange@@QEAAXE@Z.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::RemovePath(
        DMMVIDPNTOPOLOGY *this,
        unsigned int a2,
        unsigned int a3,
        struct DMMVIDPNPRESENTPATH **a4)
{
  __int64 v4; // r14
  __int64 v5; // rbx
  DMMVIDPNTOPOLOGY *v7; // rdi
  DMMVIDPNTOPOLOGY *v8; // rsi
  _QWORD *v9; // rsi
  DMMVIDPNTOPOLOGY *v10; // r8
  DMMVIDPNTOPOLOGY *v11; // rbx
  _QWORD *v12; // rdx
  _QWORD *v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rdx
  unsigned __int64 v16; // rcx
  DMMVIDPNTARGET *v17; // rsi
  DMMVIDPNTOPOLOGY *v18; // rdx
  char *v19; // rdx
  DMMVIDPNTOPOLOGY *v20; // rcx
  char *v21; // rcx
  _QWORD *v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  __int64 v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  DMMVIDPNTOPOLOGY *v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rax
  _QWORD *v36; // rax
  unsigned __int64 v37; // [rsp+50h] [rbp+8h] BYREF

  v4 = a3;
  v5 = a2;
  v7 = this;
  if ( a4 )
    *a4 = 0LL;
  if ( *((_BYTE *)this + 76) <= 2u )
  {
    v24 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v24);
  }
  if ( (*((_BYTE *)v7 + 78) & 4) == 0 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdError(this);
LABEL_51:
    v25[3] = v7;
    WdLogEvent5_WdError(v25);
    return 3221225506LL;
  }
  v8 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)v7 + 3);
  if ( v8 == (DMMVIDPNTOPOLOGY *)((char *)v7 + 24) )
  {
    v9 = 0LL;
  }
  else
  {
    v9 = (_QWORD *)((char *)v8 - 8);
    if ( !v9 )
    {
LABEL_82:
      v36 = (_QWORD *)WdLogNewEntry5_WdError(this);
      v36[3] = v5;
      v36[4] = v4;
      v36[5] = v7;
      WdLogEvent5_WdError(v36);
      return 3223192359LL;
    }
    do
    {
      if ( *(_DWORD *)(v9[11] + 24LL) == (_DWORD)v5 && *(_DWORD *)(v9[12] + 24LL) == (_DWORD)v4 )
        break;
      this = (DMMVIDPNTOPOLOGY *)v9[1];
      v9 = (_QWORD *)((char *)this - 8);
      if ( this == (DMMVIDPNTOPOLOGY *)((char *)v7 + 24) )
        v9 = 0LL;
    }
    while ( v9 );
  }
  if ( !v9 )
    goto LABEL_82;
  if ( *((_BYTE *)v7 + 76) <= 2u )
  {
    v26 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v26);
  }
  if ( *((_QWORD *)v7 + 12) <= 2uLL )
  {
    v27 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v27);
  }
  if ( (*(_BYTE *)(*((_QWORD *)v7 + 13) + 2LL) & 1) != 0 )
  {
    v37 = 0LL;
    if ( (int)DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v7, v5, &v37) < 0 || (v28 = v37) == 0 )
    {
      v29 = WdLogNewEntry5_WdAssertion(this);
      WdLogEvent5_WdAssertion(v29);
      v28 = v37;
    }
    if ( v28 < 2 )
    {
      v25 = (_QWORD *)WdLogNewEntry5_WdError(this);
      v25[4] = v5;
      v25[5] = v4;
      goto LABEL_51;
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
    if ( v10 == (DMMVIDPNTOPOLOGY *)8 )
      goto LABEL_72;
    do
    {
      if ( *(_DWORD *)(*((_QWORD *)v11 + 11) + 24LL) == *(_DWORD *)(v9[11] + 24LL) )
      {
        this = (DMMVIDPNTOPOLOGY *)*(unsigned int *)(v9[12] + 24LL);
        if ( *(_DWORD *)(*((_QWORD *)v11 + 12) + 24LL) == (_DWORD)this )
          break;
      }
      this = (DMMVIDPNTOPOLOGY *)*((_QWORD *)v11 + 1);
      v11 = (DMMVIDPNTOPOLOGY *)((char *)this - 8);
      if ( this == (DMMVIDPNTOPOLOGY *)((char *)v7 + 24) )
        v11 = 0LL;
    }
    while ( v11 );
  }
  if ( v11 )
  {
    v12 = (_QWORD *)((char *)v7 + 24);
    if ( v10 != (DMMVIDPNTOPOLOGY *)((char *)v7 + 24) )
    {
      this = (DMMVIDPNTOPOLOGY *)(*v12 - 8LL);
      if ( *v12 != 8LL )
      {
        do
        {
          if ( this == v11 )
            break;
          v30 = (_QWORD *)*((_QWORD *)this + 1);
          this = (DMMVIDPNTOPOLOGY *)(v30 - 1);
          if ( v30 == v12 )
            this = 0LL;
        }
        while ( this );
        if ( this )
        {
          v13 = (_QWORD *)((char *)v11 + 8);
          v14 = *((_QWORD *)v11 + 1);
          if ( *(DMMVIDPNTOPOLOGY **)(v14 + 8) != (DMMVIDPNTOPOLOGY *)((char *)v11 + 8)
            || (v15 = (_QWORD *)*((_QWORD *)v11 + 2), (_QWORD *)*v15 != v13) )
          {
            __fastfail(3u);
          }
          *v15 = v14;
          *(_QWORD *)(v14 + 8) = v15;
          *v13 = 0LL;
          *((_QWORD *)v11 + 2) = 0LL;
          --*((_QWORD *)v7 + 5);
          goto LABEL_28;
        }
      }
    }
  }
LABEL_72:
  v11 = 0LL;
  v31 = WdLogNewEntry5_WdAssertion(this);
  WdLogEvent5_WdAssertion(v31);
LABEL_28:
  v16 = (unsigned int)(*((_DWORD *)v11 + 26) - 1);
  *((_DWORD *)v7 + 49) &= ~(1 << (*((_BYTE *)v11 + 104) - 1));
  v17 = (DMMVIDPNTARGET *)*((_QWORD *)v11 + 12);
  v18 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)v7 + 3);
  if ( v18 != (DMMVIDPNTOPOLOGY *)((char *)v7 + 24) )
  {
    v19 = (char *)v18 - 8;
    if ( v19 )
    {
      do
      {
        if ( *(_DWORD *)(*((_QWORD *)v19 + 12) + 24LL) == *((_DWORD *)v17 + 6) )
          break;
        v16 = *((_QWORD *)v19 + 1);
        v19 = (char *)(v16 - 8);
        if ( (DMMVIDPNTOPOLOGY *)v16 == (DMMVIDPNTOPOLOGY *)((char *)v7 + 24) )
          v19 = 0LL;
      }
      while ( v19 );
      if ( v19 )
      {
        v32 = WdLogNewEntry5_WdAssertion(v16);
        WdLogEvent5_WdAssertion(v32);
      }
    }
  }
  DMMVIDPNTARGET::_SetEmptyCofuncModeSet(v17);
  v20 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)v7 + 3);
  if ( v20 == (DMMVIDPNTOPOLOGY *)((char *)v7 + 24) )
    goto LABEL_32;
  v21 = (char *)v20 - 8;
  if ( !v21 )
    goto LABEL_32;
  do
  {
    if ( *(_DWORD *)(*((_QWORD *)v21 + 11) + 24LL) == *(_DWORD *)(*((_QWORD *)v11 + 11) + 24LL) )
      break;
    v33 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)v21 + 1);
    v21 = (char *)v33 - 8;
    if ( v33 == (DMMVIDPNTOPOLOGY *)((char *)v7 + 24) )
      v21 = 0LL;
  }
  while ( v21 );
  if ( !v21 )
LABEL_32:
    DMMVIDPNSOURCE::_SetEmptyCofuncModeSet(*((DMMVIDPNSOURCE **)v11 + 11));
  if ( a4 )
    *a4 = v11;
  else
    (**(void (__fastcall ***)(char *, __int64))v11)((char *)v11, 1LL);
  if ( *((_QWORD *)v7 + 17) <= 2uLL )
  {
    v34 = WdLogNewEntry5_WdAssertion(v21);
    WdLogEvent5_WdAssertion(v34);
  }
  if ( *(_QWORD *)(*((_QWORD *)v7 + 18) + 16LL) != 255LL )
  {
    v23 = (_QWORD *)Vector<unsigned __int64>::operator[]((__int64)v7 + 120, 2uLL);
    --*v23;
  }
  if ( *((_QWORD *)v7 + 17) <= 2uLL )
  {
    v35 = WdLogNewEntry5_WdAssertion(v21);
    WdLogEvent5_WdAssertion(v35);
  }
  if ( !*(_QWORD *)(*((_QWORD *)v7 + 18) + 16LL) )
    ProtectableFromChange::DisallowModifyingAction((DMMVIDPNTOPOLOGY *)((char *)v7 + 56), 2u);
  return 0LL;
}
