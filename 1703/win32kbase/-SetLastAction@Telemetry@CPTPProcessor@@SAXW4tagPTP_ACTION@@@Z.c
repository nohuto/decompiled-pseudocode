/*
 * XREFs of ?SetLastAction@Telemetry@CPTPProcessor@@SAXW4tagPTP_ACTION@@@Z @ 0x1C012C2F4
 * Callers:
 *     ?OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z @ 0x1C012BA20 (-OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C0052730 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00533FC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     EtwTraceTouchpadGestureDetected @ 0x1C00DAE40 (EtwTraceTouchpadGestureDetected.c)
 */

char __fastcall CPTPProcessor::Telemetry::SetLastAction(int a1)
{
  __int64 v2; // rax
  const GUID *v3; // r9
  int v5; // [rsp+30h] [rbp-19h] BYREF
  __int64 v6; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  _QWORD *v8; // [rsp+60h] [rbp+17h]
  int v9; // [rsp+68h] [rbp+1Fh]
  int v10; // [rsp+6Ch] [rbp+23h]
  int *v11; // [rsp+70h] [rbp+27h]
  int v12; // [rsp+78h] [rbp+2Fh]
  int v13; // [rsp+7Ch] [rbp+33h]

  v2 = 1000 * (*(_QWORD *)&KeQueryPerformanceCounter(0LL) - qword_1C018F1F4) / gliQpcFreq.QuadPart;
  v6 = v2;
  if ( v2 <= 500 && dword_1C0186860 > 5u )
  {
    LOBYTE(v2) = TlgKeywordOn((TraceLoggingHProvider)&dword_1C0186860, 0x400000000000uLL);
    if ( (_BYTE)v2 )
    {
      v10 = 0;
      v13 = 0;
      v8 = &v6;
      v11 = &v5;
      v9 = 8;
      v5 = a1;
      v12 = 4;
      LOBYTE(v2) = TlgWrite((TraceLoggingHProvider)&dword_1C0186860, &unk_1C016A806, 0LL, v3, 4u, &pData);
    }
  }
  if ( dword_1C018A0C8 || qword_1C018A0B0 || gTPTelemTimings <= 0 )
    dword_1C018A0CC = a1;
  else
    dword_1C018A0C8 = a1;
  if ( a1 > 8 )
  {
    switch ( a1 )
    {
      case 9:
        ++gTPTelemState;
        ++dword_1C018F304;
        LOBYTE(v2) = EtwTraceTouchpadGestureDetected(0LL);
LABEL_39:
        if ( a1 == 10 )
          return v2;
        goto LABEL_40;
      case 10:
        ++dword_1C018F2FC;
        return v2;
      case 11:
        ++dword_1C018F2F4;
        goto LABEL_20;
      case 12:
        ++dword_1C018F2F8;
        goto LABEL_20;
      case 16:
        goto LABEL_34;
    }
    if ( a1 != 17 )
      goto LABEL_39;
LABEL_32:
    ++dword_1C018F2E8;
LABEL_33:
    ++dword_1C018F304;
    goto LABEL_39;
  }
  switch ( a1 )
  {
    case 8:
      ++dword_1C018F2D8;
      goto LABEL_20;
    case 1:
      ++dword_1C018F2E4;
      goto LABEL_20;
    case 2:
      goto LABEL_32;
    case 3:
      ++dword_1C018F2EC;
      goto LABEL_20;
    case 4:
      ++dword_1C018F2F0;
      goto LABEL_20;
    case 5:
      ++dword_1C018F2DC;
      goto LABEL_20;
    case 6:
LABEL_34:
      ++dword_1C018F2E0;
      goto LABEL_33;
  }
  if ( a1 != 7 )
    goto LABEL_39;
  ++dword_1C018F2D4;
LABEL_20:
  ++dword_1C018F304;
LABEL_40:
  if ( dword_1C0186860 > 5u )
  {
    v10 = 0;
    v8 = &v5;
    v5 = a1;
    v9 = 4;
    LOBYTE(v2) = TlgWrite((TraceLoggingHProvider)&dword_1C0186860, &unk_1C016A7E1, 0LL, v3, 3u, &pData);
  }
  return v2;
}
