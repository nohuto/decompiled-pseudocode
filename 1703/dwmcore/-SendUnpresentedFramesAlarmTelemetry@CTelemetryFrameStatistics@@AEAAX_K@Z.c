/*
 * XREFs of ?SendUnpresentedFramesAlarmTelemetry@CTelemetryFrameStatistics@@AEAAX_K@Z @ 0x1800BC084
 * Callers:
 *     ?UpdateFrameStatistics@CTelemetryFrameStatistics@@QEAAX_K00II_N@Z @ 0x1800BC358 (-UpdateFrameStatistics@CTelemetryFrameStatistics@@QEAAX_K00II_N@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1800BB2F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800BD9E0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

void __fastcall CTelemetryFrameStatistics::SendUnpresentedFramesAlarmTelemetry(
        CTelemetryFrameStatistics *this,
        __int64 a2)
{
  LPCGUID v4; // r8
  LPCGUID v5; // r9
  DWORD CurrentProcessId; // [rsp+30h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-68h] BYREF
  DWORD *p_CurrentProcessId; // [rsp+60h] [rbp-48h]
  int v9; // [rsp+68h] [rbp-40h]
  int v10; // [rsp+6Ch] [rbp-3Ch]
  char *v11; // [rsp+70h] [rbp-38h]
  int v12; // [rsp+78h] [rbp-30h]
  int v13; // [rsp+7Ch] [rbp-2Ch]

  if ( dword_18023D720 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_18023D720, 0x400000000000uLL) )
  {
    v10 = 0;
    v13 = 0;
    CurrentProcessId = GetCurrentProcessId();
    p_CurrentProcessId = &CurrentProcessId;
    v11 = (char *)this + 24;
    v9 = 4;
    v12 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_18023D720, &unk_1801F666E, v4, v5, 4u, &pData);
  }
  *((_QWORD *)this + 1) = a2;
  *((_DWORD *)this + 6) = 0;
}
