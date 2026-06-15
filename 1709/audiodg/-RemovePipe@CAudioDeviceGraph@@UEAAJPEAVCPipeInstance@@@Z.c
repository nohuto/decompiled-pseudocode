/*
 * XREFs of ?RemovePipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14000BCE0
 * Callers:
 *     ?RemovePipe@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z @ 0x14000F690 (-RemovePipe@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x1400059AC (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ?DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ @ 0x140007360 (-DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ.c)
 *     ?RegisterSpatialPipe@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z @ 0x14000D790 (-RegisterSpatialPipe@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140010310 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioDeviceGraph::RemovePipe(CAudioDeviceGraph *this, struct CPipeInstance *a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // rax
  __int64 v6; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v9; // [rsp+28h] [rbp-10h]
  _QWORD *v10; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 216);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  CAudioDeviceGraph::RegisterSpatialPipe((CAudioDeviceGraph *)((char *)this - 16), a2, 0);
  CPipeInstance::DeactivateAPOsAndRemoveConnections(a2);
  v5 = (_QWORD *)*((_QWORD *)a2 + 30);
  v10 = v5;
  while ( v5 )
  {
    v4 = *ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(v4, &v10);
    v5 = v10;
    *(_QWORD *)(v4 + 8) = -1LL;
  }
  v6 = *((_QWORD *)a2 + 18);
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    *((_QWORD *)a2 + 18) = 0LL;
  }
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
