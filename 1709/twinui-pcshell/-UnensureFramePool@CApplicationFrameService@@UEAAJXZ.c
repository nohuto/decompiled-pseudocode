/*
 * XREFs of ?UnensureFramePool@CApplicationFrameService@@UEAAJXZ @ 0x18004E330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationFrameService::UnensureFramePool(CApplicationFrameService *this)
{
  RTL_SRWLOCK *v2; // rcx

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = CApplicationManagerUtility::g_pIAMGlobals;
  --*((_DWORD *)this + 16);
  ReleaseSRWLockExclusive(v2);
  return 0LL;
}
