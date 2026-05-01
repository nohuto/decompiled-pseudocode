/*
 * XREFs of ??_ECPeopleBarJumpViewExperienceManager@@UEAAPEAXI@Z @ 0x1800B0F20
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSingleViewShellExperience@@QEAA@XZ @ 0x1801CF5B0 (--1CSingleViewShellExperience@@QEAA@XZ.c)
 *     ??1CExperienceManagerAnimationHelper@@QEAA@XZ @ 0x1801DB104 (--1CExperienceManagerAnimationHelper@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
HSTRING *__fastcall CPeopleBarJumpViewExperienceManager::`vector deleting destructor'(HSTRING *this, char a2)
{
  HSTRING v4; // rcx
  HSTRING v5; // rcx
  HSTRING v6; // rcx
  HSTRING v7; // rcx
  __int64 v8; // rcx
  volatile signed __int32 *v9; // rcx

  CExperienceManagerAnimationHelper::~CExperienceManagerAnimationHelper((CExperienceManagerAnimationHelper *)(this + 49));
  CExperienceManagerAnimationHelper::~CExperienceManagerAnimationHelper((CExperienceManagerAnimationHelper *)(this + 45));
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
  {
    v9 = (volatile signed __int32 *)(2 * v8);
    if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
    {
      if ( v9 )
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v9 + 32LL))(v9, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
