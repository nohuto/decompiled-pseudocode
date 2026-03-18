/*
 * XREFs of ?SendUnpresentedFramesAlarmTelemetry@CTelemetryFrameStatistics@@AEAAX_K@Z @ 0x180001AD4
 * Callers:
 *     ?UpdateFrameStatistics@CTelemetryFrameStatistics@@QEAAX_K00II_N@Z @ 0x180001DA8 (-UpdateFrameStatistics@CTelemetryFrameStatistics@@QEAAX_K00II_N@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180004630 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180005610 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

void __fastcall CTelemetryFrameStatistics::SendUnpresentedFramesAlarmTelemetry(
        CTelemetryFrameStatistics *this,
        __int64 a2)
{
  LPCGUID v4; // r8
  LPCGUID v5; // r9
  DWORD CurrentProcessId; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  DWORD *p_CurrentProcessId; // [rsp+60h] [rbp-38h]
  int v9; // [rsp+68h] [rbp-30h]
  int v10; // [rsp+6Ch] [rbp-2Ch]
  char *v11; // [rsp+70h] [rbp-28h]
  int v12; // [rsp+78h] [rbp-20h]
  int v13; // [rsp+7Ch] [rbp-1Ch]

  if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
  {
    v10 = 0;
    v13 = 0;
    CurrentProcessId = GetCurrentProcessId();
    p_CurrentProcessId = &CurrentProcessId;
    v11 = (char *)this + 24;
    v9 = 4;
    v12 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18021277C, v4, v5, 4u, &pData);
  }
  *((_QWORD *)this + 1) = a2;
  *((_DWORD *)this + 6) = 0;
}
