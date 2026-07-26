/*
 * XREFs of _lambda_544ec5177f50874f26890ac2c9d93654_::_lambda_invoker_cdecl_ @ 0x1C00B1FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDeliverBindCompleteEvent@@YAXPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C00AF69C (-ndisDeliverBindCompleteEvent@@YAXPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z @ 0x1C00DBF50 (--_GKRefHolder@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z.c)
 */

void __fastcall lambda_544ec5177f50874f26890ac2c9d93654_::_lambda_invoker_cdecl_(
        __int64 a1,
        volatile signed __int32 **a2)
{
  volatile signed __int32 *v3; // rcx

  if ( *((_BYTE *)*a2 + 9) )
  {
    *((_BYTE *)*a2 + 9) = 0;
    ndisDeliverBindCompleteEvent((struct NDIS_BIND_PROTOCOL_DRIVER *)(*a2 + 2));
  }
  v3 = *a2;
  if ( *a2 && _InterlockedExchangeAdd(v3 + 14, 0xFFFFFFFF) == 1 )
  {
    if ( v3 )
      KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder::`scalar deleting destructor'((PVOID)v3);
  }
}
