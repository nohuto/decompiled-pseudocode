/*
 * XREFs of ?GetRect@CImmersiveApp@@UEAAJPEAUtagRECT@@@Z @ 0x180054010
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::GetRect(CImmersiveApp *this, struct tagRECT *a2)
{
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  LODWORD(this) = (*(__int64 (__fastcall **)(char *, struct tagRECT *))(*((_QWORD *)this + 2) + 336LL))(
                    (char *)this + 16,
                    a2);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  return (unsigned int)this;
}
