/*
 * XREFs of NdisFreeNetBufferPool @ 0x1C004CFB0
 * Callers:
 *     <none>
 * Callees:
 *     ndisPplDestroyPool @ 0x1C00022CC (ndisPplDestroyPool.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 */

void __stdcall NdisFreeNetBufferPool(NDIS_HANDLE PoolHandle)
{
  KIRQL v2; // al
  NDIS_HANDLE *v3; // r9
  NDIS_HANDLE *v4; // r8

  if ( (unsigned __int8)byte_1C009875C >= 4u )
    WPP_SF_q(0xDu, &WPP_897372624dc037cfb8480221ef22770e_Traceguids, (__int64)PoolHandle);
  if ( PoolHandle )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalNetBufferPoolListLock);
    v3 = (NDIS_HANDLE *)*((_QWORD *)PoolHandle + 9);
    if ( v3[1] != (char *)PoolHandle + 72
      || (v4 = (NDIS_HANDLE *)*((_QWORD *)PoolHandle + 10), *v4 != (char *)PoolHandle + 72) )
    {
      __fastfail(3u);
    }
    *v4 = v3;
    v3[1] = v4;
    KeReleaseSpinLock(&ndisGlobalNetBufferPoolListLock, v2);
    ndisPplDestroyPool((char *)PoolHandle);
    if ( (unsigned __int8)byte_1C009875C >= 4u )
      WPP_SF_q(0xEu, &WPP_897372624dc037cfb8480221ef22770e_Traceguids, (__int64)PoolHandle);
  }
}
