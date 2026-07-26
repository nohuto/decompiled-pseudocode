/*
 * XREFs of NdisIfDeregisterProvider @ 0x1C0041550
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     ndisBugCheckEx @ 0x1C004FB0C (ndisBugCheckEx.c)
 */

void __stdcall NdisIfDeregisterProvider(NDIS_HANDLE NdisProviderHandle)
{
  KIRQL v2; // di
  NDIS_HANDLE *v3; // r9
  NDIS_HANDLE *v4; // r8

  if ( (unsigned __int8)byte_1C009961D >= 4u )
    WPP_SF_q(0x17u, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, (__int64)NdisProviderHandle);
  if ( *((NDIS_HANDLE *)NdisProviderHandle + 3) != (char *)NdisProviderHandle + 24 )
    ndisBugCheckEx(0x17uLL, (ULONG_PTR)NdisProviderHandle, 0LL, 0LL);
  *(_BYTE *)NdisProviderHandle = ~*(_BYTE *)NdisProviderHandle;
  v2 = KeAcquireSpinLockRaiseToDpc(&ndisIfProviderListLock);
  v3 = (NDIS_HANDLE *)*((_QWORD *)NdisProviderHandle + 1);
  if ( v3[1] != (char *)NdisProviderHandle + 8
    || (v4 = (NDIS_HANDLE *)*((_QWORD *)NdisProviderHandle + 2), *v4 != (char *)NdisProviderHandle + 8) )
  {
    __fastfail(3u);
  }
  *v4 = v3;
  v3[1] = v4;
  ExFreePoolWithTag(NdisProviderHandle, 0);
  KeReleaseSpinLock(&ndisIfProviderListLock, v2);
  if ( (unsigned __int8)byte_1C009961D >= 4u )
    WPP_SF_q(0x18u, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, (__int64)NdisProviderHandle);
}
