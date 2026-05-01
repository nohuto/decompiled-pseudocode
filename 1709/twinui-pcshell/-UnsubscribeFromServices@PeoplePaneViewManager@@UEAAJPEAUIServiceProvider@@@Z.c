/*
 * XREFs of ?UnsubscribeFromServices@PeoplePaneViewManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801108A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x18007B24C (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PeoplePaneViewManager::UnsubscribeFromServices(
        PeoplePaneViewManager *this,
        struct IServiceProvider *a2)
{
  __int64 v3; // rcx

  SmartCookie::Unregister((PeoplePaneViewManager *)((char *)this + 320));
  SmartCookie::Unregister((PeoplePaneViewManager *)((char *)this + 192));
  v3 = *((_QWORD *)this + 39);
  if ( v3 )
  {
    *((_QWORD *)this + 39) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return 0LL;
}
