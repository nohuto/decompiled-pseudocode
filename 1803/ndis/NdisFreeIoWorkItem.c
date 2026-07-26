/*
 * XREFs of NdisFreeIoWorkItem @ 0x1C00146D0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009F08 (ndisDereferenceMiniport.c)
 *     ndisDereferenceDriver @ 0x1C00123AC (ndisDereferenceDriver.c)
 *     ndisDereferenceFilterDriver @ 0x1C0017074 (ndisDereferenceFilterDriver.c)
 */

void __stdcall NdisFreeIoWorkItem(NDIS_HANDLE NdisIoWorkItemHandle)
{
  __int64 v1; // r8
  __int64 v2; // r9
  _NDIS_FILTER_DRIVER_BLOCK *v4; // rcx
  UCHAR Type; // al

  v4 = (_NDIS_FILTER_DRIVER_BLOCK *)*((_QWORD *)NdisIoWorkItemHandle + 1);
  Type = v4->Header.Type;
  if ( v4->Header.Type == 2 )
    goto LABEL_12;
  LOBYTE(v1) = 4;
  switch ( Type )
  {
    case 4u:
      goto LABEL_11;
    case 9u:
      v4 = (_NDIS_FILTER_DRIVER_BLOCK *)v4->FilterQueue;
      if ( v4->Header.Type != 2 )
      {
        if ( v4->Header.Type != 4 )
          break;
LABEL_11:
        ndisDereferenceFilterDriver(v4);
        break;
      }
LABEL_12:
      ndisDereferenceDriver((__int64)v4, 0);
      break;
    case 0x11u:
      ndisDereferenceMiniport((__int64)v4, 0x62u, v1, v2);
      break;
  }
  IoFreeWorkItem(*((PIO_WORKITEM *)NdisIoWorkItemHandle + 2));
  ExFreePoolWithTag(NdisIoWorkItemHandle, 0);
}
