/*
 * XREFs of ?RmpGpuMonitorEnable@@YAXPEAU_RM_GPU_MONITOR@@@Z @ 0x18005D054
 * Callers:
 *     ?RmpGpuMonitorEnableForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18005D0FC (-RmpGpuMonitorEnableForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     MemUtilQueryGpuUtilization @ 0x18006CF9C (MemUtilQueryGpuUtilization.c)
 */

void __fastcall RmpGpuMonitorEnable(struct _RM_GPU_MONITOR *a1)
{
  const struct _TlgProvider_t *v2; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  *((_DWORD *)a1 + 11) |= 1u;
  if ( (*((_BYTE *)a1 + 44) & 2) == 0 )
  {
    if ( (int)MemUtilQueryGpuUtilization((char *)a1 + 16) >= 0 )
      RtlQueryUnbiasedInterruptTime((char *)a1 + 24);
    *((_DWORD *)a1 + 11) |= 2u;
    TpSetTimer(*(_QWORD *)a1, (char *)a1 + 8, 0LL, *((unsigned int *)a1 + 10));
  }
  if ( hProvider > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
      TlgWrite(v2, &unk_18007FA1E, 0LL, 0LL, 2u, &pData);
  }
}
