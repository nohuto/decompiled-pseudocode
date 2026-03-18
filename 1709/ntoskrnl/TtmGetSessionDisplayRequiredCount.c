/*
 * XREFs of TtmGetSessionDisplayRequiredCount @ 0x14070F268
 * Callers:
 *     PopGetConsoleDisplayRequestCount @ 0x1400B1110 (PopGetConsoleDisplayRequestCount.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     TtmpAcquireSessionById @ 0x1405EA0E4 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x1405EA14C (TtmiLogError.c)
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
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return v2;
}
