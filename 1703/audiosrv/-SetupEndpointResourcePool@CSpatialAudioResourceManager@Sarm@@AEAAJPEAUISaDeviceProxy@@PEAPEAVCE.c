/*
 * XREFs of ?SetupEndpointResourcePool@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUISaDeviceProxy@@PEAPEAVCEndpointResourcePool@2@@Z @ 0x1800C4644
 * Callers:
 *     ?OnCreateStream@CSpatialAudioResourceManager@Sarm@@UEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@@Z @ 0x18002B790 (-OnCreateStream@CSpatialAudioResourceManager@Sarm@@UEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSP.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004B548 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800AD6C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Add@?$InterfaceMap@UISaDeviceProxy@@VCEndpointResourcePool@Sarm@@@util@@QEAAPEAVCEndpointResourcePool@Sarm@@PEAUISaDeviceProxy@@PEAPEAU__POSITION@@@Z @ 0x1800C2330 (-Add@-$InterfaceMap@UISaDeviceProxy@@VCEndpointResourcePool@Sarm@@@util@@QEAAPEAVCEndpointResour.c)
 *     ?RemoveAtPos@?$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V?$CElementTraits@PEAUISaDeviceProxy@@@ATL@@V?$CElementTraits@VCEndpointResourcePool@Sarm@@@5@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1800C3EF8 (-RemoveAtPos@-$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V-$CElementTraits@PEAUIS.c)
 *     ?Initialize@CEndpointResourcePool@Sarm@@QEAAJPEAUISaDeviceProxy@@PEAU__POSITION@@@Z @ 0x1800C53F0 (-Initialize@CEndpointResourcePool@Sarm@@QEAAJPEAUISaDeviceProxy@@PEAU__POSITION@@@Z.c)
 *     ?SarmTraceLoggingTracer@@YAXPEBDI@Z @ 0x1800C71DC (-SarmTraceLoggingTracer@@YAXPEBDI@Z.c)
 */

__int64 __fastcall Sarm::CSpatialAudioResourceManager::SetupEndpointResourcePool(
        Sarm::CSpatialAudioResourceManager *this,
        struct ISaDeviceProxy *a2,
        struct Sarm::CEndpointResourcePool **a3)
{
  const char *v6; // r9
  Sarm::CEndpointResourcePool *v7; // rax
  struct Sarm::CEndpointResourcePool *v8; // rdi
  int v10; // esi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v12; // [rsp+48h] [rbp+10h] BYREF
  struct __POSITION *v13; // [rsp+58h] [rbp+20h] BYREF

  SarmTraceLoggingTracer("Sarm::CSpatialAudioResourceManager::SetupEndpointResourcePool", 0xD1u);
  if ( !a2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xD3,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
      v6);
    __debugbreak();
  }
  if ( !a3 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xD4,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
      v6);
    __debugbreak();
  }
  *a3 = 0LL;
  v7 = (Sarm::CEndpointResourcePool *)util::InterfaceMap<ISaDeviceProxy,Sarm::CEndpointResourcePool>::Add(
                                        (__int64)this + 112,
                                        (__int64)a2,
                                        (__int64 *)&v13);
  v8 = v7;
  if ( v7 )
  {
    v10 = Sarm::CEndpointResourcePool::Initialize(v7, a2, v13);
    if ( v10 >= 0 )
    {
      *a3 = v8;
      return 0LL;
    }
    else
    {
      v12 = 1;
      (**((void (__fastcall ***)(char *, __int64, int *))this + 76))((char *)this + 608, 2LL, &v12);
      if ( v13 )
        ATL::CAtlMap<ISaDeviceProxy *,Sarm::CEndpointResourcePool,ATL::CElementTraits<ISaDeviceProxy *>,ATL::CElementTraits<Sarm::CEndpointResourcePool>>::RemoveAtPos(
          (__int64)this + 112,
          (__int64)v13);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE1,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
        (const char *)(unsigned int)v10);
      return (unsigned int)v10;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDA,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
