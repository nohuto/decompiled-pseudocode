/*
 * XREFs of ?GetZOrderBand@ApplicationViewOperation@@UEAAJPEAK@Z @ 0x180089640
 * Callers:
 *     ?ApplyOperation@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUIApplicationViewOperation@@@Z @ 0x180044D30 (-ApplyOperation@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUIApplicationViewOperati.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewOperation::GetZOrderBand(ApplicationViewOperation *this, unsigned int *a2)
{
  *a2 = *((_DWORD *)this + 42);
  return *((_DWORD *)this + 42) == 0 ? 0x80070490 : 0;
}
