/*
 * XREFs of ?Release@?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAKXZ @ 0x140052DF0
 * Callers:
 *     ?Release@?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@W7EAAKXZ @ 0x14001EFD0 (-Release@-$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@WBIA@EAAKXZ @ 0x14001EFE0 (-Release@-$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@WBIA@EAAKXZ.c)
 *     ?Release@?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@WBLI@EAAKXZ @ 0x14001EFF0 (-Release@-$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@WBLI@EAAKXZ.c)
 * Callees:
 *     ?SafeDecrementReference@CComMultiThreadModel@ATL@@SAKPEAJ@Z @ 0x14001D4E0 (-SafeDecrementReference@CComMultiThreadModel@ATL@@SAKPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CComObject<CCrossProcessServerOutputEndpoint>::Release(int *a1)
{
  unsigned int v2; // edi

  v2 = ATL::CComMultiThreadModel::SafeDecrementReference(a1 + 116);
  if ( !v2 )
  {
    (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    if ( a1 )
      (*(void (__fastcall **)(int *, _QWORD))(*(_QWORD *)a1 + 64LL))(a1, v2 + 1);
    (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  }
  return v2;
}
