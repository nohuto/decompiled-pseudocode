/*
 * XREFs of ?DestroyDpiMetricsCache@@YAXXZ @ 0x1C0082460
 * Callers:
 *     <none>
 * Callees:
 *     ?ClearDPISERVERINFO@@YAXPEAUtagDPISERVERINFO@@@Z @ 0x1C0082568 (-ClearDPISERVERINFO@@YAXPEAUtagDPISERVERINFO@@@Z.c)
 *     InvalidateKMDpiMetricsCacheDPIMETRICS @ 0x1C0082EEC (InvalidateKMDpiMetricsCacheDPIMETRICS.c)
 */

// write access to const memory has been detected, the output may be wrong!
void DestroyDpiMetricsCache(void)
{
  __int64 v0; // rbx
  __int64 v1; // rdi
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rbx
  __int64 v5; // rcx

  InvalidateKMDpiMetricsCacheDPIMETRICS();
  v0 = 0LL;
  v1 = 18LL;
  do
  {
    ClearDPISERVERINFO((struct tagDPISERVERINFO *)(v0 + gpsi + 5096LL));
    v0 += 104LL;
    --v1;
  }
  while ( v1 );
  v4 = gpDpiKernelModeMetricsCache;
  while ( v4 )
  {
    v5 = v4;
    v4 = *(_QWORD *)(v4 + 8);
    Win32FreePool(v5, v2, v3);
  }
  gpDpiKernelModeMetricsMRUNode = 0LL;
  gpDpiKernelModeMetricsCache = 0LL;
}
