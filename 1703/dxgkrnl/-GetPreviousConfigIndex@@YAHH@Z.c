/*
 * XREFs of ?GetPreviousConfigIndex@@YAHH@Z @ 0x1C0171A90
 * Callers:
 *     ?ReplaceDisplayedAllocation@ADAPTER_DISPLAY@@QEAAXPEBVDXGALLOCATION@@0@Z @ 0x1C00E6630 (-ReplaceDisplayedAllocation@ADAPTER_DISPLAY@@QEAAXPEBVDXGALLOCATION@@0@Z.c)
 *     ?ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C00E9148 (-ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ.c)
 *     ?RemovePostCompositionConfig@@YAXPEAU_POST_COMPOSITION_CONFIG_QUEUE@@H@Z @ 0x1C01726F0 (-RemovePostCompositionConfig@@YAXPEAU_POST_COMPOSITION_CONFIG_QUEUE@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetPreviousConfigIndex(int a1)
{
  __int64 result; // rax
  unsigned int v3; // ecx

  if ( a1 == -1 )
    return 0LL;
  v3 = a1 - 1;
  result = 1LL;
  if ( a1 )
    return v3;
  return result;
}
