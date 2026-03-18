/*
 * XREFs of PopEsWorker @ 0x1405E2D50
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x1400B0AF4 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 *     ExSubscribeWnfStateChange @ 0x140588290 (ExSubscribeWnfStateChange.c)
 *     PopEsUpdateState @ 0x1405E2E84 (PopEsUpdateState.c)
 *     PopEsStartTelemetry @ 0x1405E2F38 (PopEsStartTelemetry.c)
 *     PopEsPublishState @ 0x1405E2FB8 (PopEsPublishState.c)
 *     PopEsUpdateSetting @ 0x1405E3034 (PopEsUpdateSetting.c)
 */

void PopEsWorker()
{
  char v0; // bl
  signed __int32 v1; // eax
  signed __int32 v2; // ett
  unsigned int v3; // ecx
  int v4; // edx
  int v5; // ecx
  unsigned int v6; // edi
  int v7; // edx
  int v8; // edx
  __int64 v9; // rcx

  do
  {
    v0 = 0;
    _m_prefetchw(&PopEsWorkItemDue);
    v1 = PopEsWorkItemDue;
    do
    {
      v2 = v1;
      v1 = _InterlockedCompareExchange(&PopEsWorkItemDue, v1, v1);
    }
    while ( v2 != v1 );
    _BitScanForward(&v3, v1);
    v4 = 1 << v3;
    v5 = v1 & ~(1 << v3);
    if ( (v5 & 8) != 0 && ((v4 - 2) & 0xFFFFFFFD) == 0 )
    {
      v0 = 1;
      v5 &= ~8u;
    }
    v6 = v5 & 0xFFFFFFFB;
    if ( v4 != 2 )
      v6 = v5;
    if ( v1 == _InterlockedCompareExchange(&PopEsWorkItemDue, v6, v1) )
    {
      v7 = v4 - 1;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          if ( v8 != 2 )
            continue;
          PopAcquireRwLockExclusive((ULONG_PTR)&PopEsLock);
        }
        else
        {
          PopAcquireRwLockExclusive((ULONG_PTR)&PopEsLock);
          PopEsUpdateSetting();
        }
        LOBYTE(v9) = v0;
        PopEsUpdateState(v9);
        PopReleaseRwLock((ULONG_PTR)&PopEsLock);
      }
      else
      {
        PopEsPublishState();
        PopAcquireRwLockExclusive((ULONG_PTR)&PopEsLock);
        PopEsStartTelemetry();
        PopReleaseRwLock((ULONG_PTR)&PopEsLock);
        ExSubscribeWnfStateChange(
          (__int64)&PopEsWnfSubscriptionOverride,
          (__int64)&WNF_PO_ENERGY_SAVER_OVERRIDE,
          1,
          0,
          (__int64)PopEsWnfSubscriptionOverrideCallback,
          0LL);
        ExSubscribeWnfStateChange(
          (__int64)&PopEsWnfSubscriptionBgActivityPolicy,
          (__int64)&WNF_PO_BACKGROUND_ACTIVITY_POLICY,
          1,
          0,
          (__int64)PopEsWnfSubscriptionBgActivityPolicyCallback,
          0LL);
      }
    }
  }
  while ( v6 );
}
