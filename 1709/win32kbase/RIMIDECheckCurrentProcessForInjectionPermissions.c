/*
 * XREFs of RIMIDECheckCurrentProcessForInjectionPermissions @ 0x1C010828C
 * Callers:
 *     NtUserInitializeGenericHidInjection @ 0x1C00E87C0 (NtUserInitializeGenericHidInjection.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1C00E8AF0 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserInitializePointerDeviceInjectionEx @ 0x1C00E8D30 (NtUserInitializePointerDeviceInjectionEx.c)
 *     NtUserInjectDeviceInput @ 0x1C00E8E70 (NtUserInjectDeviceInput.c)
 *     NtUserInjectGenericHidInput @ 0x1C00E8FE0 (NtUserInjectGenericHidInput.c)
 *     NtUserInjectKeyboardInput @ 0x1C00E9120 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x1C00E92C0 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C00E9450 (NtUserInjectPointerInput.c)
 *     NtUserSetFeatureReportResponse @ 0x1C00E9F40 (NtUserSetFeatureReportResponse.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMIDECheckCurrentProcessForInjectionPermissions(int a1)
{
  int v2; // eax
  unsigned __int8 v3; // di
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int8 v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0;
  RtlInitUnicodeString(&DestinationString, L"inputInjection");
  v2 = RtlCapabilityCheck(0LL, &DestinationString, &v6);
  v3 = 0;
  if ( v2 >= 0 )
    v3 = v6;
  if ( !a1
    && v2 >= 0
    && grpdeskRitInput
    && (*((struct tagDESKTOP **)gptiCurrent + 54) != grpdeskRitInput
     || (PVOID)PsGetCurrentProcess(grpdeskRitInput, v6) != gpepCSRSS
     && !RtlAreAllAccessesGranted(*((_DWORD *)gptiCurrent + 216), 0x20u)) )
  {
    return 0;
  }
  return v3;
}
