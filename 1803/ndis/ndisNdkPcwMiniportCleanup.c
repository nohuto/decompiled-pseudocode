/*
 * XREFs of ndisNdkPcwMiniportCleanup @ 0x1C00F1078
 * Callers:
 *     ndisMCommonHaltMiniport @ 0x1C0102134 (ndisMCommonHaltMiniport.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009F08 (ndisDereferenceMiniport.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C00BEE20 (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00BEE50 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00BEEB4 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall ndisNdkPcwMiniportCleanup(__int64 a1)
{
  struct _NDIS_NDK_BLOCK *v2; // rax
  struct _NDIS_NDK_BLOCK **v3; // rdx
  struct _NDIS_NDK_BLOCK *v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // r8
  __int64 v7; // r9
  KLockHolder v8; // [rsp+20h] [rbp-28h] BYREF

  v8.m_State = Unlocked;
  v8.m_Lock = (KPushLockBase *)&ndisPcwMutex;
  v8.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v8);
  if ( *(_DWORD *)(a1 + 16) )
  {
    v2 = NdkPcwNdkBlockList;
    v3 = &NdkPcwNdkBlockList;
    if ( NdkPcwNdkBlockList )
    {
      while ( 1 )
      {
        v4 = *(struct _NDIS_NDK_BLOCK **)v2;
        if ( v2 == (struct _NDIS_NDK_BLOCK *)a1 )
          break;
        v3 = (struct _NDIS_NDK_BLOCK **)v2;
        v2 = *(struct _NDIS_NDK_BLOCK **)v2;
        if ( !v4 )
          goto LABEL_7;
      }
      *v3 = v4;
      *(_QWORD *)v2 = 0LL;
    }
LABEL_7:
    if ( v2 == (struct _NDIS_NDK_BLOCK *)a1 )
    {
      v5 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(a1 + 8) = 0LL;
      *(_DWORD *)(a1 + 16) = 0;
      KLockHolder::ReleaseExclusive(&v8);
      ndisDereferenceMiniport(v5, 0x5Cu, v6, v7);
    }
  }
  KLockHolder::~KLockHolder(&v8);
}
