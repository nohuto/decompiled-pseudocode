/*
 * XREFs of ??1?$CComHeapPtr@G@ATL@@QEAA@XZ @ 0x1800069FC
 * Callers:
 *     _CTrackedEndpoint::CTrackedEndpoint_::_1_::dtor$4 @ 0x180028F15 (_CTrackedEndpoint--CTrackedEndpoint_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CComHeapPtr<unsigned short>::~CComHeapPtr<unsigned short>(LPVOID *a1)
{
  CoTaskMemFree(*a1);
  *a1 = 0LL;
}
