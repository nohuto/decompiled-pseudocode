/*
 * XREFs of ?BucketInteractionByPerformance@CTelemetryTouchLatencyAnalysis@@AEAAJPEBUTouchScenarioInfo@1@@Z @ 0x18012B128
 * Callers:
 *     ?AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@I@Z @ 0x18012A448 (-AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@I@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?BucketLatenciesByPerformance@CTelemetryTouchLatencyAnalysis@@AEAAJPEBUTouchScenarioInfo@1@_N@Z @ 0x18012B264 (-BucketLatenciesByPerformance@CTelemetryTouchLatencyAnalysis@@AEAAJPEBUTouchScenarioInfo@1@_N@Z.c)
 */

__int64 __fastcall CTelemetryTouchLatencyAnalysis::BucketInteractionByPerformance(
        CTelemetryTouchLatencyAnalysis *this,
        const struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *a2)
{
  __int64 result; // rax
  int v5; // eax
  _DWORD *v6; // rcx
  unsigned int v7; // edx
  unsigned int *v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  _DWORD *v11; // rcx
  unsigned int v12; // edx
  unsigned int *v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  _DWORD *v16; // rcx
  unsigned int v17; // edx
  unsigned int *v18; // rcx
  __int64 v19; // rax
  _BYTE v20[16]; // [rsp+20h] [rbp-28h] BYREF
  int v21; // [rsp+30h] [rbp-18h]

  if ( !a2 )
    return 2147500035LL;
  v5 = 0;
  v6 = v20;
  do
    *v6++ = v5++;
  while ( v5 < 4 );
  v7 = *((unsigned __int16 *)a2 + 83);
  v8 = (unsigned int *)v20;
  v21 = -1;
  v9 = 0LL;
  while ( v7 > *v8 )
  {
    v9 = (unsigned int)(v9 + 1);
    ++v8;
    if ( (unsigned int)v9 >= 5 )
      goto LABEL_10;
  }
  ++*((_WORD *)this + v9 + 1042);
LABEL_10:
  v10 = 0;
  v11 = v20;
  do
    *v11++ = v10++;
  while ( v10 < 4 );
  v12 = *((unsigned __int16 *)a2 + 70);
  v13 = (unsigned int *)v20;
  v21 = -1;
  v14 = 0LL;
  while ( v12 > *v13 )
  {
    v14 = (unsigned int)(v14 + 1);
    ++v13;
    if ( (unsigned int)v14 >= 5 )
      goto LABEL_17;
  }
  ++*((_WORD *)this + v14 + 1047);
LABEL_17:
  v15 = 0;
  v16 = v20;
  do
    *v16++ = v15++;
  while ( v15 < 4 );
  v17 = *((unsigned __int16 *)a2 + 71);
  v18 = (unsigned int *)v20;
  v21 = -1;
  v19 = 0LL;
  while ( v17 > *v18 )
  {
    v19 = (unsigned int)(v19 + 1);
    ++v18;
    if ( (unsigned int)v19 >= 5 )
      goto LABEL_24;
  }
  ++*((_WORD *)this + v19 + 1052);
LABEL_24:
  result = CTelemetryTouchLatencyAnalysis::BucketLatenciesByPerformance(this, a2, 1);
  if ( (int)result >= 0 )
    return CTelemetryTouchLatencyAnalysis::BucketLatenciesByPerformance(this, a2, 0);
  return result;
}
