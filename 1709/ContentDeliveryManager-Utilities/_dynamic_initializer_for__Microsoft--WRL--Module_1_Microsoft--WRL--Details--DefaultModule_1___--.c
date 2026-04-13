/*
 * XREFs of _dynamic_initializer_for__Microsoft::WRL::Module_1_Microsoft::WRL::Details::DefaultModule_1___::isInitialized__ @ 0x1800014D0
 * Callers:
 *     <none>
 * Callees:
 *     atexit @ 0x1800B3E18 (atexit.c)
 *     _Init_thread_footer @ 0x1800B4038 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800B4098 (_Init_thread_header.c)
 */

__int64 dynamic_initializer_for__Microsoft::WRL::Module_1_Microsoft::WRL::Details::DefaultModule_1___::isInitialized__()
{
  __int64 result; // rax

  result = *(unsigned int *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index) + 4LL);
  if ( __TSS0__1__Create___Module__00V__DefaultModule__00_Details_WRL_Microsoft___WRL_Microsoft__SAAEAV__DefaultModule__00_Details_34_XZ_4HA > (int)result )
  {
    result = Init_thread_header(&__TSS0__1__Create___Module__00V__DefaultModule__00_Details_WRL_Microsoft___WRL_Microsoft__SAAEAV__DefaultModule__00_Details_34_XZ_4HA);
    if ( __TSS0__1__Create___Module__00V__DefaultModule__00_Details_WRL_Microsoft___WRL_Microsoft__SAAEAV__DefaultModule__00_Details_34_XZ_4HA == -1 )
    {
      Microsoft::WRL::Details::ModuleBase::module_ = (struct Microsoft::WRL::Details::ModuleBase *)&`Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create'::`2'::moduleSingleton;
      `Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create'::`2'::moduleSingleton = (__int64)&Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::`vftable';
      atexit(`Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create'::`2'::`dynamic atexit destructor for 'moduleSingleton'');
      result = Init_thread_footer(&__TSS0__1__Create___Module__00V__DefaultModule__00_Details_WRL_Microsoft___WRL_Microsoft__SAAEAV__DefaultModule__00_Details_34_XZ_4HA);
    }
  }
  Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::isInitialized = 1;
  return result;
}
