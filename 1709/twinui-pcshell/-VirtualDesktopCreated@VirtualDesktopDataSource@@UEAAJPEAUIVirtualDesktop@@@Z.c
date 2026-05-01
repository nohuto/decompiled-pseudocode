/*
 * XREFs of ?VirtualDesktopCreated@VirtualDesktopDataSource@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x1801B5690
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$InvokeAll@PEAVCJumpViewExperienceManager@@PEAUIJumpViewExperienceEventArgs@Experience@Shell@Internal@Windows@@@?$EventSource@U?$ITypedEventHandler@PEAVJumpViewExperienceManager@Experience@Shell@Internal@Windows@@PEAVJumpViewExperienceEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVCJumpViewExperienceManager@@PEAUIJumpViewExperienceEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x1800C0274 (--$InvokeAll@PEAVCJumpViewExperienceManager@@PEAUIJumpViewExperienceEventArgs@Experience@Shell@I.c)
 *     ?GetWinRTDesktopForInternalDesktopInternal@VirtualDesktopDataSource@@AEAAJPEAUIVirtualDesktop@@PEAPEAU2Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1801B5478 (-GetWinRTDesktopForInternalDesktopInternal@VirtualDesktopDataSource@@AEAAJPEAUIVirtualDesktop@@P.c)
 *     ??$MakeAndInitialize@VVirtualDesktopCollectionChangedEventArgs@@UIVirtualDesktopCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@W4VirtualDesktopCollectionChangedEventType@3456@PEAUIVirtualDesktop@3456@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIVirtualDesktopCollectionChangedEventArgs@Multitasking@ComposableShell@Internal@Windows@@@WRL@Microsoft@@@012@$$QEAW4VirtualDesktopCollectionChangedEventType@Multitasking@ComposableShell@Internal@Windows@@$$QEAPEAUIVirtualDesktop@5678@@Z @ 0x1801B64A8 (--$MakeAndInitialize@VVirtualDesktopCollectionChangedEventArgs@@UIVirtualDesktopCollectionChange.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall VirtualDesktopDataSource::VirtualDesktopCreated(RTL_SRWLOCK *this, struct IVirtualDesktop *a2)
{
  RTL_SRWLOCK *v4; // rsi
  unsigned int v5; // edi
  int WinRTDesktopForInternalDesktopInternal; // eax
  struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *v7; // rbx
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *v13; // [rsp+60h] [rbp+30h] BYREF
  __int64 v14; // [rsp+70h] [rbp+40h] BYREF
  struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *v15; // [rsp+78h] [rbp+48h] BYREF

  v14 = 0LL;
  v4 = this + 36;
  AcquireSRWLockExclusive(this + 36);
  if ( !this[11].Ptr )
  {
    v5 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD4,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
      (const char *)0x8007139FLL);
LABEL_9:
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    goto LABEL_17;
  }
  v13 = 0LL;
  WinRTDesktopForInternalDesktopInternal = VirtualDesktopDataSource::GetWinRTDesktopForInternalDesktopInternal(
                                             (VirtualDesktopDataSource *)&this[-3],
                                             a2,
                                             &v13);
  v5 = WinRTDesktopForInternalDesktopInternal;
  v7 = v13;
  if ( WinRTDesktopForInternalDesktopInternal < 0 )
  {
    v8 = 215LL;
    goto LABEL_7;
  }
  v15 = v13;
  LODWORD(v13) = 0;
  WinRTDesktopForInternalDesktopInternal = Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopCollectionChangedEventArgs,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs,enum Windows::Internal::ComposableShell::Multitasking::VirtualDesktopCollectionChangedEventType,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *>(
                                             &v14,
                                             &v13,
                                             &v15);
  v5 = WinRTDesktopForInternalDesktopInternal;
  if ( WinRTDesktopForInternalDesktopInternal < 0 )
  {
    v8 = 216LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
      (const char *)(unsigned int)WinRTDesktopForInternalDesktopInternal);
    if ( v7 )
      (*(void (__fastcall **)(struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *))(*(_QWORD *)v7 + 16LL))(v7);
    goto LABEL_9;
  }
  if ( v7 )
    (*(void (__fastcall **)(struct Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop *))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  v9 = Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::JumpViewExperienceManager *,Windows::Internal::Shell::Experience::JumpViewExperienceEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<CJumpViewExperienceManager *,Windows::Internal::Shell::Experience::IJumpViewExperienceEventArgs *>(
         this + 8,
         (__int64)&this[-3],
         v14);
  v5 = v9;
  if ( v9 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDB,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
      (const char *)(unsigned int)v9);
LABEL_17:
  v10 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return v5;
}
