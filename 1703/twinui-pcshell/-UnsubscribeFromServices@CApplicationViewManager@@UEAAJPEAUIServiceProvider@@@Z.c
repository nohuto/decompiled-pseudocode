/*
 * XREFs of ?UnsubscribeFromServices@CApplicationViewManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180071F20
 * Callers:
 *     <none>
 * Callees:
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x18007866C (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ?Shutdown@NotificationDispatcher@@QEAAXXZ @ 0x18007AD18 (-Shutdown@NotificationDispatcher@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationViewManager::UnsubscribeFromServices(
        CApplicationViewManager *this,
        struct IServiceProvider *a2)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rdi
  DWORD LastError; // esi
  NotificationDispatcher *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx

  v2 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 58);
  if ( v2 )
  {
    LastError = GetLastError();
    (**v2)(v2, 1LL);
    SetLastError(LastError);
  }
  *((_QWORD *)this + 58) = 0LL;
  v5 = (NotificationDispatcher *)*((_QWORD *)this + 68);
  if ( v5 )
    NotificationDispatcher::Shutdown(v5);
  v6 = *((_QWORD *)this + 67);
  if ( v6 )
    (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v6 + 48LL))(
      v6,
      ((unsigned __int64)this + 88) & -(__int64)(this != (CApplicationViewManager *)56));
  SmartCookie::Unregister((CApplicationViewManager *)((char *)this + 168));
  SmartCookie::Unregister((CApplicationViewManager *)((char *)this + 288));
  v7 = *((_QWORD *)this + 60);
  if ( v7 )
  {
    *((_QWORD *)this + 60) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = *((_QWORD *)this + 61);
  if ( v8 )
  {
    *((_QWORD *)this + 61) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = *((_QWORD *)this + 66);
  if ( v9 )
  {
    *((_QWORD *)this + 66) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return 0LL;
}
