/*
 * XREFs of _anonymous_namespace_::FireFatFramesAlarm @ 0x1801249F4
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x180012360 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180004630 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180005610 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

char anonymous_namespace_::FireFatFramesAlarm()
{
  ULONGLONG TickCount64; // rax
  const struct _TlgProvider_t *v1; // rcx
  const GUID *v2; // r8
  const GUID *v3; // r9
  int v5; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  int *v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+60h] [rbp-18h]
  int v9; // [rsp+64h] [rbp-14h]

  v5 = dword_18026EB78;
  TickCount64 = GetTickCount64();
  if ( TickCount64 - qword_180272978 < CCommonRegistryData::m_telemetryFatFramesAlarmTimeoutMilliseconds )
  {
    qword_180272978 = TickCount64;
    if ( hProvider > 5u )
    {
      LOBYTE(TickCount64) = TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL);
      if ( (_BYTE)TickCount64 )
      {
        v9 = 0;
        v7 = &v5;
        v8 = 4;
        LOBYTE(TickCount64) = TlgWrite(v1, &unk_1802118C2, v2, v3, 3u, &pData);
      }
    }
  }
  return TickCount64;
}
