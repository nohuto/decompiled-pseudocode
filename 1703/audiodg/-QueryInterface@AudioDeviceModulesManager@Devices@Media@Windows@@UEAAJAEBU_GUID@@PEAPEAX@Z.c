/*
 * XREFs of ?QueryInterface@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140011BD0
 * Callers:
 *     ??$MakeAndInitialize@VAudioDeviceModulesManager@Devices@Media@Windows@@UIAudioDeviceModulesManager@234@AEAVCHandle@ATL@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@AEAVCHandle@ATL@@@Z @ 0x140017750 (--$MakeAndInitialize@VAudioDeviceModulesManager@Devices@Media@Windows@@UIAudioDeviceModulesManag.c)
 *     ?QueryInterface@AudioDeviceModulesManager@Devices@Media@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001FA80 (-QueryInterface@AudioDeviceModulesManager@Devices@Media@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@AudioDeviceModulesManager@Devices@Media@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001FA90 (-QueryInterface@AudioDeviceModulesManager@Devices@Media@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?AddRef@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAKXZ @ 0x140011A90 (-AddRef@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@U?$InterfaceList@UIWeakReferenceSource@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@23@$00$0A@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x14004A58C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@U-$InterfaceList@UIWeakRef.c)
 */

__int64 __fastcall Windows::Media::Devices::AudioDeviceModulesManager::QueryInterface(
        Windows::Media::Devices::AudioDeviceModulesManager *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // ebx
  int CanCastTo; // edi
  void (*v5)(void); // rax

  v3 = 0;
  *a3 = 0LL;
  if ( *(_QWORD *)&a2->Data1 == __PAIR64__(*(unsigned int *)&GUID_00000000_0000_0000_c000_000000000046.Data2, 0)
    && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4]
    || a2->Data1 == -1350114592
    && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
    && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
    && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
  {
    *a3 = this;
    (*(void (__fastcall **)(Windows::Media::Devices::AudioDeviceModulesManager *))(*(_QWORD *)this + 8LL))(this);
    return v3;
  }
  if ( a2->Data1 == 1789135949
    && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_6aa40c4d_960a_4d1c_b318_0022604547ed.Data2
    && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_6aa40c4d_960a_4d1c_b318_0022604547ed.Data4
    && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_6aa40c4d_960a_4d1c_b318_0022604547ed.Data4[4] )
  {
    *a3 = this;
    CanCastTo = 0;
    goto LABEL_8;
  }
  CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,1,0>::CanCastTo((char *)this + 8);
  if ( CanCastTo >= 0 )
  {
LABEL_8:
    v5 = *(void (**)(void))(*(_QWORD *)*a3 + 8LL);
    if ( (char *)v5 == (char *)Windows::Media::Devices::AudioDeviceModulesManager::AddRef )
      Windows::Media::Devices::AudioDeviceModulesManager::AddRef((Windows::Media::Devices::AudioDeviceModulesManager *)*a3);
    else
      v5();
  }
  return (unsigned int)CanCastTo;
}
