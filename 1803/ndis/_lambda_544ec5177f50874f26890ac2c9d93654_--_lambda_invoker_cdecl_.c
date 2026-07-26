/*
 * XREFs of _lambda_544ec5177f50874f26890ac2c9d93654_::_lambda_invoker_cdecl_ @ 0x1C00BFE60
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDeliverBindCompleteEvent@@YAXPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C00C0C08 (-ndisDeliverBindCompleteEvent@@YAXPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z @ 0x1C00E77E8 (--_GKRefHolder@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z.c)
 */

void __fastcall lambda_544ec5177f50874f26890ac2c9d93654_::_lambda_invoker_cdecl_(
        __int64 a1,
        struct NDIS_BIND_PROTOCOL_DRIVER **a2)
{
  struct NDIS_BIND_PROTOCOL_DRIVER *v2; // rcx

  v2 = *a2;
  if ( (*a2)->NeedsBindCompleteEvent )
  {
    v2->NeedsBindCompleteEvent = 0;
    ndisDeliverBindCompleteEvent(*a2);
    v2 = *a2;
  }
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v2[1].DriverReady, 0xFFFFFFFF) == 1 )
      KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder::`scalar deleting destructor'(v2);
  }
}
