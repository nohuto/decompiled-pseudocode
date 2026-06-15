/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDeviceBroker@Internal@Devices@Media@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140019030
 * Callers:
 *     ?Release@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAKXZ @ 0x1400189B0 (-Release@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAKXZ.c)
 *     ??$MakeAndInitialize@VAudioDeviceBroker@Internal@Devices@Media@Windows@@UIAudioDeviceBroker@2345@AEAPEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceBroker@Internal@Devices@Media@Windows@@AEAPEAX@Z @ 0x1400191FC (--$MakeAndInitialize@VAudioDeviceBroker@Internal@Devices@Media@Windows@@UIAudioDeviceBroker@2345.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDeviceBroker@Internal@Devices@Media@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x14001E9E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAud_ea_14001E9E0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAudioDeviceBroker@Internal@Devices@Media@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x14001E9F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAud_ea_14001E9F0.c)
 * Callees:
 *     ??_EAudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAPEAXI@Z @ 0x140019000 (--_EAudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAPEAXI@Z.c)
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x14001D4E8 (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Media::Devices::Internal::IAudioDeviceBroker,Microsoft::WRL::FtmBase>::Release(
        Windows::Media::Devices::Internal::AudioDeviceBroker *this)
{
  signed __int64 v1; // rax
  Windows::Media::Devices::Internal::AudioDeviceBroker *v2; // r10
  unsigned int v3; // ebx
  signed __int64 v4; // rtt
  Windows::Media::Devices::Internal::AudioDeviceBroker *(__fastcall *v5)(Windows::Media::Devices::Internal::AudioDeviceBroker *, void *); // rax

  v1 = *((_QWORD *)this + 7);
  v2 = this;
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 2147483646;
    v3 = v1 - 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 7, v1 - 1, v1);
    if ( v4 == v1 )
      goto LABEL_8;
  }
  v3 = ATL::SafeDecrementReferenceMultiThread((int *)(2 * v1 + 16));
LABEL_8:
  if ( !v3 )
  {
    if ( v2 )
    {
      v5 = *(Windows::Media::Devices::Internal::AudioDeviceBroker *(__fastcall **)(Windows::Media::Devices::Internal::AudioDeviceBroker *, void *))(*(_QWORD *)v2 + 80LL);
      if ( v5 == Windows::Media::Devices::Internal::AudioDeviceBroker::`vector deleting destructor' )
        Windows::Media::Devices::Internal::AudioDeviceBroker::`vector deleting destructor'(v2, (void *)1);
      else
        v5(v2, (void *)1);
    }
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v3;
}
