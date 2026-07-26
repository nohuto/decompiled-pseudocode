/*
 * XREFs of ?ndisMpHookGetHookAdapterHandle@@YAPEAUNDIS_MINIPORT_HOOK_ADAPTER_HANDLE__@@PEAUNDIS_MINIPORT_ADAPTER_CONTEXT__@@@Z @ 0x1C00780F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct NDIS_MINIPORT_HOOK_ADAPTER_HANDLE__ *__fastcall ndisMpHookGetHookAdapterHandle(
        struct NDIS_MINIPORT_ADAPTER_CONTEXT__ *a1)
{
  KIRQL v2; // al
  struct _NDIS_MINIPORT_BLOCK *i; // rbx

  if ( !a1 )
    return 0LL;
  v2 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
  for ( i = ndisMiniportList; i && i->MiniportAdapterContext != a1; i = i->NextGlobalMiniport )
    ;
  KeReleaseSpinLock(&ndisMiniportListLock, v2);
  if ( i )
    return i->HookAdapterHandle;
  else
    return 0LL;
}
