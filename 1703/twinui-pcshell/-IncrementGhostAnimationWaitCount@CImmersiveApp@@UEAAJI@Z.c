/*
 * XREFs of ?IncrementGhostAnimationWaitCount@CImmersiveApp@@UEAAJI@Z @ 0x180052530
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::IncrementGhostAnimationWaitCount(CImmersiveApp *this, unsigned int a2)
{
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  LODWORD(this) = (*(__int64 (__fastcall **)(char *, _QWORD))(*((_QWORD *)this + 2) + 376LL))((char *)this + 16, a2);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  return (unsigned int)this;
}
