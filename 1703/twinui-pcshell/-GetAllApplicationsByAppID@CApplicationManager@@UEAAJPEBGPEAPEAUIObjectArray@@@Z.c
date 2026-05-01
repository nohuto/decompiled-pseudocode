/*
 * XREFs of ?GetAllApplicationsByAppID@CApplicationManager@@UEAAJPEBGPEAPEAUIObjectArray@@@Z @ 0x18000BB30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationManager::GetAllApplicationsByAppID(
        CApplicationManager *this,
        const unsigned __int16 *a2,
        struct IObjectArray **a3)
{
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  LODWORD(this) = (*(__int64 (__fastcall **)(char *, const unsigned __int16 *, struct IObjectArray **))(*((_QWORD *)this + 9) + 104LL))(
                    (char *)this + 72,
                    a2,
                    a3);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  return (unsigned int)this;
}
