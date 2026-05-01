/*
 * XREFs of ?OnViewDestroyedBase@CSingleViewShellExperience@@AEAAJXZ @ 0x180307AB0
 * Callers:
 *     ?OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x18006B1D0 (-OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventAr.c)
 *     ?DestroyView@CSingleViewShellExperience@@QEAAJXZ @ 0x1803070E4 (-DestroyView@CSingleViewShellExperience@@QEAAJXZ.c)
 * Callees:
 *     ?UnboostDiskIo@CSingleViewShellExperience@@AEAAXXZ @ 0x180069954 (-UnboostDiskIo@CSingleViewShellExperience@@AEAAXXZ.c)
 *     ?UnboostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z @ 0x180069ADC (-UnboostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?ResetViews@CSingleViewShellExperience@@AEAAXXZ @ 0x180307DF4 (-ResetViews@CSingleViewShellExperience@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSingleViewShellExperience::OnViewDestroyedBase(CSingleViewShellExperience *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // eax
  unsigned int v6; // edi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *((_DWORD *)this + 36) = 1;
  CSingleViewShellExperience::UnboostPriority((__int64)this, 0);
  CSingleViewShellExperience::UnboostPriority((__int64)this, 1);
  CSingleViewShellExperience::UnboostDiskIo(this, v2, v3, v4, -2);
  *((_DWORD *)this + 42) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 0;
  v5 = (*(__int64 (__fastcall **)(_QWORD, CSingleViewShellExperience *))(**((_QWORD **)this + 11) + 8LL))(
         *((_QWORD *)this + 11),
         this);
  v6 = v5;
  if ( v5 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x217,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v5);
  CSingleViewShellExperience::ResetViews(this);
  return v6;
}
