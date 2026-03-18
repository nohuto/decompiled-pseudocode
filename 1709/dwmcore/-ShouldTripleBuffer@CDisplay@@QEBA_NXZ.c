/*
 * XREFs of ?ShouldTripleBuffer@CDisplay@@QEBA_NXZ @ 0x180077D44
 * Callers:
 *     ?LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z @ 0x180076FCC (-LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z.c)
 *     ?CalcSwapChainParameters@CDisplay@@QEBAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCD3DDeviceLevel1@@PEAUDXGI_SWAP_CHAIN_DESC@@PEAW4DXGI_COLOR_SPACE_TYPE@@PEAIPEA_N@Z @ 0x180191118 (-CalcSwapChainParameters@CDisplay@@QEBAJU-$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBV.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800106C4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?IsPrimary@CDisplay@@QEBA_NXZ @ 0x180077F40 (-IsPrimary@CDisplay@@QEBA_NXZ.c)
 *     ?IsWarpAdapterLuid@CDXGIEnumeration@@QEBA_NU_LUID@@@Z @ 0x18008C458 (-IsWarpAdapterLuid@CDXGIEnumeration@@QEBA_NU_LUID@@@Z.c)
 */

char __fastcall CDisplay::ShouldTripleBuffer(CDisplay *this)
{
  struct _LUID v1; // rbx
  bool IsWarpAdapterLuid; // di
  char v4; // cl
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = (struct _LUID)*((_QWORD *)this + 28);
  IsWarpAdapterLuid = 0;
  v6 = &g_DisplayManager;
  EnterCriticalSection(&g_DisplayManager);
  if ( qword_18026EEB0 )
    IsWarpAdapterLuid = CDXGIEnumeration::IsWarpAdapterLuid(qword_18026EEB0, v1);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v6);
  if ( IsWarpAdapterLuid || g_pComposition && *((_QWORD *)g_pComposition + 67) && !CDisplay::IsPrimary(this) )
    return 0;
  v4 = 1;
  if ( OSInfo::ProductType - 2 <= 1 )
    return 0;
  return v4;
}
