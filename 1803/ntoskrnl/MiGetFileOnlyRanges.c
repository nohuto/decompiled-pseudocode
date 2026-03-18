/*
 * XREFs of MiGetFileOnlyRanges @ 0x140252864
 * Callers:
 *     MiGetPhysicalMemoryRanges @ 0x1405E72E8 (MiGetPhysicalMemoryRanges.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14001CF10 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140025A60 (MiLockWorkingSetShared.c)
 *     MiGetAnyMultiplexedVm @ 0x1400493AC (MiGetAnyMultiplexedVm.c)
 *     MiGetNextNonGapPfnPage @ 0x14017A7D8 (MiGetNextNonGapPfnPage.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

char *__fastcall MiGetFileOnlyRanges(_QWORD *a1)
{
  char v1; // al
  char *v2; // rdi
  __int64 v3; // r14
  __int64 v4; // rbp
  __int64 v5; // r15
  char *AnyMultiplexedVm; // rax
  char v9; // bl
  __int64 NextNonGapPfnPage; // rsi
  __int64 v11; // r8
  __int64 v12; // r12
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rcx
  size_t v15; // rbx
  __int64 v16; // rsi
  char *PoolWithTag; // rax
  char *v18; // r15
  unsigned __int64 v19; // [rsp+20h] [rbp-58h]
  __int64 v20; // [rsp+80h] [rbp+8h]
  __int64 v21; // [rsp+88h] [rbp+10h]
  unsigned __int64 v22; // [rsp+90h] [rbp+18h] BYREF
  unsigned __int64 v23; // [rsp+98h] [rbp+20h] BYREF

  v1 = MiFlags;
  v2 = 0LL;
  *a1 = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  v5 = -1LL;
  if ( (v1 & 0x30) == 0 )
    return 0LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v22 = 0LL;
  v20 = (__int64)AnyMultiplexedVm;
LABEL_4:
  while ( 1 )
  {
    v9 = MiLockWorkingSetShared((__int64)AnyMultiplexedVm);
    NextNonGapPfnPage = MiGetNextNonGapPfnPage(&v22, &v23, v9, 0);
    MiUnlockWorkingSetShared(v20, v9, v11);
    if ( !NextNonGapPfnPage )
      break;
    v12 = 48 * ((NextNonGapPfnPage + 0x58000000000LL) / 48);
    v13 = v12 - 0x58000000000LL;
    v21 = v12 - 0x58000000000LL;
    v14 = 48 * ((__int64)(NextNonGapPfnPage + v23 + 0x58000000000LL) / 48) - 0x58000000000LL;
    AnyMultiplexedVm = (char *)v20;
    v19 = v14;
    if ( v12 - 0x58000000000LL < v14 )
    {
      v15 = 16 * v4;
      while ( 1 )
      {
        if ( (*(_QWORD *)(v12 - 0x57FFFFFFFD8LL) & 0x10000000000000LL) != 0 )
        {
          v16 = v12 / 48;
          if ( v5 == -1 || v5 + 1 != v16 )
          {
            if ( v4 == v3 )
            {
              if ( v3 )
                v3 *= 2LL;
              else
                v3 = 16LL;
              PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 16 * v3, 0x66506D4Du);
              v18 = PoolWithTag;
              if ( !PoolWithTag && v2 )
              {
                ExFreePoolWithTag(v2, 0);
                return 0LL;
              }
              if ( v4 )
              {
                memmove(PoolWithTag, v2, v15);
                ExFreePoolWithTag(v2, 0);
              }
              v13 = v21;
              v2 = v18;
              v14 = v19;
            }
            *(_QWORD *)&v2[v15 + 8] = 4096LL;
            ++v4;
            *(_QWORD *)&v2[v15] = v16 << 12;
            v15 += 16LL;
          }
          else
          {
            *(_QWORD *)&v2[v15 - 8] += 4096LL;
          }
          v5 = v12 / 48;
        }
        v13 += 48LL;
        v12 += 48LL;
        v21 = v13;
        if ( v13 >= v14 )
        {
          AnyMultiplexedVm = (char *)v20;
          goto LABEL_4;
        }
      }
    }
  }
  *a1 = v4;
  return v2;
}
