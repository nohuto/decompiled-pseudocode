/*
 * XREFs of ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@V?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UIXamlViewHost@@VNil@Details@23@V6723@V6723@V6723@V6723@V6723@V6723@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18013FD50
 * Callers:
 *     <none>
 * Callees:
 *     ??1MonitorEventListener@@QEAA@XZ @ 0x180130084 (--1MonitorEventListener@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

char *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewHostBase<IAltTabViewHost>,IXamlViewHost,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vector deleting destructor'(
        char *Block,
        char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  *((_DWORD *)Block + 31) = -1073741823;
  MonitorEventListener::~MonitorEventListener((MonitorEventListener *)(Block + 88));
  v4 = *((_QWORD *)Block + 10);
  if ( v4 )
  {
    *((_QWORD *)Block + 10) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)Block + 9);
  if ( v5 )
  {
    *((_QWORD *)Block + 9) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(Block + 16));
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
