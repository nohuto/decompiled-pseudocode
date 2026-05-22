/*
 * XREFs of ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VMPCInputProviderBase@@@WRL@Microsoft@@UEAA@XZ @ 0x1800522BC
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_MPCProcessor_IInputProcessor_InputProcessorCreateParams_____ptr64_&___ptr64__::_1_::dtor$3 @ 0x1800CED43 (_Microsoft--WRL--Details--MakeAndInitialize_MPCProcessor_IInputProcessor_InputProce_ea_1800CED43.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,MPCInputProviderBase>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,MPCInputProviderBase>(
        MPCInputProviderBase *a1)
{
  *((_DWORD *)a1 + 141) = -1073741823;
  MPCInputProviderBase::~MPCInputProviderBase(a1);
}
