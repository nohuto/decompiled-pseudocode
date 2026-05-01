/*
 * XREFs of ?add_Dismissed@CSplashScreen@@UEAAJPEAU?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180138C10
 * Callers:
 *     <none>
 * Callees:
 *     ??$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Details@WRL@Microsoft@@YAJPEAPEAVCMarshalStream@CMarshaledInterface@@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Z @ 0x180070F64 (--$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4M.c)
 *     ?InternalRelease@?$ComPtr@VCDelayedTask@ComTaskPool@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18007120C (-InternalRelease@-$ComPtr@VCDelayedTask@ComTaskPool@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_CanSendDismissedEvent@CSplashScreen@@AEBA_NXZ @ 0x1800EFFB8 (-_CanSendDismissedEvent@CSplashScreen@@AEBA_NXZ.c)
 *     ?InternalRelease@?$ComPtr@VCSplashScreen@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F9504 (-InternalRelease@-$ComPtr@VCSplashScreen@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801082C0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_639d6738ffd80580db82ce4ed229ae7f___ @ 0x180138260 (Windows--Internal--ComTaskPool--QueueTask__lambda_639d6738ffd80580db82ce4ed229ae7f___.c)
 *     _lambda_639d6738ffd80580db82ce4ed229ae7f_::_lambda_639d6738ffd80580db82ce4ed229ae7f_ @ 0x180138358 (_lambda_639d6738ffd80580db82ce4ed229ae7f_--_lambda_639d6738ffd80580db82ce4ed229ae7f_.c)
 *     ?Add@?$GitEventSource@U?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@Internal@Windows@@QEAAJPEAU?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@3@PEAUEventRegistrationToken@@@Z @ 0x180138674 (-Add@-$GitEventSource@U-$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSplashScreen::add_Dismissed(CSplashScreen *this, IUnknown *a2, struct IUnknown **a3)
{
  int v5; // esi
  bool CanSendDismissedEvent; // bl
  volatile int *v7; // rdx
  signed __int64 v8; // rax
  signed __int64 v9; // rtt
  __int64 *v10; // rax
  __int64 v11; // rcx
  CSplashScreen *v13; // [rsp+20h] [rbp-30h] BYREF
  IUnknown *v14[2]; // [rsp+28h] [rbp-28h] BYREF
  __int64 v15; // [rsp+38h] [rbp-18h] BYREF
  CSplashScreen *v16; // [rsp+40h] [rbp-10h] BYREF
  int v17; // [rsp+70h] [rbp+20h] BYREF
  __int64 v18; // [rsp+88h] [rbp+38h] BYREF

  v14[1] = (IUnknown *)-2LL;
  v5 = Windows::Internal::GitEventSource<Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Activation::SplashScreen *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::Add(
         (__int64)this + 72,
         (__int64)a2,
         a3);
  if ( v5 >= 0 )
  {
    AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
    CanSendDismissedEvent = CSplashScreen::_CanSendDismissedEvent(this);
    ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
    if ( CanSendDismissedEvent )
    {
      v18 = 0LL;
      v17 = 2;
      v14[0] = a2;
      Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease(&v18);
      Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease(&v18);
      v5 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
             &v18,
             &GUID_7725b2a5_287d_5ed2_a789_2a6a2673c7fe,
             v14,
             &v17);
      if ( v5 >= 0 )
      {
        v13 = this;
        if ( this )
        {
          v8 = *((_QWORD *)this + 8);
          while ( v8 >= 0 )
          {
            if ( (_DWORD)v8 != 0x7FFFFFFF )
            {
              v9 = v8;
              v8 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 8, v8 + 1, v8);
              if ( v9 != v8 )
                continue;
            }
            goto LABEL_11;
          }
          Microsoft::WRL::Details::StrongReference::IncrementStrongReference(
            (Microsoft::WRL::Details *)(2 * v8 + 16),
            v7);
        }
LABEL_11:
        v10 = lambda_639d6738ffd80580db82ce4ed229ae7f_::_lambda_639d6738ffd80580db82ce4ed229ae7f_(
                &v15,
                &v18,
                (__int64 *)&v13);
        v5 = Windows::Internal::ComTaskPool::QueueTask__lambda_639d6738ffd80580db82ce4ed229ae7f___(v11, v10);
        Microsoft::WRL::ComPtr<CSplashScreen>::InternalRelease(&v16);
        Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease(&v15);
        Microsoft::WRL::ComPtr<CSplashScreen>::InternalRelease(&v13);
      }
      Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease(&v18);
    }
  }
  return (unsigned int)v5;
}
