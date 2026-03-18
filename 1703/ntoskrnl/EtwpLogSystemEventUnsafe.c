/*
 * XREFs of EtwpLogSystemEventUnsafe @ 0x14006B670
 * Callers:
 *     EtwpTraceThreadRundown @ 0x14006B3EC (EtwpTraceThreadRundown.c)
 *     NtTraceEvent @ 0x1400860F0 (NtTraceEvent.c)
 *     EtwpLogRegistryEvent @ 0x14070B9F8 (EtwpLogRegistryEvent.c)
 *     EtwpSetMark @ 0x14070BE9C (EtwpSetMark.c)
 * Callees:
 *     EtwpCopyEventData @ 0x14006B83C (EtwpCopyEventData.c)
 *     EtwpReserveTraceBuffer @ 0x140086960 (EtwpReserveTraceBuffer.c)
 *     EtwpReleaseTraceBuffer @ 0x140087070 (EtwpReleaseTraceBuffer.c)
 *     EtwpOpenLogger @ 0x1400877F4 (EtwpOpenLogger.c)
 *     EtwpCloseLogger @ 0x14008788C (EtwpCloseLogger.c)
 *     EtwpUpdateEventsLostCount @ 0x140131B10 (EtwpUpdateEventsLostCount.c)
 *     memset @ 0x140192D80 (memset.c)
 *     EtwpSendTraceEvent @ 0x140255AF0 (EtwpSendTraceEvent.c)
 *     EtwpStackTraceDispatcher @ 0x140256CE0 (EtwpStackTraceDispatcher.c)
 */

__int64 __fastcall EtwpLogSystemEventUnsafe(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        unsigned int a4,
        unsigned int a5,
        __int16 a6,
        unsigned int a7)
{
  _DWORD *v7; // r13
  __int64 result; // rax
  __int64 v10; // rbx
  unsigned int v11; // edi
  _DWORD *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r8
  void *v16; // r15
  int v17; // ecx
  _BYTE v18[4]; // [rsp+30h] [rbp-78h] BYREF
  unsigned int v19; // [rsp+34h] [rbp-74h]
  _QWORD v21[3]; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v22[80]; // [rsp+58h] [rbp-50h] BYREF

  v7 = a3;
  LOBYTE(a3) = 1;
  result = EtwpOpenLogger(a4, a1, a3, v18);
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
    v14 = EtwpReserveTraceBuffer(v10, v11 + 32, (unsigned int)v22, (unsigned int)v21, a7);
    if ( v14 )
    {
      *(_DWORD *)v14 = (a7 & 0xC0000000) == 0x80000000
                     ? (unsigned __int8)a7 | 0xC0010000
                     : (unsigned __int8)a7 | 0xC0020000;
      *(_QWORD *)(v14 + 16) = v21[0];
      *(_WORD *)(v14 + 4) = v11 + 32;
      *(_WORD *)(v14 + 6) = a6;
      *(_DWORD *)(v14 + 8) = v7[400];
      *(_DWORD *)(v14 + 12) = v7[398];
      *(_DWORD *)(v14 + 24) = v7[163];
      *(_DWORD *)(v14 + 28) = v7[183];
      v16 = (void *)(v14 + 32);
      v21[2] = v14 + 32;
      if ( v14 != -32 )
      {
        if ( (unsigned int)EtwpCopyEventData(v16) )
        {
          memset(v16, 0, v11);
          EtwpUpdateEventsLostCount(v10);
        }
        if ( (!(_BYTE)KdDebuggerNotPresent && !KdPitchDebugger || KdEventLoggingPresent)
          && (*(_DWORD *)(v10 + 12) & 0x80000) != 0 )
        {
          EtwpSendTraceEvent(v10, v22);
        }
        EtwpReleaseTraceBuffer(v22);
        v17 = *(_DWORD *)(v10 + 816);
        if ( (v17 & 0x80u) != 0 )
        {
          if ( _bittest(*(const signed __int32 **)(v10 + 832), a6 & 0x1FFF) )
            EtwpStackTraceDispatcher(*(_DWORD *)v10 | v17 & 0xFFFF0000, v21, v7, a7);
        }
      }
    }
    LOBYTE(v15) = v18[0];
    return EtwpCloseLogger(a4, a1, v15);
  }
  return result;
}
