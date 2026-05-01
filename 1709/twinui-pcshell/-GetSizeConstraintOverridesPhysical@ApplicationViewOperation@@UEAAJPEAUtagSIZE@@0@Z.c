/*
 * XREFs of ?GetSizeConstraintOverridesPhysical@ApplicationViewOperation@@UEAAJPEAUtagSIZE@@0@Z @ 0x180106D90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewOperation::GetSizeConstraintOverridesPhysical(
        ApplicationViewOperation *this,
        struct tagSIZE *a2,
        struct tagSIZE *a3)
{
  *a2 = *(struct tagSIZE *)((char *)this + 188);
  *a3 = *(struct tagSIZE *)((char *)this + 196);
  return 0LL;
}
