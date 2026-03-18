/*
 * XREFs of TtmGetSessionDisplayRequiredCount @ 0x1406D8ED4
 * Callers:
 *     PopGetConsoleDisplayRequestCount @ 0x140070CB4 (PopGetConsoleDisplayRequestCount.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     TtmpAcquireSessionById @ 0x140584CE8 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x140584D50 (TtmiLogError.c)
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
    TtmiLogError("TtmGetSessionDisplayRequiredCount", 2444, v1, -1);
  }
  else
  {
    v2 = *(_DWORD *)(v4 + 20);
    ExReleaseResourceLite(&TtmpSessionLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return v2;
}
