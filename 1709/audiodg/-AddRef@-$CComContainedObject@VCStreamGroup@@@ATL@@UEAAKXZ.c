/*
 * XREFs of ?AddRef@?$CComContainedObject@VCStreamGroup@@@ATL@@UEAAKXZ @ 0x140034EB0
 * Callers:
 *     ?AddRef@?$CComContainedObject@VCStreamGroup@@@ATL@@W7EAAKXZ @ 0x14001E670 (-AddRef@-$CComContainedObject@VCStreamGroup@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCStreamGroup@@@ATL@@WBA@EAAKXZ @ 0x14001E680 (-AddRef@-$CComContainedObject@VCStreamGroup@@@ATL@@WBA@EAAKXZ.c)
 *     ?AddRef@?$CComContainedObject@VCStreamGroup@@@ATL@@WBI@EAAKXZ @ 0x14001E690 (-AddRef@-$CComContainedObject@VCStreamGroup@@@ATL@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComContainedObject<CStreamGroup>::AddRef(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 304) + 8LL))(*(_QWORD *)(a1 + 304));
}
