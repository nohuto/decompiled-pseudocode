/*
 * XREFs of ndisRegisterMiniportDriver @ 0x1C01046B8
 * Callers:
 *     NdisIMRegisterLayeredMiniport @ 0x1C00DF7D0 (NdisIMRegisterLayeredMiniport.c)
 *     NdisMRegisterMiniport @ 0x1C00DFCA0 (NdisMRegisterMiniport.c)
 * Callees:
 *     memmove @ 0x1C0028840 (memmove.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     ndisDereferencePackage @ 0x1C00A5008 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00A502C (ndisReferencePackage.c)
 *     ndisInitializeRef @ 0x1C00B6E54 (ndisInitializeRef.c)
 *     ndisQueryDriverImageName @ 0x1C00B8290 (ndisQueryDriverImageName.c)
 *     ndisGetServiceNameFromRegPath @ 0x1C00BBC8C (ndisGetServiceNameFromRegPath.c)
 */

__int64 __fastcall ndisRegisterMiniportDriver(struct _DRIVER_OBJECT **a1, _QWORD *a2, unsigned int a3, PVOID *a4)
{
  unsigned int v4; // edi
  char v9; // dl
  __int64 v10; // r15
  char v11; // cl
  unsigned __int16 v12; // r14
  struct _NDIS_M_DRIVER_BLOCK *v13; // rax
  _QWORD *v14; // rcx
  __int64 v15; // rcx
  _QWORD *v16; // rax
  KIRQL v17; // bl
  PVOID v18; // rcx
  PVOID DriverObjectExtension; // [rsp+20h] [rbp-10h] BYREF
  ULONG VerifierFlags; // [rsp+60h] [rbp+30h] BYREF

  v4 = 0;
  DriverObjectExtension = 0LL;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0xEu, &WPP_412f75d4855739ae1f29fadf11bfdb6b_Traceguids, (__int64)a1);
  if ( !a1 )
  {
    v4 = -1073741823;
    goto LABEL_38;
  }
  v9 = *((_BYTE *)a2 + 1);
  v10 = 112LL;
  if ( v9 )
  {
    if ( v9 == 1 )
    {
      v11 = *(_BYTE *)a2;
      if ( *(_BYTE *)a2 == 5 )
      {
        v12 = 240;
        goto LABEL_15;
      }
    }
    goto LABEL_37;
  }
  v11 = *(_BYTE *)a2;
  if ( *(_BYTE *)a2 != 3 )
  {
    if ( v11 == 4 )
    {
      v12 = 136;
      goto LABEL_15;
    }
    if ( v11 == 5 )
    {
      v12 = 184;
      goto LABEL_15;
    }
LABEL_37:
    v4 = -1073676284;
    goto LABEL_38;
  }
  v12 = 112;
LABEL_15:
  if ( a3 < v12 || v11 == 5 && (a2[21] && !a2[22] || v9 && !a2[25]) )
  {
    v4 = -1073676283;
  }
  else if ( IoAllocateDriverObjectExtension(*a1, (PVOID)0x4E4D4944, 0x4A8u, &DriverObjectExtension) >= 0 )
  {
    memset(DriverObjectExtension, 0, 0x4A8uLL);
    *((_BYTE *)DriverObjectExtension + 24) = *(_BYTE *)a2;
    *((_BYTE *)DriverObjectExtension + 25) = *((_BYTE *)a2 + 1);
    memmove((char *)DriverObjectExtension + 112, a2, v12);
    if ( *(_BYTE *)a2 == 5 )
    {
      *((_QWORD *)DriverObjectExtension + 63) = a2[17];
      *((_QWORD *)DriverObjectExtension + 64) = a2[18];
      *((_QWORD *)DriverObjectExtension + 65) = a2[19];
      *((_QWORD *)DriverObjectExtension + 66) = a2[20];
      *((_QWORD *)DriverObjectExtension + 68) = a2[22];
    }
    if ( MmIsDriverVerifying(*a1)
      && ((VerifierFlags = 0, MmIsVerifierEnabled(&VerifierFlags) < 0) || (VerifierFlags & 0x400000) == 0)
      && (*((_WORD *)DriverObjectExtension + 13) |= 2u, (ndisFlags & 0x400) != 0) )
    {
      v13 = 0LL;
      v14 = DriverObjectExtension;
      if ( !ndisDriverTrackAlloc )
        v13 = (struct _NDIS_M_DRIVER_BLOCK *)DriverObjectExtension;
      ndisDriverTrackAlloc = v13;
    }
    else
    {
      v14 = DriverObjectExtension;
    }
    v14[2] = 0LL;
    v15 = 28LL;
    do
    {
      *(_QWORD *)((char *)&(*a1)->Type + v10) = ndisDummyIrpHandler;
      v10 += 8LL;
      --v15;
    }
    while ( v15 );
    (*a1)->DriverExtension->AddDevice = (int (__fastcall *)(_DRIVER_OBJECT *, _DEVICE_OBJECT *))ndisWdmPnPAddDevice;
    (*a1)->DriverUnload = ndisMUnload;
    (*a1)->MajorFunction[0] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisCreateIrpHandler;
    (*a1)->MajorFunction[14] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDeviceControlIrpHandler;
    (*a1)->MajorFunction[15] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisDeviceInternalIrpDispatch;
    (*a1)->MajorFunction[2] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisCloseIrpHandler;
    (*a1)->MajorFunction[27] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisPnPDispatch;
    (*a1)->MajorFunction[22] = ndisPowerDispatch;
    (*a1)->MajorFunction[23] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))ndisWMIIrpDispatch;
    KeInitializeEvent((PRKEVENT)((char *)DriverObjectExtension + 368), NotificationEvent, 0);
    *((_QWORD *)DriverObjectExtension + 4) = a1;
    *((_QWORD *)DriverObjectExtension + 5) = *a1;
    v16 = (char *)DriverObjectExtension + 80;
    *((_QWORD *)DriverObjectExtension + 11) = (char *)DriverObjectExtension + 80;
    *v16 = v16;
    ndisInitializeRef((__int64)DriverObjectExtension + 392, 12);
    *(_BYTE *)DriverObjectExtension = 2;
    *((_WORD *)DriverObjectExtension + 1) = 1192;
    *((_BYTE *)DriverObjectExtension + 1) = 1;
    ndisGetServiceNameFromRegPath((__int64)(a1 + 1), (__int64)DriverObjectExtension + 488);
    ndisQueryDriverImageName((__int64)DriverObjectExtension + 488, (_UNICODE_STRING *)DriverObjectExtension + 55);
    ndisReferencePackage((__int64)&ndisPkgs);
    v17 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    v18 = ndisDriverObject;
    *((_QWORD *)DriverObjectExtension + 1) = ndisMiniDriverList;
    ndisMiniDriverList = (struct _NDIS_M_DRIVER_BLOCK *)DriverObjectExtension;
    ObfReferenceObject(v18);
    KeReleaseSpinLock(&ndisMiniDriverListLock, v17);
    ndisDereferencePackage((__int64)&ndisPkgs);
    *a4 = DriverObjectExtension;
  }
  else
  {
    v4 = -1073741670;
  }
LABEL_38:
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0xFu, &WPP_412f75d4855739ae1f29fadf11bfdb6b_Traceguids, (__int64)DriverObjectExtension);
  return v4;
}
