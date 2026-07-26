/*
 * XREFs of NdisMDeregisterMiniportDriver @ 0x1C00BE890
 * Callers:
 *     <none>
 * Callees:
 *     ndisCloseRef @ 0x1C001D0D4 (ndisCloseRef.c)
 *     ??_G_NDIS_M_DRIVER_BLOCK@@QEAAPEAXI@Z @ 0x1C0025008 (--_G_NDIS_M_DRIVER_BLOCK@@QEAAPEAXI@Z.c)
 *     ndisDereferenceDriver @ 0x1C0025778 (ndisDereferenceDriver.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 */

void __stdcall NdisMDeregisterMiniportDriver(NDIS_HANDLE NdisMiniportDriverHandle)
{
  const void *v2; // r8
  __int64 v3; // rax

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x66u, &WPP_412f75d4855739ae1f29fadf11bfdb6b_Traceguids, (__int64)NdisMiniportDriverHandle);
  v2 = (const void *)*((_QWORD *)NdisMiniportDriverHandle + 2);
  if ( v2 )
    DbgPrint(
      "NdisMDeregisterMiniportDriver: Deregistering miniport driver %p with active miniports %p\n",
      NdisMiniportDriverHandle,
      v2);
  v3 = *((_QWORD *)NdisMiniportDriverHandle + 9);
  if ( v3 )
  {
    *(_QWORD *)(v3 + 448) = 0LL;
    *((_QWORD *)NdisMiniportDriverHandle + 9) = 0LL;
  }
  if ( ndisCloseRef((PKSPIN_LOCK)NdisMiniportDriverHandle + 49) )
  {
    ndisDereferenceDriver((__int64)NdisMiniportDriverHandle, 0, 0xFFu);
    if ( (*((_BYTE *)NdisMiniportDriverHandle + 26) & 0x40) != 0 )
    {
      KeWaitForSingleObject((char *)NdisMiniportDriverHandle + 368, Executive, 0, 0, 0LL);
      KeClearEvent((PRKEVENT)((char *)NdisMiniportDriverHandle + 368));
    }
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_q(0x67u, &WPP_412f75d4855739ae1f29fadf11bfdb6b_Traceguids, (__int64)NdisMiniportDriverHandle);
    _NDIS_M_DRIVER_BLOCK::`scalar deleting destructor'((_NDIS_M_DRIVER_BLOCK *)NdisMiniportDriverHandle);
  }
}
