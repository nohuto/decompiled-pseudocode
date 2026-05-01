/*
 * XREFs of ?FullScreenVisibilityChanged@CPerMonitorDesktopVisibilityService@@UEAAJH@Z @ 0x1802B3CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D61C (-InternalRelease@-$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetSite@CWRLObjectWithGITSite@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180030CE0 (-GetSite@CWRLObjectWithGITSite@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180054130 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18005415C (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_3723e99f8ac1c766dbc5b421cdf09ee2___ @ 0x1802B36D8 (Windows--Internal--ComTaskPool--QueueTask__lambda_3723e99f8ac1c766dbc5b421cdf09ee2___.c)
 *     ?GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x18030A064 (-GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CPerMonitorDesktopVisibilityService::FullScreenVisibilityChanged(
        CPerMonitorDesktopVisibilityService *this,
        int a2)
{
  int v4; // esi
  int CallbackArray; // eax
  int v6; // ebx
  __int64 (__fastcall *v7)(RTL_SRWLOCK *, struct _GUID *, void **); // rax
  RTL_SRWLOCK *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct IObjectArray *v13; // [rsp+20h] [rbp-30h] BYREF
  RTL_SRWLOCK *v14[2]; // [rsp+28h] [rbp-28h] BYREF
  struct IObjectArray *v15; // [rsp+38h] [rbp-18h] BYREF
  int v16; // [rsp+40h] [rbp-10h]
  void *v17; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  IUnknown *punk; // [rsp+80h] [rbp+30h] BYREF
  void *ppvOut; // [rsp+88h] [rbp+38h] BYREF

  v14[1] = (RTL_SRWLOCK *)-2LL;
  if ( *((_DWORD *)this + 24) )
  {
    Microsoft::WRL::Wrappers::SRWLock::LockExclusive(v14, (RTL_SRWLOCK *)this + 14);
    v4 = a2 == 0;
    if ( v4 != *((_DWORD *)this + 26) )
    {
      *((_DWORD *)this + 26) = v4;
      v13 = 0LL;
      Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)&v13);
      CallbackArray = CGITRegistrationList::GetCallbackArray(
                        (CPerMonitorDesktopVisibilityService *)((char *)this + 48),
                        &v13);
      v6 = CallbackArray;
      if ( CallbackArray < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x72,
          (__int64)"pcshell\\twinui\\apppositioner\\lib\\desktopvisibility.cpp",
          (const char *)(unsigned int)CallbackArray);
LABEL_13:
        Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)&v13);
        Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(v14);
        return (unsigned int)v6;
      }
      ppvOut = 0LL;
      punk = 0LL;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((CWinRTApplicationView **)&punk);
      v7 = *(__int64 (__fastcall **)(RTL_SRWLOCK *, struct _GUID *, void **))(*((_QWORD *)this - 14) + 32LL);
      v8 = (RTL_SRWLOCK *)((char *)this - 112);
      if ( v7 == CWRLObjectWithGITSite::GetSite )
        CWRLObjectWithGITSite::GetSite(v8, &GUID_00000000_0000_0000_c000_000000000046, (void **)&punk);
      else
        v7(v8, &GUID_00000000_0000_0000_c000_000000000046, (void **)&punk);
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&ppvOut);
      v6 = IUnknown_QueryService(
             punk,
             &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
             &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
             &ppvOut);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((CWinRTApplicationView **)&punk);
      if ( v6 < 0 )
      {
        v9 = 118LL;
LABEL_12:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v9,
          (__int64)"pcshell\\twinui\\apppositioner\\lib\\desktopvisibility.cpp",
          (const char *)(unsigned int)v6);
        Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&ppvOut);
        goto LABEL_13;
      }
      v15 = v13;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v15);
      v16 = v4;
      v17 = ppvOut;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v17);
      v6 = Windows::Internal::ComTaskPool::QueueTask__lambda_3723e99f8ac1c766dbc5b421cdf09ee2___(
             v11,
             v10,
             *((_DWORD *)this + 25),
             (__int64)&v15);
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v17);
      Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)&v15);
      if ( v6 < 0 )
      {
        v9 = 138LL;
        goto LABEL_12;
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&ppvOut);
      Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)&v13);
    }
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(v14);
  }
  return 0LL;
}
