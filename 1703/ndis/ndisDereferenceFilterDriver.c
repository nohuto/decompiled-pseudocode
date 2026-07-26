/*
 * XREFs of ndisDereferenceFilterDriver @ 0x1C001CA04
 * Callers:
 *     NdisAllocateIoWorkItem @ 0x1C0022C60 (NdisAllocateIoWorkItem.c)
 *     ndisDereferenceFilter @ 0x1C00252A0 (ndisDereferenceFilter.c)
 *     NdisFreeIoWorkItem @ 0x1C0027050 (NdisFreeIoWorkItem.c)
 *     NdisFDeregisterFilterDriver @ 0x1C00594B0 (NdisFDeregisterFilterDriver.c)
 *     ?ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00B7B68 (-ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisPDDereferenceClientDriver@@YAXPEAX@Z @ 0x1C00EE0C4 (-ndisPDDereferenceClientDriver@@YAXPEAX@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00F821C (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ndisDereferenceRef @ 0x1C001807C (ndisDereferenceRef.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     ??_G_NDIS_FILTER_DRIVER_BLOCK@@QEAAPEAXI@Z @ 0x1C0058964 (--_G_NDIS_FILTER_DRIVER_BLOCK@@QEAAPEAXI@Z.c)
 */

void __fastcall ndisDereferenceFilterDriver(_NDIS_FILTER_DRIVER_BLOCK *this, __int64 a2, unsigned __int8 a3)
{
  _NDIS_FILTER_DRIVER_BLOCK *v4; // rbx
  KIRQL v5; // al
  struct _NDIS_FILTER_DRIVER_BLOCK **p_NextFilterDriver; // rcx
  KIRQL v7; // di
  struct _NDIS_FILTER_DRIVER_BLOCK *v8; // rdx
  unsigned int v9; // edx
  wchar_t *Buffer; // rcx

  v4 = this;
  if ( (unsigned __int8)byte_1C009261B >= 4u )
    WPP_SF_q(49LL, &WPP_12c6ddfa26473c7e20361ffad7c5cbde_Traceguids, this);
  if ( ndisDereferenceRef(&v4->Ref.SpinLock, a3) )
  {
    v5 = KeAcquireSpinLockRaiseToDpc(&ndisFilterDriverListLock);
    p_NextFilterDriver = &ndisFilterDriverList;
    v7 = v5;
    if ( ndisFilterDriverList )
    {
      while ( 1 )
      {
        v8 = *p_NextFilterDriver;
        if ( *p_NextFilterDriver == v4 )
          break;
        p_NextFilterDriver = &v8->NextFilterDriver;
        if ( !v8->NextFilterDriver )
          goto LABEL_11;
      }
      *p_NextFilterDriver = v4->NextFilterDriver;
      ObfDereferenceObject(ndisDriverObject);
    }
LABEL_11:
    KeReleaseSpinLock(&ndisFilterDriverListLock, v7);
    Buffer = v4->ImageName.Buffer;
    if ( Buffer )
    {
      ExFreePoolWithTag(Buffer, 0);
      v4->ImageName.Buffer = 0LL;
    }
    _NDIS_FILTER_DRIVER_BLOCK::`scalar deleting destructor'(v4, v9);
    ExFreePoolWithTag(v4, 0);
    v4 = 0LL;
  }
  if ( (unsigned __int8)byte_1C009261B >= 4u )
    WPP_SF_q(50LL, &WPP_12c6ddfa26473c7e20361ffad7c5cbde_Traceguids, v4);
}
