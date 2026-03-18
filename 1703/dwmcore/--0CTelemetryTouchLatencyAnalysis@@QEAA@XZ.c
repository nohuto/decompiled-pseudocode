/*
 * XREFs of ??0CTelemetryTouchLatencyAnalysis@@QEAA@XZ @ 0x1800C3058
 * Callers:
 *     ??0CPartitionVerticalBlankScheduler@@AEAA@PEAVCKernelTransport@@PEAVCConnection@@PEAVCoRenderHost@@@Z @ 0x180069120 (--0CPartitionVerticalBlankScheduler@@AEAA@PEAVCKernelTransport@@PEAVCConnection@@PEAVCoRenderHos.c)
 *     ??0CIndependentRefreshRateScheduler@@AEAA@PEAVCKernelTransport@@PEAVCConnection@@PEAVCoRenderHost@@@Z @ 0x18013C104 (--0CIndependentRefreshRateScheduler@@AEAA@PEAVCKernelTransport@@PEAVCConnection@@PEAVCoRenderHos.c)
 * Callees:
 *     memset_0 @ 0x1800D539C (memset_0.c)
 */

CTelemetryTouchLatencyAnalysis *__fastcall CTelemetryTouchLatencyAnalysis::CTelemetryTouchLatencyAnalysis(
        CTelemetryTouchLatencyAnalysis *this)
{
  __int64 v2; // rdx
  _OWORD *v3; // rax
  _OWORD *v4; // rcx
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  bool v12; // sf
  LONGLONG v13; // rdx
  double v14; // xmm0_8
  CTelemetryTouchLatencyAnalysis *result; // rax
  _BYTE v16[264]; // [rsp+20h] [rbp-108h] BYREF

  *((_QWORD *)this + 286) = 0LL;
  memset_0((char *)this + 8, 0, 0x7D0uLL);
  memset_0(v16, 0, 0x100uLL);
  v2 = 2LL;
  v3 = (_OWORD *)((char *)this + 2008);
  v4 = v16;
  do
  {
    v5 = v4[1];
    *v3 = *v4;
    v6 = v4[2];
    v3[1] = v5;
    v7 = v4[3];
    v3[2] = v6;
    v8 = v4[4];
    v3[3] = v7;
    v9 = v4[5];
    v3[4] = v8;
    v10 = v4[6];
    v3[5] = v9;
    v11 = v4[7];
    v4 += 8;
    v3[6] = v10;
    v3 += 8;
    *(v3 - 1) = v11;
    --v2;
  }
  while ( v2 );
  v12 = g_qpcFrequency.QuadPart / 1000 < 0;
  v13 = g_qpcFrequency.QuadPart / 1000;
  *((_QWORD *)this + 283) = g_qpcFrequency.QuadPart / 1000;
  v14 = (double)(int)v13;
  if ( v12 )
    v14 = v14 + 1.844674407370955e19;
  result = this;
  *((double *)this + 284) = v14 / 1000.0;
  return result;
}
