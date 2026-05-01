/*
 * XREFs of ?SetOwner@CClassicWindow@@UEAAXPEAUIClassicWindow@@@Z @ 0x180033D30
 * Callers:
 *     ?ChangeWindowType@CClassicWindow@@UEAA?AW4WindowChangeFlags@@W42@@Z @ 0x180033E00 (-ChangeWindowType@CClassicWindow@@UEAA-AW4WindowChangeFlags@@W42@@Z.c)
 * Callees:
 *     ?RaiseApplicationViewChangeNotification@@YAXPEAUIClassicWindow@@W4APPLICATION_VIEW_CHANGE@@@Z @ 0x1800337FC (-RaiseApplicationViewChangeNotification@@YAXPEAUIClassicWindow@@W4APPLICATION_VIEW_CHANGE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CClassicWindow::SetOwner(CClassicWindow *this, struct IClassicWindow *a2)
{
  __int64 v2; // rbx
  __int64 v5; // rcx
  __int64 v6; // rcx
  unsigned int v7; // eax

  v2 = *((_QWORD *)this + 8);
  if ( v2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 8LL))(*((_QWORD *)this + 8));
  v5 = *((_QWORD *)this + 8);
  if ( v5 )
  {
    *((_QWORD *)this + 8) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( a2 )
  {
    if ( *((struct IClassicWindow **)this + 8) != a2 )
    {
      (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)a2 + 8LL))(a2);
      v6 = *((_QWORD *)this + 8);
      *((_QWORD *)this + 8) = a2;
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  if ( v2 != *((_QWORD *)this + 8) )
  {
    v7 = *((_DWORD *)this + 18);
    if ( (v7 & 3) != 0 && (~(v7 >> 3) & 1) != 0 )
      RaiseApplicationViewChangeNotification((__int64)this, 17);
  }
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
}
