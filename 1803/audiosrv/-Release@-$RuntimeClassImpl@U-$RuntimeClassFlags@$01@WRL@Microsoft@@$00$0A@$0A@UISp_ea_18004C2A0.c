/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISpatialAudioDevicePropertyReader@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18004C2A0
 * Callers:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioDevicePropertyReader@@@WRL@Microsoft@@IEAAKXZ @ 0x18004BF44 (-InternalRelease@-$ComPtr@UISpatialAudioDevicePropertyReader@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISpatialAudioDevicePropertyReader@@VFtmBase@23@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x1800661F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISp_ea_1800661F0.c)
 * Callees:
 *     ??_ESpatialAudioDevicePropertyReader@@UEAAPEAXI@Z @ 0x18004C370 (--_ESpatialAudioDevicePropertyReader@@UEAAPEAXI@Z.c)
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x180063378 (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISpatialAudioDevicePropertyReader,Microsoft::WRL::FtmBase>::Release(
        __int64 a1)
{
  unsigned int v1; // ebx
  SpatialAudioDevicePropertyReader *v2; // r10
  void *(__fastcall *v3)(SpatialAudioDevicePropertyReader *__hidden, unsigned int); // rax
  __int64 v4; // rdx

  v1 = ATL::SafeDecrementReferenceMultiThread((int *)(a1 + 44));
  if ( !v1 )
  {
    if ( v2 )
    {
      v3 = *(void *(__fastcall **)(SpatialAudioDevicePropertyReader *__hidden, unsigned int))(*(_QWORD *)v2 + 208LL);
      v4 = v1 + 1;
      if ( v3 == SpatialAudioDevicePropertyReader::`vector deleting destructor' )
        SpatialAudioDevicePropertyReader::`vector deleting destructor'(v2, v4);
      else
        v3(v2, v4);
    }
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v1;
}
