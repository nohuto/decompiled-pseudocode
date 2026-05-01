/*
 * XREFs of ?Dispose@MessageProxyReconnectAdapter@@QEAAJXZ @ 0x1802FAECC
 * Callers:
 *     ?OnDisconnected@TabTipAdapter@KeyboardHosting@@UEAAJPEAUIMessageProxy@@@Z @ 0x18024A480 (-OnDisconnected@TabTipAdapter@KeyboardHosting@@UEAAJPEAUIMessageProxy@@@Z.c)
 *     ?UnInitialize@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x18024FD1C (-UnInitialize@TabTipAdapter@KeyboardHosting@@QEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?FailFastWithHR@@YAXJ_K0@Z @ 0x1802FAF70 (-FailFastWithHR@@YAXJ_K0@Z.c)
 *     ?StopConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x1802FB594 (-StopConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 */

__int64 __fastcall MessageProxyReconnectAdapter::Dispose(MessageProxyReconnectAdapter *this)
{
  int v2; // ebx
  unsigned __int64 v3; // rdi
  __int64 v4; // rcx
  unsigned __int64 retaddr; // [rsp+28h] [rbp+0h]

  v2 = MessageProxyReconnectAdapter::StopConnectionRetryTimer(this);
  if ( v2 >= 0 )
  {
    v4 = *((_QWORD *)this + 8);
    if ( !v4
      || (v2 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v4 + 64LL))(v4, (char *)this + 8), v2 >= 0) )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 8);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 7);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 9);
      *((_QWORD *)this + 6) = 0LL;
      return (unsigned int)v2;
    }
    v3 = 37LL;
  }
  else
  {
    v3 = 33LL;
  }
  if ( v2 == -2147024882 )
    FailFastWithHR(-2147024882, retaddr, v3);
  FailFastWithHR(v2, retaddr, v3);
  return (unsigned int)v2;
}
