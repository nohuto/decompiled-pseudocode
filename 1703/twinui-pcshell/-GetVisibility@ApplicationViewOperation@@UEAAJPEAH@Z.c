/*
 * XREFs of ?GetVisibility@ApplicationViewOperation@@UEAAJPEAH@Z @ 0x1800E20B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewOperation::GetVisibility(ApplicationViewOperation *this, int *a2)
{
  *a2 = *((_DWORD *)this + 20) == 1;
  return *((_DWORD *)this + 20) == 0 ? 0x80070490 : 0;
}
