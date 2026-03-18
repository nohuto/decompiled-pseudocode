/*
 * XREFs of ?RemoveFromBatchList@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@PEAPEAV32@@Z @ 0x1C000303C
 * Callers:
 *     ?RemoveExpiredAnimations@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C002FA2C (-RemoveExpiredAnimations@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@@Z @ 0x1C002FBB8 (-BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAn.c)
 *     ?DeleteAddingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x1C013FE18 (-DeleteAddingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CApplicationChannel::RemoveFromBatchList(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CAnimationBinding **a2,
        struct DirectComposition::CAnimationBinding ***a3)
{
  struct DirectComposition::CAnimationBinding **i; // rax

  for ( i = *a3; i != a2; i = (struct DirectComposition::CAnimationBinding **)*i )
    a3 = (struct DirectComposition::CAnimationBinding ***)i;
  *a3 = (struct DirectComposition::CAnimationBinding **)*i;
  *a2 = 0LL;
}
