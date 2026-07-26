/*
 * XREFs of ndisDispatchRequest @ 0x1C00ACA10
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNicActiveHandleCleanup@@YAXPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@@Z @ 0x1C0016538 (-ndisNicActiveHandleCleanup@@YAXPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@@Z.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     ndisIfDereferenceCompartmentForUser @ 0x1C0044DE4 (ndisIfDereferenceCompartmentForUser.c)
 *     ndisCheckAccess @ 0x1C00A5D34 (ndisCheckAccess.c)
 *     NdisMSleep @ 0x1C00BC470 (NdisMSleep.c)
 *     ndisDriverSystemDispatch @ 0x1C00BE098 (ndisDriverSystemDispatch.c)
 *     ndisHandlePnPRequest @ 0x1C00F7108 (ndisHandlePnPRequest.c)
 */

__int64 __fastcall ndisDispatchRequest(__int64 a1, _IRP *a2)
{
  __int64 CurrentStackLocation; // rbp
  unsigned int v3; // ebx
  PVOID v6; // rcx
  signed __int32 v7; // eax
  unsigned int v8; // eax
  BOOLEAN *PoolWithTag; // rax
  BOOLEAN *v11; // rsi
  __int64 v12; // rsi
  unsigned int *v13; // rcx

  CurrentStackLocation = (__int64)a2->Tail.Overlay.CurrentStackLocation;
  v3 = 0;
  a2->IoStatus.Status = 259;
  a2->IoStatus.Information = 0LL;
  v6 = ImageSectionHandle;
  v7 = _InterlockedIncrement((volatile signed __int32 *)&ndisPkgs);
  if ( !ImageSectionHandle )
  {
    if ( v7 == 1 )
    {
      ImageSectionHandle = MmLockPagableDataSection(AddressWithinSection);
      MmUnlockPagableImageSection(ImageSectionHandle);
      v6 = ImageSectionHandle;
    }
    else
    {
      do
      {
        NdisMSleep(0x32u);
        v6 = ImageSectionHandle;
      }
      while ( !ImageSectionHandle );
    }
  }
  MmLockPagableSectionByHandle(v6);
  if ( *(_BYTE *)CurrentStackLocation )
  {
    switch ( *(_BYTE *)CurrentStackLocation )
    {
      case 2:
LABEL_8:
        a2->IoStatus.Status = v3;
        IofCompleteRequest(a2, 2);
        goto LABEL_9;
      case 0xE:
        v8 = ndisHandlePnPRequest(a2);
        break;
      case 0xF:
        goto LABEL_8;
      case 0x12:
        v12 = *(_QWORD *)(*(_QWORD *)(CurrentStackLocation + 48) + 24LL);
        ndisNicActiveHandleCleanup((struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)v12);
        v13 = *(unsigned int **)(v12 + 48);
        if ( v13 )
        {
          ndisIfDereferenceCompartmentForUser(v13);
          *(_QWORD *)(v12 + 48) = 0LL;
        }
        *(_QWORD *)(*(_QWORD *)(CurrentStackLocation + 48) + 24LL) = 0LL;
        ExFreePoolWithTag((PVOID)v12, 0);
        _InterlockedDecrement(&dword_1C0093E34);
        goto LABEL_8;
      case 0x17:
        v8 = ndisDriverSystemDispatch(a1, a2);
        break;
      default:
        v3 = -1073741822;
        goto LABEL_8;
    }
    v3 = v8;
  }
  else
  {
    PoolWithTag = (BOOLEAN *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x636F444Eu);
    v11 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v3 = -1073741670;
      goto LABEL_8;
    }
    memset(PoolWithTag, 0, 0x38uLL);
    *v11 = ndisCheckAccess((__int64)a2, CurrentStackLocation, ndisSecurityDescriptor);
    v11[1] = ndisCheckAccess((__int64)a2, CurrentStackLocation, &ndisPnpSecurityDescriptor);
    *(_QWORD *)(*(_QWORD *)(CurrentStackLocation + 48) + 24LL) = v11;
    _InterlockedIncrement(&dword_1C0093E34);
  }
  if ( v3 != 259 )
    goto LABEL_8;
LABEL_9:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  return v3;
}
