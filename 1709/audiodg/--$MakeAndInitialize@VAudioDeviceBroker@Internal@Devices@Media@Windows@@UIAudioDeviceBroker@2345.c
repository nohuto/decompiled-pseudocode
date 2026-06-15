/*
 * XREFs of ??$MakeAndInitialize@VAudioDeviceBroker@Internal@Devices@Media@Windows@@UIAudioDeviceBroker@2345@AEAPEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceBroker@Internal@Devices@Media@Windows@@AEAPEAX@Z @ 0x1400193D0
 * Callers:
 *     ??$MakeAndInitialize@VAudioDeviceModulesManager@Devices@Media@Windows@@UIAudioDeviceModulesManager@234@PEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@$$QEAPEAX@Z @ 0x1400194B8 (--$MakeAndInitialize@VAudioDeviceModulesManager@Devices@Media@Windows@@UIAudioDeviceModulesManag.c)
 * Callees:
 *     ?AddRef@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAKXZ @ 0x14000E910 (-AddRef@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAKXZ.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x14001510C (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?RuntimeClassInitialize@AudioDeviceBroker@Internal@Devices@Media@Windows@@QEAAJPEAX@Z @ 0x1400186F4 (-RuntimeClassInitialize@AudioDeviceBroker@Internal@Devices@Media@Windows@@QEAAJPEAX@Z.c)
 *     ??0AudioDeviceBroker@Internal@Devices@Media@Windows@@QEAA@XZ @ 0x1400188B0 (--0AudioDeviceBroker@Internal@Devices@Media@Windows@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDeviceBroker@Internal@Devices@Media@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1400189B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDeviceBroke.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001D278 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14004BCA8 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Media::Devices::Internal::AudioDeviceBroker,Windows::Media::Devices::Internal::IAudioDeviceBroker,void * &>(
        void **a1,
        HANDLE *a2)
{
  RTL_SRWLOCK *v4; // rax
  RTL_SRWLOCK *v5; // rdi
  int v6; // ebx
  const struct _GUID *v7; // rcx
  const struct _GUID *v8; // rcx
  const struct _GUID *v9; // r9
  const struct _GUID *v10; // rcx
  void (*v11)(void); // rax
  __int64 v13; // r8
  const struct _GUID *v14; // r9

  *a1 = 0LL;
  v4 = (RTL_SRWLOCK *)operator new(0xE0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v4 )
    return (unsigned int)-2147024882;
  v5 = Windows::Media::Devices::Internal::AudioDeviceBroker::AudioDeviceBroker(v4);
  v6 = Windows::Media::Devices::Internal::AudioDeviceBroker::RuntimeClassInitialize(
         (Windows::Media::Devices::Internal::AudioDeviceBroker *)v5,
         *a2);
  if ( v6 >= 0 )
  {
    *a1 = 0LL;
    if ( InlineIsEqualGUID(&GUID_57334b0d_4eb7_46ad_b19d_e41a029e3674, &GUID_00000000_0000_0000_c000_000000000046)
      || InlineIsEqualGUID(v7, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
    {
      *a1 = v5;
      (*((void (__fastcall **)(RTL_SRWLOCK *))v5->Ptr + 1))(v5);
      v6 = 0;
    }
    else
    {
      if ( InlineIsEqualGUID(v8, v9) )
      {
        *a1 = v5;
        v6 = 0;
      }
      else
      {
        if ( InlineIsEqualGUID(v10, &GUID_00000038_0000_0000_c000_000000000046) )
        {
          *a1 = (void *)v13;
          v6 = 0;
        }
        else
        {
          v6 = -2147467262;
          if ( Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v13 + 8), v14, a1) >= 0 )
            v6 = 0;
        }
        if ( v6 < 0 )
          goto LABEL_9;
      }
      v11 = *(void (**)(void))(*(_QWORD *)*a1 + 8LL);
      if ( (char *)v11 == (char *)Windows::Media::Devices::Internal::AudioDeviceBroker::AddRef )
        Windows::Media::Devices::Internal::AudioDeviceBroker::AddRef((Windows::Media::Devices::Internal::AudioDeviceBroker *)*a1);
      else
        v11();
    }
  }
LABEL_9:
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Media::Devices::Internal::IAudioDeviceBroker,Microsoft::WRL::FtmBase>::Release((Windows::Media::Devices::Internal::AudioDeviceBroker *)v5);
  return (unsigned int)v6;
}
