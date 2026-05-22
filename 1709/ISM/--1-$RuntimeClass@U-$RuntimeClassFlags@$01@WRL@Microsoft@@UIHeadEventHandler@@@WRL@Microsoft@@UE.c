/*
 * XREFs of ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIHeadEventHandler@@@WRL@Microsoft@@UEAA@XZ @ 0x18005D484
 * Callers:
 *     _MPCManager::MPCManager_::_1_::dtor$0 @ 0x1800CF40D (_MPCManager--MPCManager_--_1_--dtor$0.c)
 *     _MPCRawInputProvider::_MPCRawInputProvider_::_1_::dtor$0 @ 0x1800CF8AE (_MPCRawInputProvider--_MPCRawInputProvider_--_1_--dtor$0.c)
 *     _SpectrumListener::SpectrumListener_::_1_::dtor$0 @ 0x1800CFA73 (_SpectrumListener--SpectrumListener_--_1_--dtor$0.c)
 *     _SpectrumListener::_scalar_deleting_destructor__::_1_::dtor$0 @ 0x1800CFAB3 (_SpectrumListener--_scalar_deleting_destructor__--_1_--dtor$0.c)
 *     _InputAcknowledge::_scalar_deleting_destructor__::_1_::dtor$0 @ 0x1800D061F (_InputAcknowledge--_scalar_deleting_destructor__--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IHeadEventHandler>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IHeadEventHandler>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 12) = -1073741823;
}
