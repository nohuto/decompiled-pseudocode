/*
 * XREFs of ?QueryInterface@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14002E750
 * Callers:
 *     ?QueryInterface@AudioDeviceBroker@Internal@Devices@Media@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001E7F0 (-QueryInterface@AudioDeviceBroker@Internal@Devices@Media@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@AudioDeviceBroker@Internal@Devices@Media@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001E900 (-QueryInterface@AudioDeviceBroker@Internal@Devices@Media@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x140015DE4 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDeviceModulesManager@Devices@Media@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140016430 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDeviceModule.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x140049E14 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@.c)
 */

__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBroker::QueryInterface(
        Windows::Media::Devices::Internal::AudioDeviceBroker *this,
        const struct _GUID *a2,
        void **a3)
{
  const struct _GUID *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  const struct _GUID *v6; // rcx
  __int64 *v7; // r8
  __int64 v8; // r9
  __int64 v9; // r10
  int CanCastTo; // ebx
  void (*v11)(void); // rax

  *a3 = 0LL;
  if ( InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v3, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *v4 = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    return 0;
  }
  if ( InlineIsEqualGUID(v6, &GUID_57334b0d_4eb7_46ad_b19d_e41a029e3674) )
  {
    *v7 = v8;
    CanCastTo = 0;
  }
  else
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Microsoft::WRL::FtmBase>::CanCastTo(
                  v8 + 8,
                  v9);
    if ( CanCastTo < 0 )
      return (unsigned int)CanCastTo;
  }
  v11 = *(void (**)(void))(*(_QWORD *)*v7 + 8LL);
  if ( (char *)v11 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Media::Devices::IAudioDeviceModulesManager,Microsoft::WRL::FtmBase>::AddRef )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Media::Devices::IAudioDeviceModulesManager,Microsoft::WRL::FtmBase>::AddRef(*v7);
  else
    v11();
  return (unsigned int)CanCastTo;
}
