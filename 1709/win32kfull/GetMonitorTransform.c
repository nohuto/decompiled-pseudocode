/*
 * XREFs of GetMonitorTransform @ 0x1C005D640
 * Callers:
 *     UpdateTopLevelWindowDPITransform @ 0x1C005D5D8 (UpdateTopLevelWindowDPITransform.c)
 *     GetNewMonitor @ 0x1C00644F0 (GetNewMonitor.c)
 *     TransformVectorWithInputTargetPrecedence @ 0x1C0111504 (TransformVectorWithInputTargetPrecedence.c)
 *     DetectNewMonitor @ 0x1C01C3688 (DetectNewMonitor.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x1C005EF84 (GetMonitorRectForDpi.c)
 */

__int64 __fastcall GetMonitorTransform(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int16 v4; // bx
  __int64 v6; // rax
  __int128 *MonitorRectForDpi; // rax
  __int64 v8; // rcx
  unsigned __int16 v9; // r8
  __int64 v10; // rdx
  __int64 result; // rax
  float v12; // xmm4_4
  float v13; // xmm0_4
  __int128 v14; // [rsp+20h] [rbp-18h] BYREF

  v4 = (*(_DWORD *)(a2 + 368) >> 8) & 0x1FF;
  if ( !a1 )
    return 0LL;
  if ( !v4 )
    return 0LL;
  v6 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 432LL);
  if ( !v6 )
    return 0LL;
  if ( (*(_DWORD *)(**(_QWORD **)(v6 + 8) + 52LL) & 1) == 0 )
    return 0LL;
  MonitorRectForDpi = (__int128 *)GetMonitorRectForDpi(&v14, a1, v4);
  v8 = *(_QWORD *)(a1 + 40);
  v9 = *(_WORD *)(v8 + 64);
  v14 = *MonitorRectForDpi;
  v10 = v14;
  if ( v9 == v4 && *(_QWORD *)(v8 + 28) == (_QWORD)v14 )
    return 0LL;
  v12 = (float)v4;
  *(_DWORD *)(a3 + 40) = 1065353216;
  *(_DWORD *)(a3 + 60) = 1065353216;
  v13 = (float)v9 / v12;
  *(float *)a3 = v13;
  *(float *)(a3 + 20) = v13;
  result = 1LL;
  *(float *)(a3 + 48) = (float)*(int *)(*(_QWORD *)(a1 + 40) + 28LL)
                      - (float)((float)((float)*(unsigned __int16 *)(*(_QWORD *)(a1 + 40) + 64LL) * (float)(int)v10)
                              / v12);
  *(float *)(a3 + 52) = (float)*(int *)(*(_QWORD *)(a1 + 40) + 32LL)
                      - (float)((float)((float)SHIDWORD(v10) * (float)*(unsigned __int16 *)(*(_QWORD *)(a1 + 40) + 64LL))
                              / v12);
  return result;
}
