/*
 * XREFs of ?GetViewData@CImmersiveApp@@UEAAJPEAUIMMAPP_APPLICATION_VIEW_DATA@@@Z @ 0x180054060
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::GetViewData(CImmersiveApp *this, struct IMMAPP_APPLICATION_VIEW_DATA *a2)
{
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  LODWORD(this) = (*(__int64 (__fastcall **)(char *, struct IMMAPP_APPLICATION_VIEW_DATA *))(*((_QWORD *)this + 2)
                                                                                           + 344LL))(
                    (char *)this + 16,
                    a2);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  return (unsigned int)this;
}
