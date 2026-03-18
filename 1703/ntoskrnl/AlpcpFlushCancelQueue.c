/*
 * XREFs of AlpcpFlushCancelQueue @ 0x140473F48
 * Callers:
 *     AlpcpFlushMessagesPort @ 0x140473BC0 (AlpcpFlushMessagesPort.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     AlpcpDereferenceBlobEx @ 0x14047EE00 (AlpcpDereferenceBlobEx.c)
 */

__int64 __fastcall AlpcpFlushCancelQueue(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v2; // rbx
  _QWORD **v5; // rsi
  _QWORD *v6; // rdi
  ULONG_PTR v8; // rcx

  v2 = (volatile signed __int64 *)(a1 + 136);
  v5 = (_QWORD **)(a1 + 384);
  ExAcquirePushLockExclusiveEx(a1 + 136, 0LL);
  v6 = *v5;
  while ( v6 != v5 )
  {
    v8 = (ULONG_PTR)(v6 - 10);
    v6 = (_QWORD *)*v6;
    if ( !a2 || *(_QWORD *)(v8 + 56) == a2 )
    {
      **(_QWORD **)(v8 + 88) = *(_QWORD *)(v8 + 80);
      *(_QWORD *)(*(_QWORD *)(v8 + 80) + 8LL) = *(_QWORD *)(v8 + 88);
      --*(_DWORD *)(a1 + 464);
      *(_QWORD *)(v8 + 56) = 0LL;
      *(_QWORD *)(v8 + 64) = 0LL;
      AlpcpDereferenceBlobEx(v8);
    }
  }
  if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v2);
  return KeAbPostRelease((ULONG_PTR)v2);
}
