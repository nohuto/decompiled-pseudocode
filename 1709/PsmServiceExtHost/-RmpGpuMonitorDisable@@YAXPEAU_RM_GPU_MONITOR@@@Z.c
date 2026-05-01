/*
 * XREFs of ?RmpGpuMonitorDisable@@YAXPEAU_RM_GPU_MONITOR@@@Z @ 0x18003DDD8
 * Callers:
 *     ?RmpEnforcerContextRundown@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18003B31C (-RmpEnforcerContextRundown@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpGpuMonitorDisableForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003DE40 (-RmpGpuMonitorDisableForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 */

void __fastcall RmpGpuMonitorDisable(struct _RM_GPU_MONITOR *a1)
{
  const struct _TlgProvider_t *v1; // rcx
  const GUID *v2; // r8
  const GUID *v3; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  *((_DWORD *)a1 + 11) &= ~1u;
  if ( hProvider > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
      TlgWrite(v1, &unk_180059779, v2, v3, 2u, &pData);
  }
}
