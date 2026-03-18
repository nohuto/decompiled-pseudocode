/*
 * XREFs of MiUpdatePartitionLargePfnBitMap @ 0x1407579D0
 * Callers:
 *     MiAllocatePartitionPhysicalPages @ 0x140756FD8 (MiAllocatePartitionPhysicalPages.c)
 *     MiHotAddPartitionMemory @ 0x14075757C (MiHotAddPartitionMemory.c)
 * Callees:
 *     MiUnlockDynamicMemoryExclusive @ 0x14006FF50 (MiUnlockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryExclusive @ 0x140070288 (MiLockDynamicMemoryExclusive.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     MiActOnPartitionNodePages @ 0x14026DA80 (MiActOnPartitionNodePages.c)
 */

__int64 __fastcall MiUpdatePartitionLargePfnBitMap(__int16 *a1, _QWORD **a2)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned int v5; // esi
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD *v8; // rax
  _QWORD *i; // rdi
  _QWORD **v10; // rax
  __int64 v11; // r9
  _QWORD *v12; // rcx
  _QWORD *v13; // rcx
  __int16 *v15[8]; // [rsp+20h] [rbp-48h] BYREF

  memset(v15, 0, 0x38uLL);
  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  v15[0] = a1;
  MiLockDynamicMemoryExclusive((__int64)a1, (__int64)CurrentThread);
  v8 = *a2;
  i = 0LL;
  while ( v8 )
  {
    i = v8;
    v8 = (_QWORD *)*v8;
  }
  while ( i )
  {
    v10 = (_QWORD **)i[1];
    v11 = (__int64)i;
    v12 = i;
    if ( v10 )
    {
      v13 = *v10;
      for ( i = (_QWORD *)i[1]; v13; v13 = (_QWORD *)*v13 )
        i = v13;
    }
    else
    {
      while ( 1 )
      {
        i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !i || (_QWORD *)*i == v12 )
          break;
        v12 = i;
      }
    }
    MiActOnPartitionNodePages(v11, 3u, v15);
    if ( SHIDWORD(v15[2]) < 0 )
    {
      v5 = HIDWORD(v15[2]);
      break;
    }
  }
  MiUnlockDynamicMemoryExclusive((__int64)a1, (__int64)CurrentThread, v6, v7);
  return v5;
}
