/*
 * XREFs of ndisNdkPcwAddCounter @ 0x1C00683E8
 * Callers:
 *     ndisNdkPcwProviderCallback @ 0x1C00F1120 (ndisNdkPcwProviderCallback.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C000977C (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C0009F08 (ndisDereferenceMiniport.c)
 *     ?ndisWildCardStringMatch@@YAEPEBU_UNICODE_STRING@@0E@Z @ 0x1C00B178C (-ndisWildCardStringMatch@@YAEPEBU_UNICODE_STRING@@0E@Z.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00BEE50 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00BEEB4 (--1KLockHolder@@QEAA@XZ.c)
 *     NDIS_NDK_PCW_NUM_COUNTERS_SET_IN_MASK @ 0x1C00F07E8 (NDIS_NDK_PCW_NUM_COUNTERS_SET_IN_MASK.c)
 *     ?ndisPcwGetMiniportName@@YAPEBU_UNICODE_STRING@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00F17C4 (-ndisPcwGetMiniportName@@YAPEBU_UNICODE_STRING@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisNdkPcwAddCounter(__int64 a1)
{
  KIRQL v2; // al
  struct _NDIS_MINIPORT_BLOCK *v3; // rbx
  KIRQL i; // di
  const struct _UNICODE_STRING *MiniportName; // rax
  unsigned __int8 v6; // r8
  unsigned __int8 v7; // al
  unsigned __int8 v8; // si
  _DWORD *NDKBlock; // rdi
  int v10; // ecx
  __int64 v11; // r8
  __int64 v12; // r9
  KLockHolder v14; // [rsp+20h] [rbp-28h] BYREF

  v14.m_State = Unlocked;
  v14.m_Lock = (KPushLockBase *)&ndisPcwMutex;
  v14.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v14);
  v2 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
  v3 = ndisMiniportList;
  for ( i = v2; v3; v3 = v3->NextGlobalMiniport )
  {
    if ( v3->NDKBlock && ndisReferenceMiniport((__int64)v3) )
    {
      KeReleaseSpinLock(&ndisMiniportListLock, i);
      MiniportName = ndisPcwGetMiniportName(v3);
      if ( ndisWildCardStringMatch(*(const struct _UNICODE_STRING **)(a1 + 8), MiniportName, v6) )
      {
        v7 = NDIS_NDK_PCW_NUM_COUNTERS_SET_IN_MASK(*(_QWORD *)a1);
        v8 = v7;
        if ( v7 )
        {
          NDKBlock = v3->NDKBlock;
          v10 = NDKBlock[4];
          if ( v10 )
          {
            if ( v10 < 0x7FFFFFFF - v7 )
              NDKBlock[4] = v7 + v10;
          }
          else if ( ndisReferenceMiniport((__int64)v3) )
          {
            *((_QWORD *)NDKBlock + 1) = v3;
            NDKBlock[4] = v8;
            NDKBlock[5] = v3->IfBlock->ifIndex;
            *(_QWORD *)NDKBlock = NdkPcwNdkBlockList;
            NdkPcwNdkBlockList = (struct _NDIS_NDK_BLOCK *)NDKBlock;
          }
        }
      }
      i = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
      ndisDereferenceMiniport((__int64)v3, 0x5Bu, v11, v12);
    }
  }
  KeReleaseSpinLock(&ndisMiniportListLock, i);
  KLockHolder::~KLockHolder(&v14);
  return 0LL;
}
