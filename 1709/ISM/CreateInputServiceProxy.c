/*
 * XREFs of CreateInputServiceProxy @ 0x1800ADA0C
 * Callers:
 *     ?RuntimeClassInitialize@InputDeliveryServer@@UEAAJPEAUIInputDeliveryServerHost@@PEBGW4TestMode@1@@Z @ 0x18007DE40 (-RuntimeClassInitialize@InputDeliveryServer@@UEAAJPEAUIInputDeliveryServerHost@@PEBGW4TestMode@1.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDesktopUniqueName@@YAXPEBGPEAGK@Z @ 0x1800819DC (-GetDesktopUniqueName@@YAXPEBGPEAGK@Z.c)
 *     ??0MessageProxyReconnectAdapter@@QEAA@XZ @ 0x1800BF6A8 (--0MessageProxyReconnectAdapter@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyReconnectAdapterOwner@@@Z @ 0x1800BF8B4 (-RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyRecon.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CB534 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CreateInputServiceProxy(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  int v6; // edi
  struct Microsoft::WRL::Details::ModuleBase *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  MessageProxyReconnectAdapter *v10; // rax
  int v11; // edi
  MessageProxyReconnectAdapter *v12; // rsi
  __int64 v13; // rcx
  __int64 v15; // [rsp+20h] [rbp-238h] BYREF
  unsigned __int16 v16[264]; // [rsp+30h] [rbp-228h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+258h] [rbp+0h]

  *a2 = 0LL;
  v15 = 0LL;
  v4 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( !v4 )
  {
    v6 = -2147024882;
LABEL_21:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x10,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\inputservice\\lib\\inputserviceproxy.cpp",
      (const char *)(unsigned int)v6);
    v13 = v15;
    goto LABEL_25;
  }
  v7 = Microsoft::WRL::Details::ModuleBase::module_;
  *((_DWORD *)v4 + 5) = 1;
  *v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IInputServiceProxy,IMessageProxyReconnectAdapterOwner>::`vftable'{for `IInputServiceProxy'};
  v4[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IInputServiceProxy,IMessageProxyReconnectAdapterOwner>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMessageProxyReconnectAdapterOwner>'};
  if ( v7 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v7 + 8LL))(v7);
  *v5 = &InputServiceProxy::`vftable'{for `IInputServiceProxy'};
  v5[1] = &InputServiceProxy::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMessageProxyReconnectAdapterOwner>'};
  v5[4] = 0LL;
  v5[5] = 0LL;
  v5[3] = a1;
  v8 = v5[4];
  if ( v8 )
  {
    v5[4] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  memset(v16, 0, 0x208uLL);
  GetDesktopUniqueName((char *)L"System\\RemoteTextInputProcessor", (char *)v16);
  v9 = v5[5];
  if ( v9 )
  {
    v5[5] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v5[5] = 0LL;
  v10 = (MessageProxyReconnectAdapter *)operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v10 )
  {
    v11 = -2147024882;
    goto LABEL_28;
  }
  v12 = MessageProxyReconnectAdapter::MessageProxyReconnectAdapter(v10);
  v11 = MessageProxyReconnectAdapter::RuntimeClassInitialize(
          v12,
          &GUID_b30e303e_7340_4446_bd7b_c37fdee42abc,
          v16,
          (struct IMessageProxyReconnectAdapterOwner *)((unsigned __int64)(v5 + 1) & -(__int64)(v5 != 0LL)));
  if ( v11 >= 0 )
  {
    if ( v12 )
      (*(void (__fastcall **)(MessageProxyReconnectAdapter *))(*(_QWORD *)v12 + 8LL))(v12);
    v5[5] = v12;
    if ( v12 )
      (*(void (__fastcall **)(MessageProxyReconnectAdapter *))(*(_QWORD *)v12 + 16LL))(v12);
    v11 = 0;
  }
  else if ( v12 )
  {
    (*(void (__fastcall **)(MessageProxyReconnectAdapter *))(*(_QWORD *)v12 + 16LL))(v12);
  }
  if ( v11 < 0 )
  {
LABEL_28:
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x2D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\inputservice\\lib\\inputserviceproxy.cpp",
      (const char *)(unsigned int)v11);
    JUMPOUT(0x1800ADC98LL);
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, __int64 *))*v5)(
         v5,
         &GUID_58149a92_a270_49bd_a1e6_58f7b0eedd18,
         &v15);
  (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
  if ( v6 < 0 )
    goto LABEL_21;
  v13 = v15;
  if ( v15 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
    v13 = v15;
  }
  *a2 = v13;
  v6 = 0;
LABEL_25:
  if ( v13 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  return (unsigned int)v6;
}
