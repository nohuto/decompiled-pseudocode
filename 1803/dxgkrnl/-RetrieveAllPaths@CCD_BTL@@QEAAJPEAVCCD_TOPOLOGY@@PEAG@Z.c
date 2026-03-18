/*
 * XREFs of ?RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C00B0A28
 * Callers:
 *     ?RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z @ 0x1C00B2F00 (-RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ @ 0x1C00B2288 (--RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C00B2714 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00B358C (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?SetConnectivityHash@CCD_TOPOLOGY@@QEAAJAEBVCCD_SET_STRING_ID@@@Z @ 0x1C00B409C (-SetConnectivityHash@CCD_TOPOLOGY@@QEAAJAEBVCCD_SET_STRING_ID@@@Z.c)
 *     ?ClearReservedFields@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00B44EC (-ClearReservedFields@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?SetUsedReservedFields@CCD_TOPOLOGY@@QEAA?AVAUTO_CCD_TOPOLOGY_CLEAR_RESERVED@@W4D3DKMT_PATHMODALITY_RESERVED_FIELD@@@Z @ 0x1C00B457C (-SetUsedReservedFields@CCD_TOPOLOGY@@QEAA-AVAUTO_CCD_TOPOLOGY_CLEAR_RESERVED@@W4D3DKMT_PATHMODAL.c)
 *     ?_SortPathsModalityByPriorityOrder@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJXZ @ 0x1C00B6C8C (-_SortPathsModalityByPriorityOrder@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJXZ.c)
 *     ?_FillActiveDWMCloneGroupInfo@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJ_N@Z @ 0x1C00B6CD4 (-_FillActiveDWMCloneGroupInfo@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJ_N@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00F9E10 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ??1AUTO_CCD_TOPOLOGY_CLEAR_RESERVED@@QEAA@XZ @ 0x1C01474C8 (--1AUTO_CCD_TOPOLOGY_CLEAR_RESERVED@@QEAA@XZ.c)
 */

__int64 __fastcall CCD_BTL::RetrieveAllPaths(CCD_BTL *this, struct CCD_TOPOLOGY *a2, unsigned __int16 *a3)
{
  __int64 v5; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int16 v9; // cx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  _QWORD *v14; // rax
  struct CCD_TOPOLOGY *v15; // [rsp+20h] [rbp-60h] BYREF
  unsigned __int16 v16; // [rsp+28h] [rbp-58h]
  _QWORD v17[3]; // [rsp+30h] [rbp-50h] BYREF
  int v18; // [rsp+48h] [rbp-38h] BYREF
  __int64 v19; // [rsp+50h] [rbp-30h]
  __int64 v20; // [rsp+58h] [rbp-28h]
  __int64 v21; // [rsp+60h] [rbp-20h]
  __int16 v22; // [rsp+68h] [rbp-18h]
  __int64 v23; // [rsp+70h] [rbp-10h]
  __int64 v24; // [rsp+78h] [rbp-8h]
  CCD_TOPOLOGY *v25; // [rsp+A0h] [rbp+20h] BYREF

  v25 = this;
  CCD_TOPOLOGY::Clear(a2);
  v15 = a2;
  v16 = 0;
  CCD_TOPOLOGY::SetUsedReservedFields(a2, &v25, 96LL);
  Global = DXGGLOBAL::GetGlobal(v5);
  LODWORD(v7) = DXGGLOBAL::IterateAdaptersWithCallback(
                  Global,
                  BtlPreAcquireSharedAccess__CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_1_,
                  &v15,
                  1LL);
  if ( (int)v7 < 0 )
  {
    AUTO_CCD_TOPOLOGY_CLEAR_RESERVED::~AUTO_CCD_TOPOLOGY_CLEAR_RESERVED((AUTO_CCD_TOPOLOGY_CLEAR_RESERVED *)&v25);
  }
  else
  {
    CCD_BTL_ACTIVE_PATHS_COLLECTOR::_SortPathsModalityByPriorityOrder((CCD_BTL_ACTIVE_PATHS_COLLECTOR *)&v15);
    LODWORD(v7) = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_FillActiveDWMCloneGroupInfo(
                    (CCD_BTL_ACTIVE_PATHS_COLLECTOR *)&v15,
                    1);
    if ( v25 )
      CCD_TOPOLOGY::ClearReservedFields(v25);
  }
  if ( (int)v7 >= 0 )
  {
    v8 = *((_QWORD *)a2 + 8);
    if ( v8 )
      v9 = *(_WORD *)(v8 + 20);
    else
      v9 = 0;
    if ( v16 > v9 )
      LODWORD(v7) = -1073741789;
    if ( a3 )
      *a3 = v16;
    if ( (int)v7 >= 0 )
    {
      v18 = 0;
      v19 = 0LL;
      v20 = 0LL;
      v23 = 0LL;
      v24 = 0LL;
      v17[0] = &v18;
      v17[1] = 0LL;
      v17[2] = 0LL;
      v21 = 0LL;
      v22 = 0;
      v10 = CCD_BTL_CONNECTIVITY_COLLECTOR::operator()(v17);
      v7 = v10;
      if ( v10 < 0
        || (v12 = CCD_TOPOLOGY::SetConnectivityHash(a2, (const struct CCD_SET_STRING_ID *)&v18), v7 = v12, v12 < 0) )
      {
        v14 = (_QWORD *)WdLogNewEntry5_WdError(v11);
        v14[3] = v7;
        v14[4] = &v18;
        v14[5] = a2;
        v14[6] = *((_QWORD *)a2 + 8);
        WdLogEvent5_WdError(v14);
      }
      CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v18);
    }
  }
  return (unsigned int)v7;
}
