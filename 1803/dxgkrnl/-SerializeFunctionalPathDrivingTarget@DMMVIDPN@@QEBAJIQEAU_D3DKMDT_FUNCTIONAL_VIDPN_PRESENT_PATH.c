/*
 * XREFs of ?SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C0222AE0
 * Callers:
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C021CE80 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00044A4 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C00BBE40 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ?SerializeFunctionalPath@DMMVIDPNPRESENTPATH@@QEBAJQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C0223204 (-SerializeFunctionalPath@DMMVIDPNPRESENTPATH@@QEBAJQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@.c)
 */

__int64 __fastcall DMMVIDPN::SerializeFunctionalPathDrivingTarget(
        DMMVIDPN *this,
        unsigned int a2,
        struct _D3DKMDT_VIDPN_PRESENT_PATH *a3)
{
  __int64 v3; // rbp
  __int64 v6; // rax
  int PathSourceFromTarget; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  _QWORD *v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v15; // rcx
  DMMVIDPNPRESENTPATH *Path; // rsi
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rsi
  __int64 v23; // rcx
  _QWORD *v24; // rbx
  __int64 v25; // rbp
  __int64 v26; // rax
  __int64 v27; // rax

  v3 = a2;
  if ( !a3 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v6);
  }
  memset(a3, 0, 0x1E8uLL);
  PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget((DMMVIDPN *)((char *)this + 96), v3);
  if ( PathSourceFromTarget == -1 )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v8);
    v10[3] = v3;
    v11 = *((_QWORD *)this + 6);
    v12 = *(_QWORD *)(v11 + 8);
    if ( !v12 )
    {
      v13 = WdLogNewEntry5_WdAssertion(v9);
      WdLogEvent5_WdAssertion(v13);
      v12 = *(_QWORD *)(v11 + 8);
    }
    v10[4] = *(_QWORD *)(v12 + 16);
    v10[5] = this;
    WdLogEvent5_WdDmmEvent(v10);
    return 3223192384LL;
  }
  else
  {
    Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPN *)((char *)this + 96), PathSourceFromTarget, v3);
    if ( !Path )
    {
      v17 = WdLogNewEntry5_WdAssertion(v15);
      WdLogEvent5_WdAssertion(v17);
    }
    v18 = DMMVIDPNPRESENTPATH::SerializeFunctionalPath(Path, a3);
    v22 = v18;
    if ( v18 >= 0 )
    {
      return 0LL;
    }
    else
    {
      v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v19, v21);
      v24[3] = v3;
      v25 = *((_QWORD *)this + 6);
      v26 = *(_QWORD *)(v25 + 8);
      if ( !v26 )
      {
        v27 = WdLogNewEntry5_WdAssertion(v23);
        WdLogEvent5_WdAssertion(v27);
        v26 = *(_QWORD *)(v25 + 8);
      }
      v24[4] = *(_QWORD *)(v26 + 16);
      v24[5] = this;
      v24[6] = v22;
      WdLogEvent5_WdWarning(v24);
      return (unsigned int)v22;
    }
  }
}
