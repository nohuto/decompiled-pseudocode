/*
 * XREFs of ?GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x1801C0F4C
 * Callers:
 *     ?_ComputeApplicationId@CApplicationManager@@AEAAJPEAUHSHELL_DATA@1@@Z @ 0x180016310 (-_ComputeApplicationId@CApplicationManager@@AEAAJPEAUHSHELL_DATA@1@@Z.c)
 *     ?BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ @ 0x18004DAF0 (-BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ.c)
 *     ?GetApplicationId@CImmersiveApplicationWindow@@UEAAJPEAPEAG@Z @ 0x180067540 (-GetApplicationId@CImmersiveApplicationWindow@@UEAAJPEAPEAG@Z.c)
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x1800FA52C (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 *     ?_HandleWindowCreatedWithNoView@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z @ 0x1801229C0 (-_HandleWindowCreatedWithNoView@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z.c)
 *     ?_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z @ 0x180122D48 (-_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z.c)
 *     ?DoesAppMeetLaunchRequirement@ApiPolicyChecker@CallerIdentity@@YA_NW4LaunchRequirement@12@PEBGPEAUHWND__@@@Z @ 0x1801C26C4 (-DoesAppMeetLaunchRequirement@ApiPolicyChecker@CallerIdentity@@YA_NW4LaunchRequirement@12@PEBGPE.c)
 * Callees:
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x1801C12E8 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x1801C1AD0 (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 *     CoTaskMemFree_0 @ 0x1801E31C1 (CoTaskMemFree_0.c)
 */

__int64 __fastcall CallerIdentity::GetImmersiveAppIdFromWindow(HWND hWnd, LPWSTR *a2, unsigned __int16 **a3)
{
  signed int ProcessAppId; // edi
  int v6; // ecx
  signed int LastError; // eax
  HANDLE v8; // rsi
  signed int v9; // eax
  unsigned __int16 **v10; // r8
  ATOM PropW; // bp
  __int64 v12; // rdx
  __int64 v13; // rcx
  LPWSTR v14; // rbx
  signed int v15; // eax
  LPWSTR v16; // rax
  int v18[14]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v19; // [rsp+78h] [rbp+10h] BYREF
  DWORD dwProcessId; // [rsp+80h] [rbp+18h] BYREF
  LPWSTR lpBuffer; // [rsp+88h] [rbp+20h]

  *a2 = 0LL;
  if ( !(unsigned int)GetWindowBand(hWnd, &v19) )
    return (unsigned int)-2147024890;
  if ( v19 > 0x12 )
    return (unsigned int)-2147024809;
  v6 = 438098;
  if ( !_bittest(&v6, v19) )
    return (unsigned int)-2147024809;
  if ( !GetWindowThreadProcessId(hWnd, &dwProcessId) )
  {
    LastError = GetLastError();
    ProcessAppId = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      ProcessAppId = LastError;
    if ( ProcessAppId >= 0 )
      return (unsigned int)-2147467259;
    return (unsigned int)ProcessAppId;
  }
  v8 = OpenProcess(0x1000u, 0, dwProcessId);
  if ( v8 )
  {
    if ( !(unsigned int)GetProcessUIContextInformation(v8, v18) )
    {
      ProcessAppId = -2147024890;
      goto LABEL_32;
    }
    ProcessAppId = 0;
    if ( v18[0] != 2 || (PropW = (unsigned __int16)GetPropW(hWnd, L"{9F4C2855-9F79-4B39-A8D0-E1D42DE1D5F3} 5")) == 0 )
    {
LABEL_29:
      if ( !*a2 )
        ProcessAppId = CallerIdentity::GetProcessAppId(v8, a2, v10);
      goto LABEL_32;
    }
    lpBuffer = 0LL;
    CoTaskMemFree_0(0LL);
    ProcessAppId = _AllocStringWorker<CTCoAllocPolicy>(v13, v12, 0LL, 260LL);
    if ( ProcessAppId < 0 )
    {
      v14 = lpBuffer;
    }
    else
    {
      v14 = lpBuffer;
      if ( GlobalGetAtomNameW(PropW, lpBuffer, 260) )
      {
        ProcessAppId = 0;
LABEL_26:
        v16 = v14;
        v14 = 0LL;
        *a2 = v16;
        goto LABEL_28;
      }
      v15 = GetLastError();
      ProcessAppId = (unsigned __int16)v15 | 0x80070000;
      if ( v15 <= 0 )
        ProcessAppId = v15;
      if ( ProcessAppId >= 0 )
        goto LABEL_26;
    }
LABEL_28:
    CoTaskMemFree_0(v14);
    if ( ProcessAppId >= 0 )
      goto LABEL_29;
LABEL_32:
    CloseHandle(v8);
    return (unsigned int)ProcessAppId;
  }
  v9 = GetLastError();
  ProcessAppId = (unsigned __int16)v9 | 0x80070000;
  if ( v9 <= 0 )
    ProcessAppId = v9;
  if ( ProcessAppId >= 0 )
    return (unsigned int)-2147467259;
  return (unsigned int)ProcessAppId;
}
