/*
 * XREFs of ?RuntimeClassInitialize@NonBamoInputDeliveryServer@@UEAAJPEAUIInputDeliveryServerHost@@PEBGW4TestMode@1@@Z @ 0x180023EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003128 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Initialize@?$KernelInputConnection@UtagQMSGINPUTREPORT@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBUtagQMSGINPUTREPORT@@@Z@std@@@Z @ 0x1800248DC (-Initialize@-$KernelInputConnection@UtagQMSGINPUTREPORT@@@@QEAAXAEBV-$ComPtr@UIMessageSession@@@.c)
 *     CreateInputServiceProxy @ 0x1800258D8 (CreateInputServiceProxy.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800E210C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NonBamoInputDeliveryServer::RuntimeClassInitialize(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v6; // rcx
  __int64 *v9; // rsi
  __int64 v10; // rcx
  int v11; // eax
  const char *v12; // r9
  __int64 v13; // rbx
  _QWORD *v14; // r14
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  _QWORD *v18; // rax
  _QWORD *v19; // rbx
  struct Microsoft::WRL::Details::ModuleBase *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // r15
  int v23; // eax
  __int64 v24; // r8
  __int64 v25; // rcx
  int InputServiceProxy; // eax
  __int64 v28; // [rsp+60h] [rbp-19h] BYREF
  int v29; // [rsp+68h] [rbp-11h]
  _QWORD v30[8]; // [rsp+70h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+E0h] [rbp+67h] BYREF

  v6 = *(_QWORD *)(a1 + 32);
  if ( v6 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      v6 = *(_QWORD *)(a1 + 32);
    }
    *(_QWORD *)(a1 + 32) = a2;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  *(_DWORD *)(a1 + 40) = a4;
  v9 = (__int64 *)(a1 + 48);
  v10 = *(_QWORD *)(a1 + 48);
  if ( v10 )
  {
    *v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = CoreUICreate(a1 + 48);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x32,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
      (const char *)(unsigned int)v11);
    __debugbreak();
  }
  SecurityDescriptor = 0LL;
  if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
          L"D:(A;;GA;;;SY)(A;;0x001F0003;;;WD)(A;;0x001F0003;;;AC)(A;;0x001F0003;;;S-1-15-3-1024-1502825166-1963708345-261"
           "6377461-2562897074-4192028372-3968301570-1997628692-1435953622)",
          1u,
          &SecurityDescriptor,
          0LL) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x56,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
      v12);
    __debugbreak();
  }
  v13 = *v9;
  v14 = (_QWORD *)(a1 + 56);
  v15 = *(_QWORD *)(a1 + 56);
  if ( v15 )
  {
    *v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v16 = (*(__int64 (__fastcall **)(__int64, PSECURITY_DESCRIPTOR, __int64))(*(_QWORD *)v13 + 56LL))(
          v13,
          SecurityDescriptor,
          a1 + 56);
  if ( v16 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x5A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
      (const char *)(unsigned int)v16);
    __debugbreak();
  }
  LocalFree(SecurityDescriptor);
  v17 = *(_QWORD *)(a1 + 24);
  if ( v17 )
  {
    *(_QWORD *)(a1 + 24) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  *(_QWORD *)(a1 + 24) = 0LL;
  v18 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v19 = v18;
  if ( !v18 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x66,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
      (const char *)0x8007000ELL);
    JUMPOUT(0x1800241F2LL);
  }
  v20 = Microsoft::WRL::Details::ModuleBase::module_;
  *((_DWORD *)v18 + 3) = 1;
  *v18 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IMessageConversationHost>::`vftable';
  if ( v20 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v20 + 8LL))(v20);
  *v19 = &NonBamoInputDeliveryServer::InputDeliveryServerConversationHost::`vftable';
  v19[2] = a1;
  (*(void (__fastcall **)(_QWORD *))(*v19 + 8LL))(v19);
  *(_QWORD *)(a1 + 24) = v19;
  (*(void (__fastcall **)(_QWORD *))(*v19 + 16LL))(v19);
  v28 = 0LL;
  v21 = *(_QWORD *)(a1 + 64);
  v29 = 1;
  v22 = *v9;
  if ( v21 )
  {
    *(_QWORD *)(a1 + 64) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  v23 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64 *, int, int, _DWORD, _QWORD, __int64, __int64))(*(_QWORD *)v22 + 312LL))(
          v22,
          a3,
          *v14,
          &v28,
          3,
          1,
          0,
          *(_QWORD *)(a1 + 24),
          a1 + 44,
          a1 + 64);
  if ( v23 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x74,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
      (const char *)(unsigned int)v23);
    __debugbreak();
  }
  if ( *(_DWORD *)(a1 + 40) != 1 )
  {
    v30[1] = a1;
    v30[0] = off_1800EC710;
    v30[7] = v30;
    KernelInputConnection<tagQMSGINPUTREPORT>::Initialize(a1 + 72, a1 + 48, v24, v30);
  }
  v25 = *(_QWORD *)(a1 + 264);
  if ( v25 )
  {
    *(_QWORD *)(a1 + 264) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
  InputServiceProxy = CreateInputServiceProxy((struct IInputServiceProxyOwner *)(a1 + 8));
  if ( InputServiceProxy < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x39,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
      (const char *)(unsigned int)InputServiceProxy);
    __debugbreak();
  }
  return 0LL;
}
