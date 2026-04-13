/*
 * XREFs of ?ReusingExistingExtendedExecution@CDMUtilsUnlockTelemetry@@SAXXZ @ 0x18006D860
 * Callers:
 *     ?GetSharedExtendedExecutionSession@UniqueExtendedExecutionSession@@SAJPEAPEAUIInspectable@@@Z @ 0x18006E660 (-GetSharedExtendedExecutionSession@UniqueExtendedExecutionSession@@SAJPEAPEAUIInspectable@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1800011C8 (_TlgWrite.c)
 *     ?Provider@CDMUtilsUnlockLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18006CFE8 (-Provider@CDMUtilsUnlockLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 */

void CDMUtilsUnlockTelemetry::ReusingExistingExtendedExecution(void)
{
  const struct _TlgProvider_t *v0; // rax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  v0 = CDMUtilsUnlockLogging::Provider();
  if ( *(_DWORD *)v0 > 5u
    && (*((_QWORD *)v0 + 2) & 0x200000000000LL) != 0
    && (*((_QWORD *)v0 + 3) & 0x200000000000LL) == *((_QWORD *)v0 + 3) )
  {
    TlgWrite(v0, &unk_18013EB9F, 0LL, 0LL, 2u, &pData);
  }
}
