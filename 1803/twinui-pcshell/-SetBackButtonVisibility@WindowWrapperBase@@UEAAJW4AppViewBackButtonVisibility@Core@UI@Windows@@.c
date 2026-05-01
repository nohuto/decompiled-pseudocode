/*
 * XREFs of ?SetBackButtonVisibility@WindowWrapperBase@@UEAAJW4AppViewBackButtonVisibility@Core@UI@Windows@@@Z @ 0x1800963C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowWrapperBase::SetBackButtonVisibility(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 160) = a2;
  return 0LL;
}
