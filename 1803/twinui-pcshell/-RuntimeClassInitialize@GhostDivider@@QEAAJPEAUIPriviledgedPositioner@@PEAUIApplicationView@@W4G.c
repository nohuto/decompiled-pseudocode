/*
 * XREFs of ?RuntimeClassInitialize@GhostDivider@@QEAAJPEAUIPriviledgedPositioner@@PEAUIApplicationView@@W4GhostDividerPlacement@@@Z @ 0x1802EC064
 * Callers:
 *     ??$MakeAndInitialize@VGhostDivider@@V1@AEAPEAUIPriviledgedPositioner@@AEAPEAUIApplicationView@@AEAW4GhostDividerPlacement@@@Details@WRL@Microsoft@@YAJPEAPEAVGhostDivider@@AEAPEAUIPriviledgedPositioner@@AEAPEAUIApplicationView@@AEAW4GhostDividerPlacement@@@Z @ 0x1802EB7B0 (--$MakeAndInitialize@VGhostDivider@@V1@AEAPEAUIPriviledgedPositioner@@AEAPEAUIApplicationView@@A.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z @ 0x18000AEC0 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800FEE7C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??4?$ComPtr@UIApplicationViewVisibilityDebouncedNotificationService@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewVisibilityDebouncedNotificationService@@@Z @ 0x18027E86C (--4-$ComPtr@UIApplicationViewVisibilityDebouncedNotificationService@@@WRL@Microsoft@@QEAAAEAV012.c)
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x180288768 (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 *     ?GetPreviousWindow@GhostDivider@@AEAAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1802EBB1C (-GetPreviousWindow@GhostDivider@@AEAAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?RegisterWindowClass@GhostDivider@@AEAAXXZ @ 0x1802EBFA4 (-RegisterWindowClass@GhostDivider@@AEAAXXZ.c)
 */

__int64 __fastcall GhostDivider::RuntimeClassInitialize(
        __int64 a1,
        __int64 a2,
        __int64 (__fastcall ***a3)(CWin32ApplicationView *this, struct _GUID *a2, void **a3),
        int a4)
{
  int ScaleFactorForMonitor; // eax
  unsigned int LastError; // edi
  __int64 v10; // rdx
  __int64 (__fastcall **v11)(CWin32ApplicationView *, struct _GUID *, void **); // rax
  int v12; // edx
  unsigned int Color; // eax
  GhostDivider *v14; // rcx
  HWND PreviousWindow; // rdi
  GhostDivider *v16; // rcx
  HWND Window; // rax
  const char *v18; // r9
  HWND v19; // rbx
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  int v23; // r8d
  int v24; // eax
  HRESULT v25; // eax
  __int64 v26; // rdx
  void *v27; // rdi
  __int64 v28; // rdi
  _QWORD *v29; // r15
  __int64 v30; // rdx
  __int64 v31; // rcx
  int Y; // [rsp+28h] [rbp-71h]
  IUnknown *punk; // [rsp+60h] [rbp-39h] BYREF
  void *ppvOut; // [rsp+68h] [rbp-31h] BYREF
  __int64 v36; // [rsp+70h] [rbp-29h]
  __int64 v37; // [rsp+78h] [rbp-21h] BYREF
  int v38[4]; // [rsp+80h] [rbp-19h] BYREF
  _DWORD v39[4]; // [rsp+90h] [rbp-9h] BYREF
  __int128 v40; // [rsp+A0h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  punk = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&punk);
  ScaleFactorForMonitor = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(CWin32ApplicationView *, struct _GUID *, void **), IUnknown **))(*a3)[10])(
                            a3,
                            &punk);
  LastError = ScaleFactorForMonitor;
  if ( ScaleFactorForMonitor < 0 )
  {
    v10 = 56LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\jointresize\\lib\\ghostdivider.cpp",
      (const char *)(unsigned int)ScaleFactorForMonitor);
    goto LABEL_29;
  }
  *(_OWORD *)v38 = 0LL;
  ScaleFactorForMonitor = ((__int64 (__fastcall *)(IUnknown *, int *))punk->lpVtbl[3].Release)(punk, v38);
  LastError = ScaleFactorForMonitor;
  if ( ScaleFactorForMonitor < 0 )
  {
    v10 = 59LL;
    goto LABEL_11;
  }
  v11 = *a3;
  v40 = 0LL;
  ScaleFactorForMonitor = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(CWin32ApplicationView *, struct _GUID *, void **), __int128 *))v11[16])(
                            a3,
                            &v40);
  LastError = ScaleFactorForMonitor;
  if ( ScaleFactorForMonitor < 0 )
  {
    v10 = 62LL;
    goto LABEL_11;
  }
  ScaleFactorForMonitor = ((__int64 (__fastcall *)(IUnknown *, __int64 *))punk->lpVtbl[1].Release)(punk, &v37);
  LastError = ScaleFactorForMonitor;
  if ( ScaleFactorForMonitor < 0 )
  {
    v10 = 65LL;
    goto LABEL_11;
  }
  ScaleFactorForMonitor = GetScaleFactorForMonitor(v37, a1 + 64);
  LastError = ScaleFactorForMonitor;
  if ( ScaleFactorForMonitor < 0 )
  {
    v10 = 66LL;
    goto LABEL_11;
  }
  v12 = 16 * *(_DWORD *)(a1 + 64) / 100;
  *(_DWORD *)(a1 + 80) = v38[3] - v38[1];
  *(_DWORD *)(a1 + 76) = v12;
  Color = CImmersiveColor::GetColor(0x493u);
  *(_DWORD *)(a1 + 88) = Color;
  *(_BYTE *)(a1 + 91) = 0;
  *(double *)(a1 + 96) = (float)((float)HIBYTE(Color) / 255.0);
  PreviousWindow = GhostDivider::GetPreviousWindow(v14, a3);
  GhostDivider::RegisterWindowClass(v16);
  Window = CreateWindowExW(
             0x82800A0u,
             L"GhostDivider",
             &word_18035ABCC,
             0x80000000,
             0,
             0,
             0,
             0,
             0LL,
             0LL,
             &_ImageBase,
             (LPVOID)a1);
  v19 = Window;
  if ( !Window )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x5B,
                  (__int64)"pcshell\\twinui\\jointresize\\lib\\ghostdivider.cpp",
                  v18);
    goto LABEL_27;
  }
  SetLayeredWindowAttributes(Window, 0, 0xFFu, 2u);
  v20 = *(_DWORD *)(a1 + 76);
  v21 = v40;
  if ( a4 )
    v21 = DWORD2(v40);
  v22 = v38[1];
  v23 = v21 - *(_DWORD *)(a1 + 76) / 2;
  Y = *(_DWORD *)(a1 + 80);
  *(_DWORD *)(a1 + 68) = v23;
  *(_DWORD *)(a1 + 72) = v22;
  SetWindowPos(v19, 0LL, v23, v22, v20, Y, 0x54u);
  v24 = (*(__int64 (__fastcall **)(__int64, HWND, HWND))(*(_QWORD *)a2 + 40LL))(a2, v19, PreviousWindow);
  LastError = v24;
  if ( v24 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x64,
      (__int64)"pcshell\\twinui\\jointresize\\lib\\ghostdivider.cpp",
      (const char *)(unsigned int)v24);
    goto LABEL_27;
  }
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  v25 = IUnknown_QueryService(punk, &stru_1803B4AE0, &GUID_10d320fe_985c_476a_a6b7_81f8e2d1881e, &ppvOut);
  LastError = v25;
  if ( v25 >= 0 )
  {
    v27 = ppvOut;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 48));
    v25 = (*(__int64 (__fastcall **)(void *, HWND, __int64, __int64))(*(_QWORD *)v27 + 56LL))(v27, v19, 1LL, a1 + 48);
    LastError = v25;
    if ( v25 >= 0 )
    {
      v28 = *(_QWORD *)(a1 + 48);
      v29 = (_QWORD *)(a1 + 56);
      v36 = 0x100000001LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 56));
      v25 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, GUID *, __int64))(*(_QWORD *)v28 + 96LL))(
              v28,
              0LL,
              *(unsigned int *)(a1 + 88),
              v36,
              &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
              a1 + 56);
      LastError = v25;
      if ( v25 >= 0 )
      {
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)*v29 + 32LL))(*v29, v30, 0LL, 0LL);
        v31 = *v29;
        v36 = 0LL;
        v39[0] = 0;
        v39[1] = 0;
        v39[2] = *(_DWORD *)(a1 + 76);
        v39[3] = *(_DWORD *)(a1 + 80);
        (*(void (__fastcall **)(__int64, _DWORD *, _QWORD, _QWORD))(*(_QWORD *)v31 + 24LL))(v31, v39, 0LL, 0LL);
        v19 = 0LL;
        Microsoft::WRL::ComPtr<IApplicationViewVisibilityDebouncedNotificationService>::operator=(
          (__int64 *)(a1 + 32),
          a2);
        Microsoft::WRL::ComPtr<IApplicationView>::operator=(
          (CWinRTApplicationView **)(a1 + 40),
          (CWinRTApplicationView *)a3);
        LastError = 0;
        goto LABEL_26;
      }
      v26 = 106LL;
    }
    else
    {
      v26 = 104LL;
    }
  }
  else
  {
    v26 = 103LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v26,
    (__int64)"pcshell\\twinui\\jointresize\\lib\\ghostdivider.cpp",
    (const char *)(unsigned int)v25);
LABEL_26:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
LABEL_27:
  if ( v19 )
    DestroyWindow(v19);
LABEL_29:
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&punk);
  return LastError;
}
