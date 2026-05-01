/*
 * XREFs of ?HampHostTryEstimateRemainingQuiesceTime@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180033D08
 * Callers:
 *     ?HamSrvTryEstimateRemainingQuiesceTime@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAK@Z @ 0x180033B48 (-HamSrvTryEstimateRemainingQuiesceTime@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAK@Z.c)
 * Callees:
 *     CempLockTrackerMarkReleased @ 0x180014260 (CempLockTrackerMarkReleased.c)
 *     CempQueryUnbiasedInterruptTimeMs64 @ 0x180028B44 (CempQueryUnbiasedInterruptTimeMs64.c)
 *     ?HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003319C (-HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 */

__int64 __fastcall HampHostTryEstimateRemainingQuiesceTime(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  unsigned int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx

  HampHostAcquireLockSharedEx(a1, 0LL);
  v2 = CempQueryUnbiasedInterruptTimeMs64() - *((_DWORD *)a1 + 161);
  v4 = 0;
  if ( v2 <= *((_DWORD *)a1 + 162) )
    v4 = *((_DWORD *)a1 + 162) - v2;
  CempLockTrackerMarkReleased(v3, *((_DWORD *)a1 + 162) - v2, 1u);
  RtlReleaseSRWLockShared(a1);
  return v4;
}
