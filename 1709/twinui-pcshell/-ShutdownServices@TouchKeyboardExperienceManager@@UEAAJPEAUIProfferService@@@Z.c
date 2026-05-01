/*
 * XREFs of ?ShutdownServices@TouchKeyboardExperienceManager@@UEAAJPEAUIProfferService@@@Z @ 0x18019B400
 * Callers:
 *     <none>
 * Callees:
 *     ?UnInitialize@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x1801A21E4 (-UnInitialize@TabTipAdapter@KeyboardHosting@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::ShutdownServices(
        TouchKeyboardExperienceManager *this,
        struct IProfferService *a2)
{
  KeyboardHosting::TabTipAdapter *v3; // rcx
  __int64 v4; // rcx

  v3 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 73);
  if ( v3 )
  {
    KeyboardHosting::TabTipAdapter::UnInitialize(v3);
    v4 = *((_QWORD *)this + 73);
    if ( v4 )
    {
      *((_QWORD *)this + 73) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
  }
  return 0LL;
}
