/*
 * XREFs of EtwpAddDebugInfoEvents @ 0x14054E168
 * Callers:
 *     EtwpFinalizeHeader @ 0x14054E348 (EtwpFinalizeHeader.c)
 *     EtwpRealtimeNotifyConsumers @ 0x14054E5D0 (EtwpRealtimeNotifyConsumers.c)
 *     EtwpAddLogHeader @ 0x140557C2C (EtwpAddLogHeader.c)
 *     EtwpSendDbgId @ 0x14070F004 (EtwpSendDbgId.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     EtwpAddEventToBuffer @ 0x14054E2D0 (EtwpAddEventToBuffer.c)
 */

void __fastcall EtwpAddDebugInfoEvents(__int64 a1, __int64 a2, int a3, __int64 *a4, int a5)
{
  char v5; // r15
  __int64 *v6; // r12
  int v7; // esi
  __int64 v9; // rax
  int v10; // ebp
  __int64 *v11; // rdi
  int v12; // r15d
  __int64 v14; // [rsp+98h] [rbp+20h] BYREF

  v5 = a5;
  v6 = &v14;
  v7 = a3 - *(_DWORD *)(a2 + 48);
  v14 &= -(__int64)(a4 != 0LL);
  if ( a4 )
    v6 = a4;
  if ( (a5 & 1) != 0 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( NtBuildLabEx[v9] );
    if ( (int)EtwpAddEventToBuffer(a2, 66LL, v6, NtBuildLabEx, (int)v9 + 1, v7, &a5) < 0 )
      return;
    v7 -= a5;
  }
  v10 = v5 & 2;
  if ( (v5 & 2) != 0 )
    ExAcquirePushLockExclusiveEx(a1 + 688, 0LL);
  v11 = *(__int64 **)(a1 + 112);
  if ( v11 != (__int64 *)(a1 + 112) )
  {
    v12 = v5 & 4;
    do
    {
      if ( !v12 || !*((_BYTE *)v11 + 16) )
      {
        if ( (int)EtwpAddEventToBuffer(a2, 64LL, v6, (char *)v11 + 28, *((_DWORD *)v11 + 5) - 4, v7, &a5) < 0 )
          break;
        v7 -= a5;
      }
      v11 = (__int64 *)*v11;
    }
    while ( v11 != (__int64 *)(a1 + 112) );
  }
  if ( v10 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 688), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 688));
    KeAbPostRelease(a1 + 688);
  }
}
