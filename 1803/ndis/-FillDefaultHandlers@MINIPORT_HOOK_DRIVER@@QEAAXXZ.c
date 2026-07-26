/*
 * XREFs of ?FillDefaultHandlers@MINIPORT_HOOK_DRIVER@@QEAAXXZ @ 0x1C00B5D04
 * Callers:
 *     ?Register@MINIPORT_HOOK_DRIVER@@QEAAJPEAXPEBU_NDIS_MINIPORT_HOOK_DRIVER_PROVIDER_CHARACTERISTICS@@@Z @ 0x1C00FE380 (-Register@MINIPORT_HOOK_DRIVER@@QEAAJPEAXPEBU_NDIS_MINIPORT_HOOK_DRIVER_PROVIDER_CHARACTERISTICS.c)
 *     ?ndisMpHookNmrInitializeClient@@YAJXZ @ 0x1C011E508 (-ndisMpHookNmrInitializeClient@@YAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall MINIPORT_HOOK_DRIVER::FillDefaultHandlers(MINIPORT_HOOK_DRIVER *this)
{
  if ( !*((_QWORD *)this + 6) )
    *((_QWORD *)this + 6) = ndisMpHookDefaultOidRequestComplete;
  if ( !*((_QWORD *)this + 7) )
    *((_QWORD *)this + 7) = ndisMpHookDefaultDirectOidRequestComplete;
  if ( !*((_QWORD *)this + 8) )
    *((_QWORD *)this + 8) = ndisMpHookDefaultIndicateStatus;
}
