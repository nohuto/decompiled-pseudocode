/*
 * XREFs of ?GetModule@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@SAAEAV?$DefaultModule@$00@Details@23@XZ @ 0x1800053BC
 * Callers:
 *     ?CreateComponent@ImmersiveShellComponentCreator@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x180004B00 (-CreateComponent@ImmersiveShellComponentCreator@@UEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     DllGetActivationFactory @ 0x180004F40 (DllGetActivationFactory.c)
 *     DllGetClassObject @ 0x1800050C0 (DllGetClassObject.c)
 *     DllCanUnloadNow @ 0x180005110 (DllCanUnloadNow.c)
 *     ??_GVirtualTouchpadUriHandlerFactory@@EEAAPEAXI@Z @ 0x1801477D0 (--_GVirtualTouchpadUriHandlerFactory@@EEAAPEAXI@Z.c)
 *     ??$CreateClassFactory@VVirtualTouchpadUriHandlerFactory@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180147AB0 (--$CreateClassFactory@VVirtualTouchpadUriHandlerFactory@@@Details@WRL@Microsoft@@YAJPEAIPEBUCrea.c)
 *     ?CreateInstance@?$SimpleClassFactory@VVirtualTouchpadUriHandlerFactory@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180147E00 (-CreateInstance@-$SimpleClassFactory@VVirtualTouchpadUriHandlerFactory@@$0A@@WRL@Microsoft@@UEAA.c)
 * Callees:
 *     _Init_thread_footer @ 0x180193FE8 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180194048 (_Init_thread_header.c)
 *     atexit @ 0x18019472C (atexit.c)
 */

void *__fastcall Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::GetModule()
{
  if ( __TSS0__1__Create___Module__00V__DefaultModule__00_Details_WRL_Microsoft___WRL_Microsoft__SAAEAV__DefaultModule__00_Details_34_XZ_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index) + 4LL) )
  {
    Init_thread_header(&__TSS0__1__Create___Module__00V__DefaultModule__00_Details_WRL_Microsoft___WRL_Microsoft__SAAEAV__DefaultModule__00_Details_34_XZ_4HA);
    if ( __TSS0__1__Create___Module__00V__DefaultModule__00_Details_WRL_Microsoft___WRL_Microsoft__SAAEAV__DefaultModule__00_Details_34_XZ_4HA == -1 )
    {
      Microsoft::WRL::Details::ModuleBase::module_ = (struct Microsoft::WRL::Details::ModuleBase *)&`Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create'::`2'::moduleSingleton;
      `Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create'::`2'::moduleSingleton = &Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::`vftable';
      atexit(`Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create'::`2'::`dynamic atexit destructor for 'moduleSingleton'');
      Init_thread_footer(&__TSS0__1__Create___Module__00V__DefaultModule__00_Details_WRL_Microsoft___WRL_Microsoft__SAAEAV__DefaultModule__00_Details_34_XZ_4HA);
    }
  }
  return &`Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::Create'::`2'::moduleSingleton;
}
