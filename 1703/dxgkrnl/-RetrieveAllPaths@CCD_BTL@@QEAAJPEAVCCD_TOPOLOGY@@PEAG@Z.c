/*
 * XREFs of ?RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C00EFD48
 * Callers:
 *     ?RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z @ 0x1C00EBB60 (-RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z.c)
 * Callees:
 *     ??RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ @ 0x1C00AFFC8 (--RCCD_BTL_CONNECTIVITY_COLLECTOR@@QEAAJXZ.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C00B1150 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00D7FFC (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00EA544 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?ClearReservedFields@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00EC524 (-ClearReservedFields@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?SetUsedReservedFields@CCD_TOPOLOGY@@QEAA?AVAUTO_CCD_TOPOLOGY_CLEAR_RESERVED@@W4D3DKMT_PATHMODALITY_RESERVED_FIELD@@@Z @ 0x1C00EC5B4 (-SetUsedReservedFields@CCD_TOPOLOGY@@QEAA-AVAUTO_CCD_TOPOLOGY_CLEAR_RESERVED@@W4D3DKMT_PATHMODAL.c)
 *     ?SetConnectivityHash@CCD_TOPOLOGY@@QEAAJAEBVCCD_SET_STRING_ID@@@Z @ 0x1C00ED2FC (-SetConnectivityHash@CCD_TOPOLOGY@@QEAAJAEBVCCD_SET_STRING_ID@@@Z.c)
 *     ?_SortPathsModalityByPriorityOrder@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJXZ @ 0x1C00EF564 (-_SortPathsModalityByPriorityOrder@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJXZ.c)
 *     ?_FillActiveDWMCloneGroupInfo@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJ_N@Z @ 0x1C00EF5B0 (-_FillActiveDWMCloneGroupInfo@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJ_N@Z.c)
 *     ??1AUTO_CCD_TOPOLOGY_CLEAR_RESERVED@@QEAA@XZ @ 0x1C016CC44 (--1AUTO_CCD_TOPOLOGY_CLEAR_RESERVED@@QEAA@XZ.c)
 */

__int64 __fastcall CCD_BTL::RetrieveAllPaths(CCD_BTL *this, struct CCD_TOPOLOGY *a2, unsigned __int16 *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  struct DXGGLOBAL *Global; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  unsigned __int16 v12; // cx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // eax
  _QWORD *v20; // rax
  CCD_TOPOLOGY *v21; // [rsp+20h] [rbp-60h] BYREF
  unsigned __int16 v22; // [rsp+28h] [rbp-58h]
  _DWORD *v23[3]; // [rsp+30h] [rbp-50h] BYREF
  int v24; // [rsp+48h] [rbp-38h] BYREF
  __int64 v25; // [rsp+50h] [rbp-30h]
  __int64 v26; // [rsp+58h] [rbp-28h]
  __int64 v27; // [rsp+60h] [rbp-20h]
  __int16 v28; // [rsp+68h] [rbp-18h]
  __int64 v29; // [rsp+70h] [rbp-10h]
  __int64 v30; // [rsp+78h] [rbp-8h]
  CCD_TOPOLOGY *v31; // [rsp+A0h] [rbp+20h] BYREF

  v31 = this;
  CCD_TOPOLOGY::Clear(a2);
  v21 = a2;
  v22 = 0;
  CCD_TOPOLOGY::SetUsedReservedFields((__int64)a2, &v31, 96);
  Global = DXGGLOBAL::GetGlobal(v6, v5, v7, v8);
  LODWORD(v10) = DXGGLOBAL::IterateAdaptersWithCallback(
                   (__int64)Global,
                   (__int64 (__fastcall *)(_QWORD *, __int64))BtlPreAcquireSharedAccess__CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_1_,
                   (__int64)&v21,
                   1LL);
  if ( (int)v10 < 0 )
  {
    AUTO_CCD_TOPOLOGY_CLEAR_RESERVED::~AUTO_CCD_TOPOLOGY_CLEAR_RESERVED((AUTO_CCD_TOPOLOGY_CLEAR_RESERVED *)&v31);
  }
  else
  {
    CCD_BTL_ACTIVE_PATHS_COLLECTOR::_SortPathsModalityByPriorityOrder((CCD_BTL_ACTIVE_PATHS_COLLECTOR *)&v21);
    LODWORD(v10) = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_FillActiveDWMCloneGroupInfo(&v21, 1);
    if ( v31 )
      CCD_TOPOLOGY::ClearReservedFields(v31);
  }
  if ( (int)v10 >= 0 )
  {
    v11 = *((_QWORD *)a2 + 8);
    if ( v11 )
      v12 = *(_WORD *)(v11 + 20);
    else
      v12 = 0;
    if ( v22 > v12 )
      LODWORD(v10) = -1073741789;
    if ( a3 )
      *a3 = v22;
    if ( (int)v10 >= 0 )
    {
      v24 = 0;
      v25 = 0LL;
      v26 = 0LL;
      v29 = 0LL;
      v30 = 0LL;
      v23[0] = &v24;
      v23[1] = 0LL;
      v23[2] = 0LL;
      v27 = 0LL;
      v28 = 0;
      v13 = CCD_BTL_CONNECTIVITY_COLLECTOR::operator()(v23);
      v10 = v13;
      if ( v13 < 0
        || (v18 = CCD_TOPOLOGY::SetConnectivityHash(a2, (const struct CCD_SET_STRING_ID *)&v24, v16, v17),
            v10 = v18,
            v18 < 0) )
      {
        v20 = (_QWORD *)WdLogNewEntry5_WdError(v15, v14);
        v20[3] = v10;
        v20[4] = &v24;
        v20[5] = a2;
        v20[6] = *((_QWORD *)a2 + 8);
        WdLogEvent5_WdError(v20);
      }
      CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v24);
    }
  }
  return (unsigned int)v10;
}
