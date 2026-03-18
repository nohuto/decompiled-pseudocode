/*
 * XREFs of EtwpLogSystemEventUnsafe @ 0x14027C4F4
 * Callers:
 *     NtTraceEvent @ 0x140091AC0 (NtTraceEvent.c)
 *     EtwpTraceThreadRundown @ 0x14027EF38 (EtwpTraceThreadRundown.c)
 *     EtwpLogRegistryEvent @ 0x140746B2C (EtwpLogRegistryEvent.c)
 *     EtwpSetMark @ 0x1407474E0 (EtwpSetMark.c)
 * Callees:
 *     EtwpReserveTraceBuffer @ 0x140092980 (EtwpReserveTraceBuffer.c)
 *     EtwpCloseLogger @ 0x14012B268 (EtwpCloseLogger.c)
 *     EtwpReleaseTraceBuffer @ 0x140153740 (EtwpReleaseTraceBuffer.c)
 *     EtwpOpenLogger @ 0x14015377C (EtwpOpenLogger.c)
 *     memset @ 0x140192F40 (memset.c)
 *     EtwpCopyEventData @ 0x14027BAB4 (EtwpCopyEventData.c)
 *     LBR_TRACING_ENABLED @ 0x14027DB8C (LBR_TRACING_ENABLED.c)
 *     EtwpSendTraceEvent @ 0x14027E3AC (EtwpSendTraceEvent.c)
 *     EtwpUpdateEventsLostCount @ 0x14027EED0 (EtwpUpdateEventsLostCount.c)
 *     EtwpStackTraceDispatcher @ 0x14027FCEC (EtwpStackTraceDispatcher.c)
 *     EtwpTraceLastBranchRecord @ 0x140281DAC (EtwpTraceLastBranchRecord.c)
 */

unsigned int *__fastcall EtwpLogSystemEventUnsafe(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int16 a6,
        unsigned int a7)
{
  unsigned int *result; // rax
  unsigned int *v10; // rbx
  unsigned int v11; // edi
  _DWORD *v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  void *v15; // r12
  __int64 v16; // rdx
  __int64 v17; // rcx
  char v18[4]; // [rsp+30h] [rbp-78h] BYREF
  unsigned int v19; // [rsp+34h] [rbp-74h]
  _QWORD v21[3]; // [rsp+40h] [rbp-68h] BYREF
  signed __int64 v22[10]; // [rsp+58h] [rbp-50h] BYREF

  result = (unsigned int *)EtwpOpenLogger(a4, a1, 1, v18);
  v10 = result;
  v21[1] = result;
  if ( result )
  {
    v11 = 0;
    v19 = 0;
    if ( a5 )
    {
      v12 = (_DWORD *)(a2 + 8);
      v13 = a5;
      do
      {
        v11 += *v12;
        v12 += 4;
        --v13;
      }
      while ( v13 );
      v19 = v11;
    }
    v14 = EtwpReserveTraceBuffer(v10, v11 + 32, (__int64)v22, v21, a7);
    if ( v14 )
    {
      *(_DWORD *)v14 = (a7 & 0xC0000000) == 0x80000000
                     ? (unsigned __int8)a7 | 0xC0010000
                     : (unsigned __int8)a7 | 0xC0020000;
      *(_QWORD *)(v14 + 16) = v21[0];
      *(_WORD *)(v14 + 4) = v11 + 32;
      *(_WORD *)(v14 + 6) = a6;
      *(_DWORD *)(v14 + 8) = a3[400];
      *(_DWORD *)(v14 + 12) = a3[398];
      *(_DWORD *)(v14 + 24) = a3[163];
      *(_DWORD *)(v14 + 28) = a3[183];
      v15 = (void *)(v14 + 32);
      v21[2] = v14 + 32;
      if ( v14 != -32LL )
      {
        if ( (unsigned int)EtwpCopyEventData((char *)v15, a2, a5, v11) )
        {
          memset(v15, 0, v11);
          EtwpUpdateEventsLostCount(v10, v16);
        }
        if ( (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent) && (v10[3] & 0x80000) != 0 )
          EtwpSendTraceEvent(v10, v22);
        EtwpReleaseTraceBuffer(v22);
        if ( (v10[208] & 0x80u) != 0 && _bittest(*((const signed __int32 **)v10 + 267), a6 & 0x1FFF) )
          EtwpStackTraceDispatcher(v10, v21, a3, a7);
        if ( (unsigned __int8)LBR_TRACING_ENABLED(v10, a6) )
          EtwpTraceLastBranchRecord(v17, v21, a3, a7);
      }
    }
    return (unsigned int *)EtwpCloseLogger(a4, a1, v18[0]);
  }
  return result;
}
