/*
 * XREFs of AlpcpFlushMessagesPort @ 0x1404647A4
 * Callers:
 *     AlpcpDoPortCleanup @ 0x140464584 (AlpcpDoPortCleanup.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     ObReferenceObjectSafe @ 0x140108160 (ObReferenceObjectSafe.c)
 *     AlpcpFlushQueue @ 0x140464950 (AlpcpFlushQueue.c)
 *     AlpcpFlushCancelQueue @ 0x140464B1C (AlpcpFlushCancelQueue.c)
 *     AlpcpFlushMessagesByRequestor @ 0x14058E9E4 (AlpcpFlushMessagesByRequestor.c)
 */

char __fastcall AlpcpFlushMessagesPort(__int64 a1)
{
  int v2; // eax
  __int64 *v3; // rbx
  signed __int64 *v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rbx

  AlpcpFlushQueue(a1, a1 + 144, 1LL);
  AlpcpFlushQueue(a1, a1 + 160, 2LL);
  AlpcpFlushQueue(a1, a1 + 184, 3LL);
  AlpcpFlushQueue(a1, a1 + 208, 4LL);
  AlpcpFlushCancelQueue(a1, 0LL);
  v2 = *(_DWORD *)(a1 + 416) & 6;
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
    LOBYTE(v2) = KeAbPostRelease((ULONG_PTR)v4);
    if ( v5 )
    {
      if ( (*(_DWORD *)(v5 + 416) & 0x40) == 0 && v6 && (*(_DWORD *)(v6 + 416) & 8) == 0 )
      {
        AlpcpFlushMessagesByRequestor(v6, v5, v5 + 144, 1LL);
        AlpcpFlushMessagesByRequestor(v6, v5, v5 + 160, 2LL);
        if ( (*(_DWORD *)(a1 + 416) & 0x80u) == 0 )
          AlpcpFlushMessagesByRequestor(v6, v5, v5 + 184, 3LL);
        AlpcpFlushMessagesByRequestor(v6, v5, v5 + 208, 4LL);
        AlpcpFlushCancelQueue(v5, a1);
      }
      LOBYTE(v2) = ObfDereferenceObject((PVOID)v5);
    }
    if ( v6 )
      LOBYTE(v2) = ObfDereferenceObject((PVOID)v6);
  }
  return v2;
}
