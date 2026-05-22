/*
 * XREFs of ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VMPCInputProviderBase@@@WRL@Microsoft@@UEAA@XZ @ 0x180041E04
 * Callers:
 *     _MPCProcessor::Create_::_1_::dtor$3 @ 0x1800E5B51 (_MPCProcessor--Create_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,MPCInputProviderBase>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,MPCInputProviderBase>(
        MPCInputProviderBase *a1)
{
  *((_DWORD *)a1 + 573) = -1073741823;
  MPCInputProviderBase::~MPCInputProviderBase(a1);
}
