/*
 * XREFs of ?GetProcessSubmixUnderLock@CProcessSubmixManager@@UEAA?AVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@PEAVCAppSubmixClient@@PEAPEAV?$vector@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800AF6B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18000C0E0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 */

__int64 __fastcall CProcessSubmixManager::GetProcessSubmixUnderLock(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  Microsoft::WRL::Wrappers::CriticalSection::Lock(a1 + 16, a2);
  *a4 = *(_QWORD *)(a3 + 8) + 16LL;
  return a2;
}
