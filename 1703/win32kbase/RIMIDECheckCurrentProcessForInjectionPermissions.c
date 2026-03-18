/*
 * XREFs of RIMIDECheckCurrentProcessForInjectionPermissions @ 0x1C0109264
 * Callers:
 *     NtUserInitializeGenericHidInjection @ 0x1C00E17E0 (NtUserInitializeGenericHidInjection.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1C00E1C70 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserInitializePointerDeviceInjectionEx @ 0x1C00E1FD0 (NtUserInitializePointerDeviceInjectionEx.c)
 *     NtUserInjectDeviceInput @ 0x1C00E2230 (NtUserInjectDeviceInput.c)
 *     NtUserInjectGenericHidInput @ 0x1C00E24C0 (NtUserInjectGenericHidInput.c)
 *     NtUserInjectKeyboardInput @ 0x1C00E2680 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x1C00E2940 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C00E2C00 (NtUserInjectPointerInput.c)
 *     NtUserSetFeatureReportResponse @ 0x1C00E3D80 (NtUserSetFeatureReportResponse.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMIDECheckCurrentProcessForInjectionPermissions(int a1)
{
  int v2; // eax
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned __int8 v5; // di
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int8 v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0;
  RtlInitUnicodeString(&DestinationString, L"inputInjection");
  v2 = RtlCapabilityCheck(0LL, &DestinationString, &v8);
  v5 = 0;
  if ( v2 >= 0 )
    v5 = v8;
  if ( !a1
    && v2 >= 0
    && grpdeskRitInput
    && (*((struct tagDESKTOP **)gptiCurrent + 51) != grpdeskRitInput
     || (PVOID)PsGetCurrentProcess(grpdeskRitInput, v8, v3, v4) != gpepCSRSS
     && !RtlAreAllAccessesGranted(*((_DWORD *)gptiCurrent + 194), 0x20u)) )
  {
    return 0;
  }
  return v5;
}
