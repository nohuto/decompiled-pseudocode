/*
 * XREFs of ?InitializeInstance@TabletModeCoverWindow@@AEAAJXZ @ 0x1802E2374
 * Callers:
 *     ?v_WndProc@TabletModeCoverWindow@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x1802E2BB0 (-v_WndProc@TabletModeCoverWindow@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SiteUnk@CWRLObjectWithGITSite@@IEAA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ @ 0x180030C68 (-SiteUnk@CWRLObjectWithGITSite@@IEAA-AV-$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18005415C (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x180085F20 (-IsTabletMode@TabletModeHelpers@@YA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockExclusive@Details@234@XZ @ 0x1800F5E74 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockExclusive@Details@234@XZ.c)
 *     ?TabletModeChanged@TabletModeCoverWindow@@UEAAJ_N@Z @ 0x1802E2900 (-TabletModeChanged@TabletModeCoverWindow@@UEAAJ_N@Z.c)
 */

__int64 __fastcall TabletModeCoverWindow::InitializeInstance(TabletModeCoverWindow *this)
{
  void **v2; // rax
  HRESULT Service; // ebx
  unsigned __int64 v4; // r9
  __int64 v5; // rdx
  int v6; // eax
  enum _TABLETMODESTATE *v7; // rdx
  TabletModeHelpers *v8; // rcx
  char IsTabletMode; // al
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  RTL_SRWLOCK *v13; // [rsp+60h] [rbp+8h] BYREF
  void *v14; // [rsp+68h] [rbp+10h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockExclusive((RTL_SRWLOCK *)this + 14, &v13);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)this + 17);
  v2 = CWRLObjectWithGITSite::SiteUnk(this, &v14);
  Service = IUnknown_QueryService(
              (IUnknown *)*v2,
              &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
              &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
              (void **)this + 17);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((CWinRTApplicationView **)&v14);
  if ( Service < 0 )
  {
    v4 = (unsigned int)Service;
    v5 = 389LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
      (const char *)v4);
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v13);
    goto LABEL_8;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 17) + 88LL))(
         *((_QWORD *)this + 17),
         (char *)this + 204);
  Service = v6;
  if ( v6 < 0 )
  {
    v4 = (unsigned int)v6;
    v5 = 390LL;
    goto LABEL_5;
  }
  SetWindowPos(
    *((HWND *)this + 13),
    0LL,
    *((_DWORD *)this + 51),
    *((_DWORD *)this + 52),
    *((_DWORD *)this + 53) - *((_DWORD *)this + 51),
    *((_DWORD *)this + 54) - *((_DWORD *)this + 52),
    0x14u);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v13);
  IsTabletMode = TabletModeHelpers::IsTabletMode(v8, v7);
  v10 = TabletModeCoverWindow::TabletModeChanged((TabletModeCoverWindow *)((char *)this + 80), IsTabletMode);
  Service = v10;
  if ( v10 >= 0 )
    return 0;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x18B,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
    (const char *)(unsigned int)v10);
LABEL_8:
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive((RTL_SRWLOCK *)this + 14, &v13);
  *((_BYTE *)this + 200) = 0;
  ShowWindow(*((HWND *)this + 13), 0);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v13);
  return (unsigned int)Service;
}
