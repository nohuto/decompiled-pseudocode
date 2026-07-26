/*
 * XREFs of NdisAllocateIoWorkItem @ 0x1C0024400
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferenceMiniport @ 0x1C000977C (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C0009F08 (ndisDereferenceMiniport.c)
 *     ndisDereferenceDriver @ 0x1C00123AC (ndisDereferenceDriver.c)
 *     ndisDereferenceFilterDriver @ 0x1C0017074 (ndisDereferenceFilterDriver.c)
 *     ndisReferenceRefEx @ 0x1C0022014 (ndisReferenceRefEx.c)
 *     memset @ 0x1C0026180 (memset.c)
 */

NDIS_HANDLE __stdcall NdisAllocateIoWorkItem(NDIS_HANDLE NdisObjectHandle)
{
  _DEVICE_OBJECT *v2; // rsi
  _DEVICE_OBJECT *v3; // rbp
  _QWORD *PoolWithTag; // rax
  _QWORD *v5; // rbx
  char v6; // al
  PIO_WORKITEM v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v11; // rcx
  PIO_WORKITEM v12; // rax
  PIO_WORKITEM v13; // rax
  NDIS_HANDLE v14; // rcx
  PIO_WORKITEM v15; // rax
  PIO_WORKITEM WorkItem; // rax
  int v17; // [rsp+48h] [rbp+10h] BYREF

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
    if ( !ndisReferenceRefEx((PKSPIN_LOCK)NdisObjectHandle + 49, 3u, &v17) )
      goto LABEL_8;
    v3 = (_DEVICE_OBJECT *)*((_QWORD *)NdisObjectHandle + 5);
    WorkItem = IoAllocateWorkItem(v3);
    v5[2] = WorkItem;
    if ( WorkItem )
      goto LABEL_8;
    v14 = NdisObjectHandle;
    goto LABEL_29;
  }
  if ( v6 != 4 )
  {
    if ( v6 != 9 )
    {
      if ( v6 != 17 )
        goto LABEL_8;
      if ( ndisReferenceMiniport((__int64)NdisObjectHandle) != 1 )
        goto LABEL_8;
      v2 = (_DEVICE_OBJECT *)*((_QWORD *)NdisObjectHandle + 481);
      v7 = IoAllocateWorkItem(v2);
      v5[2] = v7;
      if ( v7 )
        goto LABEL_8;
      ndisDereferenceMiniport((__int64)NdisObjectHandle, 0x62u, v8, v9);
LABEL_30:
      ExFreePoolWithTag(v5, 0);
      v5 = 0LL;
      goto LABEL_8;
    }
    v11 = *((_QWORD *)NdisObjectHandle + 3);
    if ( *(_BYTE *)v11 != 2 )
    {
      if ( *(_BYTE *)v11 == 4 && ndisReferenceRefEx((PKSPIN_LOCK)(v11 + 72), 2u, &v17) )
      {
        v2 = (_DEVICE_OBJECT *)*((_QWORD *)NdisObjectHandle + 4);
        v12 = IoAllocateWorkItem(v2);
        v5[2] = v12;
        if ( !v12 )
        {
          ndisDereferenceFilterDriver(*((_NDIS_FILTER_DRIVER_BLOCK **)NdisObjectHandle + 3));
          goto LABEL_30;
        }
      }
LABEL_8:
      if ( v2 )
        return v5;
      goto LABEL_22;
    }
    if ( !ndisReferenceRefEx((PKSPIN_LOCK)(v11 + 392), 4u, &v17) )
      goto LABEL_8;
    v2 = (_DEVICE_OBJECT *)*((_QWORD *)NdisObjectHandle + 4);
    v13 = IoAllocateWorkItem(v2);
    v5[2] = v13;
    if ( v13 )
      goto LABEL_8;
    v14 = (NDIS_HANDLE)*((_QWORD *)NdisObjectHandle + 3);
LABEL_29:
    ndisDereferenceDriver((__int64)v14, 0);
    goto LABEL_30;
  }
  if ( ndisReferenceRefEx((PKSPIN_LOCK)NdisObjectHandle + 9, 1u, &v17) )
  {
    v3 = (_DEVICE_OBJECT *)*((_QWORD *)NdisObjectHandle + 2);
    v15 = IoAllocateWorkItem(v3);
    v5[2] = v15;
    if ( !v15 )
    {
      ndisDereferenceFilterDriver((_NDIS_FILTER_DRIVER_BLOCK *)NdisObjectHandle);
      ExFreePoolWithTag(v5, 0);
      v5 = 0LL;
    }
  }
LABEL_22:
  if ( !v3 )
  {
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
    return 0LL;
  }
  return v5;
}
