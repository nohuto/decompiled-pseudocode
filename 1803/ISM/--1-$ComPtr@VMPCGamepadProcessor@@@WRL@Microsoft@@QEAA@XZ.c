/*
 * XREFs of ??1?$ComPtr@VMPCGamepadProcessor@@@WRL@Microsoft@@QEAA@XZ @ 0x1800960F4
 * Callers:
 *     _MPCGamepadProcessor::Create_::_1_::dtor$2 @ 0x1800E83EF (_MPCGamepadProcessor--Create_--_1_--dtor$2.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawInputProvider@@VMPCInputProviderBase@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180095F50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawInputProvide.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<MPCGamepadProcessor>::~ComPtr<MPCGamepadProcessor>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IRawInputProvider,MPCInputProviderBase>::Release(result);
  }
  return result;
}
