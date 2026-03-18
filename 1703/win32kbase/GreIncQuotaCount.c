/*
 * XREFs of GreIncQuotaCount @ 0x1C007F0C0
 * Callers:
 *     GreSetDCOwnerEx @ 0x1C002DA50 (GreSetDCOwnerEx.c)
 *     HMChangeOwnerPheProcess @ 0x1C007EFA0 (HMChangeOwnerPheProcess.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C0037B60 (GreAcquireHmgrSemaphore.c)
 */

__int64 __fastcall GreIncQuotaCount(__int64 a1, int a2, int a3)
{
  __int64 v4; // rcx
  unsigned int v5; // edx

  GreAcquireHmgrSemaphore(a1, a2, a3);
  v5 = *(_DWORD *)(a1 + 64);
  if ( ++*(_DWORD *)(a1 + 60) > v5 )
    v5 = *(_DWORD *)(a1 + 60);
  *(_DWORD *)(a1 + 64) = v5;
  return GreReleaseHmgrSemaphore(v4);
}
