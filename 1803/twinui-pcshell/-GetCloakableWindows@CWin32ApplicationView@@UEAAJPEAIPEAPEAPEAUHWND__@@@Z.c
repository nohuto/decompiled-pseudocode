/*
 * XREFs of ?GetCloakableWindows@CWin32ApplicationView@@UEAAJPEAIPEAPEAPEAUHWND__@@@Z @ 0x18013F970
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveAll@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAXXZ @ 0x18000C204 (-RemoveAll@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CSimpleA.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180054130 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18005415C (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?CopyCloakableWindowsFromGatherer@CWin32ApplicationView@@AEAAJPEAIPEAPEAPEAUHWND__@@@Z @ 0x18013ED30 (-CopyCloakableWindowsFromGatherer@CWin32ApplicationView@@AEAAJPEAIPEAPEAPEAUHWND__@@@Z.c)
 *     ?GatherWindows@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJPEAUHWND__@@@Z @ 0x18013F58C (-GatherWindows@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManageme.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWin32ApplicationView::GetCloakableWindows(RTL_SRWLOCK *this, unsigned int *a2, HWND **a3)
{
  CWin32ApplicationView *v6; // rdi
  int v7; // eax
  unsigned int v8; // ebx
  HWND v9; // rax
  int v10; // eax
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  RTL_SRWLOCK *v14; // [rsp+50h] [rbp+8h] BYREF

  *a2 = 0;
  *a3 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v14, this - 13);
  v6 = (CWin32ApplicationView *)&this[-18];
  if ( !this[11].Ptr )
  {
    v9 = (HWND)(*(__int64 (__fastcall **)(PVOID))(*(_QWORD *)this[8].Ptr + 24LL))(this[8].Ptr);
    v10 = ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::GatherWindows(
            &this[10].Ptr,
            v9);
    v8 = v10;
    if ( v10 >= 0 )
    {
      v10 = CWin32ApplicationView::CopyCloakableWindowsFromGatherer(v6, a2, a3);
      v8 = v10;
      if ( v10 >= 0 )
      {
LABEL_9:
        CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::RemoveAll((__int64)v6 + 224);
        goto LABEL_10;
      }
      v11 = 796LL;
    }
    else
    {
      v11 = 795LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_9;
  }
  v7 = CWin32ApplicationView::CopyCloakableWindowsFromGatherer((CWin32ApplicationView *)&this[-18], a2, a3);
  v8 = v7;
  if ( v7 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x316,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)(unsigned int)v7);
LABEL_10:
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v14);
  return v8;
}
