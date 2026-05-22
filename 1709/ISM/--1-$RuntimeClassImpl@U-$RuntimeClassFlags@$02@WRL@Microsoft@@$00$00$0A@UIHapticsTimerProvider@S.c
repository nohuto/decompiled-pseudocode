/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIHapticsTimerProvider@SpatialInteractionDevices@@UITimerElapsedHandler@Threading@System@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180062D64
 * Callers:
 *     ??1?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UISpatialInteractionDevice@@U?$CloakedIid@UISpatialInteractionDevicePrivate@@@23@VFtmBase@23@@WRL@Microsoft@@UEAA@XZ @ 0x1800620C4 (--1-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UISpatialInteractionDevice@@U-$Cloaked.c)
 *     ??1MPCGestureHandler@@UEAA@XZ @ 0x1800620CC (--1MPCGestureHandler@@UEAA@XZ.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIRawInputProvider@@VFtmBase@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180063210 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIRawInputProvider@@VFtmBase@23@@WRL@.c)
 *     ??_GSpatialInteractionDevice@@UEAAPEAXI@Z @ 0x1800748E0 (--_GSpatialInteractionDevice@@UEAAPEAXI@Z.c)
 *     ??1SpatialGraphNodeReference@Holographic@Internal@Windows@@EEAA@XZ @ 0x1800B67B0 (--1SpatialGraphNodeReference@Holographic@Internal@Windows@@EEAA@XZ.c)
 *     ??1SpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@MEAA@XZ @ 0x1800B885C (--1SpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@MEAA@XZ.c)
 *     ??_GSimpleTimeProvider@?A0x9e3f2d27@@UEAAPEAXI@Z @ 0x1800C7770 (--_GSimpleTimeProvider@-A0x9e3f2d27@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,SpatialInteractionDevices::IHapticsTimerProvider,Windows::System::Threading::ITimerElapsedHandler,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,SpatialInteractionDevices::IHapticsTimerProvider,Windows::System::Threading::ITimerElapsedHandler,Microsoft::WRL::FtmBase>(
        __int64 a1)
{
  __int64 v2; // rcx
  volatile signed __int32 *v3; // rcx
  __int64 result; // rax
  __int64 v5; // rcx

  v2 = *(_QWORD *)(a1 + 72);
  if ( v2 < 0 )
  {
    v3 = (volatile signed __int32 *)(2 * v2);
    result = (unsigned int)_InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      if ( v3 )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v3 + 32LL))(v3, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        result = (*(__int64 (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                         + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  v5 = *(_QWORD *)(a1 + 56);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 56) = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return result;
}
