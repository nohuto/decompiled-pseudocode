/*
 * XREFs of ?IsPostCompositionConfigQueueEmpty@@YAEPEAU_POST_COMPOSITION_CONFIG_QUEUE@@@Z @ 0x1C010F320
 * Callers:
 *     ?GetLatestPostCompositionConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_POST_COMPOSITION_CONFIG@@XZ @ 0x1C010DCD8 (-GetLatestPostCompositionConfigInternal@DISPLAY_SOURCE@@AEAAPEAU_POST_COMPOSITION_CONFIG@@XZ.c)
 *     ?ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C0150E84 (-ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsPostCompositionConfigQueueEmpty(struct _POST_COMPOSITION_CONFIG_QUEUE *a1)
{
  bool v2; // zf
  int v3; // eax
  __int64 v5; // rax

  v2 = *(_DWORD *)a1 == -1;
  if ( *(_DWORD *)a1 == -1 )
  {
    v3 = -1;
    if ( *((_DWORD *)a1 + 1) != -1 )
    {
      v5 = WdLogNewEntry5_WdAssertion(a1);
      *(_QWORD *)(v5 + 24) = 8056LL;
      WdLogEvent5_WdAssertion(v5);
      v3 = *(_DWORD *)a1;
    }
    return v3 == -1;
  }
  return v2;
}
