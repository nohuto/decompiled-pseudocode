/*
 * XREFs of ??1CPipeInstance@@QEAA@XZ @ 0x140008470
 * Callers:
 *     ?DestroyStream@CSubmixImpl@@UEAAJ_K@Z @ 0x140005810 (-DestroyStream@CSubmixImpl@@UEAAJ_K@Z.c)
 *     ?Cleanup@CAudioDeviceGraph@@AEAAXXZ @ 0x14000F8F0 (-Cleanup@CAudioDeviceGraph@@AEAAXXZ.c)
 *     ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x14002F3F4 (--_GCPipeInstance@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x140002EE8 (-RemoveAll@-$CAtlList@PEAVCPipeInstance@@V-$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAXX.c)
 *     ?RemoveAll@?$CAtlList@PEAVCConnectionInstance@@V?$CElementTraits@PEAVCConnectionInstance@@@ATL@@@ATL@@QEAAXXZ @ 0x140003790 (-RemoveAll@-$CAtlList@PEAVCConnectionInstance@@V-$CElementTraits@PEAVCConnectionInstance@@@ATL@@.c)
 *     ?Cleanup@CPipeInstance@@AEAAXXZ @ 0x140008010 (-Cleanup@CPipeInstance@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CPipeInstance::~CPipeInstance(CPipeInstance *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  CPipeInstance::Cleanup(this);
  ATL::CAtlList<CConnectionInstance *,ATL::CElementTraits<CConnectionInstance *>>::RemoveAll((__int64 *)this + 30);
  v2 = *((_QWORD *)this + 29);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  CoTaskMemFree(*((LPVOID *)this + 23));
  *((_QWORD *)this + 23) = 0LL;
  v3 = *((_QWORD *)this + 22);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = *((_QWORD *)this + 21);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = *((_QWORD *)this + 18);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::RemoveAll((__int64)this + 64);
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll((__int64)this + 16);
}
