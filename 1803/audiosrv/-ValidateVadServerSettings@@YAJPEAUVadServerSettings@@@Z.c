/*
 * XREFs of ?ValidateVadServerSettings@@YAJPEAUVadServerSettings@@@Z @ 0x18004039C
 * Callers:
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x1800C3510 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 *     AudioServerGetDevicePeriod @ 0x1800C3E80 (AudioServerGetDevicePeriod.c)
 *     AudioServerGetSharedModeEnginePeriod @ 0x1800C46C0 (AudioServerGetSharedModeEnginePeriod.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?IsValidRequestedConnectorType@@YAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180063980 (-IsValidRequestedConnectorType@@YAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ValidateVadServerSettings(struct VadServerSettings *a1)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( !(*(unsigned int (__fastcall **)(struct IAudioPolicyManager *, _QWORD))(*(_QWORD *)g_PolicyManager + 72LL))(
          g_PolicyManager,
          *((unsigned int *)a1 + 4))
    || !(unsigned int)IsValidRequestedConnectorType((enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*((_DWORD *)a1 + 5)) )
  {
    v2 = -2147024809;
    AudSrvTraceLoggingErrorHelper("ValidateVadServerSettings", 0x53Bu, -2147024809);
  }
  return v2;
}
