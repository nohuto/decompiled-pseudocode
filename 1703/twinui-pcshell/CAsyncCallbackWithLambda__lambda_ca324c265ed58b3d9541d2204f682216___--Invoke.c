/*
 * XREFs of CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216___::Invoke @ 0x1800704A0
 * Callers:
 *     <none>
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@UIPeopleTestExperienceManager@Experience@Shell@Internal@Windows@@U?$InterfaceList@UIClosable@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005D7D0 (-AddRef@-$RuntimeClass@U-$InterfaceList@UIPeopleTestExperienceManager@Experience@Shell@Internal@.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UISplashScreen@Activation@ApplicationModel@Windows@@U?$InterfaceList@UISplashScreen@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005EA00 (-Release@-$RuntimeClass@U-$InterfaceList@UISplashScreen@Activation@ApplicationModel@Windows@@U-$.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_d555ae02e1c7470ab08a3ee8bfae7ebd___ @ 0x1800705C4 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_d555ae02e1c7470ab08a3ee8bfae7ebd___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216___::Invoke(__int64 a1)
{
  volatile signed __int64 *v2; // rcx
  DWORD v3; // edi
  IUnknown *v4; // rbx
  DWORD CurrentThreadId; // eax
  int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rcx
  volatile signed __int64 *v10[2]; // [rsp+30h] [rbp-10h] BYREF
  DWORD v11; // [rsp+60h] [rbp+20h] BYREF
  __int64 v12; // [rsp+70h] [rbp+30h] BYREF
  __int64 v13; // [rsp+78h] [rbp+38h] BYREF

  v10[1] = (volatile signed __int64 *)-2LL;
  v11 = 0;
  v12 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(*(_QWORD *)(a1 + 40) + 112LL) + 128LL))(
         *(_QWORD *)(*(_QWORD *)(a1 + 40) + 112LL),
         &v12) >= 0 )
    (*(void (__fastcall **)(__int64, DWORD *))(*(_QWORD *)v12 + 168LL))(v12, &v11);
  v2 = *(volatile signed __int64 **)(a1 + 40);
  v10[0] = v2;
  if ( v2 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Experience::IPeopleTestExperienceManager,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IClosable,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::AddRef((__int64)v2);
  v3 = v11;
  v4 = *(IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_d555ae02e1c7470ab08a3ee8bfae7ebd___(&v13, v10);
  CurrentThreadId = GetCurrentThreadId();
  v6 = Windows::Internal::ComTaskPool::RunTask(3, 0, CurrentThreadId, v3, v4, 0LL);
  v7 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  if ( v10[0] )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::ApplicationModel::Activation::ISplashScreen,Microsoft::WRL::Details::InterfaceList<ISplashScreen,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(v10[0]);
  if ( v6 < 0 )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    *(_BYTE *)(*(_QWORD *)(a1 + 40) + 121LL) = 0;
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  }
  v8 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return 0LL;
}
