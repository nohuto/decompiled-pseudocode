/*
 * XREFs of ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIRawInputProvider@@UIMouseProcessorForwarding@@VMPCInputProviderBase@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180099720
 * Callers:
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIRawInputProvider@@UIMouseProcessorForwarding@@VMPCInputProviderBase@@@WRL@Microsoft@@WBA@EAAPEAXI@Z @ 0x18009A600 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIRawInputProvider@@UIMouseProcessorF.c)
 * Callees:
 *     ??1MPCInputProviderBase@@UEAA@XZ @ 0x1800498D8 (--1MPCInputProviderBase@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_DWORD *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRawInputProvider,IMouseProcessorForwarding,MPCInputProviderBase>::`scalar deleting destructor'(
        _DWORD *Block,
        char a2)
{
  Block[577] = -1073741823;
  MPCInputProviderBase::~MPCInputProviderBase((MPCInputProviderBase *)(Block + 4));
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
