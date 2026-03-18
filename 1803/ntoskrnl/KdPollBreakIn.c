/*
 * XREFs of KdPollBreakIn @ 0x14023F130
 * Callers:
 *     KdCheckForDebugBreak @ 0x14014F22C (KdCheckForDebugBreak.c)
 *     KdInitSystem @ 0x140803140 (KdInitSystem.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KxTryToAcquireSpinLock @ 0x1400B8074 (KxTryToAcquireSpinLock.c)
 */

char __fastcall KdPollBreakIn(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  char v4; // bl
  __int64 v5; // rsi
  unsigned int *v6; // rax
  __int64 *v7; // rcx
  unsigned __int64 v8; // rax
  _DWORD *v9; // r9
  __int64 v10; // r10
  unsigned __int64 v11; // rax
  __int16 v12; // [rsp+40h] [rbp-8h]

  if ( KdPitchDebugger && !KdEventLoggingEnabled )
    return 0;
  v4 = 0;
  if ( (_BYTE)KdDebuggerEnabled || KdEventLoggingEnabled )
  {
    _disable();
    LODWORD(v2) = KeGetPcr()->Prcb.Number;
    v5 = (unsigned int)v2;
    v6 = (unsigned int *)KdLogBuffer[v2];
    if ( v6 )
    {
      v7 = (__int64 *)&v6[4 * *v6 + 4];
      v8 = __rdtsc();
      a2 = (unsigned __int64)HIDWORD(v8) << 32;
      *v7 = a2 | (unsigned int)v8;
      v7[1] = 4 * ((unsigned __int8)KdDebuggerNotPresent & 1u);
    }
    if ( BYTE4(KdpContext) )
    {
      v4 = 1;
      BYTE4(KdpContext) = 0;
    }
    else if ( KxTryToAcquireSpinLock((volatile signed __int32 *)&KdDebuggerLock, a2) )
    {
      v4 = (unsigned int)KdReceivePacket(8LL, 0LL, 0LL, 0LL, 0LL) == 0;
      KxReleaseSpinLock(&KdDebuggerLock);
    }
    v4 &= (unsigned __int8)KdDebuggerEnabled;
    KdpControlCPressed |= v4;
    v9 = (_DWORD *)KdLogBuffer[v5];
    if ( v9 )
    {
      v10 = (unsigned int)*v9;
      v11 = __rdtsc();
      *(_QWORD *)&v9[4 * v10 + 6] = v9[4 * v10 + 6] & 4 | (2 * ((unsigned __int8)KdDebuggerNotPresent & 1u)) | ((((unsigned __int64)HIDWORD(v11) << 32) | (unsigned int)v11) - *(_QWORD *)&v9[4 * v10 + 4]) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( (_DWORD)v10 == 254 )
        *v9 = 0;
      else
        *v9 = v10 + 1;
    }
    if ( (v12 & 0x200) != 0 )
      _enable();
  }
  return v4;
}
