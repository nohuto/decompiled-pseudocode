/*
 * XREFs of ?GetLogo@TrayInfoTipDisplayInfo@SystemTray@@UEAAJUSize@Foundation@Windows@@PEAPEAUIRandomAccessStreamReference@Streams@Storage@5@@Z @ 0x1801BCED0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SystemTray::TrayInfoTipDisplayInfo::GetLogo(__int64 a1, __int64 a2, _QWORD *a3)
{
  HRESULT v5; // eax
  int ActivationFactory; // ebx
  __int64 v7; // rdx
  _QWORD v9[2]; // [rsp+20h] [rbp-48h] BYREF
  HSTRING_HEADER v10; // [rsp+30h] [rbp-38h] BYREF
  HSTRING v11; // [rsp+48h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v9[1] = -2LL;
  *a3 = 0LL;
  v9[0] = 0LL;
  v11 = 0LL;
  v5 = WindowsCreateStringReference(L"Windows.Storage.Streams.RandomAccessStreamReference", 0x33u, &v10, &v11);
  if ( v5 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5);
  ActivationFactory = RoGetActivationFactory(v11, &GUID_857309dc_3fbf_4e7d_986f_ef3b1a07a964, v9);
  if ( ActivationFactory < 0 )
  {
    v7 = 159LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipdisplayinfo.cpp",
      (const char *)(unsigned int)ActivationFactory);
    if ( v9[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9[0] + 16LL))(v9[0]);
    return (unsigned int)ActivationFactory;
  }
  ActivationFactory = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD *))(*(_QWORD *)v9[0] + 64LL))(
                        v9[0],
                        *(_QWORD *)(a1 + 88),
                        a3);
  if ( ActivationFactory < 0 )
  {
    v7 = 160LL;
    goto LABEL_5;
  }
  if ( v9[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9[0] + 16LL))(v9[0]);
  return 0LL;
}
