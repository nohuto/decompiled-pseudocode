/*
 * XREFs of ndisNdkPcwMiniportCleanup @ 0x1C00EE3DC
 * Callers:
 *     ndisMCommonHaltMiniport @ 0x1C00FE9B4 (ndisMCommonHaltMiniport.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009380 (ndisDereferenceMiniport.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C00BDC84 (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00BDCB4 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00BDCE8 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall ndisNdkPcwMiniportCleanup(__int64 a1)
{
  struct _NDIS_NDK_BLOCK *v2; // rdx
  struct _NDIS_NDK_BLOCK **v3; // rcx
  __int64 v4; // rbx
  KLockHolder v5; // [rsp+20h] [rbp-28h] BYREF

  v5.m_State = Unlocked;
  v5.m_Lock = (KPushLockBase *)&ndisPcwMutex;
  v5.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v5);
  if ( *(_DWORD *)(a1 + 16) )
  {
    v2 = NdkPcwNdkBlockList;
    v3 = &NdkPcwNdkBlockList;
    while ( v2 )
    {
      if ( v2 == (struct _NDIS_NDK_BLOCK *)a1 )
      {
        *v3 = *(struct _NDIS_NDK_BLOCK **)v2;
        *(_QWORD *)v2 = 0LL;
        break;
      }
      v3 = (struct _NDIS_NDK_BLOCK **)v2;
      v2 = *(struct _NDIS_NDK_BLOCK **)v2;
    }
    if ( v2 == (struct _NDIS_NDK_BLOCK *)a1 )
    {
      v4 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(a1 + 8) = 0LL;
      *(_DWORD *)(a1 + 16) = 0;
      KLockHolder::ReleaseExclusive(&v5);
      ndisDereferenceMiniport(v4, 0x5Cu);
    }
  }
  KLockHolder::~KLockHolder(&v5);
}
