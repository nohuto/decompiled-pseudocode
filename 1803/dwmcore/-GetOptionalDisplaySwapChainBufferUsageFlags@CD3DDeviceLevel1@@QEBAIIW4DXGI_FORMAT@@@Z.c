/*
 * XREFs of ?GetOptionalDisplaySwapChainBufferUsageFlags@CD3DDeviceLevel1@@QEBAIIW4DXGI_FORMAT@@@Z @ 0x180076954
 * Callers:
 *     ?CalcSwapChainParameters@CDisplay@@QEBAJU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCD3DDeviceLevel1@@PEAUDXGI_SWAP_CHAIN_DESC@@PEAW4DXGI_COLOR_SPACE_TYPE@@PEAIPEA_N@Z @ 0x1800B76C4 (-CalcSwapChainParameters@CDisplay@@QEBAJU-$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBV.c)
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_SuperWetInk@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800BAB4C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_SuperWetInk@@@wil@@CAX_NW4ReportingK.c)
 *     ?IsGPUWhitelisted@CComputeScribbleRenderer@@SA_NPEBVCD3DDeviceLevel1@@@Z @ 0x1800DD20C (-IsGPUWhitelisted@CComputeScribbleRenderer@@SA_NPEBVCD3DDeviceLevel1@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::GetOptionalDisplaySwapChainBufferUsageFlags(
        CD3DDeviceLevel1 *this,
        unsigned int a2,
        unsigned int a3)
{
  unsigned int v3; // ebx
  __int64 v7; // rcx
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  int v12; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  if ( *((int *)this + 189) < 40960 )
  {
    v7 = *((_QWORD *)this + 89);
    if ( *(_DWORD *)(v7 + 296) == 1297040209 )
    {
      v8 = 0;
      if ( *(int *)(v7 + 348) >= 1200 )
        v8 = 16;
      v3 = v8;
    }
  }
  else
  {
    v3 = 16;
  }
  wil::Feature<__WilFeatureTraits_Feature_SuperWetInk>::ReportUsageToService();
  if ( CCommonRegistryData::m_fSuperWetEnabled && *((int *)this + 189) >= 45056 && !*((_QWORD *)this + 79) && a2 > 1 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(**((_QWORD **)this + 81) + 232LL))(
           *((_QWORD *)this + 81),
           a3,
           &v12);
    v10 = 0;
    if ( v9 >= 0 )
      v10 = v12;
    if ( (v10 & 0x2000000) != 0 && CComputeScribbleRenderer::IsGPUWhitelisted(this) )
      v3 |= 0x2000480u;
  }
  return v3;
}
