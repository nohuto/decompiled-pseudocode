/*
 * XREFs of ??1?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ @ 0x1800267E0
 * Callers:
 *     _MPCManagerClient::MPCManagerClient_::_1_::dtor$4 @ 0x1800E4683 (_MPCManagerClient--MPCManagerClient_--_1_--dtor$4.c)
 *     _MPCManagerClient::MPCManagerClient_::_1_::dtor$5 @ 0x1800E4696 (_MPCManagerClient--MPCManagerClient_--_1_--dtor$5.c)
 *     _Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_9d3432feee0fd0d4235b45f3a5fdce9d__Windows::Foundation::ITypedEventHandler_Windows::Internal::Input::MPCManager::MPCManagerClient_____ptr64_Windows::Internal::Input::MPCManager::HomeGestureEventArgs_____ptr64____::_1_::dtor$0 @ 0x1800E46DE (_Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_9d3432feee0fd0d4235b45f3a5fdce9d__Win.c)
 *     _Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_d5aa6f58b9b035c1fafff95d9d2ce509__IHeadEventHandler__::_1_::dtor$0 @ 0x1800E6CB2 (_Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_d5aa6f58b9b035c1fafff95d9d2ce509__IHe.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000F0F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 */

volatile signed __int32 *__fastcall Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::~ComPtr<Microsoft::WRL::Details::EventTargetArray>(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int32 *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(result);
  }
  return result;
}
