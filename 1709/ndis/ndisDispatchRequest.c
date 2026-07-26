/*
 * XREFs of ndisDispatchRequest @ 0x1C00B6280
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNicActiveHandleCleanup@@YAXPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@@Z @ 0x1C001EB08 (-ndisNicActiveHandleCleanup@@YAXPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@@Z.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     ndisIfDereferenceCompartmentForUser @ 0x1C00418D4 (ndisIfDereferenceCompartmentForUser.c)
 *     ndisCheckAccess @ 0x1C00B7034 (ndisCheckAccess.c)
 *     NdisMSleep @ 0x1C00C4100 (NdisMSleep.c)
 *     ndisDriverSystemDispatch @ 0x1C00C9310 (ndisDriverSystemDispatch.c)
 *     ndisHandlePnPRequest @ 0x1C0101AFC (ndisHandlePnPRequest.c)
 */

__int64 __fastcall ndisDispatchRequest(__int64 a1, _IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  unsigned int v3; // ebx
  signed __int32 v6; // eax
  unsigned int v7; // eax
  void *FsContext; // rsi
  unsigned int *v10; // rcx
  _BYTE *PoolWithTag; // rax
  _BYTE *v12; // rsi

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 0;
  a2->IoStatus.Status = 259;
  a2->IoStatus.Information = 0LL;
  v6 = _InterlockedIncrement((volatile signed __int32 *)&ndisPkgs);
  if ( !ImageSectionHandle )
  {
    if ( v6 == 1 )
    {
      ImageSectionHandle = MmLockPagableDataSection(AddressWithinSection);
      MmUnlockPagableImageSection(ImageSectionHandle);
    }
    else
    {
      do
        NdisMSleep(0x32u);
      while ( !ImageSectionHandle );
    }
  }
  MmLockPagableSectionByHandle(ImageSectionHandle);
  if ( CurrentStackLocation->MajorFunction )
  {
    switch ( CurrentStackLocation->MajorFunction )
    {
      case 2u:
LABEL_8:
        a2->IoStatus.Status = v3;
        IofCompleteRequest(a2, 2);
        goto LABEL_9;
      case 0xEu:
        v7 = ndisHandlePnPRequest(a2);
        break;
      case 0xFu:
        goto LABEL_8;
      case 0x12u:
        FsContext = CurrentStackLocation->FileObject->FsContext;
        ndisNicActiveHandleCleanup((struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext);
        v10 = (unsigned int *)*((_QWORD *)FsContext + 6);
        if ( v10 )
        {
          ndisIfDereferenceCompartmentForUser(v10);
          *((_QWORD *)FsContext + 6) = 0LL;
        }
        CurrentStackLocation->FileObject->FsContext = 0LL;
        ExFreePoolWithTag(FsContext, 0);
        _InterlockedDecrement(&dword_1C00988F0);
        goto LABEL_8;
      case 0x17u:
        v7 = ndisDriverSystemDispatch(a1, a2);
        break;
      default:
        v3 = -1073741822;
        goto LABEL_8;
    }
    v3 = v7;
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x636F444Eu);
    v12 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v3 = -1073741670;
      goto LABEL_8;
    }
    memset(PoolWithTag, 0, 0x38uLL);
    *v12 = ndisCheckAccess(a2, CurrentStackLocation, ndisSecurityDescriptor);
    v12[1] = ndisCheckAccess(a2, CurrentStackLocation, &ndisPnpSecurityDescriptor);
    CurrentStackLocation->FileObject->FsContext = v12;
    _InterlockedIncrement(&dword_1C00988F0);
  }
  if ( v3 != 259 )
    goto LABEL_8;
LABEL_9:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  return v3;
}
