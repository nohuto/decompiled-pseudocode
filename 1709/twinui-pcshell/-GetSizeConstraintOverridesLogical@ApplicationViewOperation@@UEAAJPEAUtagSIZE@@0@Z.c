/*
 * XREFs of ?GetSizeConstraintOverridesLogical@ApplicationViewOperation@@UEAAJPEAUtagSIZE@@0@Z @ 0x180106D40
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
  *a2 = *(struct tagSIZE *)((char *)this + 172);
  *a3 = *(struct tagSIZE *)((char *)this + 180);
  return 0LL;
}
