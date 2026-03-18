/*
 * XREFs of MmFlushSection @ 0x1400E1380
 * Callers:
 *     MiFlushDataSection @ 0x14004D85C (MiFlushDataSection.c)
 *     CcPurgeAndClearCacheSection @ 0x14009ADF4 (CcPurgeAndClearCacheSection.c)
 *     CcMdlWriteComplete2 @ 0x1400CB7B4 (CcMdlWriteComplete2.c)
 *     CcFlushCachePriv @ 0x1400DEE80 (CcFlushCachePriv.c)
 *     CcSetFileSizesEx @ 0x1400E0340 (CcSetFileSizesEx.c)
 *     CcUnpinRepinnedBcb @ 0x1402203F0 (CcUnpinRepinnedBcb.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x14005BAC0 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x14005BC04 (MiDereferenceControlAreaFile.c)
 *     MiComputeFlushRange @ 0x1400E1500 (MiComputeFlushRange.c)
 *     MiFlushRelease @ 0x1400E4B40 (MiFlushRelease.c)
 *     KeDelayExecutionThread @ 0x140104BA0 (KeDelayExecutionThread.c)
 *     MiFlushSectionInternal @ 0x1401187E0 (MiFlushSectionInternal.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1404E0808 (FsRtlReleaseFileForCcFlush.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1404E0A44 (FsRtlAcquireFileForCcFlushEx.c)
 */

__int64 MmFlushSection(__int64 a1, va_list a2, __int64 a3, ...)
{
  __int64 v3; // r13
  __int64 v4; // rax
  __int64 v5; // rbx
  int v6; // r15d
  int v7; // edi
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v9; // r14
  __int64 v10; // r12
  __int64 v11; // r15
  int v12; // edi
  unsigned int v14; // r13d
  ULONG_PTR v15; // rax
  struct _FILE_OBJECT *v16; // r14
  int v17; // esi
  unsigned __int64 v18; // rdx
  int v19; // [rsp+28h] [rbp-48h]
  __int64 v20; // [rsp+40h] [rbp-30h] BYREF
  __int64 v21; // [rsp+48h] [rbp-28h]
  __int64 v22; // [rsp+50h] [rbp-20h]
  __int64 v23; // [rsp+58h] [rbp-18h]
  __int64 v24; // [rsp+60h] [rbp-10h]
  int v25; // [rsp+68h] [rbp-8h]
  struct _KTHREAD *v26; // [rsp+B8h] [rbp+48h]
  __int64 v28; // [rsp+C8h] [rbp+58h] BYREF
  va_list va; // [rsp+C8h] [rbp+58h]
  _DWORD *v30; // [rsp+D0h] [rbp+60h]
  __int64 v31; // [rsp+D8h] [rbp+68h]
  va_list va1; // [rsp+E0h] [rbp+70h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v28 = va_arg(va1, _QWORD);
  v30 = va_arg(va1, _DWORD *);
  v31 = va_arg(va1, _QWORD);
  v3 = a3;
  if ( a2 )
  {
    v4 = *(_QWORD *)a2;
    va_copy(a2, va);
    v28 = v4;
  }
  v5 = (__int64)v30;
  v6 = v31;
  v7 = v31 & 1;
  *v30 = 0;
  *(_QWORD *)(v5 + 8) = a3;
  if ( !(unsigned int)MiComputeFlushRange(a1, a2, a3, &v20) )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v9 = v20;
  v26 = CurrentThread;
  LOBYTE(v28) = BYTE4(CurrentThread[1].Queue);
  BYTE4(CurrentThread[1].Queue) = 1;
  if ( v7 )
  {
    v14 = 0;
    v15 = MiReferenceControlAreaFile(v9);
    v11 = v24;
    v16 = (struct _FILE_OBJECT *)v15;
    v10 = v23;
    v17 = v31;
    do
    {
      v12 = FsRtlAcquireFileForCcFlushEx(v16);
      if ( v12 < 0 )
        break;
      v12 = MiFlushSectionInternal(v21, v22, v10, v11, 0LL, v17, v5);
      FsRtlReleaseFileForCcFlush(v16);
      if ( v12 != -1073741740 )
        break;
      ++v14;
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
    }
    while ( v14 < 5 );
    v18 = (unsigned __int64)v16;
    v9 = v20;
    MiDereferenceControlAreaFile(v20, v18);
    CurrentThread = v26;
    v3 = a3;
  }
  else
  {
    v10 = v23;
    v19 = v6;
    v11 = v24;
    v12 = MiFlushSectionInternal(v21, v22, v23, v24, 0LL, v19, v5);
  }
  if ( v12 < 0 || *(_QWORD *)(v5 + 8) )
    *(_QWORD *)(v5 + 8) += (unsigned int)(v25 << 12);
  else
    *(_QWORD *)(v5 + 8) = v3;
  BYTE4(CurrentThread[1].Queue) = v28;
  MiFlushRelease(v9, v10, v11);
  return (unsigned int)v12;
}
