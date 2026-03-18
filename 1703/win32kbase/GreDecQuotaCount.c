/*
 * XREFs of GreDecQuotaCount @ 0x1C007F0F0
 * Callers:
 *     HMChangeOwnerPheProcess @ 0x1C007EFA0 (HMChangeOwnerPheProcess.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C0037B60 (GreAcquireHmgrSemaphore.c)
 */

__int64 __fastcall GreDecQuotaCount(__int64 a1, int a2, int a3)
{
  __int64 v4; // rcx

  GreAcquireHmgrSemaphore(a1, a2, a3);
  --*(_DWORD *)(a1 + 60);
  return GreReleaseHmgrSemaphore(v4);
}
