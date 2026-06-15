/*
 * XREFs of ??0?$CComObject@VCVpoContext@@@ATL@@QEAA@PEAX@Z @ 0x140044DAC
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCVpoContext@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400451FC (-CreateInstance@-$CComCreator@V-$CComObject@VCVpoContext@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@.c)
 * Callees:
 *     memset @ 0x14001D9AC (memset.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CComObject<CVpoContext>::CComObject<CVpoContext>(__int64 a1)
{
  *(_DWORD *)(a1 + 16) = 0;
  memset((void *)(a1 + 24), 0, 0x28uLL);
  *(_BYTE *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)a1 = &ATL::CComObject<CVpoContext>::`vftable'{for `IFastRundown'};
  *(_QWORD *)(a1 + 8) = &ATL::CComObject<CVpoContext>::`vftable'{for `IVpoContext'};
  (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return a1;
}
