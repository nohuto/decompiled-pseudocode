/*
 * XREFs of ??_G?$Module@$00VInProcModule@Details@Platform@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1801E5370
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?TerminateMap@Details@WRL@Microsoft@@YA_NPEAVModuleBase@123@PEB_W_N@Z @ 0x1801E54BC (-TerminateMap@Details@WRL@Microsoft@@YA_NPEAVModuleBase@123@PEB_W_N@Z.c)
 */

Microsoft::WRL::Details *__fastcall Microsoft::WRL::Module<1,Platform::Details::InProcModule>::`scalar deleting destructor'(
        Microsoft::WRL::Details *Block,
        char a2,
        const wchar_t *a3,
        bool a4)
{
  *(_QWORD *)Block = &Microsoft::WRL::Module<1,Platform::Details::InProcModule>::`vftable';
  LOBYTE(a3) = 1;
  Microsoft::WRL::Details::TerminateMap(Block, 0LL, a3, a4);
  Microsoft::WRL::Details::ModuleBase::module_ = 0LL;
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
