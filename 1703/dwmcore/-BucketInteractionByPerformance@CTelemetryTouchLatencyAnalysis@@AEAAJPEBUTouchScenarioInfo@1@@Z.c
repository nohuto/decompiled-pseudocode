/*
 * XREFs of ?BucketInteractionByPerformance@CTelemetryTouchLatencyAnalysis@@AEAAJPEBUTouchScenarioInfo@1@@Z @ 0x180027828
 * Callers:
 *     ?AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@I@Z @ 0x1800279A0 (-AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@I@Z.c)
 * Callees:
 *     ?BucketLatenciesByPerformance@CTelemetryTouchLatencyAnalysis@@AEAAJPEBUTouchScenarioInfo@1@_N@Z @ 0x180027630 (-BucketLatenciesByPerformance@CTelemetryTouchLatencyAnalysis@@AEAAJPEBUTouchScenarioInfo@1@_N@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

__int64 __fastcall CTelemetryTouchLatencyAnalysis::BucketInteractionByPerformance(
        CTelemetryTouchLatencyAnalysis *this,
        const struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *a2)
{
  int v4; // eax
  _DWORD *v5; // rcx
  unsigned int v6; // edx
  unsigned int *v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  _DWORD *v10; // rcx
  unsigned int v11; // edx
  unsigned int *v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  _DWORD *v15; // rcx
  unsigned int v16; // edx
  unsigned int *v17; // rcx
  __int64 v18; // rax
  __int64 result; // rax
  _BYTE v20[16]; // [rsp+20h] [rbp-28h] BYREF
  int v21; // [rsp+30h] [rbp-18h]

  if ( !a2 )
    return 2147500035LL;
  v4 = 0;
  v5 = v20;
  do
    *v5++ = v4++;
  while ( v4 < 4 );
  v6 = *((unsigned __int16 *)a2 + 85);
  v7 = (unsigned int *)v20;
  v21 = -1;
  v8 = 0LL;
  while ( v6 > *v7 )
  {
    v8 = (unsigned int)(v8 + 1);
    ++v7;
    if ( (unsigned int)v8 >= 5 )
      goto LABEL_7;
  }
  ++*((_WORD *)this + v8 + 1082);
LABEL_7:
  v9 = 0;
  v10 = v20;
  do
    *v10++ = v9++;
  while ( v9 < 4 );
  v11 = *((unsigned __int16 *)a2 + 70);
  v12 = (unsigned int *)v20;
  v21 = -1;
  v13 = 0LL;
  while ( v11 > *v12 )
  {
    v13 = (unsigned int)(v13 + 1);
    ++v12;
    if ( (unsigned int)v13 >= 5 )
      goto LABEL_12;
  }
  ++*((_WORD *)this + v13 + 1087);
LABEL_12:
  v14 = 0;
  v15 = v20;
  do
    *v15++ = v14++;
  while ( v14 < 4 );
  v16 = *((unsigned __int16 *)a2 + 71);
  v17 = (unsigned int *)v20;
  v21 = -1;
  v18 = 0LL;
  while ( v16 > *v17 )
  {
    v18 = (unsigned int)(v18 + 1);
    ++v17;
    if ( (unsigned int)v18 >= 5 )
      goto LABEL_21;
  }
  ++*((_WORD *)this + v18 + 1092);
LABEL_21:
  result = CTelemetryTouchLatencyAnalysis::BucketLatenciesByPerformance(this, a2, 1);
  if ( (int)result >= 0 )
    return CTelemetryTouchLatencyAnalysis::BucketLatenciesByPerformance(this, a2, 0);
  return result;
}
