/*
 * XREFs of ??_ECWelcomeScreenExperienceManager@@UEAAPEAXI@Z @ 0x1800B29D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIImmersiveComponentCreator@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180019DC0 (-Release@-$RuntimeClass@U-$InterfaceList@UIImmersiveComponentCreator@@VNil@Details@WRL@Microsoft.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180022B90 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ??1CSingleViewShellExperience@@QEAA@XZ @ 0x1801800AC (--1CSingleViewShellExperience@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
CWelcomeScreenExperienceManager *__fastcall CWelcomeScreenExperienceManager::`vector deleting destructor'(
        CWelcomeScreenExperienceManager *this,
        char a2)
{
  __int64 v4; // rcx
  void *v5; // rcx
  volatile signed __int32 *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx

  CSingleViewShellExperience::~CSingleViewShellExperience((CWelcomeScreenExperienceManager *)((char *)this + 136));
  v4 = *((_QWORD *)this + 16);
  if ( v4 )
  {
    *((_QWORD *)this + 16) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = (void *)*((_QWORD *)this + 13);
  if ( v5 )
  {
    CoTaskMemFree(v5);
    *((_QWORD *)this + 13) = 0LL;
  }
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  v6 = (volatile signed __int32 *)*((_QWORD *)this + 9);
  if ( v6 )
  {
    *((_QWORD *)this + 9) = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v6);
  }
  v7 = *((_QWORD *)this + 7);
  if ( v7 < 0 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IImmersiveComponentCreator,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)(2 * v7));
  v8 = *((_QWORD *)this + 5);
  if ( v8 )
  {
    *((_QWORD *)this + 5) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
