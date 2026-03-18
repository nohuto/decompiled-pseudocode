/*
 * XREFs of MmProbeAndLockSelectedPages @ 0x1400B2BF0
 * Callers:
 *     NtWriteFileGather @ 0x14044F2A0 (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1404507E0 (NtReadFileScatter.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140009390 (RtlRaiseStatus.c)
 *     MiProbeAndLockComplete @ 0x1400268F8 (MiProbeAndLockComplete.c)
 *     MiProbeLockFrame @ 0x1400B3EF0 (MiProbeLockFrame.c)
 *     MiProbeLeafFrame @ 0x1400B44D0 (MiProbeLeafFrame.c)
 *     MiProbeAndLockPrepare @ 0x1400B4C90 (MiProbeAndLockPrepare.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __stdcall MmProbeAndLockSelectedPages(
        PMDL MemoryDescriptorList,
        PFILE_SEGMENT_ELEMENT SegmentArray,
        KPROCESSOR_MODE AccessMode,
        LOCK_OPERATION Operation)
{
  unsigned __int64 *PoolWithTag; // rdi
  int v5; // r13d
  BOOL v6; // esi
  unsigned __int64 v9; // rbx
  unsigned __int64 *v10; // r14
  int v11; // ebx
  unsigned __int64 *v12; // rsi
  _QWORD *v13; // rdx
  unsigned __int64 v14; // rcx
  _QWORD *v15; // rdx
  _QWORD v16[4]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD *v17; // [rsp+60h] [rbp-A0h]
  __int64 v18; // [rsp+B0h] [rbp-50h]
  _BYTE P[4096]; // [rsp+D0h] [rbp-30h] BYREF

  PoolWithTag = (unsigned __int64 *)P;
  v5 = (int)MemoryDescriptorList;
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
  v11 = MiProbeAndLockPrepare((unsigned int)v16, v5, *PoolWithTag, 1, AccessMode, v6, 1);
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
        v11 = MiProbeLeafFrame(v16);
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
        goto LABEL_10;
      }
      ++dword_14036C9C8;
      v11 = -1073741819;
    }
LABEL_10:
    v11 = MiProbeAndLockComplete((__int64)v16, v11);
  }
  if ( PoolWithTag != (unsigned __int64 *)P )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v11 < 0 )
    RtlRaiseStatus(v11);
}
