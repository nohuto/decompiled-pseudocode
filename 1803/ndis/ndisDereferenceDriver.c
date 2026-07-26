/*
 * XREFs of ndisDereferenceDriver @ 0x1C00123AC
 * Callers:
 *     NdisFreeIoWorkItem @ 0x1C00146D0 (NdisFreeIoWorkItem.c)
 *     ndisReferenceMiniportByHandle @ 0x1C001A448 (ndisReferenceMiniportByHandle.c)
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C002209C (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 *     NdisAllocateIoWorkItem @ 0x1C0024400 (NdisAllocateIoWorkItem.c)
 *     ?ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ @ 0x1C005BDEC (-ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ.c)
 *     ?ndisInternalDeregisterMiniportDriver@@YAXPEAX@Z @ 0x1C00B1AE0 (-ndisInternalDeregisterMiniportDriver@@YAXPEAX@Z.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C00B1B84 (ndisPnPIrpRemoveDevice.c)
 *     NdisIMDeInitializeDeviceInstance @ 0x1C00EB410 (NdisIMDeInitializeDeviceInstance.c)
 *     NdisLWMUninitializeNetworkInterface @ 0x1C00EBB10 (NdisLWMUninitializeNetworkInterface.c)
 *     ndisPnPIrpStopDevice @ 0x1C00EE11C (ndisPnPIrpStopDevice.c)
 *     ndisWdfPostReleaseHardware @ 0x1C00EE600 (ndisWdfPostReleaseHardware.c)
 *     ndisPnPRemoveDevice @ 0x1C0101968 (ndisPnPRemoveDevice.c)
 *     ndisMInitializeAdapter @ 0x1C0105A70 (ndisMInitializeAdapter.c)
 *     ndisNotifyMiniports @ 0x1C010693C (ndisNotifyMiniports.c)
 *     ndisMUnload @ 0x1C010DA10 (ndisMUnload.c)
 * Callees:
 *     ndisDereferenceRef @ 0x1C0019DB0 (ndisDereferenceRef.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 */

LONG __fastcall ndisDereferenceDriver(__int64 a1, char a2)
{
  KIRQL v4; // si
  LONG result; // eax
  __int64 v6; // r9
  struct _NDIS_M_DRIVER_BLOCK *v7; // rcx
  struct _NDIS_M_DRIVER_BLOCK **p_NextDriver; // rdx
  PVOID v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  __int64 v12; // r9
  _QWORD *v13; // rcx
  _QWORD *v14; // rbx

  v4 = 0;
  result = ndisDereferenceRef((PKSPIN_LOCK)(a1 + 392));
  if ( (_BYTE)result )
  {
    if ( (unsigned __int8)byte_1C009961B >= 4u )
      WPP_SF_q(23LL, &WPP_96bb6242927f3897e7434d53c3ca2673_Traceguids, a1, v6);
    if ( !a2 )
      v4 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    v7 = ndisMiniDriverList;
    p_NextDriver = &ndisMiniDriverList;
    while ( v7 )
    {
      if ( v7 == (struct _NDIS_M_DRIVER_BLOCK *)a1 )
      {
        v9 = ndisDriverObject;
        *p_NextDriver = *(struct _NDIS_M_DRIVER_BLOCK **)(a1 + 8);
        ObfDereferenceObject(v9);
        break;
      }
      p_NextDriver = &v7->NextDriver;
      v7 = v7->NextDriver;
    }
    if ( !a2 )
      KeReleaseSpinLock(&ndisMiniDriverListLock, v4);
    v10 = *(void **)(a1 + 888);
    if ( v10 )
    {
      ExFreePoolWithTag(v10, 0);
      *(_QWORD *)(a1 + 888) = 0LL;
    }
    v11 = *(void **)(a1 + 32);
    if ( v11 )
    {
      ExFreePoolWithTag(v11, 0);
      *(_QWORD *)(a1 + 32) = 0LL;
    }
    if ( (*(_BYTE *)(a1 + 26) & 1) != 0 )
    {
      v13 = *(_QWORD **)(a1 + 96);
      if ( v13 )
      {
        do
        {
          v14 = (_QWORD *)*v13;
          ExFreePoolWithTag(v13, 0);
          v13 = v14;
        }
        while ( v14 );
      }
    }
    result = KeSetEvent((PRKEVENT)(a1 + 368), 0, 0);
    if ( (unsigned __int8)byte_1C009961B >= 4u )
      return WPP_SF_q(24LL, &WPP_96bb6242927f3897e7434d53c3ca2673_Traceguids, a1, v12);
  }
  return result;
}
