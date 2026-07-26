/*
 * XREFs of ndisDereferenceDriver @ 0x1C0025778
 * Callers:
 *     ndisReferenceMiniportByHandle @ 0x1C0015E38 (ndisReferenceMiniportByHandle.c)
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C0020200 (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 *     NdisAllocateIoWorkItem @ 0x1C0022C60 (NdisAllocateIoWorkItem.c)
 *     NdisFreeIoWorkItem @ 0x1C0027050 (NdisFreeIoWorkItem.c)
 *     ?ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ @ 0x1C005BB50 (-ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ.c)
 *     NdisMDeregisterMiniportDriver @ 0x1C00BE890 (NdisMDeregisterMiniportDriver.c)
 *     NdisIMDeInitializeDeviceInstance @ 0x1C00DF620 (NdisIMDeInitializeDeviceInstance.c)
 *     ndisPnPIrpStopDevice @ 0x1C00E16DC (ndisPnPIrpStopDevice.c)
 *     ndisWdfPostReleaseHardware @ 0x1C00E1BA8 (ndisWdfPostReleaseHardware.c)
 *     ndisMInitializeAdapter @ 0x1C00F904C (ndisMInitializeAdapter.c)
 *     ndisNotifyMiniports @ 0x1C00F9EE8 (ndisNotifyMiniports.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C00FA6C4 (ndisPnPIrpRemoveDevice.c)
 *     ndisPnPRemoveDevice @ 0x1C00FA8D0 (ndisPnPRemoveDevice.c)
 *     ndisMUnload @ 0x1C0102AF0 (ndisMUnload.c)
 * Callees:
 *     ndisDereferenceRef @ 0x1C001807C (ndisDereferenceRef.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 */

char __fastcall ndisDereferenceDriver(__int64 a1, char a2, unsigned __int8 a3)
{
  KIRQL v5; // si
  char result; // al
  struct _NDIS_M_DRIVER_BLOCK **p_NextDriver; // rcx
  struct _NDIS_M_DRIVER_BLOCK *v8; // rdx
  void *v9; // rcx
  void *v10; // rcx
  _QWORD *v11; // rcx
  _QWORD *v12; // rbx

  v5 = 0;
  result = ndisDereferenceRef((PKSPIN_LOCK)(a1 + 392), a3);
  if ( result )
  {
    if ( (unsigned __int8)byte_1C009261B >= 4u )
      WPP_SF_q(23LL, &WPP_750a86c9627131e70d92a3a5e350e831_Traceguids, a1);
    if ( !a2 )
      v5 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    p_NextDriver = &ndisMiniDriverList;
    if ( ndisMiniDriverList )
    {
      while ( 1 )
      {
        v8 = *p_NextDriver;
        if ( *p_NextDriver == (struct _NDIS_M_DRIVER_BLOCK *)a1 )
          break;
        p_NextDriver = &v8->NextDriver;
        if ( !v8->NextDriver )
          goto LABEL_12;
      }
      *p_NextDriver = *(struct _NDIS_M_DRIVER_BLOCK **)(a1 + 8);
      ObfDereferenceObject(ndisDriverObject);
    }
LABEL_12:
    if ( !a2 )
      KeReleaseSpinLock(&ndisMiniDriverListLock, v5);
    v9 = *(void **)(a1 + 888);
    if ( v9 )
    {
      ExFreePoolWithTag(v9, 0);
      *(_QWORD *)(a1 + 888) = 0LL;
    }
    v10 = *(void **)(a1 + 32);
    if ( v10 )
    {
      ExFreePoolWithTag(v10, 0);
      *(_QWORD *)(a1 + 32) = 0LL;
    }
    if ( (*(_BYTE *)(a1 + 26) & 1) != 0 )
    {
      KeWaitForSingleObject((PVOID)(a1 + 416), Executive, 0, 0, 0LL);
      v11 = *(_QWORD **)(a1 + 96);
      *(_QWORD *)(a1 + 472) = KeGetCurrentThread();
      if ( v11 )
      {
        do
        {
          v12 = (_QWORD *)*v11;
          ExFreePoolWithTag(v11, 0);
          v11 = v12;
        }
        while ( v12 );
      }
      *(_QWORD *)(a1 + 472) = 0LL;
      KeReleaseMutex((PRKMUTEX)(a1 + 416), 0);
    }
    result = KeSetEvent((PRKEVENT)(a1 + 368), 0, 0);
    if ( (unsigned __int8)byte_1C009261B >= 4u )
      return WPP_SF_q(24LL, &WPP_750a86c9627131e70d92a3a5e350e831_Traceguids, a1);
  }
  return result;
}
