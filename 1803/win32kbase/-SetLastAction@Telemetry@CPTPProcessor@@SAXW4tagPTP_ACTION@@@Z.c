/*
 * XREFs of ?SetLastAction@Telemetry@CPTPProcessor@@SAXW4tagPTP_ACTION@@@Z @ 0x1C0126428
 * Callers:
 *     ?OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z @ 0x1C0125B30 (-OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0040798 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00407C4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     EtwTraceTouchpadGestureDetected @ 0x1C00AD000 (EtwTraceTouchpadGestureDetected.c)
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
                        * (PerformanceCounter.QuadPart - _InterlockedCompareExchange64(&qword_1C01A29D0, 0LL, 0LL)))
     / gliQpcFreq.QuadPart;
  v12 = v3;
  if ( v3 <= 500 )
  {
    _InterlockedCompareExchange64(&qword_1C01A29C0, 0LL, 0LL);
    LOBYTE(v3) = _InterlockedCompareExchange64(&qword_1C01A29C8, 0LL, 0LL);
    v10 = dword_1C01A29DC;
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
        LOBYTE(v3) = TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0178D01, 0LL, v7, 7u, &pData);
      }
    }
  }
  if ( dword_1C01A0278 || qword_1C01A0260 || gTPTelemTimings <= 0 )
    dword_1C01A027C = a1;
  else
    dword_1C01A0278 = a1;
  if ( a1 > 12 )
  {
    if ( a1 > 21 )
    {
      switch ( a1 )
      {
        case 22:
          ++dword_1C01A2B1C;
          ++dword_1C01A2B5C;
          goto LABEL_57;
        case 23:
          ++dword_1C01A2B44;
          break;
        case 24:
          ++dword_1C01A2B48;
          break;
        case 25:
          ++dword_1C01A2B0C;
          break;
        default:
          goto LABEL_57;
      }
    }
    else
    {
      switch ( a1 )
      {
        case 21:
          ++dword_1C01A2B24;
          break;
        case 16:
          ++dword_1C01A2B18;
          break;
        case 17:
          ++dword_1C01A2B28;
          break;
        case 18:
          ++dword_1C01A2B10;
          break;
        case 19:
          ++dword_1C01A2B14;
          break;
        case 20:
          ++dword_1C01A2B20;
          break;
        default:
          goto LABEL_57;
      }
    }
LABEL_20:
    ++dword_1C01A2B5C;
    goto LABEL_57;
  }
  if ( a1 == 12 )
  {
    ++dword_1C01A2B50;
    goto LABEL_20;
  }
  if ( a1 <= 6 )
  {
    switch ( a1 )
    {
      case 6:
        ++dword_1C01A2B30;
        break;
      case 1:
        ++dword_1C01A2B34;
        break;
      case 2:
        ++dword_1C01A2B38;
        break;
      case 3:
        ++dword_1C01A2B3C;
        break;
      case 4:
        ++dword_1C01A2B40;
        break;
      case 5:
        ++dword_1C01A2B2C;
        break;
      default:
        goto LABEL_57;
    }
    goto LABEL_20;
  }
  if ( a1 == 7 )
  {
    ++dword_1C01A2B04;
    goto LABEL_20;
  }
  if ( a1 == 8 )
  {
    ++dword_1C01A2B08;
    goto LABEL_20;
  }
  if ( a1 != 9 )
  {
    if ( a1 == 10 )
    {
      ++dword_1C01A2B54;
      return v3;
    }
    ++dword_1C01A2B4C;
    goto LABEL_20;
  }
  ++gTPTelemState;
  ++dword_1C01A2B5C;
  LOBYTE(v3) = EtwTraceTouchpadGestureDetected(0LL);
LABEL_57:
  if ( hProvider > 5u )
  {
    v11 = a1;
    v27 = &v11;
    v28 = 4LL;
    LOBYTE(v3) = TlgWrite(
                   (TraceLoggingHProvider)&hProvider,
                   &unk_1C0178CDC,
                   0LL,
                   (LPCGUID)PerformanceCounter.QuadPart,
                   3u,
                   &v26);
  }
  return v3;
}
