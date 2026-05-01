/*
 * XREFs of ?GetForegroundApplication@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplication@@@Z @ 0x1800091E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetForegroundApplicationNoLock@CApplicationManager@@AEAAJPEAPEAUIImmersiveApplication@@@Z @ 0x18000922C (-_GetForegroundApplicationNoLock@CApplicationManager@@AEAAJPEAPEAUIImmersiveApplication@@@Z.c)
 */

__int64 __fastcall CApplicationManager::GetForegroundApplication(
        CApplicationManager *this,
        struct IImmersiveApplication **a2)
{
  *a2 = 0LL;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  LODWORD(this) = CApplicationManager::_GetForegroundApplicationNoLock((CApplicationManager *)((char *)this - 160), a2);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  return (unsigned int)this;
}
