/*
 * XREFs of _lambda_d555ae02e1c7470ab08a3ee8bfae7ebd_::operator() @ 0x18008AB9C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d555ae02e1c7470ab08a3ee8bfae7ebd___::Run @ 0x18008AB90 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d555ae02e1c7470ab08a3ee8bfae7ebd___--Run.c)
 * Callees:
 *     ?GetView@CTaskWindow@@UEBAJAEBU_GUID@@PEAPEAX@Z @ 0x180047DD0 (-GetView@CTaskWindow@@UEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180054260 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?SetIsDismissed@UAPViewWrapper@@UEAAJE@Z @ 0x18005B430 (-SetIsDismissed@UAPViewWrapper@@UEAAJE@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_6fa41624ad117cbea5b5b5fb1da71b97__Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::Activation::SplashScreen_____ptr64_IInspectable_____ptr64___ @ 0x1801380B4 (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_6fa41624ad117cbea5b5b5fb1da71b97__Wind.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewIconLoaderNotifications@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x18025257C (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicat.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_d555ae02e1c7470ab08a3ee8bfae7ebd_::operator()(UAPViewWrapper **a1)
{
  CTaskWindow **v2; // rdi
  CTaskWindow **v3; // r14
  CTaskWindow *v4; // rbx
  __int64 (__fastcall *v5)(CTaskWindow *, const struct _GUID *, void **); // rax
  int View; // eax
  __int64 (__fastcall *v7)(UAPViewWrapper *, char); // rax
  __int64 (__fastcall *v8)(UAPViewWrapper *, char); // rdx
  UAPViewWrapper *v9; // rcx
  __int64 *v10; // rsi
  __int64 v11; // rbx
  RTL_SRWLOCK *v12; // rdi
  volatile int *v13; // rdx
  _QWORD v14[2]; // [rsp+30h] [rbp-10h] BYREF
  UAPViewWrapper *v15; // [rsp+60h] [rbp+20h] BYREF
  CTaskWindow *v16; // [rsp+68h] [rbp+28h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  *((_BYTE *)*a1 + 129) = 0;
  v2 = (CTaskWindow **)*((_QWORD *)*a1 + 12);
  v3 = (CTaskWindow **)*((_QWORD *)*a1 + 13);
  while ( v2 != v3 )
  {
    v4 = *v2;
    v16 = v4;
    if ( v4 )
      (*(void (__fastcall **)(CTaskWindow *))(*(_QWORD *)v4 + 8LL))(v4);
    v15 = 0LL;
    v5 = *(__int64 (__fastcall **)(CTaskWindow *, const struct _GUID *, void **))(*(_QWORD *)v4 + 40LL);
    if ( v5 == CTaskWindow::GetView )
      View = CTaskWindow::GetView(v4, &GUID_2ce345bd_11db_4b6f_a348_a64e187a0e67, (void **)&v15);
    else
      View = v5(v4, &GUID_2ce345bd_11db_4b6f_a348_a64e187a0e67, (void **)&v15);
    if ( View >= 0 )
    {
      v7 = *(__int64 (__fastcall **)(UAPViewWrapper *, char))(*(_QWORD *)v15 + 56LL);
      v8 = UAPViewWrapper::SetIsDismissed;
      LOBYTE(v8) = 1;
      if ( v7 == UAPViewWrapper::SetIsDismissed )
        UAPViewWrapper::SetIsDismissed(v15, 1);
      else
        v7(v15, (char)v8);
    }
    v9 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      (*(void (__fastcall **)(UAPViewWrapper *))(*(_QWORD *)v9 + 16LL))(v9);
    }
    (*(void (__fastcall **)(CTaskWindow *))(*(_QWORD *)v4 + 16LL))(v4);
    ++v2;
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v16 = 0LL;
  v15 = *a1;
  v10 = (__int64 *)((char *)v15 + 72);
  v14[0] = &v15;
  v14[1] = &v16;
  v11 = 0LL;
  v12 = (RTL_SRWLOCK *)((char *)v15 + 80);
  AcquireSRWLockExclusive((PSRWLOCK)v15 + 10);
  if ( *v10 )
  {
    v11 = *v10;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewIconLoaderNotifications>::InternalAddRef(*v10);
  }
  if ( v12 )
    ReleaseSRWLockExclusive(v12);
  if ( v11 )
  {
    Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_6fa41624ad117cbea5b5b5fb1da71b97__Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::Activation::SplashScreen_____ptr64_IInspectable_____ptr64___(
      v14,
      v11,
      v10);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v11, v13);
  }
}
