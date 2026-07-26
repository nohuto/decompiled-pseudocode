/*
 * XREFs of ?ndisInternalDeregisterMiniportDriver@@YAXPEAX@Z @ 0x1C00B1AE0
 * Callers:
 *     NdisMDeregisterMiniportDriver @ 0x1C00B1AC0 (NdisMDeregisterMiniportDriver.c)
 *     NdisLWMDeregisterMiniportDriver @ 0x1C00EB6A0 (NdisLWMDeregisterMiniportDriver.c)
 * Callees:
 *     ??_G_NDIS_M_DRIVER_BLOCK@@QEAAPEAXI@Z @ 0x1C0011B88 (--_G_NDIS_M_DRIVER_BLOCK@@QEAAPEAXI@Z.c)
 *     ndisDereferenceDriver @ 0x1C00123AC (ndisDereferenceDriver.c)
 *     ndisCloseRef @ 0x1C00248C0 (ndisCloseRef.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     ndisBugCheckEx @ 0x1C004FB0C (ndisBugCheckEx.c)
 */

void __fastcall ndisInternalDeregisterMiniportDriver(ULONG_PTR BugCheckParameter2)
{
  const void *v2; // r8
  __int64 v3; // rax

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x69u, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids, BugCheckParameter2);
  v2 = *(const void **)(BugCheckParameter2 + 16);
  if ( v2 )
  {
    DbgPrint(
      "NdisMDeregisterMiniportDriver: Deregistering miniport driver %p with active miniports %p\n",
      (const void *)BugCheckParameter2,
      v2);
    if ( *(char *)(BugCheckParameter2 + 26) < 0 )
      ndisBugCheckEx(0x2BuLL, BugCheckParameter2, 0LL, 0LL);
  }
  v3 = *(_QWORD *)(BugCheckParameter2 + 72);
  if ( v3 )
  {
    *(_QWORD *)(v3 + 448) = 0LL;
    *(_QWORD *)(BugCheckParameter2 + 72) = 0LL;
  }
  if ( ndisCloseRef((PKSPIN_LOCK)(BugCheckParameter2 + 392)) )
  {
    ndisDereferenceDriver(BugCheckParameter2, 0);
    if ( (*(_BYTE *)(BugCheckParameter2 + 26) & 0xC0) != 0 )
    {
      KeWaitForSingleObject((PVOID)(BugCheckParameter2 + 368), Executive, 0, 0, 0LL);
      KeClearEvent((PRKEVENT)(BugCheckParameter2 + 368));
    }
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_q(0x6Au, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids, BugCheckParameter2);
    _NDIS_M_DRIVER_BLOCK::`scalar deleting destructor'((_NDIS_M_DRIVER_BLOCK *)BugCheckParameter2);
  }
}
