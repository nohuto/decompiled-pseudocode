/*
 * XREFs of ?StartConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x1800BFF94
 * Callers:
 *     ?RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyReconnectAdapterOwner@@@Z @ 0x1800BF8B4 (-RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyRecon.c)
 *     ?OnDisconnected@MessageProxyReconnectAdapter@@UEAAJPEAUIMessageProxy@@@Z @ 0x1800BFBA0 (-OnDisconnected@MessageProxyReconnectAdapter@@UEAAJPEAUIMessageProxy@@@Z.c)
 * Callees:
 *     ?FailFastWithHR@@YAXJ_K0@Z @ 0x1800BF5F4 (-FailFastWithHR@@YAXJ_K0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MessageProxyReconnectAdapter::StartConnectionRetryTimer(MessageProxyReconnectAdapter *this)
{
  _QWORD *v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rsi
  int v5; // ebx
  ULONG_PTR v6; // rdi
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]

  if ( *((_QWORD *)this + 8) )
    FailFastWithHR(-2147467259, retaddr, 0x13BuLL);
  v2 = (_QWORD *)((char *)this + 80);
  if ( *((_QWORD *)this + 10) )
    FailFastWithHR(-2147467259, retaddr, 0x13CuLL);
  *((_DWORD *)this + 10) = 0;
  v3 = *v2;
  v4 = *((_QWORD *)this + 9);
  if ( *v2 )
  {
    *v2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v5 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(MessageProxyReconnectAdapter *), MessageProxyReconnectAdapter *, char *))(*(_QWORD *)v4 + 120LL))(
         v4,
         MessageProxyReconnectAdapter::s_AttemptPullProxy,
         this,
         (char *)this + 80);
  if ( v5 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)*v2 + 80LL))(*v2, 10000000LL, 10000000LL);
    if ( v5 >= 0 )
      return (unsigned int)v5;
    v6 = 327LL;
  }
  else
  {
    v6 = 323LL;
  }
  if ( v5 == -2147024882 )
    FailFastWithHR(-2147024882, retaddr, v6);
  FailFastWithHR(v5, retaddr, v6);
  return (unsigned int)v5;
}
