/*
 * XREFs of ??_G?$DefaultModule@$00@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180005700
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAA@XZ @ 0x18000543C (--1-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

Microsoft::WRL::Details::ModuleBase *__fastcall Microsoft::WRL::Details::DefaultModule<1>::`scalar deleting destructor'(
        Microsoft::WRL::Details::ModuleBase *Block,
        char a2)
{
  Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::~Module<1,Microsoft::WRL::Details::DefaultModule<1>>(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
