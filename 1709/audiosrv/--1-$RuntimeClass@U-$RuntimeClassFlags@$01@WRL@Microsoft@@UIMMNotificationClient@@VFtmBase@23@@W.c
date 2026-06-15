/*
 * XREFs of ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIMMNotificationClient@@VFtmBase@23@@WRL@Microsoft@@UEAA@XZ @ 0x1800BF500
 * Callers:
 *     _CExclusiveModeListener::CExclusiveModeListener_::_1_::dtor$0 @ 0x1800BF14D (_CExclusiveModeListener--CExclusiveModeListener_--_1_--dtor$0.c)
 *     _CExclusiveModeListener::_CExclusiveModeListener_::_1_::dtor$0 @ 0x1800C5EE5 (_CExclusiveModeListener--_CExclusiveModeListener_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IMMNotificationClient,Microsoft::WRL::FtmBase>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IMMNotificationClient,Microsoft::WRL::FtmBase>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 52) = -1073741823;
  return Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)(a1 + 40));
}
