/*
 * XREFs of ?get_ShouldReconnectTitleBar@ApplicationViewOperation@@UEAAJPEAH@Z @ 0x180089750
 * Callers:
 *     ?ApplyOperation@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUIApplicationViewOperation@@@Z @ 0x180044D30 (-ApplyOperation@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUIApplicationViewOperati.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewOperation::get_ShouldReconnectTitleBar(ApplicationViewOperation *this, int *a2)
{
  *a2 = *((unsigned __int8 *)this + 224);
  return 0LL;
}
