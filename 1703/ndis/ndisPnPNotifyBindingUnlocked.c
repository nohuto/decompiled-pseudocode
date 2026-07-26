/*
 * XREFs of ndisPnPNotifyBindingUnlocked @ 0x1C00B547C
 * Callers:
 *     ?ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00B202C (-ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART.c)
 *     ?ndisPauseProtocolInner@@YAXPEAU_NDIS_OPEN_BLOCK@@K@Z @ 0x1C00BBDF0 (-ndisPauseProtocolInner@@YAXPEAU_NDIS_OPEN_BLOCK@@K@Z.c)
 * Callees:
 *     ndisReleaseMiniportPnPEventLock @ 0x1C0016A70 (ndisReleaseMiniportPnPEventLock.c)
 *     ndisAcquireMiniportPnPEventLock @ 0x1C0016B38 (ndisAcquireMiniportPnPEventLock.c)
 *     ndisReferencePackage @ 0x1C00A502C (ndisReferencePackage.c)
 *     ndisPnPNotifyBinding @ 0x1C00F77D4 (ndisPnPNotifyBinding.c)
 */

__int64 __fastcall ndisPnPNotifyBindingUnlocked(__int64 a1, __int64 a2)
{
  struct _KEVENT v5; // [rsp+20h] [rbp-28h] BYREF

  ndisReferencePackage((__int64)&ndisPkgs);
  ndisAcquireMiniportPnPEventLock(*(_QWORD *)(a1 + 16), &v5);
  LODWORD(a2) = ndisPnPNotifyBinding(a1, a2);
  ndisReleaseMiniportPnPEventLock(*(_QWORD *)(a1 + 16));
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  return (unsigned int)a2;
}
