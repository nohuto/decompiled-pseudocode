/*
 * XREFs of ?ReconcileModernOrientationPreferences@CRotationManagerSync@@UEAAXXZ @ 0x180008800
 * Callers:
 *     ?SetLogicalForegroundProcess@CRotationManagerSync@@UEAAXPEAUHWND__@@W4WindowType@@PEAUIImmersiveApplicationInternal@@@Z @ 0x180008AB0 (-SetLogicalForegroundProcess@CRotationManagerSync@@UEAAXPEAUHWND__@@W4WindowType@@PEAUIImmersive.c)
 *     ?ReconcileAutorotationPreferences@CImmersiveApp@@UEAAXXZ @ 0x18004BED0 (-ReconcileAutorotationPreferences@CImmersiveApp@@UEAAXXZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallback@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800083E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallback@@.c)
 *     ?_SetActiveProcessForRotation@CRotationManagerSync@@AEAAXK@Z @ 0x1800086FC (-_SetActiveProcessForRotation@CRotationManagerSync@@AEAAXK@Z.c)
 *     ?_SetAutoRotationConfiguration@CRotationManagerSync@@AEAAXKPEAUHWND__@@W4ORIENTATION_PREFERENCE@@@Z @ 0x18000877C (-_SetAutoRotationConfiguration@CRotationManagerSync@@AEAAXKPEAUHWND__@@W4ORIENTATION_PREFERENCE@.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCWRLObjectWithGITSite@@UIRotationManagerSync@@UIShellRotationManager@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180008BA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCWRL.c)
 *     ?GetNativeWindow@CImmersiveApplicationWindow@@UEAAJPEAPEAUHWND__@@@Z @ 0x180008D60 (-GetNativeWindow@CImmersiveApplicationWindow@@UEAAJPEAPEAUHWND__@@@Z.c)
 *     ?HonorBrightnessPreferencesForWindow@@YAJPEAUHWND__@@@Z @ 0x180008DD8 (-HonorBrightnessPreferencesForWindow@@YAJPEAUHWND__@@@Z.c)
 *     ?AddDelayedOperationInternal@CApplicationManager@@UEAAJPEAUIAsyncCallback@@W4DELAY_OPERATION_TYPE@@@Z @ 0x180043860 (-AddDelayedOperationInternal@CApplicationManager@@UEAAJPEAUIAsyncCallback@@W4DELAY_OPERATION_TYP.c)
 *     ?GetWindowsInternal@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_GET_WINDOWS_FILTER@@AEBU_GUID@@PEAPEAX@Z @ 0x18004B2C0 (-GetWindowsInternal@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_GET_WINDOWS_FILTER@@AEBU_GUID@@P.c)
 *     ?IncrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x18004E690 (-IncrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CRotationManagerSync::ReconcileModernOrientationPreferences(CRotationManagerSync *this)
{
  HWND v2; // rsi
  PSRWLOCK v3; // rbx
  __int64 v4; // rcx
  unsigned int v5; // ebx
  int v6; // edx
  __int64 v7; // rcx
  __int64 (__fastcall *v8)(__int64, _QWORD, GUID *, CImmersiveApplicationWindow **); // rax
  int WindowsInternal; // eax
  __int64 (__fastcall *v10)(CImmersiveApplicationWindow *__hidden, HWND *); // rax
  int v11; // eax
  CImmersiveApplicationWindow *v12; // rcx
  void (*v13)(void); // rax
  void (__fastcall *v14)(HWND); // rax
  void (__fastcall *v15)(HWND); // rax
  HWND v16; // rbx
  _QWORD *v17; // rax
  volatile int *v18; // rdx
  _QWORD *v19; // rdi
  void (*v20)(void); // rax
  __int64 v21; // rcx
  void (__fastcall *v22)(__int64, HWND, _QWORD); // rax
  HWND v23; // r8
  enum ORIENTATION_PREFERENCE v24; // ebx
  DWORD Ptr_high; // edx
  HWND v26[8]; // [rsp+30h] [rbp-40h] BYREF
  DWORD dwProcessId; // [rsp+A0h] [rbp+30h] BYREF
  enum ORIENTATION_PREFERENCE v28; // [rsp+A8h] [rbp+38h] BYREF
  CImmersiveApplicationWindow *v29; // [rsp+B0h] [rbp+40h] BYREF
  HWND hWnd; // [rsp+B8h] [rbp+48h] BYREF

  v26[1] = (HWND)-2LL;
  v2 = (HWND)((char *)this - 72);
  v26[2] = (HWND)((char *)this - 72);
  if ( this != (CRotationManagerSync *)72 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v2 + 8LL))((char *)this - 72);
  v26[5] = v2;
  if ( v2 )
    (*(void (__fastcall **)(HWND))(*(_QWORD *)v2 + 8LL))(v2);
  v26[6] = v2;
  v3 = CApplicationManagerUtility::g_pIAMGlobals;
  if ( LODWORD(v3[11].Ptr) == GetCurrentThreadId() )
  {
    v4 = *((_QWORD *)v2 + 20);
    if ( v4 )
    {
      if ( *((_DWORD *)v2 + 31) )
      {
        if ( (*(int (__fastcall **)(__int64, HWND *, enum ORIENTATION_PREFERENCE *))(*(_QWORD *)v4 + 528LL))(
               v4,
               &hWnd,
               &v28) >= 0 )
        {
          dwProcessId = 0;
          v23 = 0LL;
          v24 = ORIENTATION_PREFERENCE_NONE;
          if ( hWnd )
          {
            GetWindowThreadProcessId(hWnd, &dwProcessId);
            v23 = hWnd;
            Ptr_high = dwProcessId;
          }
          else
          {
            Ptr_high = HIDWORD(CApplicationManagerUtility::g_pIAMGlobals[11].Ptr);
            dwProcessId = Ptr_high;
            v24 = v28;
          }
          CRotationManagerSync::_SetAutoRotationConfiguration(
            (CRotationManagerSync *)v2,
            Ptr_high,
            v23,
            (unsigned int)v24);
        }
      }
      else
      {
        v5 = HIDWORD(CApplicationManagerUtility::g_pIAMGlobals[11].Ptr);
        if ( *((_DWORD *)v2 + 30) )
        {
          *((_DWORD *)v2 + 28) = 0;
        }
        else if ( *((_DWORD *)v2 + 25) || !*((_BYTE *)v2 + 104) )
        {
          *((_DWORD *)v2 + 25) = 0;
          *((_BYTE *)v2 + 104) = 0;
          if ( !*((_BYTE *)v2 + 105) )
          {
            SetDisplayAutoRotationPreferences(ORIENTATION_PREFERENCE_NONE);
            *((_BYTE *)v2 + 104) = 1;
          }
        }
        if ( v5 )
        {
          v6 = *((_DWORD *)v2 + 30);
          if ( v5 != *(_DWORD *)((char *)v2 + (v6 != 0 ? 0xC : 0) + 96) )
          {
            if ( !v6 )
            {
              CRotationManagerSync::_SetActiveProcessForRotation((CRotationManagerSync *)v2, v5);
              v6 = *((_DWORD *)v2 + 30);
            }
            *(_DWORD *)((char *)v2 + (v6 != 0 ? 0xC : 0) + 96) = v5;
          }
        }
      }
      v29 = 0LL;
      v7 = *((_QWORD *)v2 + 20);
      v8 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, CImmersiveApplicationWindow **))(*(_QWORD *)v7 + 352LL);
      if ( (char *)v8 == (char *)CImmersiveApp::GetWindowsInternal )
        WindowsInternal = CImmersiveApp::GetWindowsInternal(v7, 0LL, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, &v29);
      else
        WindowsInternal = v8(v7, 0LL, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, &v29);
      if ( WindowsInternal >= 0 )
      {
        v10 = *(__int64 (__fastcall **)(CImmersiveApplicationWindow *__hidden, HWND *))(*(_QWORD *)v29 + 32LL);
        v11 = v10 == CImmersiveApplicationWindow::GetNativeWindow
            ? CImmersiveApplicationWindow::GetNativeWindow(v29, v26)
            : v10(v29, v26);
        if ( v11 >= 0 )
          HonorBrightnessPreferencesForWindow(v26[0]);
      }
      v12 = v29;
      if ( v29 )
      {
        v29 = 0LL;
        v13 = *(void (**)(void))(*(_QWORD *)v12 + 16LL);
LABEL_22:
        v13();
      }
    }
  }
  else
  {
    v16 = 0LL;
    v26[3] = 0LL;
    v17 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    v19 = v17;
    if ( v17 )
    {
      *((_DWORD *)v17 + 3) = 1;
      *v17 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback>::`vftable';
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
      {
        v20 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL);
        if ( (char *)v20 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
          Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount(Microsoft::WRL::Details::ModuleBase::module_);
        else
          v20();
      }
      v19[2] = v2;
      if ( v2 )
        (*(void (__fastcall **)(HWND))(*(_QWORD *)v2 + 8LL))(v2);
      v19[3] = v2;
      *v19 = off_180318620;
      v16 = (HWND)v19;
    }
    v26[4] = v16;
    if ( v16 )
    {
      v21 = *((_QWORD *)this + 9);
      v22 = *(void (__fastcall **)(__int64, HWND, _QWORD))(*(_QWORD *)v21 + 72LL);
      if ( (char *)v22 == (char *)CApplicationManager::AddDelayedOperationInternal )
        CApplicationManager::AddDelayedOperationInternal(v21, v16, 0LL);
      else
        v22(v21, v16, 0LL);
    }
    if ( v16 )
    {
      v13 = *(void (**)(void))(*(_QWORD *)v16 + 16LL);
      if ( (char *)v13 != (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallback>::Release )
        goto LABEL_22;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallback>::Release(
        (__int64)v16,
        v18);
    }
  }
  if ( v2 )
  {
    v14 = *(void (__fastcall **)(HWND))(*(_QWORD *)v2 + 16LL);
    if ( (char *)v14 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IRotationManagerSync,IShellRotationManager>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IRotationManagerSync,IShellRotationManager>::Release(v2);
    else
      v14(v2);
  }
  if ( v2 )
  {
    v15 = *(void (__fastcall **)(HWND))(*(_QWORD *)v2 + 16LL);
    if ( (char *)v15 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IRotationManagerSync,IShellRotationManager>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IRotationManagerSync,IShellRotationManager>::Release(v2);
    else
      v15(v2);
  }
}
