/*
 * XREFs of MmProbeAndLockSelectedPages @ 0x140100140
 * Callers:
 *     NtReadFileScatter @ 0x1405616E4 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x140561D0C (NtWriteFileGather.c)
 * Callees:
 *     MiProbeLockFrame @ 0x1400BDD10 (MiProbeLockFrame.c)
 *     MiProbeLeafFrame @ 0x1400BE690 (MiProbeLeafFrame.c)
 *     MiProbeAndLockPrepare @ 0x1400BEF50 (MiProbeAndLockPrepare.c)
 *     RtlRaiseStatus @ 0x1400D9BF0 (RtlRaiseStatus.c)
 *     MiProbeAndLockComplete @ 0x1401002BC (MiProbeAndLockComplete.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

void __stdcall MmProbeAndLockSelectedPages(
        PMDL MemoryDescriptorList,
        PFILE_SEGMENT_ELEMENT SegmentArray,
        KPROCESSOR_MODE AccessMode,
        LOCK_OPERATION Operation)
{
  unsigned __int64 *PoolWithTag; // rdi
  BOOL v6; // esi
  unsigned __int64 v9; // rbx
  unsigned __int64 *v10; // r14
  NTSTATUS v11; // ebx
  unsigned __int64 *v12; // rsi
  _QWORD *v13; // rdx
  unsigned __int64 v14; // rcx
  _QWORD *v15; // rdx
  __int64 v16[4]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD *v17; // [rsp+60h] [rbp-A0h]
  __int64 v18; // [rsp+B0h] [rbp-50h]
  _BYTE P[4096]; // [rsp+D0h] [rbp-30h] BYREF

  PoolWithTag = (unsigned __int64 *)P;
  v6 = Operation != IoReadAccess;
  v9 = (MemoryDescriptorList->ByteCount >> 12) + ((MemoryDescriptorList->ByteCount & 0xFFF) != 0);
  if ( v9 > 0x200 )
  {
    PoolWithTag = (unsigned __int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 8 * v9, 0x72506D4Du);
    if ( !PoolWithTag )
      RtlRaiseStatus(-1073741670);
  }
  v10 = &PoolWithTag[v9];
  memmove(PoolWithTag, SegmentArray, 8 * v9);
  v11 = MiProbeAndLockPrepare((__int64)v16, (__int64)MemoryDescriptorList, *PoolWithTag, 1u, AccessMode, v6, 1);
  if ( v11 >= 0 )
  {
    v12 = PoolWithTag;
    if ( PoolWithTag < v10 )
    {
      v13 = v17;
      while ( 1 )
      {
        v14 = *v12;
        *v13 = -1LL;
        v16[0] = v14;
        v16[1] = v14 + 1;
        if ( v14 >= 0x7FFFFFFF0000LL )
        {
          if ( AccessMode )
            break;
        }
        v11 = MiProbeLeafFrame((__int64)v16);
        if ( v11 >= 0 )
        {
          v11 = MiProbeLockFrame(v16);
          if ( v11 >= 0 )
          {
            v15 = v17;
            ++v12;
            *v17 = v18;
            v13 = v15 + 1;
            v17 = v13;
            if ( v12 < v10 )
              continue;
          }
        }
        goto LABEL_9;
      }
      ++dword_140388BC0;
      v11 = -1073741819;
    }
LABEL_9:
    v11 = MiProbeAndLockComplete(v16, (unsigned int)v11, 7LL);
  }
  if ( PoolWithTag != (unsigned __int64 *)P )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v11 < 0 )
    RtlRaiseStatus(v11);
}
