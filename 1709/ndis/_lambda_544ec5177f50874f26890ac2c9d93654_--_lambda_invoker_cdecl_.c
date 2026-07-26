/*
 * XREFs of _lambda_544ec5177f50874f26890ac2c9d93654_::_lambda_invoker_cdecl_ @ 0x1C00B51B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDeliverBindCompleteEvent@@YAXPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C00B51F8 (-ndisDeliverBindCompleteEvent@@YAXPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z @ 0x1C00E5F98 (--_GKRefHolder@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z.c)
 */

void __fastcall lambda_544ec5177f50874f26890ac2c9d93654_::_lambda_invoker_cdecl_(
        __int64 a1,
        struct NDIS_BIND_PROTOCOL_DRIVER **a2)
{
  struct NDIS_BIND_PROTOCOL_DRIVER *v3; // rcx

  if ( (*a2)->NeedsBindCompleteEvent )
  {
    (*a2)->NeedsBindCompleteEvent = 0;
    ndisDeliverBindCompleteEvent(*a2);
  }
  v3 = *a2;
  if ( *a2 && _InterlockedExchangeAdd((volatile signed __int32 *)&v3[1].DriverReady, 0xFFFFFFFF) == 1 )
  {
    if ( v3 )
      KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder::`scalar deleting destructor'(v3);
  }
}
