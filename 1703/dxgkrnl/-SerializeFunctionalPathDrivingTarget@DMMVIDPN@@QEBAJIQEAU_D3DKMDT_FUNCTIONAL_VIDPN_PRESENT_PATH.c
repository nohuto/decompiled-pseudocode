/*
 * XREFs of ?SerializeFunctionalPathDrivingTarget@DMMVIDPN@@QEBAJIQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C00DE754
 * Callers:
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAU_D3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00887D8 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C000A7DC (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?SerializeFunctionalPath@DMMVIDPNPRESENTPATH@@QEBAJQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C00DF258 (-SerializeFunctionalPath@DMMVIDPNPRESENTPATH@@QEBAJQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@.c)
 *     ?GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z @ 0x1C00E0D48 (-GetPathSourceFromTarget@DMMVIDPNTOPOLOGY@@QEBAII@Z.c)
 */

__int64 __fastcall DMMVIDPN::SerializeFunctionalPathDrivingTarget(
        DMMVIDPN *this,
        __int64 a2,
        struct _D3DKMDT_VIDPN_PRESENT_PATH *a3,
        __int64 a4)
{
  __int64 v4; // rsi
  int PathSourceFromTarget; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  DMMVIDPNPRESENTPATH *Path; // rbp
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rbp
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  _QWORD *v23; // rbx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  _QWORD *v31; // rbx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rsi
  __int64 v35; // rax

  v4 = (unsigned int)a2;
  if ( !a3 )
  {
    v20 = WdLogNewEntry5_WdAssertion(this, a2, 0LL, a4);
    WdLogEvent5_WdAssertion(v20);
  }
  memset(a3, 0, 0x1E8uLL);
  PathSourceFromTarget = DMMVIDPNTOPOLOGY::GetPathSourceFromTarget((DMMVIDPN *)((char *)this + 96), v4);
  if ( PathSourceFromTarget == -1 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
    v23[3] = v4;
    v26 = *((_QWORD *)this + 6);
    if ( !*(_QWORD *)(v26 + 8) )
    {
      v27 = WdLogNewEntry5_WdAssertion(v22, v21, v24, v25);
      WdLogEvent5_WdAssertion(v27);
    }
    v23[4] = *(_QWORD *)(*(_QWORD *)(v26 + 8) + 16LL);
    v23[5] = this;
    WdLogEvent5_WdDmmEvent(v23);
    return 3223192384LL;
  }
  else
  {
    Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPN *)((char *)this + 96), PathSourceFromTarget, v4);
    if ( !Path )
    {
      v28 = WdLogNewEntry5_WdAssertion(v9, v8, v11, v12);
      WdLogEvent5_WdAssertion(v28);
    }
    v13 = DMMVIDPNPRESENTPATH::SerializeFunctionalPath(Path, a3);
    v18 = v13;
    if ( v13 < 0 )
    {
      v31 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
      v31[3] = v4;
      v34 = *((_QWORD *)this + 6);
      if ( !*(_QWORD *)(v34 + 8) )
      {
        v35 = WdLogNewEntry5_WdAssertion(v30, v29, v32, v33);
        WdLogEvent5_WdAssertion(v35);
      }
      v31[4] = *(_QWORD *)(*(_QWORD *)(v34 + 8) + 16LL);
      v31[5] = this;
      v31[6] = v18;
      WdLogEvent5_WdWarning(v31);
      return (unsigned int)v18;
    }
    else
    {
      return 0LL;
    }
  }
}
