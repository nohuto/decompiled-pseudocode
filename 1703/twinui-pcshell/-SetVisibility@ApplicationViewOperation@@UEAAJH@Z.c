/*
 * XREFs of ?SetVisibility@ApplicationViewOperation@@UEAAJH@Z @ 0x1800E20D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewOperation::SetVisibility(ApplicationViewOperation *this, int a2)
{
  *((_DWORD *)this + 20) = 2 - (a2 != 0);
  return 0LL;
}
