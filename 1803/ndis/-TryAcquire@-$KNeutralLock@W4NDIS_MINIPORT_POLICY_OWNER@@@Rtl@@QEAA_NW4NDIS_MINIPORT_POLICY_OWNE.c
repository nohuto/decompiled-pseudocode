/*
 * XREFs of ?TryAcquire@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAA_NW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C00BFBD0
 * Callers:
 *     ?Acquire@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C00B05B0 (-Acquire@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x1C00BC208 (-UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z.c)
 * Callees:
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00BEEB4 (--1KLockHolder@@QEAA@XZ.c)
 */

char __fastcall Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::TryAcquire(__int64 a1, int a2)
{
  __int64 v2; // rbx
  char v5; // di
  KLockHolder v7; // [rsp+20h] [rbp-28h] BYREF

  v2 = a1 + 8;
  v7.m_Lock = (KPushLockBase *)(a1 + 8);
  KeEnterCriticalRegion();
  v5 = 1;
  v7.m_Region.m_Entered = 1;
  ExAcquirePushLockExclusiveEx(v2, 0LL);
  v7.m_State = Exclusive;
  if ( KeReadStateEvent((PRKEVENT)(a1 + 16)) )
  {
    KeClearEvent((PRKEVENT)(a1 + 16));
    *(_DWORD *)a1 = a2;
  }
  else
  {
    v5 = 0;
  }
  KLockHolder::~KLockHolder(&v7);
  return v5;
}
