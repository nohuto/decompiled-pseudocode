/*
 * XREFs of ?GetApplicationByWindow@CApplicationManager@@UEAAJPEAUHWND__@@PEAPEAUIImmersiveApplication@@@Z @ 0x18000BB90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationManager::GetApplicationByWindow(
        CApplicationManager *this,
        HWND a2,
        struct IImmersiveApplication **a3)
{
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  LODWORD(this) = (*(__int64 (__fastcall **)(char *, HWND, GUID *, struct IImmersiveApplication **))(*((_QWORD *)this + 8) + 40LL))(
                    (char *)this + 64,
                    a2,
                    &GUID_8b14e88b_5663_4caf_b196_c31479262831,
                    a3);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  return (unsigned int)this;
}
