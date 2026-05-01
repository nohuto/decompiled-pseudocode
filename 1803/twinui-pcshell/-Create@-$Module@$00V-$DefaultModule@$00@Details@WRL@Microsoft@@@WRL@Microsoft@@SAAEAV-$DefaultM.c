/*
 * XREFs of ?Create@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV?$DefaultModule@$00@Details@23@XZ @ 0x1800926E0
 * Callers:
 *     DllCanUnloadNow @ 0x18008DE20 (DllCanUnloadNow.c)
 *     ?StaticInitialize@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@CA_NXZ @ 0x1800926CC (-StaticInitialize@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@CA_NXZ.c)
 *     DllGetClassObject @ 0x180096170 (DllGetClassObject.c)
 *     ?CreateComponent@ImmersiveShellComponentCreator@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1800FC720 (-CreateComponent@ImmersiveShellComponentCreator@@UEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     DllGetActivationFactory @ 0x180101420 (DllGetActivationFactory.c)
 *     ??0VirtualTouchpadUriHandlerFactory@@QEAA@XZ @ 0x180224300 (--0VirtualTouchpadUriHandlerFactory@@QEAA@XZ.c)
 *     ??1VirtualTouchpadUriHandlerFactory@@EEAA@XZ @ 0x1802243C8 (--1VirtualTouchpadUriHandlerFactory@@EEAA@XZ.c)
 * Callees:
 *     _Init_thread_footer @ 0x180098368 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800983C8 (_Init_thread_header.c)
 *     atexit @ 0x180098A9C (atexit.c)
 */

__int64 *Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create()
{
  if ( __TSS0__1__Create___Module__00V__DefaultModule__00_Details_WRL_Microsoft___WRL_Microsoft__SAAEAV__DefaultModule__00_Details_34_XZ_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index) + 4LL) )
  {
    Init_thread_header(&__TSS0__1__Create___Module__00V__DefaultModule__00_Details_WRL_Microsoft___WRL_Microsoft__SAAEAV__DefaultModule__00_Details_34_XZ_4HA);
    if ( __TSS0__1__Create___Module__00V__DefaultModule__00_Details_WRL_Microsoft___WRL_Microsoft__SAAEAV__DefaultModule__00_Details_34_XZ_4HA == -1 )
    {
      Microsoft::WRL::Details::ModuleBase::module_ = (struct Microsoft::WRL::Details::ModuleBase *)&`Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create'::`2'::moduleSingleton;
      `Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create'::`2'::moduleSingleton = (__int64)&Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::`vftable';
      atexit(`Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create'::`2'::`dynamic atexit destructor for 'moduleSingleton'');
      Init_thread_footer(&__TSS0__1__Create___Module__00V__DefaultModule__00_Details_WRL_Microsoft___WRL_Microsoft__SAAEAV__DefaultModule__00_Details_34_XZ_4HA);
    }
  }
  return &`Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create'::`2'::moduleSingleton;
}
