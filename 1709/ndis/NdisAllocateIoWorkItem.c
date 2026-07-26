/*
 * XREFs of NdisAllocateIoWorkItem @ 0x1C001DF40
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceDriver @ 0x1C00016D8 (ndisDereferenceDriver.c)
 *     ndisDereferenceFilterDriver @ 0x1C00044D4 (ndisDereferenceFilterDriver.c)
 *     ndisReferenceMiniport @ 0x1C0009270 (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C0009380 (ndisDereferenceMiniport.c)
 *     ndisReferenceRefEx @ 0x1C001E3C8 (ndisReferenceRefEx.c)
 *     memset @ 0x1C0025280 (memset.c)
 */

NDIS_HANDLE __stdcall NdisAllocateIoWorkItem(NDIS_HANDLE NdisObjectHandle)
{
  _DEVICE_OBJECT *v2; // rsi
  _DEVICE_OBJECT *v3; // rbp
  _QWORD *PoolWithTag; // rax
  _QWORD *v5; // rbx
  char v6; // al
  PIO_WORKITEM v7; // rax
  __int64 v9; // rcx
  PIO_WORKITEM v10; // rax
  PIO_WORKITEM v11; // rax
  NDIS_HANDLE v12; // rcx
  PIO_WORKITEM v13; // rax
  PIO_WORKITEM WorkItem; // rax

  v2 = 0LL;
  v3 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x6977444Eu);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return v5;
  memset(PoolWithTag, 0, 0x30uLL);
  *(_DWORD *)v5 = 3146000;
  v5[1] = NdisObjectHandle;
  v6 = *(_BYTE *)NdisObjectHandle;
  if ( *(_BYTE *)NdisObjectHandle == 2 )
  {
    if ( (unsigned __int8)ndisReferenceRefEx((PKSPIN_LOCK)NdisObjectHandle + 49) != 1 )
      goto LABEL_23;
    v3 = (_DEVICE_OBJECT *)*((_QWORD *)NdisObjectHandle + 5);
    WorkItem = IoAllocateWorkItem(v3);
    v5[2] = WorkItem;
    if ( !WorkItem )
    {
      v12 = NdisObjectHandle;
      goto LABEL_28;
    }
LABEL_22:
    if ( v3 )
      return v5;
    goto LABEL_23;
  }
  if ( v6 == 4 )
  {
    if ( (unsigned __int8)ndisReferenceRefEx((PKSPIN_LOCK)NdisObjectHandle + 9) != 1 )
      goto LABEL_23;
    v3 = (_DEVICE_OBJECT *)*((_QWORD *)NdisObjectHandle + 2);
    v13 = IoAllocateWorkItem(v3);
    v5[2] = v13;
    if ( !v13 )
    {
      ndisDereferenceFilterDriver((_NDIS_FILTER_DRIVER_BLOCK *)NdisObjectHandle);
      ExFreePoolWithTag(v5, 0);
      v5 = 0LL;
    }
    goto LABEL_22;
  }
  if ( v6 == 9 )
  {
    v9 = *((_QWORD *)NdisObjectHandle + 3);
    if ( *(_BYTE *)v9 != 2 )
    {
      if ( *(_BYTE *)v9 == 4 && (unsigned __int8)ndisReferenceRefEx((PKSPIN_LOCK)(v9 + 72)) == 1 )
      {
        v2 = (_DEVICE_OBJECT *)*((_QWORD *)NdisObjectHandle + 4);
        v10 = IoAllocateWorkItem(v2);
        v5[2] = v10;
        if ( v10 )
          goto LABEL_8;
        ndisDereferenceFilterDriver(*((_NDIS_FILTER_DRIVER_BLOCK **)NdisObjectHandle + 3));
        goto LABEL_29;
      }
      goto LABEL_23;
    }
    if ( (unsigned __int8)ndisReferenceRefEx((PKSPIN_LOCK)(v9 + 392)) != 1 )
      goto LABEL_23;
    v2 = (_DEVICE_OBJECT *)*((_QWORD *)NdisObjectHandle + 4);
    v11 = IoAllocateWorkItem(v2);
    v5[2] = v11;
    if ( v11 )
      goto LABEL_8;
    v12 = (NDIS_HANDLE)*((_QWORD *)NdisObjectHandle + 3);
LABEL_28:
    ndisDereferenceDriver((__int64)v12, 0);
LABEL_29:
    ExFreePoolWithTag(v5, 0);
    v5 = 0LL;
LABEL_8:
    if ( v2 )
      return v5;
    goto LABEL_22;
  }
  if ( v6 == 17 && ndisReferenceMiniport((__int64)NdisObjectHandle) == 1 )
  {
    v2 = (_DEVICE_OBJECT *)*((_QWORD *)NdisObjectHandle + 481);
    v7 = IoAllocateWorkItem(v2);
    v5[2] = v7;
    if ( v7 )
      goto LABEL_8;
    ndisDereferenceMiniport((__int64)NdisObjectHandle, 0x62u);
    goto LABEL_29;
  }
LABEL_23:
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0);
    return 0LL;
  }
  return v5;
}
