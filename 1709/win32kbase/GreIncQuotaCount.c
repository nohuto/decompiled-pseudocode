/*
 * XREFs of GreIncQuotaCount @ 0x1C0081CB0
 * Callers:
 *     GreSetDCOwnerEx @ 0x1C0047C80 (GreSetDCOwnerEx.c)
 *     HMChangeOwnerPheProcess @ 0x1C0081B80 (HMChangeOwnerPheProcess.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C003E210 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0042CA0 (GreReleaseHmgrSemaphore.c)
 */

__int64 __fastcall GreIncQuotaCount(__int64 a1, int a2, int a3)
{
  int v4; // ecx
  int v5; // r8d
  __int64 v6; // rdx
  unsigned int v7; // eax

  GreAcquireHmgrSemaphore(a1, a2, a3);
  v6 = *(unsigned int *)(a1 + 64);
  v7 = ++*(_DWORD *)(a1 + 60);
  if ( v7 > (unsigned int)v6 )
    v6 = v7;
  *(_DWORD *)(a1 + 64) = v6;
  return GreReleaseHmgrSemaphore(v4, v6, v5);
}
