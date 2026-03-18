/*
 * XREFs of MmProbeAndLockSelectedPages @ 0x140136C00
 * Callers:
 *     NtWriteFileGather @ 0x140580364 (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1405810E8 (NtReadFileScatter.c)
 * Callees:
 *     MiProbeLockFrame @ 0x140020C00 (MiProbeLockFrame.c)
 *     MiProbeAndLockPrepare @ 0x140022150 (MiProbeAndLockPrepare.c)
 *     MiProbeLeafFrame @ 0x140136DB0 (MiProbeLeafFrame.c)
 *     MiProbeAndLockComplete @ 0x140138D4C (MiProbeAndLockComplete.c)
 *     RtlRaiseStatus @ 0x14013EA80 (RtlRaiseStatus.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

void __stdcall MmProbeAndLockSelectedPages(
        PMDL MemoryDescriptorList,
        PFILE_SEGMENT_ELEMENT SegmentArray,
        KPROCESSOR_MODE AccessMode,
        LOCK_OPERATION Operation)
{
  unsigned __int64 *PoolWithTag; // rdi
  unsigned int v6; // esi
  unsigned __int64 v9; // rax
  size_t v10; // rbx
  unsigned __int64 *v11; // r14
  NTSTATUS v12; // ebx
  unsigned __int64 *v13; // rsi
  _QWORD *v14; // rdx
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD *v19; // rdx
  unsigned __int64 v20[6]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD *v21; // [rsp+70h] [rbp-90h]
  __int64 v22; // [rsp+C0h] [rbp-40h]
  _BYTE P[4096]; // [rsp+E0h] [rbp-20h] BYREF

  PoolWithTag = (unsigned __int64 *)P;
  v6 = Operation != IoReadAccess;
  v9 = (MemoryDescriptorList->ByteCount >> 12) + ((MemoryDescriptorList->ByteCount & 0xFFF) != 0);
  v10 = (unsigned int)v9;
  if ( v9 > 0x200 )
  {
    PoolWithTag = (unsigned __int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * (unsigned int)v9, 0x72506D4Du);
    if ( !PoolWithTag )
      RtlRaiseStatus(-1073741670);
  }
  v11 = &PoolWithTag[v10];
  memmove(PoolWithTag, SegmentArray, v10 * 8);
  v12 = MiProbeAndLockPrepare((__int64)v20, (__int64)MemoryDescriptorList, *PoolWithTag, 1u, AccessMode, v6, 1);
  if ( v12 >= 0 )
  {
    v13 = PoolWithTag;
    if ( PoolWithTag < v11 )
    {
      v14 = v21;
      while ( 1 )
      {
        v15 = *v13;
        v20[0] = v15;
        v20[1] = v15 + 1;
        *v14 = -1LL;
        v20[2] = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( v15 >= 0x7FFFFFFF0000LL )
        {
          if ( AccessMode )
            break;
        }
        v12 = MiProbeLeafFrame(v20);
        if ( v12 >= 0 )
        {
          v12 = MiProbeLockFrame(v20, v16, v17, v18);
          if ( v12 >= 0 )
          {
            v19 = v21;
            ++v13;
            *v21 = v22;
            v14 = v19 + 1;
            v21 = v14;
            if ( v13 < v11 )
              continue;
          }
        }
        goto LABEL_10;
      }
      ++dword_1403CBE58;
      v12 = -1073741819;
    }
LABEL_10:
    v12 = MiProbeAndLockComplete(v20, (unsigned int)v12, 7LL);
  }
  if ( PoolWithTag != (unsigned __int64 *)P )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v12 < 0 )
    RtlRaiseStatus(v12);
}
