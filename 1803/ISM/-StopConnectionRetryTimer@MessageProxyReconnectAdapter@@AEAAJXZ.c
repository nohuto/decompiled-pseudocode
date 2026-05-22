/*
 * XREFs of ?StopConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x18002E1B8
 * Callers:
 *     ?Dispose@MessageProxyReconnectAdapter@@QEAAJXZ @ 0x18002D914 (-Dispose@MessageProxyReconnectAdapter@@QEAAJXZ.c)
 *     ?AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x18002DE98 (-AttemptPullProxy@MessageProxyReconnectAdapter@@AEAAJXZ.c)
 * Callees:
 *     ?FailFastWithHR@@YAXJ_K0@Z @ 0x18002D714 (-FailFastWithHR@@YAXJ_K0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MessageProxyReconnectAdapter::StopConnectionRetryTimer(MessageProxyReconnectAdapter *this)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rcx
  ULONG_PTR retaddr; // [rsp+28h] [rbp+0h]

  v2 = 0;
  v3 = *((_QWORD *)this + 10);
  if ( v3 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 96LL))(v3);
    v2 = v4;
    if ( v4 >= 0 )
    {
      v5 = *((_QWORD *)this + 10);
      if ( v5 )
      {
        *((_QWORD *)this + 10) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      }
    }
    else
    {
      if ( v4 == -2147024882 )
        FailFastWithHR(-2147024882, retaddr, 0x159uLL);
      FailFastWithHR(v2, retaddr, 0x159uLL);
    }
  }
  return v2;
}
