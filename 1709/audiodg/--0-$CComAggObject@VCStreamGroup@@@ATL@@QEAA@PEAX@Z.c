/*
 * XREFs of ??0?$CComAggObject@VCStreamGroup@@@ATL@@QEAA@PEAX@Z @ 0x140034C18
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComAggObject@VCStreamGroup@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140034FFC (-CreateInstance@-$CComCreator@V-$CComAggObject@VCStreamGroup@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAP.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ??0CStreamGroup@@QEAA@XZ @ 0x14002FE20 (--0CStreamGroup@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ATL::CComAggObject<CStreamGroup>::CComAggObject<CStreamGroup>(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rbx

  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &ATL::CComAggObject<CStreamGroup>::`vftable';
  v4 = (_QWORD *)(a1 + 24);
  CStreamGroup::CStreamGroup((CStreamGroup *)(a1 + 24));
  *v4 = &ATL::CComContainedObject<CStreamGroup>::`vftable'{for `IStreamGroup'};
  v4[1] = &ATL::CComContainedObject<CStreamGroup>::`vftable'{for `IStreamGroupInternal'};
  v4[2] = &ATL::CComContainedObject<CStreamGroup>::`vftable'{for `IFastRundown'};
  v4[3] = &ATL::CComContainedObject<CStreamGroup>::`vftable'{for `CSubmixImpl'};
  v4[38] = a2;
  (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return a1;
}
