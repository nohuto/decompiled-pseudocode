/*
 * XREFs of ?SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C00A4B78
 * Callers:
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C007B478 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00058C4 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C00A42F8 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 *     ?SerializeFunctionalPath@DMMVIDPNPRESENTPATH@@QEBAJQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C00A59E8 (-SerializeFunctionalPath@DMMVIDPNPRESENTPATH@@QEBAJQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@.c)
 */

__int64 __fastcall DMMVIDPN::SerializeFunctionalPathDrivingTarget(
        DMMVIDPN *this,
        unsigned int a2,
        struct _D3DKMDT_VIDPN_PRESENT_PATH *a3)
{
  __int64 v3; // rsi
  int PathSourceFromTarget; // eax
  __int64 v7; // rcx
  __int64 v8; // rcx
  DMMVIDPNPRESENTPATH *Path; // rbp
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rbp
  __int64 v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rbx
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rbx
  __int64 v24; // rsi
  __int64 v25; // rax

  v3 = a2;
  if ( !a3 )
  {
    v16 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v16);
  }
  memset(a3, 0, 0x1E8uLL);
  PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget((DMMVIDPN *)((char *)this + 96), (unsigned int)v3);
  if ( PathSourceFromTarget == -1 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v7);
    v18[3] = v3;
    v19 = *((_QWORD *)this + 6);
    if ( !*(_QWORD *)(v19 + 8) )
    {
      v20 = WdLogNewEntry5_WdAssertion(v17);
      WdLogEvent5_WdAssertion(v20);
    }
    v18[4] = *(_QWORD *)(*(_QWORD *)(v19 + 8) + 16LL);
    v18[5] = this;
    WdLogEvent5_WdDmmEvent(v18);
    return 3223192384LL;
  }
  else
  {
    Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPN *)((char *)this + 96), PathSourceFromTarget, v3);
    if ( !Path )
    {
      v21 = WdLogNewEntry5_WdAssertion(v8);
      WdLogEvent5_WdAssertion(v21);
    }
    v10 = DMMVIDPNPRESENTPATH::SerializeFunctionalPath(Path, a3);
    v14 = v10;
    if ( v10 < 0 )
    {
      v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v11, v13);
      v23[3] = v3;
      v24 = *((_QWORD *)this + 6);
      if ( !*(_QWORD *)(v24 + 8) )
      {
        v25 = WdLogNewEntry5_WdAssertion(v22);
        WdLogEvent5_WdAssertion(v25);
      }
      v23[4] = *(_QWORD *)(*(_QWORD *)(v24 + 8) + 16LL);
      v23[5] = this;
      v23[6] = v14;
      WdLogEvent5_WdWarning(v23);
      return (unsigned int)v14;
    }
    else
    {
      return 0LL;
    }
  }
}
