/*
 * XREFs of ?RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C00E0B7C
 * Callers:
 *     ?RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z @ 0x1C00DF040 (-RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C008B884 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ??RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ @ 0x1C00D99E4 (--RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C00DA7C8 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ?_SortPathsModalityByPriorityOrder@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJXZ @ 0x1C00DAEAC (-_SortPathsModalityByPriorityOrder@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJXZ.c)
 *     ?_FillActiveDWMCloneGroupInfo@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJ_N@Z @ 0x1C00DAEF8 (-_FillActiveDWMCloneGroupInfo@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJ_N@Z.c)
 *     ?SetConnectivityHash@CCD_TOPOLOGY@@QEAAJAEBVCCD_SET_STRING_ID@@@Z @ 0x1C00DC53C (-SetConnectivityHash@CCD_TOPOLOGY@@QEAAJAEBVCCD_SET_STRING_ID@@@Z.c)
 *     ?ClearReservedFields@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00DC7BC (-ClearReservedFields@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?SetUsedReservedFields@CCD_TOPOLOGY@@QEAA?AVAUTO_CCD_TOPOLOGY_CLEAR_RESERVED@@W4D3DKMT_PATHMODALITY_RESERVED_FIELD@@@Z @ 0x1C00DC84C (-SetUsedReservedFields@CCD_TOPOLOGY@@QEAA-AVAUTO_CCD_TOPOLOGY_CLEAR_RESERVED@@W4D3DKMT_PATHMODAL.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00DF6CC (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ??1AUTO_CCD_TOPOLOGY_CLEAR_RESERVED@@QEAA@XZ @ 0x1C0170368 (--1AUTO_CCD_TOPOLOGY_CLEAR_RESERVED@@QEAA@XZ.c)
 */

__int64 __fastcall CCD_BTL::RetrieveAllPaths(CCD_BTL *this, struct CCD_TOPOLOGY *a2, unsigned __int16 *a3)
{
  __int64 v5; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned __int16 v10; // cx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  _QWORD *v15; // rax
  CCD_TOPOLOGY *v16; // [rsp+20h] [rbp-60h] BYREF
  unsigned __int16 v17; // [rsp+28h] [rbp-58h]
  _DWORD *v18[3]; // [rsp+30h] [rbp-50h] BYREF
  int v19; // [rsp+48h] [rbp-38h] BYREF
  __int64 v20; // [rsp+50h] [rbp-30h]
  __int64 v21; // [rsp+58h] [rbp-28h]
  __int64 v22; // [rsp+60h] [rbp-20h]
  __int16 v23; // [rsp+68h] [rbp-18h]
  __int64 v24; // [rsp+70h] [rbp-10h]
  __int64 v25; // [rsp+78h] [rbp-8h]
  CCD_TOPOLOGY *v26; // [rsp+A0h] [rbp+20h] BYREF

  v26 = this;
  CCD_TOPOLOGY::Clear(a2);
  v16 = a2;
  v17 = 0;
  CCD_TOPOLOGY::SetUsedReservedFields((__int64)a2, &v26, 96);
  Global = DXGGLOBAL::GetGlobal(v5);
  LODWORD(v7) = DXGGLOBAL::IterateAdaptersWithCallback(
                  (__int64)Global,
                  (__int64 (__fastcall *)(_QWORD *, __int64))BtlPreAcquireSharedAccess__CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_1_,
                  (__int64)&v16,
                  1);
  if ( (int)v7 < 0 )
  {
    AUTO_CCD_TOPOLOGY_CLEAR_RESERVED::~AUTO_CCD_TOPOLOGY_CLEAR_RESERVED((AUTO_CCD_TOPOLOGY_CLEAR_RESERVED *)&v26);
  }
  else
  {
    CCD_BTL_ACTIVE_PATHS_COLLECTOR::_SortPathsModalityByPriorityOrder((CCD_BTL_ACTIVE_PATHS_COLLECTOR *)&v16);
    LOBYTE(v8) = 1;
    LODWORD(v7) = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_FillActiveDWMCloneGroupInfo(&v16, v8);
    if ( v26 )
      CCD_TOPOLOGY::ClearReservedFields(v26);
  }
  if ( (int)v7 >= 0 )
  {
    v9 = *((_QWORD *)a2 + 8);
    if ( v9 )
      v10 = *(_WORD *)(v9 + 20);
    else
      v10 = 0;
    if ( v17 > v10 )
      LODWORD(v7) = -1073741789;
    if ( a3 )
      *a3 = v17;
    if ( (int)v7 >= 0 )
    {
      v19 = 0;
      v20 = 0LL;
      v21 = 0LL;
      v24 = 0LL;
      v25 = 0LL;
      v18[0] = &v19;
      v18[1] = 0LL;
      v18[2] = 0LL;
      v22 = 0LL;
      v23 = 0;
      v11 = CCD_BTL_CONNECTIVITY_COLLECTOR::operator()(v18);
      v7 = v11;
      if ( v11 < 0
        || (v13 = CCD_TOPOLOGY::SetConnectivityHash(a2, (const struct CCD_SET_STRING_ID *)&v19), v7 = v13, v13 < 0) )
      {
        v15 = (_QWORD *)WdLogNewEntry5_WdError(v12);
        v15[3] = v7;
        v15[4] = &v19;
        v15[5] = a2;
        v15[6] = *((_QWORD *)a2 + 8);
        WdLogEvent5_WdError(v15);
      }
      CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v19);
    }
  }
  return (unsigned int)v7;
}
