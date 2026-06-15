/*
 * XREFs of ??1?$CComHeapPtr@G@ATL@@QEAA@XZ @ 0x18000B0D8
 * Callers:
 *     _CTrackedEndpoint::CTrackedEndpoint_::_1_::dtor$4 @ 0x180037AC0 (_CTrackedEndpoint--CTrackedEndpoint_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CComHeapPtr<unsigned short>::~CComHeapPtr<unsigned short>(LPVOID *a1)
{
  CoTaskMemFree(*a1);
  *a1 = 0LL;
}
