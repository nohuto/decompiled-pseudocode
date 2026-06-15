/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDeviceModulesManager@Devices@Media@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14002F470
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDeviceModulesManager@Devices@Media@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001F630 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_14001F630.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDeviceModulesManager@Devices@Media@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001F640 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_14001F640.c)
 * Callees:
 *     ?AddRef@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAKXZ @ 0x14000E910 (-AddRef@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAKXZ.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x14001510C (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14004BCA8 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Media::Devices::IAudioDeviceModulesManager,Microsoft::WRL::FtmBase>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        _QWORD *a3)
{
  const struct _GUID *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  const struct _GUID *v6; // rcx
  const struct _GUID *v7; // rcx
  Windows::Media::Devices::Internal::AudioDeviceBroker **v8; // r8
  Windows::Media::Devices::Internal::AudioDeviceBroker *v9; // r9
  int v10; // ebx
  __int64 v11; // r9
  const struct _GUID *v12; // r10
  void (*v13)(void); // rax

  *a3 = 0LL;
  if ( InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v3, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *v4 = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    return 0;
  }
  if ( InlineIsEqualGUID(v6, &GUID_6aa40c4d_960a_4d1c_b318_0022604547ed) )
  {
    *v8 = v9;
    v10 = 0;
LABEL_10:
    v13 = *(void (**)(void))(*(_QWORD *)*v8 + 8LL);
    if ( (char *)v13 == (char *)Windows::Media::Devices::Internal::AudioDeviceBroker::AddRef )
      Windows::Media::Devices::Internal::AudioDeviceBroker::AddRef(*v8);
    else
      v13();
    return (unsigned int)v10;
  }
  if ( InlineIsEqualGUID(v7, &GUID_00000038_0000_0000_c000_000000000046) )
  {
    *v8 = (Windows::Media::Devices::Internal::AudioDeviceBroker *)v11;
    v10 = 0;
  }
  else
  {
    v10 = -2147467262;
    if ( Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v11 + 8), v12, (void **)v8) >= 0 )
      v10 = 0;
  }
  if ( v10 >= 0 )
    goto LABEL_10;
  return (unsigned int)v10;
}
