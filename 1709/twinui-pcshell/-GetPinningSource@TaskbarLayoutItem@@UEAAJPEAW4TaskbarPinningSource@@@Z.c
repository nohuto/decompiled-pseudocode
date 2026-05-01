/*
 * XREFs of ?GetPinningSource@TaskbarLayoutItem@@UEAAJPEAW4TaskbarPinningSource@@@Z @ 0x18008FAE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TaskbarLayoutItem::GetPinningSource(TaskbarLayoutItem *this, enum TaskbarPinningSource *a2)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 16);
  return 0LL;
}
