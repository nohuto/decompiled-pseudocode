/*
 * XREFs of DestroyDpiMetricsCache @ 0x1C011CA50
 * Callers:
 *     <none>
 * Callees:
 *     ?ClearKMDpiMetricsCacheNodeDPIMETRICS@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1C01C3B24 (-ClearKMDpiMetricsCacheNodeDPIMETRICS@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z.c)
 *     ?ClearKMDpiMetricsCacheNodeDPISERVERINFO@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1C01C3B98 (-ClearKMDpiMetricsCacheNodeDPISERVERINFO@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 DestroyDpiMetricsCache()
{
  _QWORD *v0; // rcx
  __int64 v1; // rdi
  __int64 result; // rax
  struct tagDpiKMMetricsCacheNode *v3; // rbx

  v0 = (_QWORD *)gpDpiKernelModeMetricsCache;
  v1 = gpDpiKernelModeMetricsCache;
  if ( gpDpiKernelModeMetricsCache )
  {
    do
    {
      v3 = (struct tagDpiKMMetricsCacheNode *)v1;
      v1 = *(_QWORD *)(v1 + 8);
      ClearKMDpiMetricsCacheNodeDPIMETRICS(v3);
      ClearKMDpiMetricsCacheNodeDPISERVERINFO(v3);
      Win32FreePool(v3);
    }
    while ( v1 );
    v0 = (_QWORD *)gpDpiKernelModeMetricsCache;
  }
  result = gpDpiKernelModeMetricsMRUNode;
  gpDpiKernelModeMetricsMRUNode = 0LL;
  *v0 = 0LL;
  return result;
}
