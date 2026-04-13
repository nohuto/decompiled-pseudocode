/*
 * XREFs of ?EnableStartMenuSystemPaneSuggestionsAsync@ContentManagementService@ContentManagement@@UEAAJEPEAPEAUIAsyncAction@Foundation@Windows@@@Z @ 0x18002C8A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E10 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProcessCreativeEvent@ContentManagement@@UIProcessLockScreenEvent@6@UIProcessStartMenuEvent@6@UIProcessContextualSuggestionsEvent@6@UILayoutResolver@6@UILockScreenRegistrySettingProvider@6@UITaskBarAppProperties@6@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180023AF0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIProc.c)
 *     ??0?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?EnableStartMenuSystemPaneSuggestionsOperationName@?A0xb8965cb7@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@QEAA@$$QEAVComTaskPoolHandler@12@QEBGW4TrustLevel@@@Z @ 0x18003C314 (--0-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler_ea_18003C314.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B3CA4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ContentManagement::ContentManagementService::EnableStartMenuSystemPaneSuggestionsAsync(
        ContentManagement::ContentManagementService *this,
        char a2,
        struct Windows::Foundation::IAsyncAction **a3)
{
  volatile signed __int64 *v5; // rbx
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  signed __int64 v8; // rax
  signed __int64 v9; // rtt
  _QWORD *v10; // r14
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  signed int v13; // esi
  __int64 v14; // rdi
  void *v15; // rax
  __int64 v16; // r8
  signed __int64 v18; // [rsp+20h] [rbp-40h]
  signed __int64 v19; // [rsp+28h] [rbp-38h]
  _DWORD v20[4]; // [rsp+38h] [rbp-28h] BYREF
  volatile signed __int64 *v21; // [rsp+48h] [rbp-18h]
  char v22; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  volatile signed __int64 *v24; // [rsp+90h] [rbp+30h]

  v5 = (volatile signed __int64 *)((char *)this - 72);
  v24 = (volatile signed __int64 *)((char *)this - 72);
  if ( this != (ContentManagement::ContentManagementService *)72 )
  {
    v6 = *((_QWORD *)v5 + 15);
    while ( v6 >= 0 )
    {
      v7 = v6;
      v6 = _InterlockedCompareExchange64(v5 + 15, v6 + 1, v6);
      if ( v7 == v6 )
        goto LABEL_6;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v6 + 16));
LABEL_6:
    v5 = (volatile signed __int64 *)((char *)this - 72);
  }
  v21 = v5;
  if ( v5 )
  {
    v8 = *((_QWORD *)v5 + 15);
    v18 = v8;
    while ( v8 >= 0 )
    {
      v9 = v8;
      v8 = _InterlockedCompareExchange64(v5 + 15, v8 + 1, v8);
      if ( v9 == v8 )
        goto LABEL_12;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v8 + 16));
LABEL_12:
    v5 = (volatile signed __int64 *)((char *)this - 72);
  }
  v22 = a2;
  v20[0] = 3;
  v20[1] = 128;
  v20[2] = 0;
  v10 = operator new(0x18uLL, (const struct std::nothrow_t *)&TLV::nothrow);
  if ( v10 )
  {
    *v10 = off_1800C4AB0;
    v10[1] = v5;
    if ( v5 )
    {
      v11 = *((_QWORD *)v5 + 15);
      v19 = v11;
      while ( v11 >= 0 )
      {
        v12 = v11;
        v11 = _InterlockedCompareExchange64(v5 + 15, v11 + 1, v11);
        if ( v12 == v11 )
          goto LABEL_19;
      }
      _InterlockedIncrement((volatile signed __int32 *)(2 * v11 + 16));
LABEL_19:
      v5 = v24;
    }
    *((_BYTE *)v10 + 16) = a2;
  }
  else
  {
    v10 = 0LL;
  }
  *a3 = 0LL;
  v13 = v10 == 0LL ? 0x8007000E : 0;
  if ( v10 )
  {
    v14 = 0LL;
    v15 = operator new(0x150uLL, (const struct std::nothrow_t *)&TLV::nothrow);
    if ( v15 )
      v14 = ((__int64 (__fastcall *)(void *, _DWORD *, const wchar_t *, _QWORD, signed __int64, signed __int64, __int64))Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::EnableStartMenuSystemPaneSuggestionsOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::EnableStartMenuSystemPaneSuggestionsOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>)(
              v15,
              v20,
              L"Windows.Foundation.IAsyncAction",
              0LL,
              v18,
              v19,
              -2LL);
    v13 = v14 == 0 ? 0x8007000E : 0;
    if ( v14 )
    {
      *(_QWORD *)(v14 + 272) = v10;
      v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v14 + 8) + 104LL))(v14 + 8);
      v10 = 0LL;
    }
    if ( v13 >= 0 )
    {
      v16 = v14;
      v14 = 0LL;
      *a3 = (struct Windows::Foundation::IAsyncAction *)((v16 + 184) & -(__int64)(v16 != 0));
    }
    if ( v10 )
      (*(void (__fastcall **)(_QWORD *, __int64))*v10)(v10, 1LL);
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v14 + 8) + 16LL))(v14 + 8);
  }
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IProcessCreativeEvent,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>::Release(v5);
  if ( v13 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E9,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v13);
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IProcessCreativeEvent,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>::Release(v5);
  return (unsigned int)v13;
}
