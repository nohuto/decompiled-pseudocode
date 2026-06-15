/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDeviceBroker@Internal@Devices@Media@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1400189B0
 * Callers:
 *     ?Release@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAKXZ @ 0x140018350 (-Release@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAKXZ.c)
 *     ??$MakeAndInitialize@VAudioDeviceBroker@Internal@Devices@Media@Windows@@UIAudioDeviceBroker@2345@AEAPEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceBroker@Internal@Devices@Media@Windows@@AEAPEAX@Z @ 0x1400193D0 (--$MakeAndInitialize@VAudioDeviceBroker@Internal@Devices@Media@Windows@@UIAudioDeviceBroker@2345.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDeviceBroker@Internal@Devices@Media@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x14001F820 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAud_ea_14001F820.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDeviceBroker@Internal@Devices@Media@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x14001F830 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAud_ea_14001F830.c)
 * Callees:
 *     ??_EAudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAPEAXI@Z @ 0x140018880 (--_EAudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Media::Devices::Internal::IAudioDeviceBroker,Microsoft::WRL::FtmBase>::Release(
        Windows::Media::Devices::Internal::AudioDeviceBroker *this)
{
  signed __int64 v1; // rax
  Windows::Media::Devices::Internal::AudioDeviceBroker *v2; // r8
  unsigned __int32 v3; // ebx
  signed __int64 v4; // rtt
  Windows::Media::Devices::Internal::AudioDeviceBroker *(__fastcall *v5)(Windows::Media::Devices::Internal::AudioDeviceBroker *, void *); // rax

  v1 = *((_QWORD *)this + 8);
  v2 = this;
  while ( v1 >= 0 )
  {
    v3 = v1 - 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 8, v1 - 1, v1);
    if ( v4 == v1 )
      goto LABEL_4;
  }
  v3 = _InterlockedDecrement((volatile signed __int32 *)(2 * v1 + 16));
LABEL_4:
  if ( !v3 )
  {
    if ( this )
    {
      v5 = *(Windows::Media::Devices::Internal::AudioDeviceBroker *(__fastcall **)(Windows::Media::Devices::Internal::AudioDeviceBroker *, void *))(*(_QWORD *)this + 80LL);
      if ( v5 == Windows::Media::Devices::Internal::AudioDeviceBroker::`vector deleting destructor' )
        Windows::Media::Devices::Internal::AudioDeviceBroker::`vector deleting destructor'(this, (void *)1);
      else
        ((void (__fastcall *)(Windows::Media::Devices::Internal::AudioDeviceBroker *, __int64, Windows::Media::Devices::Internal::AudioDeviceBroker *))v5)(
          this,
          1LL,
          this);
    }
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *, _QWORD, Windows::Media::Devices::Internal::AudioDeviceBroker *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL))(
        Microsoft::WRL::Details::ModuleBase::module_,
        *(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_,
        v2);
  }
  return v3;
}
