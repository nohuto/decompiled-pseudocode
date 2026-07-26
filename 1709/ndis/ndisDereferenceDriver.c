/*
 * XREFs of ndisDereferenceDriver @ 0x1C00016D8
 * Callers:
 *     NdisFreeIoWorkItem @ 0x1C0002630 (NdisFreeIoWorkItem.c)
 *     ndisReferenceMiniportByHandle @ 0x1C0011418 (ndisReferenceMiniportByHandle.c)
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C001BCB0 (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 *     NdisAllocateIoWorkItem @ 0x1C001DF40 (NdisAllocateIoWorkItem.c)
 *     ?ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ @ 0x1C005B698 (-ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ.c)
 *     NdisMDeregisterMiniportDriver @ 0x1C00AB690 (NdisMDeregisterMiniportDriver.c)
 *     NdisIMDeInitializeDeviceInstance @ 0x1C00E94A0 (NdisIMDeInitializeDeviceInstance.c)
 *     ndisPnPIrpStopDevice @ 0x1C00EB574 (ndisPnPIrpStopDevice.c)
 *     ndisWdfPostReleaseHardware @ 0x1C00EBA58 (ndisWdfPostReleaseHardware.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C00FE008 (ndisPnPIrpRemoveDevice.c)
 *     ndisPnPRemoveDevice @ 0x1C00FE208 (ndisPnPRemoveDevice.c)
 *     ndisMInitializeAdapter @ 0x1C00FF8D8 (ndisMInitializeAdapter.c)
 *     ndisNotifyMiniports @ 0x1C0101878 (ndisNotifyMiniports.c)
 *     ndisMUnload @ 0x1C010BA80 (ndisMUnload.c)
 * Callees:
 *     ndisDereferenceRef @ 0x1C0004F50 (ndisDereferenceRef.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 */

LONG __fastcall ndisDereferenceDriver(__int64 a1, char a2)
{
  KIRQL v4; // si
  LONG result; // eax
  struct _NDIS_M_DRIVER_BLOCK **p_NextDriver; // rcx
  struct _NDIS_M_DRIVER_BLOCK *v7; // rdx
  void *v8; // rcx
  void *v9; // rcx
  _QWORD *v10; // rcx
  _QWORD *v11; // rbx

  v4 = 0;
  result = ndisDereferenceRef((PKSPIN_LOCK)(a1 + 392));
  if ( (_BYTE)result )
  {
    if ( (unsigned __int8)byte_1C009875B >= 4u )
      WPP_SF_q(23LL, &WPP_f6ff8ad275483b96b230875d61fb9de9_Traceguids, a1);
    if ( !a2 )
      v4 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    p_NextDriver = &ndisMiniDriverList;
    if ( ndisMiniDriverList )
    {
      while ( 1 )
      {
        v7 = *p_NextDriver;
        if ( *p_NextDriver == (struct _NDIS_M_DRIVER_BLOCK *)a1 )
          break;
        p_NextDriver = &v7->NextDriver;
        if ( !v7->NextDriver )
          goto LABEL_9;
      }
      *p_NextDriver = *(struct _NDIS_M_DRIVER_BLOCK **)(a1 + 8);
      ObfDereferenceObject(ndisDriverObject);
    }
LABEL_9:
    if ( !a2 )
      KeReleaseSpinLock(&ndisMiniDriverListLock, v4);
    v8 = *(void **)(a1 + 888);
    if ( v8 )
    {
      ExFreePoolWithTag(v8, 0);
      *(_QWORD *)(a1 + 888) = 0LL;
    }
    v9 = *(void **)(a1 + 32);
    if ( v9 )
    {
      ExFreePoolWithTag(v9, 0);
      *(_QWORD *)(a1 + 32) = 0LL;
    }
    if ( (*(_BYTE *)(a1 + 26) & 1) != 0 )
    {
      v10 = *(_QWORD **)(a1 + 96);
      if ( v10 )
      {
        do
        {
          v11 = (_QWORD *)*v10;
          ExFreePoolWithTag(v10, 0);
          v10 = v11;
        }
        while ( v11 );
      }
    }
    result = KeSetEvent((PRKEVENT)(a1 + 368), 0, 0);
    if ( (unsigned __int8)byte_1C009875B >= 4u )
      return WPP_SF_q(24LL, &WPP_f6ff8ad275483b96b230875d61fb9de9_Traceguids, a1);
  }
  return result;
}
