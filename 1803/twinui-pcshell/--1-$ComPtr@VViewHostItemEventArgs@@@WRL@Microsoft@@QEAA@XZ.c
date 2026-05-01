/*
 * XREFs of ??1?$ComPtr@VViewHostItemEventArgs@@@WRL@Microsoft@@QEAA@XZ @ 0x1801ACD28
 * Callers:
 *     _HolographicPositioner::_RaiseViewRemoved_::_1_::dtor$1 @ 0x1801B371B (_HolographicPositioner--_RaiseViewRemoved_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<ViewHostItemEventArgs>::~ComPtr<ViewHostItemEventArgs>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<ViewHostItemEventArgs>::InternalRelease(a1);
}
