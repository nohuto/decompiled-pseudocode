/*
 * XREFs of ?GetProcessSubmixUnderLock@CProcessSubmixManager@@UEAA?AVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@PEAVCAppSubmixClient@@PEAPEAV?$vector@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800D6E80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CProcessSubmixManager::GetProcessSubmixUnderLock(__int64 a1, _QWORD *a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rbx

  v4 = a1 + 16;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  *a2 = v4;
  *a4 = *(_QWORD *)(a3 + 8) + 24LL;
  return a2;
}
