/*
 * XREFs of ?HandleRecycle@CWin32ApplicationView@@UEAAJXZ @ 0x180140570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWin32ApplicationView::HandleRecycle(CWin32ApplicationView *this)
{
  if ( (unsigned int)EdpGetIsManaged(this) )
    *((_BYTE *)this + 40) = 1;
  return CWin32ApplicationView::InitializeCloakType((__int64)this - 16, 1);
}
