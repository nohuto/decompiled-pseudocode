/*
 * XREFs of ??_G?$DefaultModule@$00@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180027090
 * Callers:
 *     <none>
 * Callees:
 *     ?TerminateMap@Details@WRL@Microsoft@@YA_NPEAVModuleBase@123@PEBG_N@Z @ 0x180025238 (-TerminateMap@Details@WRL@Microsoft@@YA_NPEAVModuleBase@123@PEBG_N@Z.c)
 */

Microsoft::WRL::Details *__fastcall Microsoft::WRL::Details::DefaultModule<1>::`scalar deleting destructor'(
        Microsoft::WRL::Details *a1,
        struct Microsoft::WRL::Details::ModuleBase *a2,
        const unsigned __int16 *a3)
{
  char v3; // bl

  LOBYTE(a3) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::`vftable';
  v3 = (char)a2;
  Microsoft::WRL::Details::TerminateMap(a1, a2, a3);
  Microsoft::WRL::Details::ModuleBase::module_ = 0LL;
  Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::isInitialized = 0;
  if ( (v3 & 1) != 0 )
    operator delete(a1);
  return a1;
}
