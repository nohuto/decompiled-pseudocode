/*
 * XREFs of ??_GCShoulderTapExperienceManager@@UEAAPEAXI@Z @ 0x1800A6E10
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIImmersiveComponentCreator@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180019DC0 (-Release@-$RuntimeClass@U-$InterfaceList@UIImmersiveComponentCreator@@VNil@Details@WRL@Microsoft.c)
 *     ??1CSingleViewShellExperience@@QEAA@XZ @ 0x1801800AC (--1CSingleViewShellExperience@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
HSTRING *__fastcall CShoulderTapExperienceManager::`scalar deleting destructor'(HSTRING *this, char a2)
{
  HSTRING v4; // rcx
  HSTRING v5; // rcx
  __int64 v6; // rcx

  WindowsDeleteString(this[38]);
  this[38] = 0LL;
  WindowsDeleteString(this[37]);
  this[37] = 0LL;
  WindowsDeleteString(this[35]);
  this[35] = 0LL;
  WindowsDeleteString(this[34]);
  this[34] = 0LL;
  WindowsDeleteString(this[33]);
  this[33] = 0LL;
  v4 = this[31];
  if ( v4 )
  {
    this[31] = 0LL;
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = this[30];
  if ( v5 )
  {
    this[30] = 0LL;
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v5 + 16LL))(v5);
  }
  CSingleViewShellExperience::~CSingleViewShellExperience((CSingleViewShellExperience *)(this + 5));
  v6 = (__int64)this[3];
  if ( v6 < 0 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IImmersiveComponentCreator,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)(2 * v6));
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
