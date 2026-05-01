/*
 * XREFs of ?GetWindows@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_GET_WINDOWS_FILTER@@AEBU_GUID@@PEAPEAX@Z @ 0x18004D0D0
 * Callers:
 *     ?SwitchTo@CWinRTApplicationView@@UEAAJXZ @ 0x18001C890 (-SwitchTo@CWinRTApplicationView@@UEAAJXZ.c)
 *     ?GetProcessIdForAppViewId@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJ_KPEAI@Z @ 0x18001F390 (-GetProcessIdForAppViewId@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJ_KPEA.c)
 *     ?TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAAJW4AppViewExecutionState@23456@PEAUIApplicationView@@PEAPEAUIAppViewExecutionData@23456@@Z @ 0x18001F6E0 (-TryCreateAppExecutionDataForAppState@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows.c)
 * Callees:
 *     ?GetWindowsInternal@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_GET_WINDOWS_FILTER@@AEBU_GUID@@PEAPEAX@Z @ 0x18004B2C0 (-GetWindowsInternal@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_GET_WINDOWS_FILTER@@AEBU_GUID@@P.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::GetWindows(__int64 a1, unsigned int a2, _QWORD *a3, _QWORD *a4)
{
  CImmersiveApp *v8; // rcx
  __int64 (__fastcall *v9)(CImmersiveApp *, int, _QWORD *, _QWORD *); // rax
  unsigned int WindowsInternal; // eax
  unsigned int v11; // ebx

  *a4 = 0LL;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v8 = (CImmersiveApp *)(a1 + 24);
  v9 = *(__int64 (__fastcall **)(CImmersiveApp *, int, _QWORD *, _QWORD *))(*(_QWORD *)(a1 + 24) + 352LL);
  if ( v9 == CImmersiveApp::GetWindowsInternal )
    WindowsInternal = CImmersiveApp::GetWindowsInternal(v8, a2, a3, a4);
  else
    WindowsInternal = v9(v8, a2, a3, a4);
  v11 = WindowsInternal;
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  return v11;
}
