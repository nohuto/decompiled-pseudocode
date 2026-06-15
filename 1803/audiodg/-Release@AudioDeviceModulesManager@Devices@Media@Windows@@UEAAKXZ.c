/*
 * XREFs of ?Release@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAKXZ @ 0x140016480
 * Callers:
 *     ??1CAudioDeviceGraph@@QEAA@XZ @ 0x14000F300 (--1CAudioDeviceGraph@@QEAA@XZ.c)
 *     ??_ECDeviceProcessNode@@UEAAPEAXI@Z @ 0x140016E90 (--_ECDeviceProcessNode@@UEAAPEAXI@Z.c)
 *     ??$MakeAndInitialize@VAudioDeviceModulesManager@Devices@Media@Windows@@UIAudioDeviceModulesManager@234@PEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@$$QEAPEAX@Z @ 0x140019804 (--$MakeAndInitialize@VAudioDeviceModulesManager@Devices@Media@Windows@@UIAudioDeviceModulesManag.c)
 *     ?Release@AudioDeviceModulesManager@Devices@Media@Windows@@W7EAAKXZ @ 0x14001EB90 (-Release@AudioDeviceModulesManager@Devices@Media@Windows@@W7EAAKXZ.c)
 *     ?Release@AudioDeviceModulesManager@Devices@Media@Windows@@WBA@EAAKXZ @ 0x14001EBA0 (-Release@AudioDeviceModulesManager@Devices@Media@Windows@@WBA@EAAKXZ.c)
 * Callees:
 *     ??_EAudioDeviceModulesManager@Devices@Media@Windows@@MEAAPEAXI@Z @ 0x140016400 (--_EAudioDeviceModulesManager@Devices@Media@Windows@@MEAAPEAXI@Z.c)
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x14001D4E8 (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Media::Devices::AudioDeviceModulesManager::Release(
        Windows::Media::Devices::AudioDeviceModulesManager *this)
{
  signed __int64 v1; // rax
  Windows::Media::Devices::AudioDeviceModulesManager *v2; // r10
  unsigned int v3; // ebx
  signed __int64 v4; // rtt
  Windows::Media::Devices::AudioDeviceModulesManager *(__fastcall *v5)(Windows::Media::Devices::AudioDeviceModulesManager *, char); // rax

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
      v5 = *(Windows::Media::Devices::AudioDeviceModulesManager *(__fastcall **)(Windows::Media::Devices::AudioDeviceModulesManager *, char))(*(_QWORD *)v2 + 80LL);
      if ( v5 == Windows::Media::Devices::AudioDeviceModulesManager::`vector deleting destructor' )
        Windows::Media::Devices::AudioDeviceModulesManager::`vector deleting destructor'(v2, 1);
      else
        v5(v2, 1);
    }
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v3;
}
