/*
 * XREFs of ?PerformClockCalibration@ADAPTER_RENDER@@QEAAXXZ @ 0x1C00234B0
 * Callers:
 *     ?DxgkpCalibrateGpuTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C00252D0 (-DxgkpCalibrateGpuTimerDpc@@YAXPEAU_KDPC@@PEAX11@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_pqqxxx @ 0x1C00235D0 (Template_pqqxxx.c)
 *     ?DdiCalibrateGpuClock@ADAPTER_RENDER@@QEAAJIIPEAU_DXGK_GPUCLOCKDATA@@@Z @ 0x1C00236BC (-DdiCalibrateGpuClock@ADAPTER_RENDER@@QEAAJIIPEAU_DXGK_GPUCLOCKDATA@@@Z.c)
 */

void __fastcall ADAPTER_RENDER::PerformClockCalibration(ADAPTER_RENDER *this)
{
  __int64 v1; // rdx
  __int64 i; // rbx
  __int64 v4; // rax
  unsigned int v5; // esi
  unsigned int j; // ebp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  _DXGK_GPUCLOCKDATA v12; // [rsp+50h] [rbp-28h] BYREF

  v1 = *((_QWORD *)this + 2);
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v1 + 248); i = (unsigned int)(i + 1) )
  {
    v4 = *(_QWORD *)(v1 + 2192);
    v5 = 0;
    for ( j = *(unsigned __int16 *)(v4 + 48 * i); v5 < j; ++v5 )
    {
      if ( !*(_BYTE *)(*((_QWORD *)this + 2) + 186LL) )
      {
        memset(&v12, 0, 24);
        if ( (unsigned int)ADAPTER_RENDER::DdiCalibrateGpuClock(this, v5, i, &v12) )
        {
          v11 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
          *(_QWORD *)(v11 + 24) = 3457LL;
          WdLogEvent5_WdAssertion(v11);
        }
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          Template_pqqxxx(
            v8,
            v7,
            v9,
            *((_QWORD *)this + 2),
            v5,
            i,
            v12.GpuFrequency,
            v12.GpuClockCounter,
            v12.CpuClockCounter);
      }
    }
    v1 = *((_QWORD *)this + 2);
  }
}
