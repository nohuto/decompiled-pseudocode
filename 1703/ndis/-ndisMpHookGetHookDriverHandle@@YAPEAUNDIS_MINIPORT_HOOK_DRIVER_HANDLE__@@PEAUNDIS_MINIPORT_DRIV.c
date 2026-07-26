/*
 * XREFs of ?ndisMpHookGetHookDriverHandle@@YAPEAUNDIS_MINIPORT_HOOK_DRIVER_HANDLE__@@PEAUNDIS_MINIPORT_DRIVER_CONTEXT__@@@Z @ 0x1C0078170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct NDIS_MINIPORT_HOOK_DRIVER_HANDLE__ *__fastcall ndisMpHookGetHookDriverHandle(
        struct NDIS_MINIPORT_DRIVER_CONTEXT__ *a1)
{
  KIRQL v2; // al
  struct _NDIS_M_DRIVER_BLOCK *i; // rbx

  if ( !a1 )
    return 0LL;
  v2 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  for ( i = ndisMiniDriverList; i && i->MiniportDriverContext != a1; i = i->NextDriver )
    ;
  KeReleaseSpinLock(&ndisMiniDriverListLock, v2);
  if ( i )
    return i->HookDriverHandle;
  else
    return 0LL;
}
