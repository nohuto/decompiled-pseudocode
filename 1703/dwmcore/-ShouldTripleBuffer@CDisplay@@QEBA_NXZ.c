/*
 * XREFs of ?ShouldTripleBuffer@CDisplay@@QEBA_NXZ @ 0x1800B79F0
 * Callers:
 *     ?CalcSwapChainParameters@CDisplay@@QEBAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCD3DDeviceLevel1@@PEAUDXGI_SWAP_CHAIN_DESC@@PEAW4DXGI_COLOR_SPACE_TYPE@@PEAIPEA_N@Z @ 0x1800B7A48 (-CalcSwapChainParameters@CDisplay@@QEBAJU-$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBV.c)
 * Callees:
 *     ?IsWarpAdapterLuid@CDisplayManager@@QEAA_NU_LUID@@@Z @ 0x18007EB98 (-IsWarpAdapterLuid@CDisplayManager@@QEAA_NU_LUID@@@Z.c)
 *     ?IsPrimary@CDisplay@@QEBA_NXZ @ 0x1800B80F0 (-IsPrimary@CDisplay@@QEBA_NXZ.c)
 */

char __fastcall CDisplay::ShouldTripleBuffer(struct _LUID *this)
{
  char v2; // cl

  if ( CDisplayManager::IsWarpAdapterLuid((CDisplayManager *)this, this[28])
    || g_pComposition && *((_QWORD *)g_pComposition + 71) && !CDisplay::IsPrimary((CDisplay *)this) )
  {
    return 0;
  }
  v2 = 1;
  if ( OSInfo::ProductType - 2 <= 1 )
    return 0;
  return v2;
}
