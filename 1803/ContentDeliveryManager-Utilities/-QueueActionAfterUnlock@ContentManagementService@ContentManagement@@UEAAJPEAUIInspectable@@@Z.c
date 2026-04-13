/*
 * XREFs of ?QueueActionAfterUnlock@ContentManagementService@ContentManagement@@UEAAJPEAUIInspectable@@@Z @ 0x180031880
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031B4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IIterator@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001BAD0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IIterator@PEAVIn.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPendingLaunch@Private@System@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800322F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPendingLaunch@Pr.c)
 *     ?QueueActionAfterUnlock@UnlockActionHelper@@QEAAJXZ @ 0x180077D78 (-QueueActionAfterUnlock@UnlockActionHelper@@QEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800C0CF4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ContentManagement::ContentManagementService::QueueActionAfterUnlock(
        ContentManagement::ContentManagementService *this,
        struct IInspectable *a2)
{
  _QWORD *v3; // rax
  UnlockActionHelper *v4; // rbx
  int v5; // edi
  _QWORD *v6; // rax
  __int64 v7; // rcx
  int v8; // eax
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  UnlockActionHelper *v14; // [rsp+50h] [rbp+18h]
  UnlockActionHelper *v15; // [rsp+58h] [rbp+20h]

  v14 = 0LL;
  v3 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = (UnlockActionHelper *)v3;
  v15 = (UnlockActionHelper *)v3;
  if ( !v3 )
  {
    v5 = -2147024882;
LABEL_20:
    v9 = (unsigned int)v5;
    v10 = 867LL;
LABEL_23:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)v9);
    goto LABEL_25;
  }
  v3[3] = 1LL;
  *v3 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::System::Private::IPendingLaunch>::`vftable'{for `Windows::System::Private::IPendingLaunch'};
  v6 = v3 + 1;
  *((_QWORD *)v4 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::System::Private::IPendingLaunch>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
  {
    _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    v4 = v15;
  }
  *(_QWORD *)v4 = &UnlockActionHelper::`vftable'{for `Windows::System::Private::IPendingLaunch'};
  *v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::System::Private::IPendingLaunch>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>'};
  *((_QWORD *)v4 + 4) = 0LL;
  *((_QWORD *)v4 + 5) = 0LL;
  v7 = *((_QWORD *)v4 + 4);
  *((_QWORD *)v4 + 4) = 0LL;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v8 = ((__int64 (__fastcall *)(struct IInspectable *, GUID *, char *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_d75b691e_6cd6_4ca0_9d8f_4728b0b7e6b6,
         (char *)v4 + 32);
  v5 = v8;
  if ( v8 >= 0 )
    v5 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x26,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
      (const char *)(unsigned int)v8);
  if ( v5 >= 0 )
  {
    if ( v4 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>::AddRef((__int64)v4);
    v14 = v4;
    if ( v4 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::System::Private::IPendingLaunch>::Release(v4);
    v5 = 0;
  }
  else if ( v4 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::System::Private::IPendingLaunch>::Release(v4);
  }
  if ( v5 < 0 )
    goto LABEL_20;
  v11 = UnlockActionHelper::QueueActionAfterUnlock(v14);
  v5 = v11;
  if ( v11 < 0 )
  {
    v9 = (unsigned int)v11;
    v10 = 868LL;
    goto LABEL_23;
  }
  v5 = 0;
LABEL_25:
  if ( v14 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::System::Private::IPendingLaunch>::Release(v14);
  return (unsigned int)v5;
}
