/*
 * XREFs of TtmGetSessionDisplayRequiredCount @ 0x140772A3C
 * Callers:
 *     PopGetConsoleDisplayRequestCount @ 0x140074B28 (PopGetConsoleDisplayRequestCount.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     TtmiLogError @ 0x1406535C4 (TtmiLogError.c)
 *     TtmpAcquireSessionById @ 0x14065363C (TtmpAcquireSessionById.c)
 */

__int64 __fastcall TtmGetSessionDisplayRequiredCount(int a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v1 = TtmpAcquireSessionById(&v4, a1);
  v2 = 0;
  if ( v1 < 0 )
  {
    TtmiLogError("TtmGetSessionDisplayRequiredCount", 2468, v1, -1);
  }
  else
  {
    v2 = *(_DWORD *)(v4 + 20);
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return v2;
}
