/*
 * XREFs of ??_GCPeopleTestExperienceManager@@UEAAPEAXI@Z @ 0x1800B2A70
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPeopleTestExperienceManager@Experience@Shell@Internal@Windows@@UIClosable@Foundation@8@VFtmBase@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180073CB8 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPeopleTestExperienceMa.c)
 *     ??1CSingleViewShellExperience@@QEAA@XZ @ 0x1801CF5B0 (--1CSingleViewShellExperience@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CPeopleTestExperienceManager *__fastcall CPeopleTestExperienceManager::`scalar deleting destructor'(
        CPeopleTestExperienceManager *this,
        char a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 36);
  if ( v4 )
  {
    *((_QWORD *)this + 36) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  CSingleViewShellExperience::~CSingleViewShellExperience((CPeopleTestExperienceManager *)((char *)this + 88));
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IPeopleTestExperienceManager,Windows::Foundation::IClosable,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IPeopleTestExperienceManager,Windows::Foundation::IClosable,Microsoft::WRL::FtmBase>((__int64)this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
