/*
 * XREFs of ?ndisDisarmWatchdogAsync@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C000D664
 * Callers:
 *     ndisMInvokeOidRequest @ 0x1C00B9A74 (ndisMInvokeOidRequest.c)
 *     ?ndisMRawInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00E790C (-ndisMRawInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisDisarmWatchdogAsync(struct NDISWATCHDOG__ *a1)
{
  if ( a1 != (struct NDISWATCHDOG__ *)-1LL )
  {
    if ( KeCancelTimer((PKTIMER)a1 + 1) )
    {
      KeSetEvent((PRKEVENT)a1 + 7, 0, 0);
      *((_DWORD *)a1 + 40) = 0;
    }
    else
    {
      _InterlockedAnd((volatile signed __int32 *)a1 + 40, 0);
    }
  }
}
