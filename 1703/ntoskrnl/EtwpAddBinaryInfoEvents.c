/*
 * XREFs of EtwpAddBinaryInfoEvents @ 0x14070F1B8
 * Callers:
 *     EtwpFinalizeHeader @ 0x14054E348 (EtwpFinalizeHeader.c)
 *     EtwpAddLogHeader @ 0x140557C2C (EtwpAddLogHeader.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     EtwpAddEventToBuffer @ 0x14054E2D0 (EtwpAddEventToBuffer.c)
 */

__int64 __fastcall EtwpAddBinaryInfoEvents(__int64 a1, __int64 a2, int a3)
{
  volatile signed __int64 *v3; // rdi
  unsigned int v4; // esi
  __int64 **v5; // r15
  int v7; // ebp
  __int64 *i; // rbx
  unsigned int v10; // [rsp+80h] [rbp+18h] BYREF

  v3 = (volatile signed __int64 *)(a1 + 688);
  v4 = a3 - *(_DWORD *)(a2 + 48);
  v5 = (__int64 **)(a1 + 856);
  v7 = 0;
  ExAcquirePushLockExclusiveEx(a1 + 688, 0LL);
  for ( i = *v5; i != (__int64 *)v5; i = (__int64 *)*i )
  {
    v7 = EtwpAddEventToBuffer(
           a2,
           67,
           (_QWORD *)(a2 + 88),
           (char *)i + 20,
           16 * *((_DWORD *)i + 5) + 4 + *((_DWORD *)i + 4),
           v4,
           &v10);
    if ( v7 < 0 )
      break;
    v4 -= v10;
  }
  if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  return (unsigned int)v7;
}
