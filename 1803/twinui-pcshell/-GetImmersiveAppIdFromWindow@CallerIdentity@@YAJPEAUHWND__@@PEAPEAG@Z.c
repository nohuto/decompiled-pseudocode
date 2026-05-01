/*
 * XREFs of ?GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x18000C6F4
 * Callers:
 *     ?TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAAJW4AppViewExecutionState@23456@PEAUIApplicationView@@PEAPEAUIAppViewExecutionData@23456@@Z @ 0x18001F6E0 (-TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows.c)
 *     ?_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z @ 0x180032FD0 (-_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z.c)
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x18007C640 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 *     ?BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ @ 0x180129650 (-BeginFrameRecovery@CApplicationFrameService@@UEAAJXZ.c)
 *     ?GetApplicationId@CImmersiveApplicationWindow@@UEAAJPEAPEAG@Z @ 0x180135310 (-GetApplicationId@CImmersiveApplicationWindow@@UEAAJPEAPEAG@Z.c)
 *     ?_HandleWindowCreatedWithNoView@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z @ 0x1801D016C (-_HandleWindowCreatedWithNoView@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z.c)
 *     ?DoesAppMeetLaunchRequirement@ApiPolicyChecker@CallerIdentity@@YA_NW4LaunchRequirement@12@PEBGPEAUHWND__@@@Z @ 0x1802FDE78 (-DoesAppMeetLaunchRequirement@ApiPolicyChecker@CallerIdentity@@YA_NW4LaunchRequirement@12@PEBGPE.c)
 * Callees:
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x18000C374 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x18000C7EC (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 *     ??1?$CMemString@UCMemString_PolicyCoTaskMem@@@@QEAA@XZ @ 0x180084060 (--1-$CMemString@UCMemString_PolicyCoTaskMem@@@@QEAA@XZ.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18010A800 (-ResultFromKnownLastError@@YAJXZ.c)
 */

__int64 __fastcall CallerIdentity::GetImmersiveAppIdFromWindow(HWND hWnd, LPWSTR *a2, unsigned __int16 **a3)
{
  int v5; // ecx
  CallerIdentity *v6; // rax
  CallerIdentity *v7; // rdi
  signed int LastError; // eax
  int ProcessAppId; // ebx
  unsigned __int16 **v11; // r8
  ATOM PropW; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  LPWSTR v15; // rbp
  signed int v16; // eax
  __int64 v17; // [rsp+20h] [rbp-48h]
  _DWORD v18[14]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v19; // [rsp+78h] [rbp+10h] BYREF
  DWORD dwProcessId; // [rsp+80h] [rbp+18h] BYREF
  LPWSTR lpBuffer; // [rsp+88h] [rbp+20h] BYREF

  *a2 = 0LL;
  if ( !(unsigned int)GetWindowBand(hWnd, &v19) )
    return (unsigned int)-2147024890;
  if ( v19 > 0x12 )
    return (unsigned int)-2147024809;
  v5 = 438098;
  if ( !_bittest(&v5, v19) )
    return (unsigned int)-2147024809;
  if ( GetWindowThreadProcessId(hWnd, &dwProcessId) || (ProcessAppId = ResultFromKnownLastError(), ProcessAppId >= 0) )
  {
    v6 = (CallerIdentity *)OpenProcess(0x1000u, 0, dwProcessId);
    v7 = v6;
    if ( !v6 )
    {
      LastError = GetLastError();
      ProcessAppId = LastError;
      if ( LastError > 0 )
        ProcessAppId = (unsigned __int16)LastError | 0x80070000;
      if ( ProcessAppId >= 0 )
        return (unsigned int)-2147467259;
      return (unsigned int)ProcessAppId;
    }
    if ( !(unsigned int)GetProcessUIContextInformation(v6, v18) )
    {
      ProcessAppId = -2147024890;
      goto LABEL_15;
    }
    ProcessAppId = 0;
    if ( v18[0] != 2 || (PropW = (unsigned __int16)GetPropW(hWnd, L"{9F4C2855-9F79-4B39-A8D0-E1D42DE1D5F3} 5")) == 0 )
    {
LABEL_13:
      if ( !*a2 )
        ProcessAppId = CallerIdentity::GetProcessAppId(v7, a2, v11);
      goto LABEL_15;
    }
    lpBuffer = 0LL;
    CoTaskMemFree(0LL);
    ProcessAppId = _AllocStringWorker<CTCoAllocPolicy>(v14, v13, 0LL, 0x104uLL, v17, (void **)&lpBuffer);
    if ( ProcessAppId >= 0 )
    {
      v15 = lpBuffer;
      if ( GlobalGetAtomNameW(PropW, lpBuffer, 260) )
      {
        ProcessAppId = 0;
LABEL_27:
        lpBuffer = 0LL;
        *a2 = v15;
        goto LABEL_28;
      }
      v16 = GetLastError();
      ProcessAppId = v16;
      if ( v16 > 0 )
        ProcessAppId = (unsigned __int16)v16 | 0x80070000;
      if ( ProcessAppId >= 0 )
        goto LABEL_27;
    }
LABEL_28:
    CMemString<CMemString_PolicyCoTaskMem>::~CMemString<CMemString_PolicyCoTaskMem>(&lpBuffer);
    if ( ProcessAppId >= 0 )
      goto LABEL_13;
LABEL_15:
    CloseHandle(v7);
  }
  return (unsigned int)ProcessAppId;
}
