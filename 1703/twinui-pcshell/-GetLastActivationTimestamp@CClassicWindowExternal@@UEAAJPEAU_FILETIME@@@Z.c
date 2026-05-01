/*
 * XREFs of ?GetLastActivationTimestamp@CClassicWindowExternal@@UEAAJPEAU_FILETIME@@@Z @ 0x180034290
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CClassicWindowExternal::GetLastActivationTimestamp(
        CClassicWindowExternal *this,
        struct _FILETIME *a2)
{
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  LODWORD(this) = (*(__int64 (__fastcall **)(_QWORD, struct _FILETIME *))(**((_QWORD **)this + 6) + 64LL))(
                    *((_QWORD *)this + 6),
                    a2);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  return (unsigned int)this;
}
