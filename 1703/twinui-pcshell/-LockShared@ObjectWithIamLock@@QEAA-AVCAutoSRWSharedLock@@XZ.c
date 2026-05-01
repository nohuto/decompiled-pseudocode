/*
 * XREFs of ?LockShared@ObjectWithIamLock@@QEAA?AVCAutoSRWSharedLock@@XZ @ 0x1800501F0
 * Callers:
 *     ?get_PrevChainLink@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@UEAAJPEAPEAUIChainLink@2345@@Z @ 0x18005A8C0 (-get_PrevChainLink@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@UEAAJPEAPEA.c)
 *     ?get_NextChainLink@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@UEAAJPEAPEAUIChainLink@2345@@Z @ 0x18005A920 (-get_NextChainLink@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@UEAAJPEAPEA.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall ObjectWithIamLock::LockShared(__int64 a1, _QWORD *a2)
{
  RTL_SRWLOCK *v2; // rcx

  v2 = CApplicationManagerUtility::g_pIAMGlobals;
  *a2 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockShared(v2);
  return a2;
}
