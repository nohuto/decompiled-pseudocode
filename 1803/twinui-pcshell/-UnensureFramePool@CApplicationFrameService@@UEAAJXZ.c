/*
 * XREFs of ?UnensureFramePool@CApplicationFrameService@@UEAAJXZ @ 0x1800811B0
 * Callers:
 *     ??1CAutoApplicationCreationResourceGuarantee@@QEAA@XZ @ 0x1800810EC (--1CAutoApplicationCreationResourceGuarantee@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationFrameService::UnensureFramePool(CApplicationFrameService *this)
{
  RTL_SRWLOCK *v2; // rcx

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = CApplicationManagerUtility::g_pIAMGlobals;
  --*((_DWORD *)this + 14);
  ReleaseSRWLockExclusive(v2);
  return 0LL;
}
