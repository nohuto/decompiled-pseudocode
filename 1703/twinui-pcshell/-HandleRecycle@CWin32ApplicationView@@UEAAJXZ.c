/*
 * XREFs of ?HandleRecycle@CWin32ApplicationView@@UEAAJXZ @ 0x18007B8F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWin32ApplicationView::HandleRecycle(CWin32ApplicationView *this)
{
  if ( (unsigned int)EdpGetIsManaged() )
    *((_BYTE *)this + 32) = 1;
  return CWin32ApplicationView::InitializeCloakType((__int64)this - 8, 1);
}
