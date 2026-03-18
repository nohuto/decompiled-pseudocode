/*
 * XREFs of ?BucketLatenciesByPerformance@CTelemetryTouchLatencyAnalysis@@AEAAJPEBUTouchScenarioInfo@1@_N@Z @ 0x18012B264
 * Callers:
 *     ?BucketInteractionByPerformance@CTelemetryTouchLatencyAnalysis@@AEAAJPEBUTouchScenarioInfo@1@@Z @ 0x18012B128 (-BucketInteractionByPerformance@CTelemetryTouchLatencyAnalysis@@AEAAJPEBUTouchScenarioInfo@1@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?BucketLatencyByPerformance@CTelemetryTouchLatencyAnalysis@@CAJGPEBGGPEAGM@Z @ 0x18012B49C (-BucketLatencyByPerformance@CTelemetryTouchLatencyAnalysis@@CAJGPEBGGPEAGM@Z.c)
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
  unsigned int v16; // ecx
  unsigned __int16 *v17; // r13
  unsigned __int16 v18; // r8
  unsigned __int16 v19; // r8
  unsigned __int16 v20; // r8
  unsigned __int16 *v21; // [rsp+38h] [rbp-39h]
  unsigned __int16 v22[2]; // [rsp+40h] [rbp-31h] BYREF
  int v23; // [rsp+44h] [rbp-2Dh]
  __int16 v24; // [rsp+48h] [rbp-29h]
  unsigned __int16 v25[2]; // [rsp+50h] [rbp-21h] BYREF
  int v26; // [rsp+54h] [rbp-1Dh]
  __int16 v27; // [rsp+58h] [rbp-19h]
  unsigned __int16 v28[2]; // [rsp+60h] [rbp-11h] BYREF
  int v29; // [rsp+64h] [rbp-Dh]
  __int16 v30; // [rsp+68h] [rbp-9h]
  _DWORD v31[2]; // [rsp+70h] [rbp-1h] BYREF
  __int16 v32; // [rsp+78h] [rbp+7h]
  unsigned __int16 v33[2]; // [rsp+80h] [rbp+Fh] BYREF
  int v34; // [rsp+84h] [rbp+13h]
  __int16 v35; // [rsp+88h] [rbp+17h]
  unsigned __int16 v36[2]; // [rsp+90h] [rbp+1Fh] BYREF
  int v37; // [rsp+94h] [rbp+23h]
  __int16 v38; // [rsp+98h] [rbp+27h]

  result = a2 == 0LL ? 0x80004003 : 0;
  if ( a2 && (a3 || *((_WORD *)a2 + 48) > 1u) )
  {
    v5 = (float)(int)(*((_QWORD *)this + 276) / 0x2710uLL);
    *(_DWORD *)v22 = 196610;
    v23 = 786438;
    v24 = -1;
    *(_DWORD *)v28 = 196610;
    v29 = 327684;
    v30 = -1;
    *(_DWORD *)v25 = 131073000;
    v26 = 655365000;
    v27 = -1;
    v31[0] = 65536500;
    v31[1] = 393219000;
    v32 = -1;
    *(_DWORD *)v33 = 327683;
    v34 = 1048586;
    v35 = -1;
    *(_DWORD *)v36 = 131073;
    v37 = 262147;
    v38 = -1;
    if ( a3 )
    {
      LOWORD(v6) = *((_WORD *)a2 + 65);
      v7 = v22;
      LOWORD(v8) = *((_WORD *)a2 + 66);
      v9 = v25;
      LOWORD(v10) = *((_WORD *)a2 + 67);
      v11 = 2004LL;
      LOWORD(v12) = *((_WORD *)a2 + 68);
      v13 = 2024LL;
      v14 = 2034LL;
      v15 = 2014LL;
    }
    else
    {
      v7 = v28;
      v16 = *((unsigned __int16 *)a2 + 48) - 1;
      v9 = (unsigned __int16 *)v31;
      v6 = *((_DWORD *)a2 + 25) / v16;
      v8 = *((_DWORD *)a2 + 26) / v16;
      v10 = *((_DWORD *)a2 + 27) / v16;
      v12 = *((_DWORD *)a2 + 28) / v16;
      v11 = 2044LL;
      v13 = 2064LL;
      v14 = 2074LL;
      v15 = 2054LL;
    }
    v21 = (unsigned __int16 *)((char *)this + v13);
    v17 = (unsigned __int16 *)((char *)this + v14);
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
                 v18,
                 (unsigned __int16 *)((char *)this + v15),
                 0.0);
      if ( (int)result >= 0 )
      {
        result = CTelemetryTouchLatencyAnalysis::BucketLatencyByPerformance(v10, v33, v19, v21, 0.0);
        if ( (int)result >= 0 )
          return CTelemetryTouchLatencyAnalysis::BucketLatencyByPerformance(v12, v36, v20, v17, v5);
      }
    }
  }
  return result;
}
