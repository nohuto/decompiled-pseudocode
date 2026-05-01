/*
 * XREFs of _lambda_6aced788dff8c658a873d98bde52dc09_::operator() @ 0x18003ACDC
 * Callers:
 *     ?ReconcileModernOrientationPreferences@CRotationManagerSync@@UEAAXXZ @ 0x18003ABE0 (-ReconcileModernOrientationPreferences@CRotationManagerSync@@UEAAXXZ.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)___ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_6aced788dff8c658a873d98bde52dc09__&___ptr64__1_long_::Invoke @ 0x18003BA20 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)___ea_18003BA20.c)
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?_SetAutoRotationConfiguration@CRotationManagerSync@@AEAAXKPEAUHWND__@@W4ORIENTATION_PREFERENCE@@@Z @ 0x18003B314 (-_SetAutoRotationConfiguration@CRotationManagerSync@@AEAAXKPEAUHWND__@@W4ORIENTATION_PREFERENCE@.c)
 *     ?HonorBrightnessPreferencesForWindow@@YAJPEAUHWND__@@@Z @ 0x1801BF4BC (-HonorBrightnessPreferencesForWindow@@YAJPEAUHWND__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_6aced788dff8c658a873d98bde52dc09_::operator()(__int64 a1, DWORD a2)
{
  __int64 v3; // rcx
  __int64 v4; // r9
  HWND v5; // r8
  enum ORIENTATION_PREFERENCE v6; // ebx
  DWORD Ptr_high; // edx
  enum ORIENTATION_PREFERENCE v8; // r9d
  __int64 *v9; // rdi
  __int64 v10; // rbx
  __int64 *v11; // rax
  __int64 v12; // rcx
  HWND v14; // [rsp+60h] [rbp+20h] BYREF
  DWORD dwProcessId; // [rsp+68h] [rbp+28h] BYREF
  __int64 v16; // [rsp+70h] [rbp+30h] BYREF
  HWND hWnd; // [rsp+78h] [rbp+38h] BYREF

  dwProcessId = a2;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(v3 + 168);
  if ( !v4 )
    return 0LL;
  if ( *(_DWORD *)(v3 + 132) )
  {
    if ( (*(int (__fastcall **)(_QWORD, HWND *, HWND *))(*(_QWORD *)v4 + 528LL))(*(_QWORD *)(v3 + 168), &hWnd, &v14) < 0 )
      goto LABEL_10;
    dwProcessId = 0;
    v5 = 0LL;
    v6 = ORIENTATION_PREFERENCE_NONE;
    if ( hWnd )
    {
      GetWindowThreadProcessId(hWnd, &dwProcessId);
      v5 = hWnd;
      Ptr_high = dwProcessId;
    }
    else
    {
      Ptr_high = HIDWORD(CApplicationManagerUtility::g_pIAMGlobals[9].Ptr);
      dwProcessId = Ptr_high;
      v6 = (int)v14;
    }
    v8 = v6;
    v3 = *(_QWORD *)(a1 + 8);
  }
  else
  {
    v8 = ORIENTATION_PREFERENCE_NONE;
    v5 = 0LL;
    Ptr_high = HIDWORD(CApplicationManagerUtility::g_pIAMGlobals[9].Ptr);
  }
  CRotationManagerSync::_SetAutoRotationConfiguration((CRotationManagerSync *)v3, Ptr_high, v5, v8);
LABEL_10:
  v16 = 0LL;
  v9 = *(__int64 **)(*(_QWORD *)(a1 + 8) + 168LL);
  v10 = *v9;
  v11 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v16);
  if ( (*(int (__fastcall **)(__int64 *, _QWORD, GUID *, __int64 *))(v10 + 352))(
         v9,
         0LL,
         &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
         v11) >= 0
    && (*(int (__fastcall **)(__int64, HWND *))(*(_QWORD *)v16 + 32LL))(v16, &v14) >= 0 )
  {
    HonorBrightnessPreferencesForWindow(v14);
  }
  v12 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return 0LL;
}
