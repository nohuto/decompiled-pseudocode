/*
 * XREFs of ?get_AppManager@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIAppManager@2@@Z @ 0x1800133E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031B4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180004064 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z @ 0x180058550 (-CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800C0CF4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContentManagement::ContentManagementBrokerServer::get_AppManager(
        ContentManagement::ContentManagementBrokerServer *this,
        struct ContentManagement::IAppManager **a2,
        bool *a3)
{
  int v4; // eax
  int v5; // ebx
  RTL_SRWLOCK *v7; // rax
  RTL_SRWLOCK *v8; // rbx
  int v9; // edi
  RTL_SRWLOCK *v10; // rdi
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // eax
  __int64 (__fastcall ***v14)(_QWORD, GUID *, struct ContentManagement::IAppManager **); // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned __int16 v16; // [rsp+48h] [rbp+10h] BYREF
  __int64 (__fastcall ***v17)(_QWORD, GUID *, struct ContentManagement::IAppManager **); // [rsp+50h] [rbp+18h] BYREF

  *a2 = 0LL;
  v4 = CallerIdentity::CheckCallerCapability((CallerIdentity *)L"targetedContent", &v16, a3);
  v5 = v4;
  if ( v4 >= 0 )
  {
    if ( !(_BYTE)v16 )
    {
      v5 = -2147024891;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6F,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)0x80070005LL);
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x51B,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v5);
      return (unsigned int)v5;
    }
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v4);
  }
  if ( v5 < 0 )
    goto LABEL_7;
  v17 = 0LL;
  v7 = (RTL_SRWLOCK *)operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( !v7 )
  {
    v9 = -2147024882;
LABEL_13:
    v11 = (unsigned int)v9;
    v12 = 1310LL;
    goto LABEL_16;
  }
  v10 = v7 + 1;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)&v7[1]);
  v8[8].Ptr = (PVOID)1;
  v8->Ptr = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::IAppManager>::`vftable'{for `IInspectable'};
  v10->Ptr = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::IAppManager>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,ContentManagement::IAppManager>'};
  v8[5].Ptr = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::IAppManager>::`vftable'{for `IWeakReferenceSource'};
  v8[6].Ptr = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::IAppManager>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ContentManagement::IAppManager>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    _InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
  v8->Ptr = &ContentManagement::AppManager::`vftable'{for `IInspectable'};
  v10->Ptr = &ContentManagement::AppManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,ContentManagement::IAppManager>'};
  v8[5].Ptr = &ContentManagement::AppManager::`vftable'{for `IWeakReferenceSource'};
  v8[6].Ptr = &ContentManagement::AppManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ContentManagement::IAppManager>'};
  v8[9].Ptr = 0LL;
  InitializeSRWLock(v8 + 10);
  v9 = (*(__int64 (__fastcall **)(RTL_SRWLOCK *, GUID *, _QWORD))v8->Ptr)(
         v8,
         &GUID_8c1d35c6_1c6c_4e16_9799_12b4f4b195b2,
         &v17);
  (*((void (__fastcall **)(RTL_SRWLOCK *))v8->Ptr + 2))(v8);
  if ( v9 < 0 )
    goto LABEL_13;
  v13 = (**v17)(v17, &GUID_8c1d35c6_1c6c_4e16_9799_12b4f4b195b2, a2);
  v9 = v13;
  if ( v13 >= 0 )
  {
    v9 = 0;
    goto LABEL_18;
  }
  v11 = (unsigned int)v13;
  v12 = 1311LL;
LABEL_16:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)v11);
LABEL_18:
  v14 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, struct ContentManagement::IAppManager **)))(*v14)[2])(v14);
  }
  return (unsigned int)v9;
}
