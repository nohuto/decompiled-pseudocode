/*
 * XREFs of ??1SmartCookie@@QEAA@XZ @ 0x180078734
 * Callers:
 *     _CApplicationViewManager::_CApplicationViewManager_::_1_::dtor$2 @ 0x18019AC95 (_CApplicationViewManager--_CApplicationViewManager_--_1_--dtor$2.c)
 *     _AppViewDataSource_CreateInstance_::_1_::dtor$8 @ 0x1801A4197 (_AppViewDataSource_CreateInstance_--_1_--dtor$8.c)
 * Callees:
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x18007866C (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SmartCookie::~SmartCookie(SmartCookie **this)
{
  __int64 v2; // rdx
  SmartCookie *v3; // rcx
  SmartCookie *v4; // rcx

  SmartCookie::Unregister((SmartCookie *)this);
  v3 = this[13];
  if ( v3 )
  {
    LOBYTE(v2) = v3 != (SmartCookie *)this;
    (*(void (__fastcall **)(SmartCookie *, __int64))(*(_QWORD *)v3 + 24LL))(v3, v2);
    this[13] = 0LL;
  }
  v4 = this[13];
  if ( v4 )
  {
    LOBYTE(v2) = v4 != (SmartCookie *)this;
    (*(void (__fastcall **)(SmartCookie *, __int64))(*(_QWORD *)v4 + 24LL))(v4, v2);
    this[13] = 0LL;
  }
}
