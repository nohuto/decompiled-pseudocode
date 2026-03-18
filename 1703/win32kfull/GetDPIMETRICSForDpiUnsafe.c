/*
 * XREFs of GetDPIMETRICSForDpiUnsafe @ 0x1C0044284
 * Callers:
 *     GetDPIMETRICSForDpi @ 0x1C0044264 (GetDPIMETRICSForDpi.c)
 *     GetScaledLogFontForDpi @ 0x1C00454B4 (GetScaledLogFontForDpi.c)
 * Callees:
 *     ?EnsureKMDpiMetricsCacheNode@@YAPEAUtagDpiKMMetricsCacheNode@@H@Z @ 0x1C01C3BE4 (-EnsureKMDpiMetricsCacheNode@@YAPEAUtagDpiKMMetricsCacheNode@@H@Z.c)
 *     ?RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1C01C3D50 (-RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z.c)
 */

struct tagDpiKMMetricsCacheNode *__fastcall GetDPIMETRICSForDpiUnsafe(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct tagDpiKMMetricsCacheNode *result; // rax
  struct tagDpiKMMetricsCacheNode *v5; // rbx
  __int64 v6; // [rsp+20h] [rbp-8h]

  if ( (_DWORD)a1 == *(unsigned __int16 *)(gpsi + 8678LL) )
    return (struct tagDpiKMMetricsCacheNode *)GetSessionSystemDpiMetrics(a1, gpsi, a3, a4, v6);
  if ( (_DWORD)a1 == 96 )
    return (struct tagDpiKMMetricsCacheNode *)Get96DpiMetrics();
  result = EnsureKMDpiMetricsCacheNode(a1);
  v5 = result;
  if ( result )
  {
    RefreshDpiKMMetricsCacheNode(result);
    return (struct tagDpiKMMetricsCacheNode *)((char *)v5 + 144);
  }
  return result;
}
