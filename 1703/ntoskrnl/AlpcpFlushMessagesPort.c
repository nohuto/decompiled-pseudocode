/*
 * XREFs of AlpcpFlushMessagesPort @ 0x140473BC0
 * Callers:
 *     AlpcpDoPortCleanup @ 0x140473994 (AlpcpDoPortCleanup.c)
 * Callees:
 *     ObReferenceObjectSafe @ 0x14000CFD0 (ObReferenceObjectSafe.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     AlpcpFlushMessagesByRequestor @ 0x140470780 (AlpcpFlushMessagesByRequestor.c)
 *     AlpcpFlushQueue @ 0x140473D7C (AlpcpFlushQueue.c)
 *     AlpcpFlushCancelQueue @ 0x140473F48 (AlpcpFlushCancelQueue.c)
 */

__int64 __fastcall AlpcpFlushMessagesPort(__int64 a1)
{
  __int64 result; // rax
  __int64 *v3; // rbx
  signed __int64 *v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rbx

  AlpcpFlushQueue(a1, a1 + 144, 1LL);
  AlpcpFlushQueue(a1, a1 + 160, 2LL);
  AlpcpFlushQueue(a1, a1 + 184, 3LL);
  AlpcpFlushQueue(a1, a1 + 208, 4LL);
  AlpcpFlushCancelQueue(a1, 0LL);
  result = *(_DWORD *)(a1 + 416) & 6;
  if ( (*(_BYTE *)(a1 + 416) & 6) == 6 )
  {
    v3 = *(__int64 **)(a1 + 16);
    v4 = v3 - 2;
    ExAcquirePushLockSharedEx((ULONG_PTR)(v3 - 2), 0LL);
    v5 = *v3;
    v6 = v3[2];
    if ( v5 )
      v5 &= -(__int64)(ObReferenceObjectSafe(v5) != 0);
    if ( v6 )
      v6 &= -(__int64)(ObReferenceObjectSafe(v6) != 0);
    if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v4);
    result = KeAbPostRelease((ULONG_PTR)v4);
    if ( v5 )
    {
      if ( (*(_DWORD *)(v5 + 416) & 0x40) == 0 && v6 && (*(_DWORD *)(v6 + 416) & 8) == 0 )
      {
        AlpcpFlushMessagesByRequestor(v6, (volatile signed __int64 *)v5, (ULONG_PTR *)(v5 + 144), 1u);
        AlpcpFlushMessagesByRequestor(v6, (volatile signed __int64 *)v5, (ULONG_PTR *)(v5 + 160), 2u);
        if ( (*(_DWORD *)(a1 + 416) & 0x80u) == 0 )
          AlpcpFlushMessagesByRequestor(v6, (volatile signed __int64 *)v5, (ULONG_PTR *)(v5 + 184), 3u);
        AlpcpFlushMessagesByRequestor(v6, (volatile signed __int64 *)v5, (ULONG_PTR *)(v5 + 208), 4u);
        AlpcpFlushCancelQueue(v5, a1);
      }
      result = ObfDereferenceObject((PVOID)v5);
    }
    if ( v6 )
      return ObfDereferenceObject((PVOID)v6);
  }
  return result;
}
