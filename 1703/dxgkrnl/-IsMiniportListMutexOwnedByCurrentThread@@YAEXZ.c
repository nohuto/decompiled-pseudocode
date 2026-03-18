/*
 * XREFs of ?IsMiniportListMutexOwnedByCurrentThread@@YAEXZ @ 0x1C0001230
 * Callers:
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C008C2A0 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     DpiMiracastFindDisplayAdapterFdo @ 0x1C01C7500 (DpiMiracastFindDisplayAdapterFdo.c)
 *     DpiMiracastSendSyncUserModeRequest @ 0x1C01C8288 (DpiMiracastSendSyncUserModeRequest.c)
 *     ?DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LOCK@@PEAPEAU_FDO_CONTEXT@@@Z @ 0x1C01CB080 (-DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LO.c)
 * Callees:
 *     <none>
 */

char IsMiniportListMutexOwnedByCurrentThread(void)
{
  struct _KTHREAD *CurrentThread; // rbx
  LONG StateMutex; // eax
  char v2; // cl

  CurrentThread = KeGetCurrentThread();
  StateMutex = KeReadStateMutex(Mutex);
  v2 = 1;
  if ( StateMutex == 1
    || CurrentThread != (struct _KTHREAD *)_InterlockedCompareExchange64(
                                             &qword_1C006FA08,
                                             (signed __int64)CurrentThread,
                                             (signed __int64)CurrentThread) )
  {
    return 0;
  }
  return v2;
}
