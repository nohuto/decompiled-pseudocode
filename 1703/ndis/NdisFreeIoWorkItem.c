/*
 * XREFs of NdisFreeIoWorkItem @ 0x1C0027050
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0011A54 (ndisDereferenceMiniport.c)
 *     ndisDereferenceFilterDriver @ 0x1C001CA04 (ndisDereferenceFilterDriver.c)
 *     ndisDereferenceDriver @ 0x1C0025778 (ndisDereferenceDriver.c)
 */

void __stdcall NdisFreeIoWorkItem(NDIS_HANDLE NdisIoWorkItemHandle)
{
  __int64 v1; // rdx
  _NDIS_FILTER_DRIVER_BLOCK *v3; // rcx
  UCHAR Type; // al
  unsigned __int8 v5; // r8
  unsigned __int8 v6; // r8

  v3 = (_NDIS_FILTER_DRIVER_BLOCK *)*((_QWORD *)NdisIoWorkItemHandle + 1);
  Type = v3->Header.Type;
  if ( v3->Header.Type == 2 )
  {
    v5 = 3;
    goto LABEL_13;
  }
  v5 = 4;
  switch ( Type )
  {
    case 4u:
      v6 = 1;
      goto LABEL_12;
    case 9u:
      v3 = (_NDIS_FILTER_DRIVER_BLOCK *)v3->FilterQueue;
      if ( v3->Header.Type != 2 )
      {
        if ( v3->Header.Type != 4 )
          break;
        v6 = 2;
LABEL_12:
        ndisDereferenceFilterDriver(v3, v1, v6);
        break;
      }
LABEL_13:
      ndisDereferenceDriver((__int64)v3, 0, v5);
      break;
    case 0x11u:
      ndisDereferenceMiniport((__int64)v3, 0x62u);
      break;
  }
  IoFreeWorkItem(*((PIO_WORKITEM *)NdisIoWorkItemHandle + 2));
  ExFreePoolWithTag(NdisIoWorkItemHandle, 0);
}
