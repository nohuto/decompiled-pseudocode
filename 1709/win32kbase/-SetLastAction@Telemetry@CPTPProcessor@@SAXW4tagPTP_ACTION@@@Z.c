/*
 * XREFs of ?SetLastAction@Telemetry@CPTPProcessor@@SAXW4tagPTP_ACTION@@@Z @ 0x1C012B970
 * Callers:
 *     ?OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z @ 0x1C012B0F0 (-OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C001C648 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C001C674 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     EtwTraceTouchpadGestureDetected @ 0x1C00E1990 (EtwTraceTouchpadGestureDetected.c)
 */

char __fastcall CPTPProcessor::Telemetry::SetLastAction(int a1)
{
  LARGE_INTEGER PerformanceCounter; // r9
  signed __int64 v3; // rax
  __int64 v4; // r10
  __int64 v5; // r11
  unsigned __int64 v6; // rax
  const GUID *v7; // r9
  int v9; // [rsp+30h] [rbp-D0h] BYREF
  int v10; // [rsp+34h] [rbp-CCh] BYREF
  int v11; // [rsp+38h] [rbp-C8h] BYREF
  signed __int64 v12; // [rsp+40h] [rbp-C0h] BYREF
  LONGLONG v13; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v14; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  signed __int64 *v16; // [rsp+80h] [rbp-80h]
  __int64 v17; // [rsp+88h] [rbp-78h]
  int *v18; // [rsp+90h] [rbp-70h]
  __int64 v19; // [rsp+98h] [rbp-68h]
  LONGLONG *v20; // [rsp+A0h] [rbp-60h]
  __int64 v21; // [rsp+A8h] [rbp-58h]
  unsigned __int64 *v22; // [rsp+B0h] [rbp-50h]
  __int64 v23; // [rsp+B8h] [rbp-48h]
  int *v24; // [rsp+C0h] [rbp-40h]
  __int64 v25; // [rsp+C8h] [rbp-38h]
  EVENT_DATA_DESCRIPTOR v26; // [rsp+D0h] [rbp-30h] BYREF
  int *v27; // [rsp+F0h] [rbp-10h]
  __int64 v28; // [rsp+F8h] [rbp-8h]

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v3 = (unsigned __int64)(1000
                        * (PerformanceCounter.QuadPart - _InterlockedCompareExchange64(&qword_1C0196050, 0LL, 0LL)))
     / gliQpcFreq.QuadPart;
  v12 = v3;
  if ( v3 <= 500 )
  {
    _InterlockedCompareExchange64(&qword_1C0196040, 0LL, 0LL);
    LOBYTE(v3) = _InterlockedCompareExchange64(&qword_1C0196048, 0LL, 0LL);
    v10 = dword_1C019605C;
    if ( hProvider > 5u )
    {
      LOBYTE(v3) = TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL);
      if ( (_BYTE)v3 )
      {
        v17 = 8LL;
        v9 = a1;
        v16 = &v12;
        v18 = &v9;
        v19 = 4LL;
        v6 = 1000 * (PerformanceCounter.QuadPart - v4);
        v7 = (const GUID *)(PerformanceCounter.QuadPart - v5);
        v21 = 8LL;
        v23 = 8LL;
        v13 = v6 / gliQpcFreq.QuadPart;
        v20 = &v13;
        v25 = 4LL;
        v14 = (unsigned __int64)(1000LL * (_QWORD)v7) / gliQpcFreq.QuadPart;
        v22 = &v14;
        v24 = &v10;
        LOBYTE(v3) = TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C016AADA, 0LL, v7, 7u, &pData);
      }
    }
  }
  if ( dword_1C018EC38 || qword_1C018EC20 || gTPTelemTimings <= 0 )
    dword_1C018EC3C = a1;
  else
    dword_1C018EC38 = a1;
  if ( a1 > 8 )
  {
    switch ( a1 )
    {
      case 9:
        ++gTPTelemState;
        ++dword_1C0196154;
        LOBYTE(v3) = EtwTraceTouchpadGestureDetected(0LL);
LABEL_39:
        if ( a1 == 10 )
          return v3;
        goto LABEL_40;
      case 10:
        ++dword_1C019614C;
        return v3;
      case 11:
        ++dword_1C0196144;
        goto LABEL_20;
      case 12:
        ++dword_1C0196148;
        goto LABEL_20;
      case 16:
        goto LABEL_34;
    }
    if ( a1 != 17 )
      goto LABEL_39;
LABEL_32:
    ++dword_1C0196138;
LABEL_33:
    ++dword_1C0196154;
    goto LABEL_39;
  }
  switch ( a1 )
  {
    case 8:
      ++dword_1C0196128;
      goto LABEL_20;
    case 1:
      ++dword_1C0196134;
      goto LABEL_20;
    case 2:
      goto LABEL_32;
    case 3:
      ++dword_1C019613C;
      goto LABEL_20;
    case 4:
      ++dword_1C0196140;
      goto LABEL_20;
    case 5:
      ++dword_1C019612C;
      goto LABEL_20;
    case 6:
LABEL_34:
      ++dword_1C0196130;
      goto LABEL_33;
  }
  if ( a1 != 7 )
    goto LABEL_39;
  ++dword_1C0196124;
LABEL_20:
  ++dword_1C0196154;
LABEL_40:
  if ( hProvider > 5u )
  {
    v11 = a1;
    v27 = &v11;
    v28 = 4LL;
    LOBYTE(v3) = TlgWrite(
                   (TraceLoggingHProvider)&hProvider,
                   &unk_1C016AAB5,
                   0LL,
                   (LPCGUID)PerformanceCounter.QuadPart,
                   3u,
                   &v26);
  }
  return v3;
}
