/*
 * XREFs of ?TryLock@CriticalSection@Wrappers@WRL@Microsoft@@SA?AVSyncLockCriticalSection@Details@234@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x14005CED8
 * Callers:
 *     ?TryLock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x14005CEB8 (-TryLock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__fastcall Microsoft::WRL::Wrappers::CriticalSection::TryLock(
        unsigned __int64 *a1,
        struct _RTL_CRITICAL_SECTION *a2)
{
  bool v4; // cf
  unsigned __int64 *result; // rax

  v4 = TryEnterCriticalSection(a2);
  result = a1;
  *a1 = (unsigned __int64)a2 & -(__int64)v4;
  return result;
}
