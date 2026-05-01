/*
 * XREFs of ?MoveToMonitor@CFallbackWindow@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x18002D1A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_SizeWindow@CFallbackWindow@@AEAAXPEAUIImmersiveMonitor@@@Z @ 0x18002D4D0 (-_SizeWindow@CFallbackWindow@@AEAAXPEAUIImmersiveMonitor@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFallbackWindow::MoveToMonitor(CFallbackWindow *this, struct IImmersiveMonitor *a2)
{
  __int64 v4; // rcx

  if ( *((struct IImmersiveMonitor **)this + 6) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)a2 + 8LL))(a2);
    v4 = *((_QWORD *)this + 6);
    *((_QWORD *)this + 6) = a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  CFallbackWindow::_SizeWindow((CFallbackWindow *)((char *)this - 56), a2);
  return 0LL;
}
