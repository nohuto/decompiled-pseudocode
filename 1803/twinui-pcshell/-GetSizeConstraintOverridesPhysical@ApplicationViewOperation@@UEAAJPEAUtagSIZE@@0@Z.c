/*
 * XREFs of ?GetSizeConstraintOverridesPhysical@ApplicationViewOperation@@UEAAJPEAUtagSIZE@@0@Z @ 0x1800896B0
 * Callers:
 *     ?ApplyOperation@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUIApplicationViewOperation@@@Z @ 0x180044D30 (-ApplyOperation@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUIApplicationViewOperati.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewOperation::GetSizeConstraintOverridesPhysical(
        ApplicationViewOperation *this,
        struct tagSIZE *a2,
        struct tagSIZE *a3)
{
  *a2 = *(struct tagSIZE *)((char *)this + 204);
  *a3 = *(struct tagSIZE *)((char *)this + 212);
  return 0LL;
}
