/*
 * XREFs of MmFlushSection @ 0x140098844
 * Callers:
 *     CcMdlWriteComplete2 @ 0x140036100 (CcMdlWriteComplete2.c)
 *     MiFlushDataSection @ 0x14005E1F4 (MiFlushDataSection.c)
 *     CcFlushCachePriv @ 0x140097F80 (CcFlushCachePriv.c)
 *     CcSetFileSizesEx @ 0x1400AA8C0 (CcSetFileSizesEx.c)
 *     CcPurgeAndClearCacheSection @ 0x140118940 (CcPurgeAndClearCacheSection.c)
 *     CcUnpinRepinnedBcb @ 0x1401DDCA0 (CcUnpinRepinnedBcb.c)
 * Callees:
 *     MiFlushSectionInternal @ 0x140094CA0 (MiFlushSectionInternal.c)
 *     MiDereferenceControlAreaFile @ 0x140096AD0 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140096B20 (MiReferenceControlAreaFile.c)
 *     MiComputeFlushRange @ 0x1400989C0 (MiComputeFlushRange.c)
 *     MiFlushRelease @ 0x1400A8C60 (MiFlushRelease.c)
 *     KeDelayExecutionThread @ 0x1400EE150 (KeDelayExecutionThread.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1404C6C34 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1404C6E70 (FsRtlAcquireFileForCcFlushEx.c)
 */

__int64 MmFlushSection(__int64 a1, va_list a2, __int64 a3, ...)
{
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rbx
  struct _KTHREAD *CurrentThread; // r14
  __int64 v7; // r15
  int v8; // eax
  unsigned int v9; // esi
  unsigned __int64 v10; // rax
  __int64 v11; // r12
  struct _FILE_OBJECT *v12; // r14
  __int64 *v13; // r13
  int v14; // r15d
  int v15; // edi
  __int64 v17; // [rsp+40h] [rbp-30h] BYREF
  ULONG_PTR v18; // [rsp+48h] [rbp-28h]
  __int64 v19; // [rsp+50h] [rbp-20h]
  __int64 *v20; // [rsp+58h] [rbp-18h]
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
    v9 = 0;
    v10 = MiReferenceControlAreaFile(v7);
    v11 = v21;
    v12 = (struct _FILE_OBJECT *)v10;
    v13 = v20;
    v14 = v28;
    do
    {
      v15 = FsRtlAcquireFileForCcFlushEx(v12);
      if ( v15 < 0 )
        break;
      v15 = MiFlushSectionInternal(v18, v19, v13, v11, 0LL, v14, (unsigned int *)v5);
      FsRtlReleaseFileForCcFlush(v12);
      if ( v15 != -1073741740 )
        break;
      ++v9;
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
    }
    while ( v9 < 5 );
    v7 = v17;
    MiDereferenceControlAreaFile(v17, (unsigned __int64)v12);
    v3 = a3;
    CurrentThread = v23;
  }
  else
  {
    v11 = v21;
    v13 = v20;
    v15 = MiFlushSectionInternal(v18, v19, v20, v21, 0LL, v8, (unsigned int *)v5);
  }
  if ( v15 < 0 || *(_QWORD *)(v5 + 8) )
    *(_QWORD *)(v5 + 8) += (unsigned int)(v22 << 12);
  else
    *(_QWORD *)(v5 + 8) = v3;
  BYTE4(CurrentThread[1].Queue) = v25;
  MiFlushRelease(v7, v13, v11);
  return (unsigned int)v15;
}
