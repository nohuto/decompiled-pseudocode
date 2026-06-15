/*
 * XREFs of ?AddRef@?$CComObject@VCStreamGroup@@@ATL@@UEAAKXZ @ 0x140008DD0
 * Callers:
 *     ?ConnectToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmix@@W4SUBMIX_CONNECT_OPTIONS@@@Z @ 0x1400067C0 (-ConnectToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmix@@W4SUBMIX_CONNECT_OPTIONS@@@Z.c)
 *     ?AtlInternalQueryInterface@ATL@@YAJPEAXPEBU_ATL_INTMAP_ENTRY@1@AEBU_GUID@@PEAPEAX@Z @ 0x1400087E0 (-AtlInternalQueryInterface@ATL@@YAJPEAXPEBU_ATL_INTMAP_ENTRY@1@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?AddRef@?$CComObject@VCStreamGroup@@@ATL@@W7EAAKXZ @ 0x14001E9A0 (-AddRef@-$CComObject@VCStreamGroup@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCStreamGroup@@@ATL@@WBA@EAAKXZ @ 0x14001E9B0 (-AddRef@-$CComObject@VCStreamGroup@@@ATL@@WBA@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCStreamGroup@@@ATL@@WBI@EAAKXZ @ 0x14001E9C0 (-AddRef@-$CComObject@VCStreamGroup@@@ATL@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CStreamGroup>::AddRef(__int64 a1)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 304));
}
