/*
 * XREFs of ?IsDisplayPlaneConfigQueueEmpty@@YAEPEAU_DISPLAY_PLANE_CONFIG_QUEUE@@@Z @ 0x1C00F2C90
 * Callers:
 *     ?GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z @ 0x1C0079478 (-GetLatestPlaneConfigInternal@DISPLAY_SOURCE@@QEAAPEAU_DISPLAY_PLANE_CONFIG@@I@Z.c)
 *     ?ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C00AEE8C (-ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ.c)
 *     ?UpdateIndependentFlipStateUnsafe@DISPLAY_SOURCE@@QEAAXIE@Z @ 0x1C00FE9A8 (-UpdateIndependentFlipStateUnsafe@DISPLAY_SOURCE@@QEAAXIE@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsDisplayPlaneConfigQueueEmpty(struct _DISPLAY_PLANE_CONFIG_QUEUE *a1)
{
  __int64 v3; // rax

  if ( *(_DWORD *)a1 == -1 && *((_DWORD *)a1 + 1) != -1 )
  {
    v3 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v3 + 24) = 8022LL;
    WdLogEvent5_WdAssertion(v3);
  }
  return *(_DWORD *)a1 == -1;
}
