/*
 * XREFs of ??_ECPeopleBarJumpViewExperienceManager@@UEAAPEAXI@Z @ 0x1800A45F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIImmersiveComponentCreator@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180019DC0 (-Release@-$RuntimeClass@U-$InterfaceList@UIImmersiveComponentCreator@@VNil@Details@WRL@Microsoft.c)
 *     ??1CSingleViewShellExperience@@QEAA@XZ @ 0x1801800AC (--1CSingleViewShellExperience@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
HSTRING *__fastcall CPeopleBarJumpViewExperienceManager::`vector deleting destructor'(HSTRING *this, char a2)
{
  HSTRING v4; // rcx
  HSTRING v5; // rcx
  HSTRING v6; // rcx
  HSTRING v7; // rcx
  __int64 v8; // rcx

  WindowsDeleteString(this[44]);
  this[44] = 0LL;
  WindowsDeleteString(this[38]);
  this[38] = 0LL;
  v4 = this[35];
  if ( v4 )
  {
    this[35] = 0LL;
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = this[34];
  if ( v5 )
  {
    this[34] = 0LL;
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = this[33];
  if ( v6 )
  {
    this[33] = 0LL;
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = this[32];
  if ( v7 )
  {
    this[32] = 0LL;
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v7 + 16LL))(v7);
  }
  CSingleViewShellExperience::~CSingleViewShellExperience((CSingleViewShellExperience *)(this + 7));
  v8 = (__int64)this[5];
  if ( v8 < 0 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IImmersiveComponentCreator,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)(2 * v8));
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
