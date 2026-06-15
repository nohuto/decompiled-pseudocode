/*
 * XREFs of ??0?$CComAggObject@VCProcessSubmix@@@ATL@@QEAA@PEAX@Z @ 0x140046428
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComAggObject@VCProcessSubmix@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140046598 (-CreateInstance@-$CComCreator@V-$CComAggObject@VCProcessSubmix@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PE.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ??0CProcessSubmix@@QEAA@XZ @ 0x14002FED8 (--0CProcessSubmix@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ATL::CComAggObject<CProcessSubmix>::CComAggObject<CProcessSubmix>(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rbx

  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &ATL::CComAggObject<CProcessSubmix>::`vftable';
  v4 = (_QWORD *)(a1 + 24);
  CProcessSubmix::CProcessSubmix((CProcessSubmix *)(a1 + 24));
  *v4 = &ATL::CComContainedObject<CProcessSubmix>::`vftable'{for `IProcessSubmix'};
  v4[1] = &ATL::CComContainedObject<CProcessSubmix>::`vftable'{for `IFastRundown'};
  v4[2] = &ATL::CComContainedObject<CProcessSubmix>::`vftable'{for `CSubmixImpl'};
  v4[37] = a2;
  (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return a1;
}
