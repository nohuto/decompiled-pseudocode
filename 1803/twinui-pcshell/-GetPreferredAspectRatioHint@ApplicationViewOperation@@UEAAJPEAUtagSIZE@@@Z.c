/*
 * XREFs of ?GetPreferredAspectRatioHint@ApplicationViewOperation@@UEAAJPEAUtagSIZE@@@Z @ 0x1800896F0
 * Callers:
 *     ?ApplyOperation@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUIApplicationViewOperation@@@Z @ 0x180044D30 (-ApplyOperation@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@PEAUIApplicationViewOperati.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewOperation::GetPreferredAspectRatioHint(
        ApplicationViewOperation *this,
        struct tagSIZE *a2)
{
  *a2 = *(struct tagSIZE *)((char *)this + 224);
  return *((_BYTE *)this + 220) == 0 ? 0x80070490 : 0;
}
