/*
 * XREFs of FsFilterPerformCompletionCallbacks @ 0x140096570
 * Callers:
 *     FsRtlReleaseFileForModWrite @ 0x1400153C0 (FsRtlReleaseFileForModWrite.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x140022B88 (FsRtlAcquireFileForModWriteEx.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1404C6C34 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1404C6E70 (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFile @ 0x140510170 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x140510380 (FsRtlAcquireFileExclusiveCommon.c)
 *     FsRtlQueryOpen @ 0x140685364 (FsRtlQueryOpen.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FsFilterPerformCompletionCallbacks(__int64 a1, unsigned int a2)
{
  __int64 v4; // r8
  __int64 result; // rax

  if ( *(_WORD *)(a1 + 74) )
  {
    do
    {
      v4 = *(_QWORD *)(a1 + 80) + 32LL * (*(unsigned __int16 *)(a1 + 74) - 1);
      *(_QWORD *)(a1 + 8) = *(_QWORD *)v4;
      *(_QWORD *)(a1 + 16) = *(_QWORD *)(v4 + 8);
      result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(v4 + 24))(a1, a2, *(_QWORD *)(v4 + 16));
    }
    while ( (*(_WORD *)(a1 + 74))-- != 1 );
  }
  return result;
}
