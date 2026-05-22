/*
 * XREFs of ??1?$ComPtr@VMPCMouseProcessor@@@WRL@Microsoft@@QEAA@XZ @ 0x180099F70
 * Callers:
 *     _MPCMouseProcessor::Create_::_1_::dtor$2 @ 0x1800E87DF (_MPCMouseProcessor--Create_--_1_--dtor$2.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawInputProvider@@UIMouseProcessorForwarding@@VMPCInputProviderBase@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180099590 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRa_ea_180099590.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<MPCMouseProcessor>::~ComPtr<MPCMouseProcessor>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IRawInputProvider,IMouseProcessorForwarding,MPCInputProviderBase>::Release(result);
  }
  return result;
}
