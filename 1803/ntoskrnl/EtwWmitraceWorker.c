/*
 * XREFs of EtwWmitraceWorker @ 0x1407ACCA4
 * Callers:
 *     ExpDebuggerWorker @ 0x140803030 (ExpDebuggerWorker.c)
 * Callees:
 *     RtlInitAnsiString @ 0x14006CE80 (RtlInitAnsiString.c)
 *     DbgPrintEx @ 0x14014C9D0 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     PsGetSiloBySessionId @ 0x1405019A0 (PsGetSiloBySessionId.c)
 *     RtlAnsiStringToUnicodeString @ 0x140518030 (RtlAnsiStringToUnicodeString.c)
 *     EtwpStartTrace @ 0x140588150 (EtwpStartTrace.c)
 *     EtwpStopTrace @ 0x140589108 (EtwpStopTrace.c)
 *     EtwpQueryTrace @ 0x14058B85C (EtwpQueryTrace.c)
 *     EtwEnableTrace @ 0x14060DD80 (EtwEnableTrace.c)
 *     EtwpUpdateTrace @ 0x140629C7C (EtwpUpdateTrace.c)
 *     EtwpPrepareWmitraceLoggerInfo @ 0x1407ACFA0 (EtwpPrepareWmitraceLoggerInfo.c)
 */

void EtwWmitraceWorker()
{
  __int64 v0; // rsi
  int SiloBySessionId; // ebx
  int v2; // r14d
  int Trace; // eax
  int v4; // eax
  int updated; // eax
  int v6; // eax
  int started; // eax
  __int64 v8; // [rsp+48h] [rbp-C0h] BYREF
  _STRING DestinationString; // [rsp+50h] [rbp-B8h] BYREF
  _DWORD v10[16]; // [rsp+68h] [rbp-A0h] BYREF
  int v11; // [rsp+A8h] [rbp-60h]
  int v12; // [rsp+ACh] [rbp-5Ch]
  UNICODE_STRING v13; // [rsp+E8h] [rbp-20h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+F8h] [rbp-10h] BYREF

  if ( dword_1403A22E4 )
  {
    SiloBySessionId = PsGetSiloBySessionId(dword_1403A22E4, &v8);
    if ( SiloBySessionId < 0 || !v8 )
      goto LABEL_32;
    v0 = *(_QWORD *)(*(_QWORD *)(v8 + 1256) + 864LL);
  }
  else
  {
    v0 = EtwpHostSiloState;
  }
  if ( EtwWmitraceWork == 1 )
  {
    EtwpPrepareWmitraceLoggerInfo(v10);
    RtlInitAnsiString(&DestinationString, qword_1403A22E8);
    RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
    v10[13] = dword_1403A23B0;
    v10[14] = dword_1403A23B4;
    v10[12] = dword_1403A23B8;
    v11 = dword_1403A23BC;
    v12 = dword_1403A23C0;
    v10[15] = dword_1403A23AC;
    if ( byte_1403A2329 )
    {
      RtlInitAnsiString(&DestinationString, &byte_1403A2329);
      RtlAnsiStringToUnicodeString(&v13, &DestinationString, 1u);
    }
    started = EtwpStartTrace(v0, (__int64)v10);
    SiloBySessionId = started;
    if ( started < 0 )
      DbgPrintEx(0x17u, 3u, "wmitrace: EtwpStartTrace failed: 0x%x\n", started);
    RtlFreeAnsiString(&UnicodeString);
    if ( byte_1403A2329 )
      RtlFreeAnsiString(&v13);
  }
  else
  {
    v2 = 2;
    if ( EtwWmitraceWork == 2 )
    {
      EtwpPrepareWmitraceLoggerInfo(v10);
      Trace = EtwpQueryTrace(v0, v10);
      SiloBySessionId = Trace;
      if ( Trace < 0 )
        goto LABEL_22;
      v6 = EtwpStopTrace(v0, (__int64)v10, 0);
      SiloBySessionId = v6;
      if ( v6 < 0 )
        DbgPrintEx(0x17u, 3u, "wmitrace: EtwpStopTrace failed: 0x%x\n", (unsigned int)v6);
    }
    else
    {
      if ( EtwWmitraceWork != 3 )
      {
        if ( (unsigned __int8)(EtwWmitraceWork - 4) > 2u )
        {
          SiloBySessionId = -1073741637;
          DbgPrintEx(0x17u, 3u, "Unknown command passed to EtwWmitraceWorker.\n");
          goto LABEL_32;
        }
        EtwpPrepareWmitraceLoggerInfo(v10);
        Trace = EtwpQueryTrace(v0, v10);
        SiloBySessionId = Trace;
        if ( Trace >= 0 )
        {
          if ( EtwWmitraceWork == 4 )
          {
            v2 = 1;
          }
          else if ( EtwWmitraceWork == 5 )
          {
            v2 = 0;
          }
          v4 = EtwEnableTrace(
                 (int)&unk_1403A22FC,
                 0,
                 EtwpWmitraceParams,
                 v2,
                 byte_1403A230C,
                 *(__int64 *)qword_1403A22E8,
                 qword_1403A22F0,
                 dword_1403A22F8);
          SiloBySessionId = v4;
          if ( v4 < 0 )
            DbgPrintEx(0x17u, 3u, "wmitrace: EtwpEnableTraceEx failed: 0x%x\n", (unsigned int)v4);
          goto LABEL_32;
        }
LABEL_22:
        DbgPrintEx(0x17u, 3u, "wmitrace: EtwpQueryTrace failed: 0x%x\n", (unsigned int)Trace);
        goto LABEL_32;
      }
      EtwpPrepareWmitraceLoggerInfo(v10);
      Trace = EtwpQueryTrace(v0, v10);
      SiloBySessionId = Trace;
      if ( Trace < 0 )
        goto LABEL_22;
      v11 |= 0x80000u;
      updated = EtwpUpdateTrace(v0, (__int64)v10);
      SiloBySessionId = updated;
      if ( updated < 0 )
        DbgPrintEx(0x17u, 3u, "wmitrace: failed to enable KD_FILTER 0x%x\n", (unsigned int)updated);
    }
  }
LABEL_32:
  dword_1403A23C8 = SiloBySessionId;
  EtwWmitraceWork = 0;
}
