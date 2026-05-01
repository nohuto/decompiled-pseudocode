/*
 * XREFs of Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_IInspectable_____ptr64__Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_aef83c7aa80487086a369dd1bddd48ec___ @ 0x1800855AC
 * Callers:
 *     ??$InvokeAll@PEAVCortanaSharedExperienceManager@@$$T@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVCortanaSharedExperienceManager@@$$T@Z @ 0x180085640 (--$InvokeAll@PEAVCortanaSharedExperienceManager@@$$T@-$EventSource@U-$ITypedEventHandler@PEAVCor.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180054260 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_aef83c7aa80487086a369dd1bddd48ec__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_IInspectable_____ptr64___ @ 0x18008567C (Microsoft--WRL--InvokeTraits_2_--InvokeDelegates__lambda_aef83c7aa80487086a369dd1bddd48ec__Windo.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewIconLoaderNotifications@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x18025257C (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicat.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_IInspectable_____ptr64__Microsoft::WRL::InvokeModeOptions_2___::DoInvoke__lambda_aef83c7aa80487086a369dd1bddd48ec___(
        RTL_SRWLOCK *a1,
        __int128 *a2)
{
  RTL_SRWLOCK *v2; // rsi
  unsigned int v4; // edi
  __int64 Ptr; // rbx
  volatile int *v7; // rdx
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF

  v2 = a1 + 1;
  v4 = 0;
  Ptr = 0LL;
  AcquireSRWLockExclusive(a1 + 1);
  if ( a1->Ptr )
  {
    Ptr = (__int64)a1->Ptr;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewIconLoaderNotifications>::InternalAddRef(a1->Ptr);
  }
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  if ( Ptr )
  {
    v9 = *a2;
    v4 = Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_aef83c7aa80487086a369dd1bddd48ec__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_IInspectable_____ptr64___(
           &v9,
           Ptr,
           a1);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(Ptr, v7);
  }
  return v4;
}
