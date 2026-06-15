/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVectorView@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAVAudioDeviceModule@Devices@Media@Windows@@@567@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$00@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVectorView@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAVAudioDeviceModule@Devices@Media@Windows@@@567@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1400493E4
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVectorView@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAVAudioDeviceModule@Devices@Media@Windows@@@567@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14004F040 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_14004F040.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x14001510C (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<1>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::IIterable<Windows::Media::Devices::AudioDeviceModule *>>>(
        __int64 a1,
        const struct _GUID *a2,
        _QWORD *a3)
{
  const struct _GUID *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  const struct _GUID *v6; // rcx
  const struct _GUID *v7; // rcx
  _QWORD *v8; // r8
  __int64 v9; // r9
  int v10; // ebx
  const struct _GUID *v11; // rcx
  __int64 v12; // r9
  __int64 v13; // r9

  *a3 = 0LL;
  if ( !InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    && !InlineIsEqualGUID(v3, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    if ( InlineIsEqualGUID(v6, &GUID_b9f55617_48ec_5ad7_95ca_33395284f28b) )
    {
      *v8 = v9;
      v10 = 0;
      goto LABEL_12;
    }
    if ( InlineIsEqualGUID(v7, &GUID_00000038_0000_0000_c000_000000000046) )
    {
      *v8 = v12;
    }
    else
    {
      if ( !InlineIsEqualGUID(v11, &GUID_7eeb51c3_d70e_548a_85c2_3cf71b4a124c) )
      {
        v10 = -2147467262;
LABEL_11:
        if ( v10 < 0 )
          return (unsigned int)v10;
LABEL_12:
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 8LL))(*v8);
        return (unsigned int)v10;
      }
      *v8 = v13 + 8;
    }
    v10 = 0;
    goto LABEL_11;
  }
  *v4 = v5;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  return 0LL;
}
