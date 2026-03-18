/*
 * XREFs of TtmNotifySessionDisplayRequiredChange @ 0x1406D92FC
 * Callers:
 *     PopNotifySessionDisplayRequired @ 0x140585940 (PopNotifySessionDisplayRequired.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     TtmpAcquireSessionById @ 0x140584CE8 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x140584D50 (TtmiLogError.c)
 *     TtmiUndimAllTerminals @ 0x1406D8714 (TtmiUndimAllTerminals.c)
 *     TtmiScheduleSessionWorker @ 0x1406D95E8 (TtmiScheduleSessionWorker.c)
 *     TtmiLogSessionDisplayRequiredDereference @ 0x1406DC704 (TtmiLogSessionDisplayRequiredDereference.c)
 *     TtmiLogSessionDisplayRequiredReference @ 0x1406DC7C8 (TtmiLogSessionDisplayRequiredReference.c)
 */

__int64 __fastcall TtmNotifySessionDisplayRequiredChange(unsigned int a1, char a2)
{
  unsigned int v4; // esi
  int v5; // eax
  __int64 v6; // rbx
  unsigned int v7; // edi
  int v8; // r8d
  int v9; // edx
  int v10; // eax
  int v11; // eax
  __int64 *i; // rax
  int v13; // eax
  __int64 v15; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  v5 = TtmpAcquireSessionById(&v15, a1);
  v6 = v15;
  v7 = v5;
  if ( v5 < 0 )
  {
    v8 = v5;
    v9 = 2351;
LABEL_3:
    TtmiLogError("TtmNotifySessionDisplayRequiredChange", v9, v8, -1);
    goto LABEL_17;
  }
  v10 = *(_DWORD *)(v15 + 20);
  if ( a2 )
  {
    if ( v10 == -1 )
    {
      v7 = -1073741675;
      v9 = 2380;
      v8 = -1073741675;
      goto LABEL_3;
    }
    v13 = v10 + 1;
    *(_DWORD *)(v15 + 20) = v13;
    if ( v13 == 1 )
      TtmiUndimAllTerminals(v6);
  }
  else
  {
    if ( !v10 )
    {
      v7 = -1073741811;
      v9 = 2360;
      v8 = -1073741811;
      goto LABEL_3;
    }
    v11 = v10 - 1;
    *(_DWORD *)(v15 + 20) = v11;
    if ( !v11 )
    {
      for ( i = *(__int64 **)(v6 + 40); i != (__int64 *)(v6 + 40); i = (__int64 *)*i )
        *((_DWORD *)i + 8) |= 0x24u;
      TtmiScheduleSessionWorker(v6, 2LL);
    }
  }
  v7 = 0;
LABEL_17:
  if ( v6 )
  {
    v4 = *(_DWORD *)(v6 + 20);
    ExReleaseResourceLite(&TtmpSessionLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( a2 )
    return TtmiLogSessionDisplayRequiredReference(a1, v4, v7);
  else
    return TtmiLogSessionDisplayRequiredDereference(a1, v4, v7);
}
