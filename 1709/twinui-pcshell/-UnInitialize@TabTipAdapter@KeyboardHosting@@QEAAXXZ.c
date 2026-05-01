/*
 * XREFs of ?UnInitialize@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x1801A21E4
 * Callers:
 *     ?ShutdownServices@TouchKeyboardExperienceManager@@UEAAJPEAUIProfferService@@@Z @ 0x18019B400 (-ShutdownServices@TouchKeyboardExperienceManager@@UEAAJPEAUIProfferService@@@Z.c)
 * Callees:
 *     ?Dispose@MessageProxyReconnectAdapter@@QEAAJXZ @ 0x1801BE604 (-Dispose@MessageProxyReconnectAdapter@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall KeyboardHosting::TabTipAdapter::UnInitialize(KeyboardHosting::TabTipAdapter *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  MessageProxyReconnectAdapter *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  v2 = *((_QWORD *)this + 3);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 104LL))(v2, *((_QWORD *)this + 14));
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 120LL))(
      *((_QWORD *)this + 3),
      *((_QWORD *)this + 15));
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 136LL))(
      *((_QWORD *)this + 3),
      *((_QWORD *)this + 16));
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 152LL))(
      *((_QWORD *)this + 3),
      *((_QWORD *)this + 17));
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 168LL))(
      *((_QWORD *)this + 3),
      *((_QWORD *)this + 18));
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 184LL))(
      *((_QWORD *)this + 3),
      *((_QWORD *)this + 19));
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 200LL))(
      *((_QWORD *)this + 3),
      *((_QWORD *)this + 20));
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 232LL))(
      *((_QWORD *)this + 3),
      *((_QWORD *)this + 21));
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 248LL))(
      *((_QWORD *)this + 3),
      *((_QWORD *)this + 22));
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 264LL))(
      *((_QWORD *)this + 3),
      *((_QWORD *)this + 23));
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 280LL))(
      *((_QWORD *)this + 3),
      *((_QWORD *)this + 24));
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 72LL))(
      *((_QWORD *)this + 3),
      *((_QWORD *)this + 25));
  }
  if ( *((_QWORD *)this + 5) )
  {
    v3 = *((_QWORD *)this + 5);
    if ( v3 )
    {
      *((_QWORD *)this + 5) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
  }
  v4 = (MessageProxyReconnectAdapter *)*((_QWORD *)this + 6);
  if ( v4 )
  {
    MessageProxyReconnectAdapter::Dispose(v4);
    v5 = *((_QWORD *)this + 6);
    if ( v5 )
    {
      *((_QWORD *)this + 6) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
  v6 = *((_QWORD *)this + 11);
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 96LL))(v6);
    v7 = *((_QWORD *)this + 11);
    if ( v7 )
    {
      *((_QWORD *)this + 11) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
}
