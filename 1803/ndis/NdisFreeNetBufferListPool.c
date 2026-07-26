/*
 * XREFs of NdisFreeNetBufferListPool @ 0x1C0012DA0
 * Callers:
 *     ndisUnloadPeriodicReceives @ 0x1C011F894 (ndisUnloadPeriodicReceives.c)
 * Callees:
 *     ndisPplDestroyPool @ 0x1C0012E1C (ndisPplDestroyPool.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 */

void __stdcall NdisFreeNetBufferListPool(NDIS_HANDLE PoolHandle)
{
  KIRQL v2; // al
  NDIS_HANDLE *v3; // r9
  NDIS_HANDLE *v4; // r8

  if ( (unsigned __int8)byte_1C009961C >= 4u )
    WPP_SF_q(20LL, &WPP_748d7350885338d9dac69fdf9ab8d5cd_Traceguids, PoolHandle);
  if ( PoolHandle )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalNetBufferListPoolListLock);
    v3 = (NDIS_HANDLE *)*((_QWORD *)PoolHandle + 9);
    if ( v3[1] != (char *)PoolHandle + 72
      || (v4 = (NDIS_HANDLE *)*((_QWORD *)PoolHandle + 10), *v4 != (char *)PoolHandle + 72) )
    {
      __fastfail(3u);
    }
    *v4 = v3;
    v3[1] = v4;
    KeReleaseSpinLock(&ndisGlobalNetBufferListPoolListLock, v2);
    ndisPplDestroyPool(PoolHandle);
    if ( (unsigned __int8)byte_1C009961C >= 4u )
      WPP_SF_q(21LL, &WPP_748d7350885338d9dac69fdf9ab8d5cd_Traceguids, PoolHandle);
  }
}
