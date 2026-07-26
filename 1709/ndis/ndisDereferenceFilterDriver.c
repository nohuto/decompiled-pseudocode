/*
 * XREFs of ndisDereferenceFilterDriver @ 0x1C00044D4
 * Callers:
 *     ndisDereferenceFilter @ 0x1C0001278 (ndisDereferenceFilter.c)
 *     NdisFreeIoWorkItem @ 0x1C0002630 (NdisFreeIoWorkItem.c)
 *     NdisAllocateIoWorkItem @ 0x1C001DF40 (NdisAllocateIoWorkItem.c)
 *     NdisFDeregisterFilterDriver @ 0x1C0058880 (NdisFDeregisterFilterDriver.c)
 *     ?ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00C2F68 (-ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisPDDereferenceClientDriver@@YAXPEAX@Z @ 0x1C00F76A0 (-ndisPDDereferenceClientDriver@@YAXPEAX@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C01021E4 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ndisDereferenceRef @ 0x1C0004F50 (ndisDereferenceRef.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     ??_G_NDIS_FILTER_DRIVER_BLOCK@@QEAAPEAXI@Z @ 0x1C0057C84 (--_G_NDIS_FILTER_DRIVER_BLOCK@@QEAAPEAXI@Z.c)
 */

void __fastcall ndisDereferenceFilterDriver(_NDIS_FILTER_DRIVER_BLOCK *this)
{
  _NDIS_FILTER_DRIVER_BLOCK *v1; // rbx
  KIRQL v2; // al
  struct _NDIS_FILTER_DRIVER_BLOCK **p_NextFilterDriver; // rcx
  KIRQL v4; // di
  struct _NDIS_FILTER_DRIVER_BLOCK *v5; // rdx
  unsigned int v6; // edx
  wchar_t *Buffer; // rcx

  v1 = this;
  if ( (unsigned __int8)byte_1C009875B >= 4u )
    WPP_SF_q(47LL, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, this);
  if ( (unsigned __int8)ndisDereferenceRef(&v1->Ref.SpinLock) )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&ndisFilterDriverListLock);
    p_NextFilterDriver = &ndisFilterDriverList;
    v4 = v2;
    if ( ndisFilterDriverList )
    {
      while ( 1 )
      {
        v5 = *p_NextFilterDriver;
        if ( *p_NextFilterDriver == v1 )
          break;
        p_NextFilterDriver = &v5->NextFilterDriver;
        if ( !v5->NextFilterDriver )
          goto LABEL_11;
      }
      *p_NextFilterDriver = v1->NextFilterDriver;
      ObfDereferenceObject(ndisDriverObject);
    }
LABEL_11:
    KeReleaseSpinLock(&ndisFilterDriverListLock, v4);
    Buffer = v1->ImageName.Buffer;
    if ( Buffer )
    {
      ExFreePoolWithTag(Buffer, 0);
      v1->ImageName.Buffer = 0LL;
    }
    _NDIS_FILTER_DRIVER_BLOCK::`scalar deleting destructor'(v1, v6);
    ExFreePoolWithTag(v1, 0);
    v1 = 0LL;
  }
  if ( (unsigned __int8)byte_1C009875B >= 4u )
    WPP_SF_q(48LL, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, v1);
}
