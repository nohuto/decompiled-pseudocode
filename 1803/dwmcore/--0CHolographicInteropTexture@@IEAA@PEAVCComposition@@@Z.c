/*
 * XREFs of ??0CHolographicInteropTexture@@IEAA@PEAVCComposition@@@Z @ 0x1801FA4F0
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002BD94 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_StereoscopicUwp@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18014AB2C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_StereoscopicUwp@@@wil@@CAX_NW4Report.c)
 */

CHolographicInteropTexture *__fastcall CHolographicInteropTexture::CHolographicInteropTexture(
        CHolographicInteropTexture *this,
        struct CComposition *a2)
{
  unsigned int v3; // edx
  __int64 v4; // rcx
  __int64 v5; // r8
  CHolographicInteropTexture *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CHolographicInteropTexture::`vftable'{for `CResource'};
  *((_QWORD *)this + 7) = &CHolographicInteropTexture::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 8) = &CHolographicInteropTexture::`vftable'{for `IHolographicInteropTexture'};
  *((_DWORD *)this + 32) = 0;
  *((_DWORD *)this + 56) = 0;
  *((_QWORD *)this + 29) = (char *)this + 240;
  *((_DWORD *)this + 60) = 0;
  InitializeSRWLock((PSRWLOCK)this + 38);
  wil::Feature<__WilFeatureTraits_Feature_StereoscopicUwp>::ReportUsageToService(v4, v3, v5);
  result = this;
  *((_DWORD *)this + 35) = 1;
  return result;
}
