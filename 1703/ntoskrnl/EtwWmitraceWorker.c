/*
 * XREFs of EtwWmitraceWorker @ 0x14070EB94
 * Callers:
 *     ExpDebuggerWorker @ 0x140789040 (ExpDebuggerWorker.c)
 * Callees:
 *     DbgPrintEx @ 0x1400680A0 (DbgPrintEx.c)
 *     RtlInitAnsiString @ 0x1400852C0 (RtlInitAnsiString.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     EtwpStopTrace @ 0x140434854 (EtwpStopTrace.c)
 *     EtwpStartTrace @ 0x14045C080 (EtwpStartTrace.c)
 *     EtwEnableTrace @ 0x1404685E0 (EtwEnableTrace.c)
 *     RtlAnsiStringToUnicodeString @ 0x1404C0A50 (RtlAnsiStringToUnicodeString.c)
 *     PsGetSiloBySessionId @ 0x1404C7990 (PsGetSiloBySessionId.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 *     EtwpQueryTrace @ 0x1405515A4 (EtwpQueryTrace.c)
 *     EtwpUpdateTrace @ 0x1405D8AE8 (EtwpUpdateTrace.c)
 *     EtwpPrepareWmitraceLoggerInfo @ 0x14070EEA4 (EtwpPrepareWmitraceLoggerInfo.c)
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
  PVOID Object; // [rsp+48h] [rbp-C0h] BYREF
  _STRING DestinationString; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v10[48]; // [rsp+68h] [rbp-A0h] BYREF
  int v11; // [rsp+98h] [rbp-70h]
  int v12; // [rsp+9Ch] [rbp-6Ch]
  int v13; // [rsp+A0h] [rbp-68h]
  int v14; // [rsp+A4h] [rbp-64h]
  int v15; // [rsp+A8h] [rbp-60h]
  int v16; // [rsp+ACh] [rbp-5Ch]
  UNICODE_STRING v17; // [rsp+E8h] [rbp-20h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+F8h] [rbp-10h] BYREF

  Object = 0LL;
  if ( dword_140345224 )
  {
    SiloBySessionId = PsGetSiloBySessionId(dword_140345224, &Object);
    if ( SiloBySessionId < 0 )
      goto LABEL_32;
    if ( !Object )
      goto LABEL_34;
    v0 = *(_QWORD *)(*((_QWORD *)Object + 157) + 864LL);
  }
  else
  {
    v0 = EtwpHostSiloState;
  }
  if ( EtwWmitraceWork == 1 )
  {
    EtwpPrepareWmitraceLoggerInfo(v10);
    RtlInitAnsiString(&DestinationString, qword_140345228);
    RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
    v12 = dword_1403452F0;
    v13 = dword_1403452F4;
    v11 = dword_1403452F8;
    v15 = dword_1403452FC;
    v16 = dword_140345300;
    v14 = dword_1403452EC;
    if ( byte_140345269 )
    {
      RtlInitAnsiString(&DestinationString, &byte_140345269);
      RtlAnsiStringToUnicodeString(&v17, &DestinationString, 1u);
    }
    started = EtwpStartTrace(v0, (__int64)v10);
    SiloBySessionId = started;
    if ( started < 0 )
      DbgPrintEx(0x17u, 3u, "wmitrace: EtwpStartTrace failed: 0x%x\n", started);
    RtlFreeUnicodeString(&UnicodeString);
    if ( byte_140345269 )
      RtlFreeUnicodeString(&v17);
    goto LABEL_32;
  }
  v2 = 2;
  if ( EtwWmitraceWork == 2 )
  {
    EtwpPrepareWmitraceLoggerInfo(v10);
    Trace = EtwpQueryTrace(v0, (__int64)v10);
    SiloBySessionId = Trace;
    if ( Trace >= 0 )
    {
      v6 = EtwpStopTrace(v0, (__int64)v10, 0);
      SiloBySessionId = v6;
      if ( v6 < 0 )
        DbgPrintEx(0x17u, 3u, "wmitrace: EtwpStopTrace failed: 0x%x\n", (unsigned int)v6);
      goto LABEL_32;
    }
  }
  else if ( EtwWmitraceWork == 3 )
  {
    EtwpPrepareWmitraceLoggerInfo(v10);
    Trace = EtwpQueryTrace(v0, (__int64)v10);
    SiloBySessionId = Trace;
    if ( Trace >= 0 )
    {
      v15 |= 0x80000u;
      updated = EtwpUpdateTrace(v0, (__int64)v10);
      SiloBySessionId = updated;
      if ( updated < 0 )
        DbgPrintEx(0x17u, 3u, "wmitrace: failed to enable KD_FILTER 0x%x\n", (unsigned int)updated);
      goto LABEL_32;
    }
  }
  else
  {
    if ( (unsigned __int8)(EtwWmitraceWork - 4) > 2u )
    {
      SiloBySessionId = -1073741637;
      DbgPrintEx(0x17u, 3u, "Unknown command passed to EtwWmitraceWorker.\n");
      goto LABEL_32;
    }
    EtwpPrepareWmitraceLoggerInfo(v10);
    Trace = EtwpQueryTrace(v0, (__int64)v10);
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
             (int)&unk_14034523C,
             0,
             EtwpWmitraceParams,
             v2,
             byte_14034524C,
             *(__int64 *)qword_140345228,
             qword_140345230,
             dword_140345238);
      SiloBySessionId = v4;
      if ( v4 < 0 )
        DbgPrintEx(0x17u, 3u, "wmitrace: EtwpEnableTraceEx failed: 0x%x\n", (unsigned int)v4);
      goto LABEL_32;
    }
  }
  DbgPrintEx(0x17u, 3u, "wmitrace: EtwpQueryTrace failed: 0x%x\n", (unsigned int)Trace);
LABEL_32:
  if ( Object )
    ObfDereferenceObject(Object);
LABEL_34:
  dword_140345308 = SiloBySessionId;
  EtwWmitraceWork = 0;
}
