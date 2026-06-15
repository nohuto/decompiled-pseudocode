/*
 * XREFs of ??0?$CComAggObject@VCVpoContext@@@ATL@@QEAA@PEAX@Z @ 0x140044CF8
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComAggObject@VCVpoContext@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400450C0 (-CreateInstance@-$CComCreator@V-$CComAggObject@VCVpoContext@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPE.c)
 * Callees:
 *     memset @ 0x14001D9AC (memset.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ATL::CComAggObject<CVpoContext>::CComAggObject<CVpoContext>(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &ATL::CComAggObject<CVpoContext>::`vftable';
  *(_DWORD *)(a1 + 40) = 0;
  memset((void *)(a1 + 48), 0, 0x28uLL);
  *(_BYTE *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 24) = &ATL::CComContainedObject<CVpoContext>::`vftable'{for `IFastRundown'};
  *(_QWORD *)(a1 + 32) = &ATL::CComContainedObject<CVpoContext>::`vftable'{for `IVpoContext'};
  *(_QWORD *)(a1 + 40) = a2;
  (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return a1;
}
