/*
 * XREFs of ?IsDisplayPlaneConfigQueueEmpty@@YAEPEAU_DISPLAY_PLANE_CONFIG_QUEUE@@@Z @ 0x1C00A6E44
 * Callers:
 *     ?ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C00E9148 (-ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ.c)
 *     ?GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z @ 0x1C016C758 (-GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsDisplayPlaneConfigQueueEmpty(
        struct _DISPLAY_PLANE_CONFIG_QUEUE *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax

  if ( *(_DWORD *)a1 == -1 && *((_DWORD *)a1 + 1) != -1 )
  {
    v6 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v6 + 24) = 7370LL;
    WdLogEvent5_WdAssertion(v6);
  }
  return *(_DWORD *)a1 == -1;
}
