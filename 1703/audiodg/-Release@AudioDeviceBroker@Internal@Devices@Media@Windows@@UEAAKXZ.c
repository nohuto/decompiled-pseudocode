/*
 * XREFs of ?Release@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAKXZ @ 0x140016E40
 * Callers:
 *     ??_EAudioDeviceModulesManager@Devices@Media@Windows@@MEAAPEAXI@Z @ 0x140011AB0 (--_EAudioDeviceModulesManager@Devices@Media@Windows@@MEAAPEAXI@Z.c)
 *     ?Release@AudioDeviceBroker@Internal@Devices@Media@Windows@@W7EAAKXZ @ 0x14001FC50 (-Release@AudioDeviceBroker@Internal@Devices@Media@Windows@@W7EAAKXZ.c)
 *     ?Release@AudioDeviceBroker@Internal@Devices@Media@Windows@@WBA@EAAKXZ @ 0x14001FC60 (-Release@AudioDeviceBroker@Internal@Devices@Media@Windows@@WBA@EAAKXZ.c)
 * Callees:
 *     ??_EAudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAPEAXI@Z @ 0x1400173E0 (--_EAudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBroker::Release(
        Windows::Media::Devices::Internal::AudioDeviceBroker *this)
{
  signed __int64 v1; // rax
  Windows::Media::Devices::Internal::AudioDeviceBroker *v2; // r8
  unsigned __int32 v3; // ebx
  signed __int64 v4; // rtt
  void *(__fastcall *v5)(Windows::Media::Devices::Internal::AudioDeviceBroker *__hidden, unsigned int); // rax

  v1 = *((_QWORD *)this + 6);
  v2 = this;
  while ( v1 >= 0 )
  {
    v3 = v1 - 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 6, v1 - 1, v1);
    if ( v4 == v1 )
      goto LABEL_4;
  }
  v3 = _InterlockedDecrement((volatile signed __int32 *)(2 * v1 + 16));
LABEL_4:
  if ( !v3 )
  {
    if ( this )
    {
      v5 = *(void *(__fastcall **)(Windows::Media::Devices::Internal::AudioDeviceBroker *__hidden, unsigned int))(*(_QWORD *)this + 80LL);
      if ( v5 == Windows::Media::Devices::Internal::AudioDeviceBroker::`vector deleting destructor' )
        Windows::Media::Devices::Internal::AudioDeviceBroker::`vector deleting destructor'(this, 1u);
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
