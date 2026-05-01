/*
 * XREFs of ?add_Dismissed@CSplashScreen@@UEAAJPEAU?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180072760
 * Callers:
 *     <none>
 * Callees:
 *     ?Marshal@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAUIUnknown@@W4MARSHAL_KIND@@@Z @ 0x180048310 (-Marshal@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAUIUnknown@@W4MARSHAL_KIND@@@Z.c)
 *     ?AddInternal@?$EventSource@U?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Internal@Windows@@H@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x18005EFC8 (-AddInternal@-$EventSource@U-$ITypedEventHandler@PEAVStartExperienceManager@Experience@Shell@Int.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppDisplayInfo@ApplicationModel@Windows@@UIInternalAppInfo@5Extensions@Internal@6@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180060610 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppDisplayInfo@A.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_639d6738ffd80580db82ce4ed229ae7f___ @ 0x180072CE8 (Windows--Internal--ComTaskPool--QueueTask__lambda_639d6738ffd80580db82ce4ed229ae7f___.c)
 *     ??$CreateGitHelper@U?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@Windows@@VGitPtr@Internal@3@@Details@Internal@Windows@@YAJPEAU?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@2@PEAPEAU342@@Z @ 0x180072F98 (--$CreateGitHelper@U-$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@P.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CSplashScreen::add_Dismissed(__int64 a1, struct IUnknown *a2, struct IUnknown **a3)
{
  int v6; // ebx
  struct IUnknown *v7; // rdx
  bool v8; // r14
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  __int64 v11; // rcx
  signed __int64 v12; // rax
  signed __int64 v13; // rtt
  __int64 v14; // rcx
  __int64 v16; // [rsp+40h] [rbp-10h] BYREF
  volatile signed __int64 *v17; // [rsp+48h] [rbp-8h]
  struct IUnknown *v18; // [rsp+78h] [rbp+28h] BYREF
  __int64 v19; // [rsp+88h] [rbp+38h] BYREF

  if ( a2 )
  {
    v18 = 0LL;
    v6 = Windows::Internal::Details::CreateGitHelper<Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Activation::SplashScreen *,IInspectable *>,Windows::Internal::GitPtr>(
           a2,
           &v18);
    v7 = v18;
    if ( v6 >= 0 )
    {
      if ( v18 )
      {
        v6 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::StartExperienceManager *,int>,Microsoft::WRL::InvokeModeOptions<2>>::AddInternal(
               (RTL_SRWLOCK *)(a1 + 80),
               v18,
               a2->lpVtbl[1].QueryInterface,
               a3);
        v7 = v18;
      }
      else
      {
        v6 = -2147024809;
      }
    }
    if ( v7 )
    {
      v18 = 0LL;
      ((void (__fastcall *)(struct IUnknown *))v7->lpVtbl->Release)(v7);
    }
    if ( v6 >= 0 )
    {
      AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
      v8 = *(_BYTE *)(a1 + 136) && !*(_BYTE *)(a1 + 137);
      ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
      if ( v8 )
      {
        v19 = 0LL;
        v6 = CMarshaledInterface::Marshal(&v19, &GUID_7725b2a5_287d_5ed2_a789_2a6a2673c7fe, a2, 2);
        if ( v6 >= 0 )
        {
          v9 = *(_QWORD *)(a1 + 72);
          while ( v9 >= 0 )
          {
            v10 = v9;
            v9 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 72), v9 + 1, v9);
            if ( v10 == v9 )
              goto LABEL_20;
          }
          _InterlockedIncrement((volatile signed __int32 *)(2 * v9 + 16));
LABEL_20:
          v11 = v19;
          v16 = v19;
          if ( v19 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
          v17 = (volatile signed __int64 *)a1;
          v12 = *(_QWORD *)(a1 + 72);
          while ( v12 >= 0 )
          {
            v11 = v12 + 1;
            v13 = v12;
            v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 72), v12 + 1, v12);
            if ( v13 == v12 )
              goto LABEL_26;
          }
          _InterlockedIncrement((volatile signed __int32 *)(2 * v12 + 16));
LABEL_26:
          v6 = Windows::Internal::ComTaskPool::QueueTask__lambda_639d6738ffd80580db82ce4ed229ae7f___(v11, &v16);
          if ( v17 )
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::IAppDisplayInfo,Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo,Microsoft::WRL::FtmBase>::Release(v17);
          if ( v16 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::IAppDisplayInfo,Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo,Microsoft::WRL::FtmBase>::Release((volatile signed __int64 *)a1);
        }
        v14 = v19;
        if ( v19 )
        {
          v19 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return (unsigned int)v6;
}
