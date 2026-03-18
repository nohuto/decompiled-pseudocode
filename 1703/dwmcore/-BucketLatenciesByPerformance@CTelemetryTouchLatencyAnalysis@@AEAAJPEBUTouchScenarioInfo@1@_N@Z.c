/*
 * XREFs of ?BucketLatenciesByPerformance@CTelemetryTouchLatencyAnalysis@@AEAAJPEBUTouchScenarioInfo@1@_N@Z @ 0x180027630
 * Callers:
 *     ?BucketInteractionByPerformance@CTelemetryTouchLatencyAnalysis@@AEAAJPEBUTouchScenarioInfo@1@@Z @ 0x180027828 (-BucketInteractionByPerformance@CTelemetryTouchLatencyAnalysis@@AEAAJPEBUTouchScenarioInfo@1@@Z.c)
 * Callees:
 *     ?BucketLatencyByPerformance@CTelemetryTouchLatencyAnalysis@@CAJGPEBGGPEAGM@Z @ 0x180028A24 (-BucketLatencyByPerformance@CTelemetryTouchLatencyAnalysis@@CAJGPEBGGPEAGM@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

__int64 __fastcall CTelemetryTouchLatencyAnalysis::BucketLatenciesByPerformance(
        CTelemetryTouchLatencyAnalysis *this,
        const struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *a2,
        char a3)
{
  __int64 result; // rax
  float v5; // xmm2_4
  int v6; // r10d
  unsigned __int16 *v7; // r8
  int v8; // r12d
  unsigned __int16 *v9; // r14
  int v10; // esi
  __int64 v11; // rax
  int v12; // edi
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r15
  unsigned __int16 *v16; // r13
  unsigned __int16 v17; // r8
  unsigned __int16 v18; // r8
  unsigned __int16 v19; // r8
  unsigned int v20; // ecx
  unsigned __int16 *v21; // [rsp+38h] [rbp-39h]
  unsigned __int16 v22[2]; // [rsp+40h] [rbp-31h] BYREF
  int v23; // [rsp+44h] [rbp-2Dh]
  __int16 v24; // [rsp+48h] [rbp-29h]
  unsigned __int16 v25[2]; // [rsp+50h] [rbp-21h] BYREF
  int v26; // [rsp+54h] [rbp-1Dh]
  __int16 v27; // [rsp+58h] [rbp-19h]
  _DWORD v28[2]; // [rsp+60h] [rbp-11h] BYREF
  __int16 v29; // [rsp+68h] [rbp-9h]
  _DWORD v30[2]; // [rsp+70h] [rbp-1h] BYREF
  __int16 v31; // [rsp+78h] [rbp+7h]
  unsigned __int16 v32[2]; // [rsp+80h] [rbp+Fh] BYREF
  int v33; // [rsp+84h] [rbp+13h]
  __int16 v34; // [rsp+88h] [rbp+17h]
  unsigned __int16 v35[2]; // [rsp+90h] [rbp+1Fh] BYREF
  int v36; // [rsp+94h] [rbp+23h]
  __int16 v37; // [rsp+98h] [rbp+27h]

  result = a2 == 0LL ? 0x80004003 : 0;
  if ( a2 && (a3 || *((_WORD *)a2 + 48) > 1u) )
  {
    v5 = (float)(int)(*((_QWORD *)this + 286) / 0x2710uLL);
    *(_DWORD *)v22 = 196610;
    v23 = 786438;
    v24 = -1;
    v28[0] = 196610;
    v28[1] = 327684;
    v29 = -1;
    *(_DWORD *)v25 = 131073000;
    v26 = 655365000;
    v27 = -1;
    v30[0] = 65536500;
    v30[1] = 393219000;
    v31 = -1;
    *(_DWORD *)v32 = 327683;
    v33 = 1048586;
    v34 = -1;
    *(_DWORD *)v35 = 131073;
    v36 = 262147;
    v37 = -1;
    if ( a3 )
    {
      LOWORD(v6) = *((_WORD *)a2 + 65);
      v7 = v22;
      LOWORD(v8) = *((_WORD *)a2 + 66);
      v9 = v25;
      LOWORD(v10) = *((_WORD *)a2 + 67);
      v11 = 2084LL;
      LOWORD(v12) = *((_WORD *)a2 + 68);
      v13 = 2104LL;
      v14 = 2114LL;
      v15 = 2094LL;
    }
    else
    {
      v7 = (unsigned __int16 *)v28;
      v20 = *((unsigned __int16 *)a2 + 48) - 1;
      v9 = (unsigned __int16 *)v30;
      v6 = *((_DWORD *)a2 + 25) / v20;
      v8 = *((_DWORD *)a2 + 26) / v20;
      v10 = *((_DWORD *)a2 + 27) / v20;
      v12 = *((_DWORD *)a2 + 28) / v20;
      v11 = 2124LL;
      v13 = 2144LL;
      v14 = 2154LL;
      v15 = 2134LL;
    }
    v21 = (unsigned __int16 *)((char *)this + v13);
    v16 = (unsigned __int16 *)((char *)this + v14);
    result = CTelemetryTouchLatencyAnalysis::BucketLatencyByPerformance(
               v6,
               v7,
               (unsigned __int16)v7,
               (unsigned __int16 *)((char *)this + v11),
               v5);
    if ( (int)result >= 0 )
    {
      result = CTelemetryTouchLatencyAnalysis::BucketLatencyByPerformance(
                 v8,
                 v9,
                 v17,
                 (unsigned __int16 *)((char *)this + v15),
                 0.0);
      if ( (int)result >= 0 )
      {
        result = CTelemetryTouchLatencyAnalysis::BucketLatencyByPerformance(v10, v32, v18, v21, 0.0);
        if ( (int)result >= 0 )
          return CTelemetryTouchLatencyAnalysis::BucketLatencyByPerformance(v12, v35, v19, v16, v5);
      }
    }
  }
  return result;
}
