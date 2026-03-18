/*
 * XREFs of EtwTraceRaw @ 0x14027A94C
 * Callers:
 *     NtTraceEvent @ 0x140091AC0 (NtTraceEvent.c)
 * Callees:
 *     EtwpReserveTraceBuffer @ 0x140092980 (EtwpReserveTraceBuffer.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400D2E30 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpCloseLogger @ 0x14012B268 (EtwpCloseLogger.c)
 *     EtwpReleaseTraceBuffer @ 0x140153740 (EtwpReleaseTraceBuffer.c)
 *     EtwpOpenLogger @ 0x14015377C (EtwpOpenLogger.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     EtwpSendTraceEvent @ 0x14027E3AC (EtwpSendTraceEvent.c)
 *     EtwpGetReserveTraceBufferStatus @ 0x14027EEAC (EtwpGetReserveTraceBufferStatus.c)
 *     EtwpCheckLoggerControlAccess @ 0x14048E46C (EtwpCheckLoggerControlAccess.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall EtwTraceRaw(unsigned __int16 a1, char *a2, unsigned int a3, char a4)
{
  size_t v5; // r12
  int ReserveTraceBufferStatus; // ebx
  unsigned int v8; // r15d
  __int64 v9; // rsi
  __int64 v10; // rax
  unsigned int *v11; // rdi
  void *v12; // rax
  __int64 v14; // [rsp+40h] [rbp-48h] BYREF
  signed __int64 v15[3]; // [rsp+48h] [rbp-40h] BYREF
  char v16; // [rsp+A8h] [rbp+20h] BYREF

  v5 = a3;
  ReserveTraceBufferStatus = 0;
  v8 = a1;
  if ( a4 )
    v9 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
  else
    v9 = EtwpHostSiloState;
  if ( v8 < *(_DWORD *)(v9 + 8) )
  {
    v10 = EtwpOpenLogger(v8, v9, a4, &v16);
    v11 = (unsigned int *)v10;
    if ( v10 )
    {
      if ( (*(_DWORD *)(v10 + 12) & 0x80u) != 0 )
      {
        ReserveTraceBufferStatus = -1073741790;
LABEL_29:
        EtwpCloseLogger(v8, v9, v16);
        return (unsigned int)ReserveTraceBufferStatus;
      }
      if ( a4 )
      {
        ReserveTraceBufferStatus = EtwpCheckLoggerControlAccess(0x200u);
        if ( ReserveTraceBufferStatus < 0 )
          goto LABEL_29;
        if ( (_DWORD)v5 )
        {
          if ( ((unsigned __int8)a2 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)&a2[v5] > 0x7FFFFFFF0000LL || &a2[v5] < a2 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
      }
      else if ( (*(_DWORD *)(v10 + 12) & 0x1000000) != 0 )
      {
        ReserveTraceBufferStatus = -1073741637;
        goto LABEL_29;
      }
      v12 = (void *)EtwpReserveTraceBuffer(v11, (unsigned int)v5, (__int64)v15, &v14, 0);
      if ( v12 )
      {
        memmove(v12, a2, v5);
        if ( (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent) && (v11[3] & 0x80000) != 0 )
          EtwpSendTraceEvent(v11, v15);
        EtwpReleaseTraceBuffer(v15);
      }
      else
      {
        ReserveTraceBufferStatus = EtwpGetReserveTraceBufferStatus(v11, (unsigned int)v5);
      }
      goto LABEL_29;
    }
  }
  return (unsigned int)-1073741816;
}
