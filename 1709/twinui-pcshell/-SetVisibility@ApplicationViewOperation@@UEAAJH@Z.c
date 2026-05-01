/*
 * XREFs of ?SetVisibility@ApplicationViewOperation@@UEAAJH@Z @ 0x180106F30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewOperation::SetVisibility(ApplicationViewOperation *this, int a2)
{
  *((_DWORD *)this + 24) = 2 - (a2 != 0);
  return 0LL;
}
