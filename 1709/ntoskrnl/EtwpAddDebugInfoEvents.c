/*
 * XREFs of EtwpAddDebugInfoEvents @ 0x140577900
 * Callers:
 *     EtwpFinalizeHeader @ 0x1405776D0 (EtwpFinalizeHeader.c)
 *     EtwpRealtimeNotifyConsumers @ 0x140577AFC (EtwpRealtimeNotifyConsumers.c)
 *     EtwpAddLogHeader @ 0x14057866C (EtwpAddLogHeader.c)
 *     EtwpSendDbgId @ 0x14074AC50 (EtwpSendDbgId.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     EtwpAddEventToBuffer @ 0x140577A8C (EtwpAddEventToBuffer.c)
 */

void __fastcall EtwpAddDebugInfoEvents(__int64 a1, __int64 a2, int a3, __int64 *a4, int a5)
{
  char v5; // r15
  __int64 *v6; // r12
  int v7; // edi
  int v10; // r13d
  __int64 v11; // rax
  int v12; // r15d
  int v13; // esi
  __int64 *i; // rsi
  __int64 *v15; // rax
  _OWORD *v16; // rax
  __int64 *v17; // rcx
  __int64 v19; // [rsp+98h] [rbp+20h] BYREF

  v5 = a5;
  v6 = &v19;
  v7 = a3 - *(_DWORD *)(a2 + 48);
  v19 &= -(__int64)(a4 != 0LL);
  if ( a4 )
    v6 = a4;
  v10 = a5 & 2;
  if ( (a5 & 2) != 0 )
    ExAcquirePushLockExclusiveEx(a1 + 704, 0LL);
  if ( (v5 & 1) != 0 && *(_QWORD *)(a1 + 112) != a1 + 112 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( NtBuildLabEx[v11] );
    if ( !EtwpAddEventToBuffer(a2, 66LL, v6, NtBuildLabEx, (int)v11 + 1, v7, &a5) )
      goto LABEL_19;
    v7 -= a5;
  }
  v12 = v5 & 4;
  if ( v12 )
  {
    v15 = *(__int64 **)(a1 + 128);
    v13 = 0;
    if ( !v15 )
      goto LABEL_14;
    do
    {
      if ( *((_BYTE *)v15 + 40) )
        break;
      v15 = (__int64 *)*v15;
      ++v13;
    }
    while ( v15 );
  }
  else
  {
    v13 = *(_DWORD *)(a1 + 136);
  }
  if ( v13 )
  {
    v16 = (_OWORD *)EtwpAddEventToBuffer(a2, 68LL, v6, 0LL, 32 * v13, v7, &a5);
    if ( v16 )
    {
      v17 = *(__int64 **)(a1 + 128);
      do
      {
        *v16 = *(_OWORD *)(v17 + 1);
        v16 += 2;
        *(v16 - 1) = *(_OWORD *)(v17 + 3);
        v17 = (__int64 *)*v17;
        --v13;
      }
      while ( v13 );
      v7 -= a5;
    }
  }
LABEL_14:
  for ( i = *(__int64 **)(a1 + 112); i != (__int64 *)(a1 + 112); i = (__int64 *)*i )
  {
    if ( !v12 || !*((_BYTE *)i + 16) )
    {
      if ( !EtwpAddEventToBuffer(a2, 64LL, v6, (char *)i + 28, *((_DWORD *)i + 5) - 4, v7, &a5) )
        break;
      v7 -= a5;
    }
  }
LABEL_19:
  if ( v10 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 704), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 704));
    KeAbPostRelease(a1 + 704);
  }
}
