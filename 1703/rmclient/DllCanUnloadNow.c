/*
 * XREFs of DllCanUnloadNow @ 0x180004D10
 * Callers:
 *     <none>
 * Callees:
 *     atexit @ 0x180007880 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x180008010 (_guard_dispatch_icall_nop.c)
 */

HRESULT __stdcall DllCanUnloadNow()
{
  __int64 (__fastcall *v0)(Microsoft::WRL::Details::ModuleBase *); // rax
  volatile unsigned int v1; // eax

  if ( (`Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create'::`2'::`local static guard' & 1) == 0 )
  {
    Microsoft::WRL::Details::ModuleBase::module_ = (struct Microsoft::WRL::Details::ModuleBase *)&`Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create'::`2'::moduleSingleton;
    `Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create'::`2'::`local static guard' |= 1u;
    `Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create'::`2'::moduleSingleton = &Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::`vftable';
    atexit(`Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create'::`2'::`dynamic atexit destructor for 'moduleSingleton'');
  }
  v0 = *(__int64 (__fastcall **)(Microsoft::WRL::Details::ModuleBase *))(`Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create'::`2'::moduleSingleton
                                                                       + 24LL);
  if ( v0 == Microsoft::WRL::Details::ModuleBase::GetObjectCount )
    v1 = Microsoft::WRL::Details::ModuleBase::objectCount_;
  else
    v1 = v0((Microsoft::WRL::Details::ModuleBase *)&`Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create'::`2'::moduleSingleton);
  return v1 != 0;
}
