/*
 * XREFs of ?DeleteAddingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x1C0140918
 * Callers:
 *     ?RemoveExpiredAnimations@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C001A4E4 (-RemoveExpiredAnimations@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?UnbindAnimation@CApplicationChannel@DirectComposition@@IEAA_NPEAVCResourceMarshaler@2@I@Z @ 0x1C001A610 (-UnbindAnimation@CApplicationChannel@DirectComposition@@IEAA_NPEAVCResourceMarshaler@2@I@Z.c)
 *     ?BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@@Z @ 0x1C001A680 (-BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAn.c)
 * Callees:
 *     ?RemoveFromBatchList@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@PEAPEAV32@@Z @ 0x1C001A450 (-RemoveFromBatchList@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@PEAPEAV.c)
 */

void __fastcall DirectComposition::CApplicationChannel::DeleteAddingBinding(
        struct DirectComposition::CAnimationBinding ***this,
        struct DirectComposition::CAnimationBinding **a2)
{
  DirectComposition::CAnimationBinding *v2; // r9

  v2 = (DirectComposition::CAnimationBinding *)a2;
  if ( this[57] )
    DirectComposition::CApplicationChannel::RemoveFromBatchList(
      (DirectComposition::CApplicationChannel *)this,
      a2,
      this + 57);
  DirectComposition::CAnimationBinding::DetachAndDelete(v2, (struct DirectComposition::CApplicationChannel *)this);
}
