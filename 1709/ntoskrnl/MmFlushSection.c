/*
 * XREFs of MmFlushSection @ 0x1400A49CC
 * Callers:
 *     CcFlushCachePriv @ 0x140062D40 (CcFlushCachePriv.c)
 *     CcSetFileSizesEx @ 0x140089D90 (CcSetFileSizesEx.c)
 *     MiFlushDataSection @ 0x1400B71B4 (MiFlushDataSection.c)
 *     CcPurgeAndClearCacheSection @ 0x1400F208C (CcPurgeAndClearCacheSection.c)
 *     CcMdlWriteComplete2 @ 0x14012F234 (CcMdlWriteComplete2.c)
 *     CcUnpinRepinnedBcb @ 0x1401E0CF0 (CcUnpinRepinnedBcb.c)
 * Callees:
 *     MiFlushSectionInternal @ 0x140038530 (MiFlushSectionInternal.c)
 *     MiDereferenceControlAreaFile @ 0x140067894 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x1400679F0 (MiReferenceControlAreaFile.c)
 *     KeDelayExecutionThread @ 0x1400818C0 (KeDelayExecutionThread.c)
 *     MiFlushRelease @ 0x1400A2708 (MiFlushRelease.c)
 *     MiComputeFlushRange @ 0x1400A4B48 (MiComputeFlushRange.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1404E736C (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1404E75A8 (FsRtlAcquireFileForCcFlushEx.c)
 */

__int64 MmFlushSection(__int64 a1, va_list a2, __int64 a3, ...)
{
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rbx
  struct _KTHREAD *CurrentThread; // r14
  __int64 v7; // r15
  int v8; // eax
  __int64 v9; // r12
  _QWORD *v10; // r13
  int v11; // edi
  unsigned int v13; // esi
  ULONG_PTR v14; // rax
  struct _FILE_OBJECT *v15; // r14
  int v16; // r15d
  __int64 v17; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int64 v18; // [rsp+48h] [rbp-28h]
  __int64 v19; // [rsp+50h] [rbp-20h]
  _QWORD *v20; // [rsp+58h] [rbp-18h]
  __int64 v21; // [rsp+60h] [rbp-10h]
  int v22; // [rsp+68h] [rbp-8h]
  struct _KTHREAD *v23; // [rsp+B8h] [rbp+48h]
  __int64 v25; // [rsp+C8h] [rbp+58h] BYREF
  va_list va; // [rsp+C8h] [rbp+58h]
  _DWORD *v27; // [rsp+D0h] [rbp+60h]
  __int64 v28; // [rsp+D8h] [rbp+68h]
  va_list va1; // [rsp+E0h] [rbp+70h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v25 = va_arg(va1, _QWORD);
  v27 = va_arg(va1, _DWORD *);
  v28 = va_arg(va1, _QWORD);
  v3 = a3;
  if ( a2 )
  {
    v4 = *(_QWORD *)a2;
    va_copy(a2, va);
    v25 = v4;
  }
  v5 = (__int64)v27;
  *v27 = 0;
  *(_QWORD *)(v5 + 8) = a3;
  if ( !(unsigned int)MiComputeFlushRange(a1, a2, a3, &v17) )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v7 = v17;
  v23 = CurrentThread;
  LOBYTE(v25) = BYTE4(CurrentThread[1].Queue);
  v8 = v28;
  BYTE4(CurrentThread[1].Queue) = 1;
  if ( (v8 & 1) != 0 )
  {
    v13 = 0;
    v14 = MiReferenceControlAreaFile(v7);
    v9 = v21;
    v15 = (struct _FILE_OBJECT *)v14;
    v10 = v20;
    v16 = v28;
    do
    {
      v11 = FsRtlAcquireFileForCcFlushEx(v15);
      if ( v11 < 0 )
        break;
      v11 = MiFlushSectionInternal(v18, v19, v10, v9, 0LL, v16, (_DWORD *)v5);
      FsRtlReleaseFileForCcFlush(v15);
      if ( v11 != -1073741740 )
        break;
      ++v13;
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
    }
    while ( v13 < 5 );
    v7 = v17;
    MiDereferenceControlAreaFile(v17, (unsigned __int64)v15);
    v3 = a3;
    CurrentThread = v23;
  }
  else
  {
    v9 = v21;
    v10 = v20;
    v11 = MiFlushSectionInternal(v18, v19, v20, v21, 0LL, v8, (_DWORD *)v5);
  }
  if ( v11 < 0 || *(_QWORD *)(v5 + 8) )
    *(_QWORD *)(v5 + 8) += (unsigned int)(v22 << 12);
  else
    *(_QWORD *)(v5 + 8) = v3;
  BYTE4(CurrentThread[1].Queue) = v25;
  MiFlushRelease(v7, (ULONG_PTR)v10, v9);
  return (unsigned int)v11;
}
