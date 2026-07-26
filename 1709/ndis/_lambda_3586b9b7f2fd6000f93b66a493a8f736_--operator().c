/*
 * XREFs of _lambda_3586b9b7f2fd6000f93b66a493a8f736_::operator() @ 0x1C00B4320
 * Callers:
 *     _lambda_3586b9b7f2fd6000f93b66a493a8f736_::_lambda_invoker_cdecl_ @ 0x1C00B43D0 (_lambda_3586b9b7f2fd6000f93b66a493a8f736_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?DisableIfNeeded@Initmode@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C00B418C (-DisableIfNeeded@Initmode@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C00BDC84 (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00BDCE8 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall lambda_3586b9b7f2fd6000f93b66a493a8f736_::operator()(__int64 a1, KPushLockBase **a2)
{
  __int64 v3; // rdi
  bool v4; // zf
  enum CallRunMode v5; // r8d
  KLockHolder v6; // [rsp+20h] [rbp-28h] BYREF

  v3 = (__int64)&(*a2)[642];
  v6.m_Lock = *a2 + 645;
  KeEnterCriticalRegion();
  v6.m_Region.m_Entered = 1;
  ExAcquirePushLockExclusiveEx(v6.m_Lock, 0LL);
  v4 = *(_QWORD *)(v3 + 8) == 0LL;
  v6.m_State = Exclusive;
  if ( v4 )
  {
    if ( *(_BYTE *)(v3 + 104) )
    {
      KeClearEvent((PRKEVENT)(v3 + 32));
      *(_QWORD *)(v3 + 8) = 1LL;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(v3 + 56), NormalWorkQueue);
    }
  }
  else
  {
    KLockHolder::ReleaseExclusive(&v6);
  }
  KLockHolder::~KLockHolder(&v6);
  Ndis::Initmode::DisableIfNeeded((Ndis::Initmode *)*a2, (struct _NDIS_MINIPORT_BLOCK *)1, v5);
}
