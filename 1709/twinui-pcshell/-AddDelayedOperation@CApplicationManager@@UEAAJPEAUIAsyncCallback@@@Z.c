/*
 * XREFs of ?AddDelayedOperation@CApplicationManager@@UEAAJPEAUIAsyncCallback@@@Z @ 0x18000A8E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationManager::AddDelayedOperation(CApplicationManager *this, struct IAsyncCallback *a2)
{
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  LODWORD(this) = (*(__int64 (__fastcall **)(char *, struct IAsyncCallback *, __int64))(*((_QWORD *)this + 11) + 64LL))(
                    (char *)this + 88,
                    a2,
                    3LL);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  return (unsigned int)this;
}
