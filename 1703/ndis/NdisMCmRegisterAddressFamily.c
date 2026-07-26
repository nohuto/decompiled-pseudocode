/*
 * XREFs of NdisMCmRegisterAddressFamily @ 0x1C0102CE0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0011A54 (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniport @ 0x1C0011BCC (ndisReferenceMiniport.c)
 *     ndisDereferencePackage @ 0x1C00A5008 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00A502C (ndisReferencePackage.c)
 */

NDIS_STATUS __stdcall NdisMCmRegisterAddressFamily(
        NDIS_HANDLE MiniportAdapterHandle,
        PCO_ADDRESS_FAMILY AddressFamily,
        PNDIS_CALL_MANAGER_CHARACTERISTICS CmCharacteristics,
        UINT SizeOfCmCharacteristics)
{
  NDIS_STATUS v8; // ebx
  KIRQL v9; // r12
  bool v10; // zf
  __int64 **i; // rcx
  unsigned __int64 v12; // rdx
  _QWORD *PoolWithTag; // rax
  _QWORD *v14; // r8
  void (__fastcall *CmRequestCompleteHandler)(int, void *, void *, void *, _NDIS_REQUEST *); // rax

  v8 = -1073676286;
  ndisReferencePackage((__int64)&ndisPkgs);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportAdapterHandle + 12);
  v10 = (*((_DWORD *)MiniportAdapterHandle + 30) & 0x20000) == 0;
  *((_QWORD *)MiniportAdapterHandle + 65) = KeGetCurrentThread();
  *((_DWORD *)MiniportAdapterHandle + 464) = 1573024;
  if ( v10 || CmCharacteristics->MajorVersion < 5u || SizeOfCmCharacteristics < 0x88 )
  {
    v8 = -1073741823;
  }
  else
  {
    for ( i = (__int64 **)*((_QWORD *)MiniportAdapterHandle + 64); i; i = (__int64 **)*i )
    {
      v12 = (unsigned __int64)i[2] - *(_QWORD *)&AddressFamily->AddressFamily;
      if ( !v12 )
        v12 = *((unsigned int *)i + 6) - (unsigned __int64)AddressFamily->MinorVersion;
      if ( !v12 )
      {
        v8 = -1073741823;
        goto LABEL_17;
      }
    }
    if ( ndisReferenceMiniport((__int64)MiniportAdapterHandle, 0x4Fu) )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x140uLL, 0x6F63444Eu);
      v14 = PoolWithTag;
      if ( PoolWithTag )
      {
        PoolWithTag[2] = *(_QWORD *)&AddressFamily->AddressFamily;
        *((_DWORD *)PoolWithTag + 6) = AddressFamily->MinorVersion;
        *((_OWORD *)PoolWithTag + 2) = *(_OWORD *)&CmCharacteristics->MajorVersion;
        *((_OWORD *)PoolWithTag + 3) = *(_OWORD *)&CmCharacteristics->CmDeleteVcHandler;
        *((_OWORD *)PoolWithTag + 4) = *(_OWORD *)&CmCharacteristics->CmCloseAfHandler;
        *((_OWORD *)PoolWithTag + 5) = *(_OWORD *)&CmCharacteristics->CmDeregisterSapHandler;
        *((_OWORD *)PoolWithTag + 6) = *(_OWORD *)&CmCharacteristics->CmCloseCallHandler;
        *((_OWORD *)PoolWithTag + 7) = *(_OWORD *)&CmCharacteristics->CmAddPartyHandler;
        *((_OWORD *)PoolWithTag + 8) = *(_OWORD *)&CmCharacteristics->CmActivateVcCompleteHandler;
        *((_OWORD *)PoolWithTag + 9) = *(_OWORD *)&CmCharacteristics->CmModifyCallQoSHandler;
        CmRequestCompleteHandler = CmCharacteristics->CmRequestCompleteHandler;
        v14[1] = 0LL;
        v14[20] = CmRequestCompleteHandler;
        *v14 = *((_QWORD *)MiniportAdapterHandle + 64);
        *((_DWORD *)v14 + 78) = 5;
        *((_QWORD *)MiniportAdapterHandle + 64) = v14;
        ndisDereferenceMiniport((__int64)MiniportAdapterHandle, 0x4Fu);
        v8 = 0;
      }
      else
      {
        ndisDereferenceMiniport((__int64)MiniportAdapterHandle, 0x4Fu);
        v8 = -1073741670;
      }
    }
  }
LABEL_17:
  *((_QWORD *)MiniportAdapterHandle + 65) = 0LL;
  *((_DWORD *)MiniportAdapterHandle + 464) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 12, v9);
  ndisDereferencePackage((__int64)&ndisPkgs);
  return v8;
}
