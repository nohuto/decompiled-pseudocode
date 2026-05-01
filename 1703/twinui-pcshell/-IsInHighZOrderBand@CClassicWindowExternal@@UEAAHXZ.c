/*
 * XREFs of ?IsInHighZOrderBand@CClassicWindowExternal@@UEAAHXZ @ 0x1800343C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CClassicWindowExternal::IsInHighZOrderBand(CClassicWindowExternal *this)
{
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  LODWORD(this) = (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 176LL))(*((_QWORD *)this + 6)) != 0;
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  return (unsigned int)this;
}
