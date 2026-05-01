/*
 * XREFs of ??1?$unique_ptr@VSmartCookie@@U?$default_delete@VSmartCookie@@@std@@@std@@QEAA@XZ @ 0x180192F7C
 * Callers:
 *     _AppViewEventHelpers::EventListener_IImmersiveShellHookService_IImmersiveShellHookNotification_AppViewEventHelpers::details::ShellHookRegistration_::Unregister_::_1_::dtor$0 @ 0x1801F5DEA (_AppViewEventHelpers--EventListener_IImmersiveShellHookService_IImmersiveShellHookN_ea_1801F5DEA.c)
 * Callees:
 *     ??1SmartCookie@@QEAA@XZ @ 0x18007B2F8 (--1SmartCookie@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::unique_ptr<SmartCookie>::~unique_ptr<SmartCookie>(SmartCookie ***a1)
{
  SmartCookie **v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    SmartCookie::~SmartCookie(*a1);
    operator delete(v1);
  }
}
