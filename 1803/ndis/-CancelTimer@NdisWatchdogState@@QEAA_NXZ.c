/*
 * XREFs of ?CancelTimer@NdisWatchdogState@@QEAA_NXZ @ 0x1C001A7D4
 * Callers:
 *     ndisFDoOidRequestInternal @ 0x1C000CFF0 (ndisFDoOidRequestInternal.c)
 *     ?ndisMRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C0043260 (-ndisMRawOidRequestComplete@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     NdisMOidRequestComplete @ 0x1C00437C0 (NdisMOidRequestComplete.c)
 *     ?Disarm@NdisWatchdogState@@QEAAXXZ @ 0x1C00B2CD8 (-Disarm@NdisWatchdogState@@QEAAXXZ.c)
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C00B8854 (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall NdisWatchdogState::CancelTimer(NdisWatchdogState *this)
{
  if ( KeCancelTimer((PKTIMER)this + 1) )
  {
    KeSetEvent((PRKEVENT)this + 7, 0, 0);
    *((_DWORD *)this + 40) = 0;
    return 1;
  }
  else
  {
    _InterlockedAnd((volatile signed __int32 *)this + 40, 0);
    return 0;
  }
}
