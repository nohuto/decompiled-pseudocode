/*
 * XREFs of ?ReportPerf@MPCPerfCounter@@AEAAX_K@Z @ 0x180057E70
 * Callers:
 *     ?OnInputReport@MPCInputProviderBase@@UEAAJPEAUInputInfo@@@Z @ 0x180049C00 (-OnInputReport@MPCInputProviderBase@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180044860 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?MPCPerfCounter_ReportPerf_@ISMTracing@@QEAAXKIM@Z @ 0x180057F24 (-MPCPerfCounter_ReportPerf_@ISMTracing@@QEAAXKIM@Z.c)
 */

void __fastcall MPCPerfCounter::ReportPerf(MPCPerfCounter *this, __int64 a2)
{
  __int64 v2; // rax
  float v5; // xmm1_4
  bool v6; // zf
  float v7; // xmm1_4
  _DWORD *v8; // rcx
  ISMTracing *v9; // rcx

  v2 = *((_QWORD *)this + 5);
  v5 = (float)(int)v2;
  if ( v2 < 0 )
    v5 = v5 + 1.8446744e19;
  v6 = *((_BYTE *)this + 4) == 0;
  v7 = v5 / *(float *)this;
  *((float *)this + 2) = v7;
  if ( !v6 )
    DbgPrint(
      "MPCPerfCounter::ReportPerf   deviceId=%d, providerType=%d, avgReportsPerSec=%d.%03d\n",
      *((_DWORD *)this + 3),
      *((_DWORD *)this + 4),
      (int)v7,
      (int)(float)((float)(v7 * 1000.0) - (float)(1000 * (int)v7)));
  v8 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v8 && *v8 )
  {
    ISMTracing::Instance();
    ISMTracing::MPCPerfCounter_ReportPerf_(v9, *((_DWORD *)this + 3), *((_DWORD *)this + 4), *((float *)this + 2));
  }
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 4) = a2;
}
