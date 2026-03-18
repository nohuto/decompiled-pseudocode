/*
 * XREFs of MmManagePartitionInitialAddMemory @ 0x1406EE638
 * Callers:
 *     NtManagePartition @ 0x1404FC278 (NtManagePartition.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     MiHotAddPartitionMemory @ 0x1406EE0EC (MiHotAddPartitionMemory.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MmManagePartitionInitialAddMemory(__int16 **a1, _DWORD *a2, __int64 a3, char a4)
{
  char *v5; // rsi
  char *PoolWithTag; // rdi
  __int16 *v7; // r15
  unsigned int v8; // ebx
  unsigned int v9; // eax
  SIZE_T v10; // rbx

  v5 = 0LL;
  PoolWithTag = 0LL;
  v7 = *a1;
  if ( (*a2 & 0xFFFFFFFC) == 0 && (*a2 & 3) != 0 )
  {
    v9 = a2[1];
    if ( v9 )
    {
      v5 = (char *)(a3 + 16);
      if ( a4 )
      {
        v10 = 16LL * v9;
        PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v10, 0x6148694Du);
        if ( !PoolWithTag )
        {
          v8 = -1073741670;
          goto LABEL_17;
        }
        if ( v10 )
        {
          if ( ((unsigned __int8)v5 & 7) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)&v5[v10] > 0x7FFFFFFF0000LL || &v5[v10] < v5 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
        memmove(PoolWithTag, v5, v10);
      }
      else
      {
        PoolWithTag = (char *)(a3 + 16);
      }
      v8 = MiHotAddPartitionMemory(v7, (unsigned __int64 *)PoolWithTag, (__int64)a2);
      goto LABEL_17;
    }
  }
  v8 = -1073741811;
LABEL_17:
  if ( PoolWithTag && PoolWithTag != v5 )
    ExFreePoolWithTag(PoolWithTag, 0);
  return v8;
}
