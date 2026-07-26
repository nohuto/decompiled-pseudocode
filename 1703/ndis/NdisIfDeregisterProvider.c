/*
 * XREFs of NdisIfDeregisterProvider @ 0x1C00436B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     ndisBugCheckEx @ 0x1C00505FC (ndisBugCheckEx.c)
 */

void __stdcall NdisIfDeregisterProvider(NDIS_HANDLE NdisProviderHandle)
{
  KIRQL v2; // di
  NDIS_HANDLE *v3; // r9
  NDIS_HANDLE *v4; // r8

  if ( (unsigned __int8)byte_1C009261D >= 4u )
    WPP_SF_q(0x17u, &WPP_af1106a9a46b3e0e2b308003762cd579_Traceguids, (__int64)NdisProviderHandle);
  if ( *((NDIS_HANDLE *)NdisProviderHandle + 3) != (char *)NdisProviderHandle + 24 )
    ndisBugCheckEx(0x17uLL, (ULONG_PTR)NdisProviderHandle, 0LL, 0LL);
  *(_BYTE *)NdisProviderHandle = ~*(_BYTE *)NdisProviderHandle;
  v2 = KeAcquireSpinLockRaiseToDpc(&ndisIfProviderListLock);
  v3 = (NDIS_HANDLE *)*((_QWORD *)NdisProviderHandle + 1);
  v4 = (NDIS_HANDLE *)*((_QWORD *)NdisProviderHandle + 2);
  if ( v3[1] != (char *)NdisProviderHandle + 8 || *v4 != (char *)NdisProviderHandle + 8 )
    __fastfail(3u);
  *v4 = v3;
  v3[1] = v4;
  ExFreePoolWithTag(NdisProviderHandle, 0);
  KeReleaseSpinLock(&ndisIfProviderListLock, v2);
  if ( (unsigned __int8)byte_1C009261D >= 4u )
    WPP_SF_q(0x18u, &WPP_af1106a9a46b3e0e2b308003762cd579_Traceguids, (__int64)NdisProviderHandle);
}
