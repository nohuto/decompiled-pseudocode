/*
 * XREFs of ?QueryInterface@?$CComContainedObject@VCStreamGroup@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140035870
 * Callers:
 *     ?QueryInterface@?$CComContainedObject@VCStreamGroup@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001E6F0 (-QueryInterface@-$CComContainedObject@VCStreamGroup@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComContainedObject@VCStreamGroup@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001E700 (-QueryInterface@-$CComContainedObject@VCStreamGroup@@@ATL@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$CComContainedObject@VCStreamGroup@@@ATL@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001E710 (-QueryInterface@-$CComContainedObject@VCStreamGroup@@@ATL@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComContainedObject<CStreamGroup>::QueryInterface(__int64 a1)
{
  return (***(__int64 (__fastcall ****)(_QWORD))(a1 + 304))(*(_QWORD *)(a1 + 304));
}
