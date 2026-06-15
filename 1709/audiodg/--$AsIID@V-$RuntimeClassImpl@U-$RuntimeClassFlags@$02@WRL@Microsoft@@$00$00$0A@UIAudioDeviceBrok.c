/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x140049604
 * Callers:
 *     ?QueryInterface@AudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14004F190 (-QueryInterface@AudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@UEAAJAEBU_GUID.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x14001510C (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14004BCA8 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Media::Devices::Internal::IAudioDeviceBrokerChangedEventArgs,Microsoft::WRL::FtmBase>>(
        __int64 a1,
        const struct _GUID *a2,
        _QWORD *a3)
{
  const struct _GUID *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  const struct _GUID *v6; // rcx
  const struct _GUID *v7; // rcx
  void **v8; // r8
  void *v9; // r9
  int v10; // r11d
  int v11; // ebx
  __int64 v12; // r9
  const struct _GUID *v13; // r10
  int v14; // r11d
  int v15; // r11d

  *a3 = 0LL;
  if ( !InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    && !InlineIsEqualGUID(v3, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    if ( InlineIsEqualGUID(v6, &GUID_c48f69b6_f6ea_411c_b69a_73fbc5c9a0e8) )
    {
      *v8 = v9;
      v11 = v10;
    }
    else
    {
      if ( InlineIsEqualGUID(v7, &GUID_00000038_0000_0000_c000_000000000046) )
      {
        *v8 = (void *)v12;
        v11 = v14;
      }
      else
      {
        v11 = -2147467262;
        if ( Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v12 + 8), v13, v8) >= 0 )
          v11 = v15;
      }
      if ( v11 < 0 )
        return (unsigned int)v11;
    }
    (*(void (__fastcall **)(void *))(*(_QWORD *)*v8 + 8LL))(*v8);
    return (unsigned int)v11;
  }
  *v4 = v5;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  return 0LL;
}
