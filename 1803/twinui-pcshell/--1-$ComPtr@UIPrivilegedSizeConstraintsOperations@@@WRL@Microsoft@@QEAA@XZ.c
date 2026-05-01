/*
 * XREFs of ??1?$ComPtr@UIPrivilegedSizeConstraintsOperations@@@WRL@Microsoft@@QEAA@XZ @ 0x1800F9A70
 * Callers:
 *     _CWin32ApplicationView::QuerySizeConstraintsFromApp_::_1_::dtor$0 @ 0x1800B2581 (_CWin32ApplicationView--QuerySizeConstraintsFromApp_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<IPrivilegedSizeConstraintsOperations>::~ComPtr<IPrivilegedSizeConstraintsOperations>(
        __int64 *a1)
{
  return Microsoft::WRL::ComPtr<IPrivilegedSizeConstraintsOperations>::InternalRelease(a1);
}
