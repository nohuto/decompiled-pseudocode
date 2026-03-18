/*
 * XREFs of ?CheckBlockList@DXGADAPTER@@AEAAXIIPEBGW4_QAI_DRIVERVERSION@@@Z @ 0x1C01E9174
 * Callers:
 *     ?InitializeDriverWorkarounds@DXGADAPTER@@AEAAXXZ @ 0x1C014AEDC (-InitializeDriverWorkarounds@DXGADAPTER@@AEAAXXZ.c)
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?CheckKernelBlockList@DXGADAPTER@@AEAAJIIPEBGW4_QAI_DRIVERVERSION@@@Z @ 0x1C01E9254 (-CheckKernelBlockList@DXGADAPTER@@AEAAJIIPEBGW4_QAI_DRIVERVERSION@@@Z.c)
 *     ?CheckRuntimeBlockList@DXGADAPTER@@AEAAJIIPEBGW4_QAI_DRIVERVERSION@@@Z @ 0x1C01E9474 (-CheckRuntimeBlockList@DXGADAPTER@@AEAAJIIPEBGW4_QAI_DRIVERVERSION@@@Z.c)
 */

void __fastcall DXGADAPTER::CheckBlockList(
        DXGADAPTER *this,
        unsigned int a2,
        __int64 a3,
        const unsigned __int16 *a4,
        enum _QAI_DRIVERVERSION a5)
{
  unsigned int v6; // esi
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // [rsp+30h] [rbp-18h] BYREF
  __int64 v12; // [rsp+38h] [rbp-10h]

  v12 = 0LL;
  v6 = a3;
  v11 = 8015;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 8015);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v11, 8015);
  DXGADAPTER::CheckKernelBlockList(this, a2, v6, a4, a5);
  DXGADAPTER::CheckRuntimeBlockList(this, a2, v6, a4, a5);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v11);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v9, &EventProfilerExit, v10, v11);
}
