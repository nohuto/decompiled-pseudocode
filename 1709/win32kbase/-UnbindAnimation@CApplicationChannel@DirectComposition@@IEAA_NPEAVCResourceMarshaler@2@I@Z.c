/*
 * XREFs of ?UnbindAnimation@CApplicationChannel@DirectComposition@@IEAA_NPEAVCResourceMarshaler@2@I@Z @ 0x1C002FB48
 * Callers:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C002E240 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 * Callees:
 *     ?FindAnimationBindings@CResourceMarshaler@DirectComposition@@QEAAXIPEAPEAVCAnimationBinding@2@00@Z @ 0x1C00292AC (-FindAnimationBindings@CResourceMarshaler@DirectComposition@@QEAAXIPEAPEAVCAnimationBinding@2@00.c)
 *     ?NewRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x1C002F9BC (-NewRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z.c)
 *     ?DeleteAddingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x1C013FE18 (-DeleteAddingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z.c)
 */

char __fastcall DirectComposition::CApplicationChannel::UnbindAnimation(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CResourceMarshaler *a2,
        int a3)
{
  char v4; // bl
  struct DirectComposition::CAnimationBinding *v6; // [rsp+30h] [rbp-18h] BYREF
  struct DirectComposition::CAnimationBinding *v7; // [rsp+38h] [rbp-10h] BYREF
  struct DirectComposition::CAnimationBinding *v8; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0;
  v8 = 0LL;
  v6 = 0LL;
  DirectComposition::CResourceMarshaler::FindAnimationBindings(a2, a3, &v8, &v6, &v7);
  if ( v8 )
  {
    DirectComposition::CApplicationChannel::NewRemovingBinding(this, v8);
    return 1;
  }
  if ( v6 )
  {
    DirectComposition::CApplicationChannel::DeleteAddingBinding(this, v6);
    return 1;
  }
  return v4;
}
