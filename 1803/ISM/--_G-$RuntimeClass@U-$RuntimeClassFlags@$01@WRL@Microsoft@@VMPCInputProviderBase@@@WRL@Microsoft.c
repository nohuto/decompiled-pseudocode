/*
 * XREFs of ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VMPCInputProviderBase@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800420B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1MPCInputProviderBase@@UEAA@XZ @ 0x1800498D8 (--1MPCInputProviderBase@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

MPCInputProviderBase *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,MPCInputProviderBase>::`scalar deleting destructor'(
        MPCInputProviderBase *Block,
        char a2)
{
  *((_DWORD *)Block + 573) = -1073741823;
  MPCInputProviderBase::~MPCInputProviderBase(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
