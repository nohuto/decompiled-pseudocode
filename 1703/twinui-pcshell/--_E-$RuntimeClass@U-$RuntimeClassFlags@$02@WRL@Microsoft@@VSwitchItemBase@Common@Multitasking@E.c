/*
 * XREFs of ??_E?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VSwitchItemBase@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@UIAppViewSwitchItem@@VFtmBase@23@VNil@Details@23@VNil@Details@23@VNil@Details@23@VNil@Details@23@VNil@Details@23@VNil@Details@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1801649D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIImmersiveComponentCreator@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180019DC0 (-Release@-$RuntimeClass@U-$InterfaceList@UIImmersiveComponentCreator@@VNil@Details@WRL@Microsoft.c)
 *     ??1SwitchItemBase@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@QEAA@XZ @ 0x180164878 (--1SwitchItemBase@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemBase *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemBase,IAppViewSwitchItem,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vector deleting destructor'(
        WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemBase *this,
        char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  v4 = *((_QWORD *)this + 22);
  if ( v4 < 0 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IImmersiveComponentCreator,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)(2 * v4));
  v5 = *((_QWORD *)this + 20);
  if ( v5 )
  {
    *((_QWORD *)this + 20) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  WindowsInternal::ComposableShell::Experiences::Multitasking::Common::SwitchItemBase::~SwitchItemBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
