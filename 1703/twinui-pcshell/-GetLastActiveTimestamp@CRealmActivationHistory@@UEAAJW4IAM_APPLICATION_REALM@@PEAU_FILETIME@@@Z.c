/*
 * XREFs of ?GetLastActiveTimestamp@CRealmActivationHistory@@UEAAJW4IAM_APPLICATION_REALM@@PEAU_FILETIME@@@Z @ 0x18004A620
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetRealmForActivation@CRealmActivationHistory@@AEAA?AUREALM_ACTIVATION@@W4IAM_APPLICATION_REALM@@@Z @ 0x18004A698 (-_GetRealmForActivation@CRealmActivationHistory@@AEAA-AUREALM_ACTIVATION@@W4IAM_APPLICATION_REAL.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

__int64 __fastcall CRealmActivationHistory::GetLastActiveTimestamp(__int64 a1, unsigned int a2, _QWORD *a3)
{
  _BYTE v7[16]; // [rsp+20h] [rbp-28h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  *a3 = *(_QWORD *)(CRealmActivationHistory::_GetRealmForActivation(a1 - 56, v7, a2) + 4);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  return 0LL;
}
