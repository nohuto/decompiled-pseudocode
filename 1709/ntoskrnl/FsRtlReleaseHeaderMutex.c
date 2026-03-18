/*
 * XREFs of FsRtlReleaseHeaderMutex @ 0x140082C20
 * Callers:
 *     FsRtlpWaitForIoAtEof @ 0x140100900 (FsRtlpWaitForIoAtEof.c)
 *     FsRtlReleaseEofLock @ 0x140100BE0 (FsRtlReleaseEofLock.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExpReleaseFastMutexContended @ 0x1400A6FF0 (ExpReleaseFastMutexContended.c)
 */

__int64 __fastcall FsRtlReleaseHeaderMutex(__int64 a1, volatile signed __int32 *a2)
{
  ULONG_PTR v2; // rbx
  unsigned __int8 v3; // di
  unsigned __int32 v4; // eax

  if ( a2 )
    _InterlockedIncrement(a2);
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
  v3 = *(_BYTE *)(v2 + 48);
  *(_QWORD *)(v2 + 8) = 0LL;
  v4 = _InterlockedCompareExchange((volatile signed __int32 *)v2, 1, 0);
  if ( v4 )
    ExpReleaseFastMutexContended(v2, v4);
  __writecr8(v3);
  return KeAbPostRelease(v2);
}
