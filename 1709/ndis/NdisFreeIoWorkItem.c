/*
 * XREFs of NdisFreeIoWorkItem @ 0x1C0002630
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceDriver @ 0x1C00016D8 (ndisDereferenceDriver.c)
 *     ndisDereferenceFilterDriver @ 0x1C00044D4 (ndisDereferenceFilterDriver.c)
 *     ndisDereferenceMiniport @ 0x1C0009380 (ndisDereferenceMiniport.c)
 */

void __stdcall NdisFreeIoWorkItem(NDIS_HANDLE NdisIoWorkItemHandle)
{
  _NDIS_FILTER_DRIVER_BLOCK *v2; // rcx
  UCHAR Type; // al

  v2 = (_NDIS_FILTER_DRIVER_BLOCK *)*((_QWORD *)NdisIoWorkItemHandle + 1);
  Type = v2->Header.Type;
  if ( v2->Header.Type == 2 )
    goto LABEL_12;
  switch ( Type )
  {
    case 4u:
      goto LABEL_11;
    case 9u:
      v2 = (_NDIS_FILTER_DRIVER_BLOCK *)v2->FilterQueue;
      if ( v2->Header.Type != 2 )
      {
        if ( v2->Header.Type != 4 )
          break;
LABEL_11:
        ndisDereferenceFilterDriver(v2);
        break;
      }
LABEL_12:
      ndisDereferenceDriver((__int64)v2, 0);
      break;
    case 0x11u:
      ndisDereferenceMiniport(v2, 98);
      break;
  }
  IoFreeWorkItem(*((PIO_WORKITEM *)NdisIoWorkItemHandle + 2));
  ExFreePoolWithTag(NdisIoWorkItemHandle, 0);
}
