/*
 * XREFs of AlpcpFlushCancelQueue @ 0x1404DAF70
 * Callers:
 *     AlpcpFlushMessagesPort @ 0x1404DAC6C (AlpcpFlushMessagesPort.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     AlpcpDereferenceBlobEx @ 0x1404CF1A0 (AlpcpDereferenceBlobEx.c)
 */

char __fastcall AlpcpFlushCancelQueue(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v2; // rbx
  _QWORD **v5; // rsi
  __int64 v6; // rdx
  _QWORD **v7; // r8
  __int64 v8; // r9
  _QWORD *v9; // rdi
  ULONG_PTR v11; // rcx

  v2 = (volatile signed __int64 *)(a1 + 136);
  v5 = (_QWORD **)(a1 + 384);
  ExAcquirePushLockExclusiveEx(a1 + 136, 0LL);
  v9 = *v5;
  while ( v9 != v5 )
  {
    v7 = (_QWORD **)v9;
    v11 = (ULONG_PTR)(v9 - 10);
    v9 = (_QWORD *)*v9;
    if ( !a2 || *(_QWORD *)(v11 + 56) == a2 )
    {
      *v7[1] = v9;
      (*v7)[1] = v7[1];
      --*(_DWORD *)(a1 + 464);
      *(_QWORD *)(v11 + 56) = 0LL;
      *(_QWORD *)(v11 + 64) = 0LL;
      AlpcpDereferenceBlobEx(v11, 1);
    }
  }
  if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v2, v6, (__int64)v7, v8);
  return KeAbPostRelease((ULONG_PTR)v2);
}
