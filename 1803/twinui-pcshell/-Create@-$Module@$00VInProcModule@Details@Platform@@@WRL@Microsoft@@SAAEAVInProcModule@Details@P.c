/*
 * XREFs of ?Create@?$Module@$00VInProcModule@Details@Platform@@@WRL@Microsoft@@SAAEAVInProcModule@Details@Platform@@XZ @ 0x18009B9FC
 * Callers:
 *     Platform::Details::_dynamic_initializer_for__module___ @ 0x180001000 (Platform--Details--_dynamic_initializer_for__module___.c)
 * Callees:
 *     atexit @ 0x180098A9C (atexit.c)
 */

void *Microsoft::WRL::Module<1,Platform::Details::InProcModule>::Create()
{
  if ( (`Microsoft::WRL::Module<1,Platform::Details::InProcModule>::Create'::`2'::`local static guard' & 1) == 0 )
  {
    Microsoft::WRL::Details::ModuleBase::module_ = (struct Microsoft::WRL::Details::ModuleBase *)&`Microsoft::WRL::Module<1,Platform::Details::InProcModule>::Create'::`2'::moduleSingleton;
    `Microsoft::WRL::Module<1,Platform::Details::InProcModule>::Create'::`2'::`local static guard' |= 1u;
    `Microsoft::WRL::Module<1,Platform::Details::InProcModule>::Create'::`2'::moduleSingleton = &Platform::Details::InProcModule::`vftable'{for `Microsoft::WRL::Module<5,Platform::Details::InProcModule>'};
    qword_180437DE0 = (__int64)&Platform::Details::InProcModule::`vftable'{for `__abi_Module'};
    __abi_module = (struct __abi_Module *)&qword_180437DE0;
    atexit(`Microsoft::WRL::Module<1,Platform::Details::InProcModule>::Create'::`2'::`dynamic atexit destructor for 'moduleSingleton'');
  }
  return &`Microsoft::WRL::Module<1,Platform::Details::InProcModule>::Create'::`2'::moduleSingleton;
}
