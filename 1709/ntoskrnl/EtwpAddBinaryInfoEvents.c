/*
 * XREFs of EtwpAddBinaryInfoEvents @ 0x14074AE14
 * Callers:
 *     EtwpFinalizeHeader @ 0x1405776D0 (EtwpFinalizeHeader.c)
 *     EtwpRealtimeNotifyConsumers @ 0x140577AFC (EtwpRealtimeNotifyConsumers.c)
 *     EtwpAddLogHeader @ 0x14057866C (EtwpAddLogHeader.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     EtwpAddEventToBuffer @ 0x140577A8C (EtwpAddEventToBuffer.c)
 */

__int64 __fastcall EtwpAddBinaryInfoEvents(__int64 a1, __int64 a2, int a3, char a4)
{
  unsigned int v4; // esi
  int v6; // r12d
  __int64 *v8; // rdi
  __int64 v9; // r12
  int v10; // ebp
  unsigned int v11; // r14d
  _DWORD *v12; // rax
  _DWORD *v15; // [rsp+88h] [rbp+10h]
  unsigned int v16; // [rsp+90h] [rbp+18h] BYREF
  int v17; // [rsp+98h] [rbp+20h]

  v4 = a3 - *(_DWORD *)(a2 + 48);
  v6 = a4 & 2;
  v17 = v6;
  if ( (a4 & 2) != 0 )
    ExAcquirePushLockExclusiveEx(a1 + 704, 0LL);
  v8 = *(__int64 **)(a1 + 2168);
  if ( v8 != (__int64 *)(a1 + 2168) )
  {
    v9 = a2;
    v10 = a4 & 4;
    do
    {
      if ( v10 )
        v11 = *((_DWORD *)v8 + 6);
      else
        v11 = *((_DWORD *)v8 + 5);
      if ( v11 )
      {
        v12 = (_DWORD *)EtwpAddEventToBuffer(
                          v9,
                          67,
                          (_QWORD *)(v9 + 88),
                          0LL,
                          16 * v11 + 4 + *((_DWORD *)v8 + 4),
                          v4,
                          &v16);
        if ( !v12 )
          break;
        *v12 = v11;
        v15 = v12 + 1;
        memmove(v12 + 1, (char *)&v8[2 * (*((_DWORD *)v8 + 5) - v11) + 3] + 4, 16LL * v11);
        memmove(&v15[4 * v11], (char *)&v8[2 * *((unsigned int *)v8 + 5) + 3] + 4, *((unsigned int *)v8 + 4));
        if ( v10 )
          *((_DWORD *)v8 + 6) = 0;
        v4 -= v16;
      }
      v8 = (__int64 *)*v8;
    }
    while ( v8 != (__int64 *)(a1 + 2168) );
    v6 = v17;
  }
  if ( v6 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 704), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 704));
    KeAbPostRelease(a1 + 704);
  }
  return 0LL;
}
