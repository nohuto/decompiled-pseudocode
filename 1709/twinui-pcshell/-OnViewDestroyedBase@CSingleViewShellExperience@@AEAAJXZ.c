/*
 * XREFs of ?OnViewDestroyedBase@CSingleViewShellExperience@@AEAAJXZ @ 0x1801D0EE8
 * Callers:
 *     ?OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x1801D0594 (-OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventAr.c)
 *     ?DestroyView@CSingleViewShellExperience@@QEAAJXZ @ 0x1801D0C88 (-DestroyView@CSingleViewShellExperience@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResetViews@CSingleViewShellExperience@@AEAAXXZ @ 0x1801D0548 (-ResetViews@CSingleViewShellExperience@@AEAAXXZ.c)
 *     ?UnboostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z @ 0x1801D33BC (-UnboostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z.c)
 *     ?UnboostDiskIo@CSingleViewShellExperience@@AEAAXXZ @ 0x1801D3508 (-UnboostDiskIo@CSingleViewShellExperience@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSingleViewShellExperience::OnViewDestroyedBase(CSingleViewShellExperience *this)
{
  int v2; // eax
  unsigned int v3; // edi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *((_DWORD *)this + 36) = 1;
  CSingleViewShellExperience::UnboostPriority(this, 0LL);
  CSingleViewShellExperience::UnboostPriority(this, 1LL);
  CSingleViewShellExperience::UnboostDiskIo(this);
  *((_DWORD *)this + 42) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 0;
  v2 = (*(__int64 (__fastcall **)(_QWORD, CSingleViewShellExperience *))(**((_QWORD **)this + 11) + 8LL))(
         *((_QWORD *)this + 11),
         this);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x219,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v2);
  CSingleViewShellExperience::ResetViews(this);
  return v3;
}
