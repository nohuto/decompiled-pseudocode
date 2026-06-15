/*
 * XREFs of ?Release@?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ @ 0x14005BC30
 * Callers:
 *     ?Release@?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@W7EAAKXZ @ 0x1400202C0 (-Release@-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WBA@EAAKXZ @ 0x1400202D0 (-Release@-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WBA@EAAKXZ.c)
 *     ?Release@?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WBI@EAAKXZ @ 0x1400202E0 (-Release@-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WBI@EAAKXZ.c)
 *     ?Release@?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WDII@EAAKXZ @ 0x1400202F0 (-Release@-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WDII@EAAKXZ.c)
 *     ?Release@?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WDJA@EAAKXZ @ 0x140020300 (-Release@-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WDJA@EAAKXZ.c)
 *     ?Release@?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WEEA@EAAKXZ @ 0x140020310 (-Release@-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WEEA@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CComObject<CSpatialCrossProcessServerInputEndpoint>::Release(volatile signed __int32 *a1)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement(a1 + 274);
  if ( !v2 )
  {
    (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    if ( a1 )
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)a1 + 64LL))(a1, 1LL);
    (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  }
  return v2;
}
