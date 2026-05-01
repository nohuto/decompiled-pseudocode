/*
 * XREFs of ?GetVisibility@ApplicationViewOperation@@UEAAJPEAH@Z @ 0x1800895C0
 * Callers:
 *     ?ApplyOperation@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUIApplicationViewOperation@@@Z @ 0x180044D30 (-ApplyOperation@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUIApplicationViewOperati.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewOperation::GetVisibility(ApplicationViewOperation *this, int *a2)
{
  *a2 = *((unsigned __int8 *)this + 113);
  return *((_BYTE *)this + 112) == 0 ? 0x80070490 : 0;
}
