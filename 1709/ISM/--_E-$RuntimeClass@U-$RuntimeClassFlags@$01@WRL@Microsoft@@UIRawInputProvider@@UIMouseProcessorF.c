/*
 * XREFs of ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIRawInputProvider@@UIMouseProcessorForwarding@@UICursorBasedInputProcessor@@UIGetClosestInteractiveBounds@@VMPCInputProviderBase@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18004C6D0
 * Callers:
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIRawInputProvider@@UIMouseProcessorForwarding@@UICursorBasedInputProcessor@@UIGetClosestInteractiveBounds@@VMPCInputProviderBase@@@WRL@Microsoft@@WCA@EAAPEAXI@Z @ 0x18004C950 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIRawInputProvider@@UIMo_ea_18004C950.c)
 * Callees:
 *     ??1MPCInputProviderBase@@UEAA@XZ @ 0x18005FCF4 (--1MPCInputProviderBase@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_DWORD *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRawInputProvider,IMouseProcessorForwarding,ICursorBasedInputProcessor,IGetClosestInteractiveBounds,MPCInputProviderBase>::`vector deleting destructor'(
        _DWORD *Block,
        char a2)
{
  Block[149] = -1073741823;
  MPCInputProviderBase::~MPCInputProviderBase((MPCInputProviderBase *)(Block + 8));
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
