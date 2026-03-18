/*
 * XREFs of GetDPIServerInfoForDpiUnsafe @ 0x1C010352C
 * Callers:
 *     GetScaledLogFontForDpi @ 0x1C00454B4 (GetScaledLogFontForDpi.c)
 *     GetDPIServerInfoForDpi @ 0x1C010350C (GetDPIServerInfoForDpi.c)
 * Callees:
 *     GetSystemDpiServerInfo @ 0x1C010355C (GetSystemDpiServerInfo.c)
 *     ?EnsureKMDpiMetricsCacheNode@@YAPEAUtagDpiKMMetricsCacheNode@@H@Z @ 0x1C01C3BE4 (-EnsureKMDpiMetricsCacheNode@@YAPEAUtagDpiKMMetricsCacheNode@@H@Z.c)
 *     ?RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1C01C3D50 (-RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z.c)
 */

struct tagDpiKMMetricsCacheNode *__fastcall GetDPIServerInfoForDpiUnsafe(int a1)
{
  struct tagDpiKMMetricsCacheNode *result; // rax
  struct tagDpiKMMetricsCacheNode *v2; // rbx

  if ( a1 == *(unsigned __int16 *)(gpsi + 8678LL) )
    return (struct tagDpiKMMetricsCacheNode *)GetSystemDpiServerInfo();
  if ( a1 == 96 )
    return (struct tagDpiKMMetricsCacheNode *)Get96DpiServerInfo();
  result = EnsureKMDpiMetricsCacheNode(a1);
  v2 = result;
  if ( result )
  {
    RefreshDpiKMMetricsCacheNode(result);
    return (struct tagDpiKMMetricsCacheNode *)((char *)v2 + 16);
  }
  return result;
}
