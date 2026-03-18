/*
 * XREFs of ?IsPostCompositionConfigQueueEmpty@@YAEPEAU_POST_COMPOSITION_CONFIG_QUEUE@@@Z @ 0x1C00A6EBC
 * Callers:
 *     ?ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C00E9148 (-ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ.c)
 *     ?GetLatestPostCompositionConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_POST_COMPOSITION_CONFIG@@XZ @ 0x1C0171960 (-GetLatestPostCompositionConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_POST_COMPOSITION_CONFIG@@XZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsPostCompositionConfigQueueEmpty(
        struct _POST_COMPOSITION_CONFIG_QUEUE *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax

  if ( *(_DWORD *)a1 == -1 && *((_DWORD *)a1 + 1) != -1 )
  {
    v6 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v6 + 24) = 7384LL;
    WdLogEvent5_WdAssertion(v6);
  }
  return *(_DWORD *)a1 == -1;
}
