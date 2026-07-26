/*
 * XREFs of ?ndisMpHookNmrClientDetachProvider@@YAJPEAX@Z @ 0x1C007C500
 * Callers:
 *     <none>
 * Callees:
 *     ?Deregister@MINIPORT_HOOK_DRIVER@@QEAAPEAXXZ @ 0x1C00FB7A4 (-Deregister@MINIPORT_HOOK_DRIVER@@QEAAPEAXXZ.c)
 */

__int64 __fastcall ndisMpHookNmrClientDetachProvider(void *a1)
{
  struct _WORK_QUEUE_ITEM *v2; // rcx

  if ( (_DWORD)a1 != 1 )
    return 3221225485LL;
  if ( KeGetCurrentIrql() )
  {
    v2 = (struct _WORK_QUEUE_ITEM *)((char *)g_MiniportHookDrivers + 200);
    if ( !_InterlockedCompareExchange((volatile signed __int32 *)g_MiniportHookDrivers + 62, 1, 0) )
      ExQueueWorkItem(v2, NormalWorkQueue);
    return 259LL;
  }
  else
  {
    MINIPORT_HOOK_DRIVER::Deregister((struct MINIPORT_HOOK_DRIVER *)((char *)g_MiniportHookDrivers + 128));
    return 0LL;
  }
}
