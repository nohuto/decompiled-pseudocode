/*
 * XREFs of ??_GShellExperienceView@Cortana@TwinUI@@UEAAPEAXI@Z @ 0x1800C0180
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIImmersiveComponentCreator@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180019DC0 (-Release@-$RuntimeClass@U-$InterfaceList@UIImmersiveComponentCreator@@VNil@Details@WRL@Microsoft.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180022B90 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ??1CSingleViewShellExperience@@QEAA@XZ @ 0x1801800AC (--1CSingleViewShellExperience@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
TwinUI::Cortana::ShellExperienceView *__fastcall TwinUI::Cortana::ShellExperienceView::`scalar deleting destructor'(
        TwinUI::Cortana::ShellExperienceView *this,
        char a2)
{
  volatile signed __int32 *v4; // rcx
  volatile signed __int32 *v5; // rcx
  __int64 v6; // rcx

  v4 = (volatile signed __int32 *)*((_QWORD *)this + 34);
  if ( v4 )
  {
    *((_QWORD *)this + 34) = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v4);
  }
  v5 = (volatile signed __int32 *)*((_QWORD *)this + 31);
  if ( v5 )
  {
    *((_QWORD *)this + 31) = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v5);
  }
  CSingleViewShellExperience::~CSingleViewShellExperience((TwinUI::Cortana::ShellExperienceView *)((char *)this + 48));
  v6 = *((_QWORD *)this + 4);
  if ( v6 < 0 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IImmersiveComponentCreator,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)(2 * v6));
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
