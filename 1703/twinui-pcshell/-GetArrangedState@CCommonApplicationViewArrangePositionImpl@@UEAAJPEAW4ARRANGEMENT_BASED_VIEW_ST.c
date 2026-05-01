/*
 * XREFs of ?GetArrangedState@CCommonApplicationViewArrangePositionImpl@@UEAAJPEAW4ARRANGEMENT_BASED_VIEW_STATE@@@Z @ 0x1800E24D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCommonApplicationViewArrangePositionImpl::GetArrangedState(
        CCommonApplicationViewArrangePositionImpl *this,
        enum ARRANGEMENT_BASED_VIEW_STATE *a2)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 6);
  return 0LL;
}
