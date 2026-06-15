/*
 * XREFs of ?QueryInterface@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14000EB80
 * Callers:
 *     ??$MakeAndInitialize@VAudioDeviceModulesManager@Devices@Media@Windows@@UIAudioDeviceModulesManager@234@PEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@$$QEAPEAX@Z @ 0x1400194B8 (--$MakeAndInitialize@VAudioDeviceModulesManager@Devices@Media@Windows@@UIAudioDeviceModulesManag.c)
 *     ?QueryInterface@AudioDeviceModulesManager@Devices@Media@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001F740 (-QueryInterface@AudioDeviceModulesManager@Devices@Media@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@AudioDeviceModulesManager@Devices@Media@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001F750 (-QueryInterface@AudioDeviceModulesManager@Devices@Media@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?AddRef@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAKXZ @ 0x14000E910 (-AddRef@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAKXZ.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x14001510C (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14004BCA8 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall Windows::Media::Devices::AudioDeviceModulesManager::QueryInterface(
        Windows::Media::Devices::AudioDeviceModulesManager *this,
        const struct _GUID *a2,
        void **a3)
{
  const struct _GUID *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  const struct _GUID *v6; // rcx
  const struct _GUID *v7; // rcx
  Windows::Media::Devices::Internal::AudioDeviceBroker **v8; // r8
  Windows::Media::Devices::Internal::AudioDeviceBroker *v9; // r9
  int v10; // ebx
  void (*v11)(void); // rax
  __int64 v13; // r9
  const struct _GUID *v14; // r10

  *a3 = 0LL;
  if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    || (unsigned int)InlineIsEqualGUID(v3, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *v4 = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    return 0;
  }
  if ( (unsigned int)InlineIsEqualGUID(v6, &GUID_6aa40c4d_960a_4d1c_b318_0022604547ed) )
  {
    *v8 = v9;
    v10 = 0;
LABEL_5:
    v11 = *(void (**)(void))(*(_QWORD *)*v8 + 8LL);
    if ( (char *)v11 == (char *)Windows::Media::Devices::Internal::AudioDeviceBroker::AddRef )
      Windows::Media::Devices::Internal::AudioDeviceBroker::AddRef(*v8);
    else
      v11();
    return (unsigned int)v10;
  }
  if ( (unsigned int)InlineIsEqualGUID(v7, &GUID_00000038_0000_0000_c000_000000000046) )
  {
    *v8 = (Windows::Media::Devices::Internal::AudioDeviceBroker *)v13;
    v10 = 0;
  }
  else
  {
    v10 = -2147467262;
    if ( Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v13 + 8), v14, (void **)v8) >= 0 )
      v10 = 0;
  }
  if ( v10 >= 0 )
    goto LABEL_5;
  return (unsigned int)v10;
}
