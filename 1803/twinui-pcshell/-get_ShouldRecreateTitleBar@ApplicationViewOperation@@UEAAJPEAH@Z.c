/*
 * XREFs of ?get_ShouldRecreateTitleBar@ApplicationViewOperation@@UEAAJPEAH@Z @ 0x180089760
 * Callers:
 *     ?ApplyOperation@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUIApplicationViewOperation@@@Z @ 0x180044D30 (-ApplyOperation@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUIApplicationViewOperati.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewOperation::get_ShouldRecreateTitleBar(ApplicationViewOperation *this, int *a2)
{
  *a2 = *((unsigned __int8 *)this + 225);
  return 0LL;
}
