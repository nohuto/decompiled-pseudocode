/*
 * XREFs of ?AddRef@?$CComContainedObject@VCStreamGroup@@@ATL@@UEAAKXZ @ 0x140033D60
 * Callers:
 *     ?AddRef@?$CComContainedObject@VCStreamGroup@@@ATL@@W7EAAKXZ @ 0x14001D840 (-AddRef@-$CComContainedObject@VCStreamGroup@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCStreamGroup@@@ATL@@WBA@EAAKXZ @ 0x14001D850 (-AddRef@-$CComContainedObject@VCStreamGroup@@@ATL@@WBA@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCStreamGroup@@@ATL@@WBI@EAAKXZ @ 0x14001D860 (-AddRef@-$CComContainedObject@VCStreamGroup@@@ATL@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComContainedObject<CStreamGroup>::AddRef(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 304) + 8LL))(*(_QWORD *)(a1 + 304));
}
