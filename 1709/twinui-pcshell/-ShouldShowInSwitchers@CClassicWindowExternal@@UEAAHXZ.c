/*
 * XREFs of ?ShouldShowInSwitchers@CClassicWindowExternal@@UEAAHXZ @ 0x180035A80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CClassicWindowExternal::ShouldShowInSwitchers(CClassicWindowExternal *this)
{
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  LODWORD(this) = (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 128LL))(*((_QWORD *)this + 8)) != 0;
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  return (unsigned int)this;
}
