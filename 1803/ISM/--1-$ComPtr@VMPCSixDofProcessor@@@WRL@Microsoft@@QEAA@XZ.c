/*
 * XREFs of ??1?$ComPtr@VMPCSixDofProcessor@@@WRL@Microsoft@@QEAA@XZ @ 0x180041E14
 * Callers:
 *     _MPCSixDofProcessor::Create_::_1_::dtor$1 @ 0x1800E4D4D (_MPCSixDofProcessor--Create_--_1_--dtor$1.c)
 *     _MPCProcessor::Create_::_1_::dtor$2 @ 0x1800E5B5D (_MPCProcessor--Create_--_1_--dtor$2.c)
 *     _MPCHeadProcessor::Create_::_1_::dtor$1 @ 0x1800E5DDF (_MPCHeadProcessor--Create_--_1_--dtor$1.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_MPCClickerProcessor_IInputProcessor_InputProcessorCreateParams_____ptr64_&___ptr64__::_1_::dtor$1 @ 0x1800E5F46 (_Microsoft--WRL--Details--MakeAndInitialize_MPCClickerProcessor_IInputProcessor_Inp_ea_1800E5F46.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VMPCInputProviderBase@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180044200 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VMPC_ea_180044200.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<MPCSixDofProcessor>::~ComPtr<MPCSixDofProcessor>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,MPCInputProviderBase>::Release(result);
  }
  return result;
}
