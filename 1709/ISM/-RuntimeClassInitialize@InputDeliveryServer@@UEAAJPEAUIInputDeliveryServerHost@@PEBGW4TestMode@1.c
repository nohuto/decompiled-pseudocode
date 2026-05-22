/*
 * XREFs of ?RuntimeClassInitialize@InputDeliveryServer@@UEAAJPEAUIInputDeliveryServerHost@@PEBGW4TestMode@1@@Z @ 0x18007DE40
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003368 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z @ 0x180009738 (-Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE@@@Z@std@@@Z @ 0x180080118 (-Initialize@-$KernelInputConnection@U_MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE@@@@QEAAXAEBV-$ComPtr@.c)
 *     ?Initialize@?$KernelInputConnection@UtagQMSGINPUTREPORT@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBUtagQMSGINPUTREPORT@@@Z@std@@@Z @ 0x180080458 (-Initialize@-$KernelInputConnection@UtagQMSGINPUTREPORT@@@@QEAAXAEBV-$ComPtr@UIMessageSession@@@.c)
 *     ?GetDesktopUniqueName@@YAXPEBGPEAGK@Z @ 0x1800819DC (-GetDesktopUniqueName@@YAXPEBGPEAGK@Z.c)
 *     ??0InputAttemptedTargetManager@@QEAA@W4TestMode@0@@Z @ 0x1800829D4 (--0InputAttemptedTargetManager@@QEAA@W4TestMode@0@@Z.c)
 *     CreateInputServiceProxy @ 0x1800ADA0C (CreateInputServiceProxy.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1800CB4F0 (--2@YAPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CB534 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputDeliveryServer::RuntimeClassInitialize(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v8; // rcx
  _DWORD *v9; // rbx
  char *v10; // r14
  volatile signed __int32 *v11; // rsi
  __int64 *v12; // rsi
  __int64 v13; // rcx
  int v14; // eax
  const char *v15; // r9
  __int64 v16; // rbx
  _QWORD *v17; // r14
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  _QWORD *v21; // rax
  _QWORD *v22; // rbx
  struct Microsoft::WRL::Details::ModuleBase *v23; // rcx
  __int64 v24; // r15
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // r8
  _QWORD *v28; // rbx
  __int64 v29; // rcx
  int v30; // eax
  int v31; // eax
  unsigned int v32; // r8d
  __int64 v33; // r12
  __int64 v34; // rcx
  int v35; // eax
  __int64 v36; // r8
  __int64 v37; // rcx
  int InputServiceProxy; // eax
  __int64 v39; // rcx
  unsigned int v41; // [rsp+50h] [rbp-B0h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor[3]; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v43[8]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v44[8]; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int16 v45[264]; // [rsp+F0h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+348h] [rbp+248h]

  if ( *(_QWORD *)(a1 + 56) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    v8 = *(_QWORD *)(a1 + 56);
    *(_QWORD *)(a1 + 56) = a2;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  *(_DWORD *)(a1 + 64) = a4;
  *(_BYTE *)(a1 + 68) = 0;
  v9 = operator new(0x60uLL);
  v9[2] = 1;
  v10 = (char *)(v9 + 4);
  v9[3] = 1;
  *(_QWORD *)v9 = &std::_Ref_count_obj<InputAttemptedTargetManager>::`vftable';
  if ( a4 == 1 )
  {
    if ( v9 != (_DWORD *)-16LL )
      InputAttemptedTargetManager::InputAttemptedTargetManager(v10, 1LL);
    SecurityDescriptor[1] = v9 + 4;
  }
  else
  {
    if ( v9 != (_DWORD *)-16LL )
      InputAttemptedTargetManager::InputAttemptedTargetManager(v10, 0LL);
    SecurityDescriptor[2] = v9 + 4;
  }
  v11 = *(volatile signed __int32 **)(a1 + 600);
  *(_QWORD *)(a1 + 600) = v9;
  *(_QWORD *)(a1 + 592) = v10;
  if ( v11 )
  {
    if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  v12 = (__int64 *)(a1 + 88);
  v13 = *(_QWORD *)(a1 + 88);
  if ( v13 )
  {
    *v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v14 = CoreUICreate(a1 + 88);
  if ( v14 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x39,
      (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputdeliveryserver.cpp",
      (const char *)(unsigned int)v14);
    __debugbreak();
  }
  SecurityDescriptor[0] = 0LL;
  if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
          L"D:(A;;GA;;;SY)(A;;0x001F0003;;;WD)(A;;0x001F0003;;;AC)(A;;0x001F0003;;;S-1-15-3-1024-1502825166-1963708345-261"
           "6377461-2562897074-4192028372-3968301570-1997628692-1435953622)",
          1u,
          SecurityDescriptor,
          0LL) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x6D,
      (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputdeliveryserver.cpp",
      v15);
    __debugbreak();
  }
  v16 = *v12;
  v17 = (_QWORD *)(a1 + 96);
  v18 = *(_QWORD *)(a1 + 96);
  if ( v18 )
  {
    *v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  v19 = (*(__int64 (__fastcall **)(__int64, PSECURITY_DESCRIPTOR, __int64))(*(_QWORD *)v16 + 56LL))(
          v16,
          SecurityDescriptor[0],
          a1 + 96);
  if ( v19 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x71,
      (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputdeliveryserver.cpp",
      (const char *)(unsigned int)v19);
    __debugbreak();
  }
  LocalFree(SecurityDescriptor[0]);
  v20 = *(_QWORD *)(a1 + 48);
  if ( v20 )
  {
    *(_QWORD *)(a1 + 48) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  *(_QWORD *)(a1 + 48) = 0LL;
  v21 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v22 = v21;
  if ( !v21 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x7D,
      (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputdeliveryserver.cpp",
      (const char *)0x8007000ELL);
    JUMPOUT(0x18007E3F2LL);
  }
  v23 = Microsoft::WRL::Details::ModuleBase::module_;
  *((_DWORD *)v21 + 3) = 1;
  *v21 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IMessageConversationHost>::`vftable';
  if ( v23 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v23 + 8LL))(v23);
  *v22 = &InputDeliveryServer::InputDeliveryServerConversationHost::`vftable';
  v22[2] = a1;
  (*(void (__fastcall **)(_QWORD *))(*v22 + 8LL))(v22);
  *(_QWORD *)(a1 + 48) = v22;
  (*(void (__fastcall **)(_QWORD *))(*v22 + 16LL))(v22);
  v24 = *v12;
  v25 = *(_QWORD *)(a1 + 104);
  if ( v25 )
  {
    *(_QWORD *)(a1 + 104) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
  v26 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, int, _DWORD, _QWORD, __int64, __int64))(*(_QWORD *)v24 + 312LL))(
          v24,
          a3,
          *v17,
          3LL,
          1,
          0,
          *(_QWORD *)(a1 + 48),
          a1 + 80,
          a1 + 104);
  if ( v26 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x8A,
      (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputdeliveryserver.cpp",
      (const char *)(unsigned int)v26);
    __debugbreak();
  }
  if ( *(_DWORD *)(a1 + 64) != 1 )
  {
    v28 = (_QWORD *)(a1 + 112);
    v29 = *(_QWORD *)(a1 + 112);
    if ( v29 )
    {
      *v28 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
    }
    v30 = CoreUIFactoryCreate(a1 + 112);
    if ( v30 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x9B,
        (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputdeliveryserver.cpp",
        (const char *)(unsigned int)v30);
      __debugbreak();
    }
    v31 = (*(__int64 (__fastcall **)(_QWORD, GUID *, unsigned int *))(*(_QWORD *)*v28 + 24LL))(
            *v28,
            &GUID_d133fb06_b258_4fa3_be48_add096389ecf,
            &v41);
    if ( v31 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0xA1,
        (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputdeliveryserver.cpp",
        (const char *)(unsigned int)v31);
      __debugbreak();
    }
    memset(v45, 0, 0x208uLL);
    GetDesktopUniqueName(L"IRemoteInputDeliveryApi", v45, v32);
    v33 = *v28;
    v34 = *(_QWORD *)(a1 + 120);
    if ( v34 )
    {
      *(_QWORD *)(a1 + 120) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
    }
    v35 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, unsigned __int16 *, _QWORD, __int64))(*(_QWORD *)v33 + 32LL))(
            v33,
            (a1 + 24) & -(__int64)(a1 != 0),
            0LL,
            v41,
            v45,
            *v17,
            a1 + 120);
    if ( v35 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0xB3,
        (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputdeliveryserver.cpp",
        (const char *)(unsigned int)v35);
      __debugbreak();
    }
  }
  if ( (gdwMitConfig & 4) != 0 && *(_DWORD *)(a1 + 64) != 1 )
  {
    v43[1] = a1;
    v43[0] = off_1800D73A8;
    v43[7] = v43;
    KernelInputConnection<tagQMSGINPUTREPORT>::Initialize(a1 + 128, a1 + 88, v27, v43);
    v44[1] = a1;
    v44[0] = off_1800D7378;
    v44[7] = v44;
    KernelInputConnection<_MIT_KEYBOARD_INPUT_ATTEMPTED_MESSAGE>::Initialize(a1 + 256, a1 + 88, v36, v44);
  }
  *(_BYTE *)(a1 + 384) = 0;
  v37 = *(_QWORD *)(a1 + 392);
  if ( v37 )
  {
    *(_QWORD *)(a1 + 392) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  }
  InputServiceProxy = CreateInputServiceProxy((a1 + 16) & -(__int64)(a1 != 0), a1 + 392);
  if ( InputServiceProxy < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x48,
      (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputdeliveryserver.cpp",
      (const char *)(unsigned int)InputServiceProxy);
    __debugbreak();
  }
  v39 = *(_QWORD *)(a1 + 72);
  if ( v39 )
  {
    *(_QWORD *)(a1 + 72) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
  }
  RegistryWatcher::Create(
    v39,
    L"System\\Input",
    (void *)a1,
    InputDeliveryServer::OnRegistrySettingsChangeStatic,
    (struct RegistryWatcher **)(a1 + 72));
  return 0LL;
}
