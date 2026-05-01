/*
 * XREFs of ?GetSizeConstraintOverridesLogical@ApplicationViewOperation@@UEAAJPEAUtagSIZE@@0@Z @ 0x1800E1EE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewOperation::GetSizeConstraintOverridesLogical(
        ApplicationViewOperation *this,
        struct tagSIZE *a2,
        struct tagSIZE *a3)
{
  *a2 = *(struct tagSIZE *)((char *)this + 156);
  *a3 = *(struct tagSIZE *)((char *)this + 164);
  return 0LL;
}
