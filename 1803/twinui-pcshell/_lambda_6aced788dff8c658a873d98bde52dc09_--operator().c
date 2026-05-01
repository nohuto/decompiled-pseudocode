/*
 * XREFs of _lambda_6aced788dff8c658a873d98bde52dc09_::operator() @ 0x1800085E4
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)___ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_6aced788dff8c658a873d98bde52dc09__&___ptr64__1_long_::Invoke @ 0x180008540 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)___ea_180008540.c)
 * Callees:
 *     ?_SetActiveProcessForRotation@CRotationManagerSync@@AEAAXK@Z @ 0x1800086FC (-_SetActiveProcessForRotation@CRotationManagerSync@@AEAAXK@Z.c)
 *     ?_SetAutoRotationConfiguration@CRotationManagerSync@@AEAAXKPEAUHWND__@@W4ORIENTATION_PREFERENCE@@@Z @ 0x18000877C (-_SetAutoRotationConfiguration@CRotationManagerSync@@AEAAXKPEAUHWND__@@W4ORIENTATION_PREFERENCE@.c)
 *     ?GetNativeWindow@CImmersiveApplicationWindow@@UEAAJPEAPEAUHWND__@@@Z @ 0x180008D60 (-GetNativeWindow@CImmersiveApplicationWindow@@UEAAJPEAPEAUHWND__@@@Z.c)
 *     ?HonorBrightnessPreferencesForWindow@@YAJPEAUHWND__@@@Z @ 0x180008DD8 (-HonorBrightnessPreferencesForWindow@@YAJPEAUHWND__@@@Z.c)
 *     ?GetWindowsInternal@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_GET_WINDOWS_FILTER@@AEBU_GUID@@PEAPEAX@Z @ 0x18004B2C0 (-GetWindowsInternal@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_GET_WINDOWS_FILTER@@AEBU_GUID@@P.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_6aced788dff8c658a873d98bde52dc09_::operator()(__int64 a1, DWORD a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  unsigned int v5; // edi
  int v6; // edx
  __int64 v7; // rcx
  __int64 (__fastcall *v8)(__int64, _QWORD, GUID *, CImmersiveApplicationWindow **); // rax
  int WindowsInternal; // eax
  __int64 (__fastcall *v10)(CImmersiveApplicationWindow *__hidden, HWND *); // rax
  int v11; // eax
  CImmersiveApplicationWindow *v12; // rcx
  HWND v14; // r8
  enum ORIENTATION_PREFERENCE v15; // ebx
  DWORD Ptr_high; // edx
  HWND v17; // [rsp+70h] [rbp+28h] BYREF
  DWORD dwProcessId; // [rsp+78h] [rbp+30h] BYREF
  CImmersiveApplicationWindow *v19; // [rsp+80h] [rbp+38h] BYREF
  HWND hWnd; // [rsp+88h] [rbp+40h] BYREF

  dwProcessId = a2;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(v3 + 160);
  if ( v4 )
  {
    if ( *(_DWORD *)(v3 + 124) )
    {
      if ( (*(int (__fastcall **)(__int64, HWND *, HWND *))(*(_QWORD *)v4 + 528LL))(v4, &hWnd, &v17) >= 0 )
      {
        dwProcessId = 0;
        v14 = 0LL;
        v15 = ORIENTATION_PREFERENCE_NONE;
        if ( hWnd )
        {
          GetWindowThreadProcessId(hWnd, &dwProcessId);
          v14 = hWnd;
          Ptr_high = dwProcessId;
        }
        else
        {
          Ptr_high = HIDWORD(CApplicationManagerUtility::g_pIAMGlobals[11].Ptr);
          dwProcessId = Ptr_high;
          v15 = (int)v17;
        }
        CRotationManagerSync::_SetAutoRotationConfiguration(*(CRotationManagerSync **)(a1 + 8), Ptr_high, v14, v15);
      }
    }
    else
    {
      v5 = HIDWORD(CApplicationManagerUtility::g_pIAMGlobals[11].Ptr);
      if ( *(_DWORD *)(v3 + 120) )
      {
        *(_DWORD *)(v3 + 112) = 0;
      }
      else if ( *(_DWORD *)(v3 + 100) || !*(_BYTE *)(v3 + 104) )
      {
        *(_DWORD *)(v3 + 100) = 0;
        *(_BYTE *)(v3 + 104) = 0;
        if ( !*(_BYTE *)(v3 + 105) )
        {
          SetDisplayAutoRotationPreferences(ORIENTATION_PREFERENCE_NONE);
          *(_BYTE *)(v3 + 104) = 1;
        }
      }
      if ( v5 )
      {
        v6 = *(_DWORD *)(v3 + 120);
        if ( v5 != *(_DWORD *)((v6 != 0 ? 0xC : 0) + v3 + 96) )
        {
          if ( !v6 )
          {
            CRotationManagerSync::_SetActiveProcessForRotation((CRotationManagerSync *)v3, v5);
            v6 = *(_DWORD *)(v3 + 120);
          }
          *(_DWORD *)((v6 != 0 ? 0xC : 0) + v3 + 96) = v5;
        }
      }
    }
    v19 = 0LL;
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 160LL);
    v8 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, CImmersiveApplicationWindow **))(*(_QWORD *)v7 + 352LL);
    if ( (char *)v8 == (char *)CImmersiveApp::GetWindowsInternal )
      WindowsInternal = CImmersiveApp::GetWindowsInternal(v7, 0LL, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, &v19);
    else
      WindowsInternal = v8(v7, 0LL, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, &v19);
    if ( WindowsInternal >= 0 )
    {
      v10 = *(__int64 (__fastcall **)(CImmersiveApplicationWindow *__hidden, HWND *))(*(_QWORD *)v19 + 32LL);
      v11 = v10 == CImmersiveApplicationWindow::GetNativeWindow
          ? CImmersiveApplicationWindow::GetNativeWindow(v19, &v17)
          : v10(v19, &v17);
      if ( v11 >= 0 )
        HonorBrightnessPreferencesForWindow(v17);
    }
    v12 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(CImmersiveApplicationWindow *))(*(_QWORD *)v12 + 16LL))(v12);
    }
  }
  return 0LL;
}
