/*
 * XREFs of ?CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z @ 0x1C00B75A8
 * Callers:
 *     ?RetrieveActiveTopology@CCD_BTL@@QEAAJ_N0PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C00B0B74 (-RetrieveActiveTopology@CCD_BTL@@QEAAJ_N0PEAVCCD_TOPOLOGY@@PEAG@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ClearReservedFields@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00B44EC (-ClearReservedFields@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?SetUsedReservedFields@CCD_TOPOLOGY@@QEAA?AVAUTO_CCD_TOPOLOGY_CLEAR_RESERVED@@W4D3DKMT_PATHMODALITY_RESERVED_FIELD@@@Z @ 0x1C00B457C (-SetUsedReservedFields@CCD_TOPOLOGY@@QEAA-AVAUTO_CCD_TOPOLOGY_CLEAR_RESERVED@@W4D3DKMT_PATHMODAL.c)
 *     ?_SortPathsModalityByPriorityOrder@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJXZ @ 0x1C00B6C8C (-_SortPathsModalityByPriorityOrder@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJXZ.c)
 *     ?_FillActiveDWMCloneGroupInfo@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJ_N@Z @ 0x1C00B6CD4 (-_FillActiveDWMCloneGroupInfo@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJ_N@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00F9E10 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

__int64 __fastcall CCD_BTL_ACTIVE_PATHS_COLLECTOR::CollectActivePaths(CCD_BTL_ACTIVE_PATHS_COLLECTOR *this, char a2)
{
  int v4; // ebx
  __int64 v5; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 (__fastcall *v7)(DXGADAPTER *, CCD_BTL_ACTIVE_PATHS_COLLECTOR *); // rdx
  int active; // ebx
  CCD_TOPOLOGY *v10; // [rsp+30h] [rbp+8h] BYREF

  CCD_TOPOLOGY::SetUsedReservedFields(*(_QWORD *)this, &v10, 96);
  v4 = *(_DWORD *)(*(_QWORD *)this + 84LL);
  Global = DXGGLOBAL::GetGlobal(v5);
  v7 = BtlPreAcquireSharedAccess__CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_0_;
  if ( (v4 & 2) == 0 )
    v7 = BtlPreAcquireSharedAccess__CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_1_;
  active = DXGGLOBAL::IterateAdaptersWithCallback(Global, v7, this, 1LL);
  if ( active >= 0 )
  {
    CCD_BTL_ACTIVE_PATHS_COLLECTOR::_SortPathsModalityByPriorityOrder(this);
    active = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_FillActiveDWMCloneGroupInfo((CCD_TOPOLOGY **)this, a2);
  }
  if ( v10 )
    CCD_TOPOLOGY::ClearReservedFields(v10);
  return (unsigned int)active;
}
