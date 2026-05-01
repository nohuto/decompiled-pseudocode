/*
 * XREFs of ??_GInProcModule@Details@Platform@@UEAAPEAXI@Z @ 0x180196EF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180194C3C (--3@YAXPEAX@Z.c)
 *     ?TerminateMap@Details@WRL@Microsoft@@YA_NPEAVModuleBase@123@PEB_W_N@Z @ 0x180196FC4 (-TerminateMap@Details@WRL@Microsoft@@YA_NPEAVModuleBase@123@PEB_W_N@Z.c)
 */

Platform::Details::InProcModule *__fastcall Platform::Details::InProcModule::`scalar deleting destructor'(
        Platform::Details::InProcModule *this,
        char a2,
        const wchar_t *a3,
        bool a4)
{
  *((_QWORD *)this + 1) = &Platform::Details::InProcModule::`vftable'{for `__abi_Module'};
  LOBYTE(a3) = 1;
  __abi_module = 0LL;
  *(_QWORD *)this = &Microsoft::WRL::Module<1,Platform::Details::InProcModule>::`vftable';
  Microsoft::WRL::Details::TerminateMap(this, 0LL, a3, a4);
  Microsoft::WRL::Details::ModuleBase::module_ = 0LL;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
