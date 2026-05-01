/*
 * XREFs of ??_GCShoulderTapExperienceManager@@UEAAPEAXI@Z @ 0x1800B3DF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSingleViewShellExperience@@QEAA@XZ @ 0x1801CF5B0 (--1CSingleViewShellExperience@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
HSTRING *__fastcall CShoulderTapExperienceManager::`scalar deleting destructor'(HSTRING *this, char a2)
{
  HSTRING v4; // rcx
  HSTRING v5; // rcx
  __int64 v6; // rcx
  volatile signed __int32 *v7; // rcx

  WindowsDeleteString(this[40]);
  this[40] = 0LL;
  WindowsDeleteString(this[39]);
  this[39] = 0LL;
  WindowsDeleteString(this[38]);
  this[38] = 0LL;
  WindowsDeleteString(this[35]);
  this[35] = 0LL;
  WindowsDeleteString(this[34]);
  this[34] = 0LL;
  WindowsDeleteString(this[33]);
  this[33] = 0LL;
  WindowsDeleteString(this[32]);
  this[32] = 0LL;
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
  {
    v7 = (volatile signed __int32 *)(2 * v6);
    if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
    {
      if ( v7 )
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v7 + 32LL))(v7, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
