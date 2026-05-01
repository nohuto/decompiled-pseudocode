/*
 * XREFs of CIconLoadingNotificationCallback_CreateInstance__lambda_456e5ff184e6c0b451f61a85fda58e65___ @ 0x18026D838
 * Callers:
 *     ?LoadIconW@CIconLoaderInternal@@UEAAJPEAUIApplicationView@@AEBUtagSIZE@@1IPEAUISwitchItem@@@Z @ 0x18026EBF0 (-LoadIconW@CIconLoaderInternal@@UEAAJPEAUIApplicationView@@AEBUtagSIZE@@1IPEAUISwitchItem@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180098FA8 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     CIconLoadingNotificationCallback__lambda_456e5ff184e6c0b451f61a85fda58e65___::CIconLoadingNotificationCallback__lambda_456e5ff184e6c0b451f61a85fda58e65___ @ 0x18026D998 (CIconLoadingNotificationCallback__lambda_456e5ff184e6c0b451f61a85fda58e65___--CIconLoadingNotifi.c)
 */

__int64 __fastcall CIconLoadingNotificationCallback_CreateInstance__lambda_456e5ff184e6c0b451f61a85fda58e65_(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 (__fastcall ***v4)(_QWORD, GUID *, _QWORD *); // rbx
  void *v6; // rax
  __int64 (__fastcall ***v7)(_QWORD, GUID *, _QWORD *); // rdi
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // r9
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a3 = 0LL;
  v4 = 0LL;
  v6 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = 0LL;
  if ( v6 )
  {
    v4 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))CIconLoadingNotificationCallback__lambda_456e5ff184e6c0b451f61a85fda58e65___::CIconLoadingNotificationCallback__lambda_456e5ff184e6c0b451f61a85fda58e65___(
                                                               v6,
                                                               a1);
    v7 = v4;
  }
  if ( v7 )
  {
    v11 = (**v4)(v4, &GUID_09bd08f6_5805_4a9c_b795_a08c46164aea, a3);
    v8 = v11;
    if ( v11 >= 0 )
      goto LABEL_8;
    v10 = (unsigned int)v11;
    v9 = 86LL;
  }
  else
  {
    v8 = -2147024882;
    v9 = 85LL;
    v10 = 2147942414LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\iconloader.cpp",
    (const char *)v10);
LABEL_8:
  if ( v7 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v7)[2])(v7);
  return v8;
}
