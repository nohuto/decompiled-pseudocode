/*
 * XREFs of MiEnablePartitionMappedWrites @ 0x1404938EC
 * Callers:
 *     MiCreateNewSection @ 0x1404933A8 (MiCreateNewSection.c)
 * Callees:
 *     MiAllocateMappedWriterMdls @ 0x14016648C (MiAllocateMappedWriterMdls.c)
 *     MiUnlockPartitionSystemThreads @ 0x140167E94 (MiUnlockPartitionSystemThreads.c)
 *     MiLockPartitionSystemThreads @ 0x1401685D4 (MiLockPartitionSystemThreads.c)
 *     MiDeleteMappedMdls @ 0x140211454 (MiDeleteMappedMdls.c)
 *     PsCreateSystemThreadEx @ 0x1405679C0 (PsCreateSystemThreadEx.c)
 */

__int64 __fastcall MiEnablePartitionMappedWrites(_QWORD *a1)
{
  int *v1; // rdx
  unsigned int i; // ecx
  struct _KTHREAD *CurrentThread; // r12
  int MappedWriterMdls; // edi
  unsigned int v7; // ebp
  __int64 *v8; // r15
  int *v9; // r14
  __int64 v10; // rsi
  _QWORD v11[9]; // [rsp+50h] [rbp-48h] BYREF
  int v12; // [rsp+A8h] [rbp+10h] BYREF
  int v13; // [rsp+ACh] [rbp+14h]
  __int64 v14; // [rsp+B0h] [rbp+18h] BYREF

  v12 = 2;
  v11[0] = MiDereferenceSegmentThread;
  v1 = &v12;
  v13 = 4;
  v11[1] = MiMappedPageWriter;
  for ( i = 0; i < 2; ++i )
  {
    if ( !a1[(unsigned int)*v1 + 20] )
      break;
    ++v1;
  }
  if ( i == 2 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  MappedWriterMdls = 0;
  MiLockPartitionSystemThreads((__int64)a1, (__int64)CurrentThread);
  v7 = 0;
  v8 = v11;
  v9 = &v12;
  while ( 1 )
  {
    v10 = (unsigned int)*v9;
    if ( !a1[v10 + 20] )
      break;
LABEL_12:
    ++v7;
    ++v9;
    ++v8;
    if ( v7 >= 2 )
      goto LABEL_13;
  }
  if ( (_DWORD)v10 == 4 )
  {
    MappedWriterMdls = MiAllocateMappedWriterMdls(a1);
    if ( MappedWriterMdls < 0 )
      goto LABEL_13;
  }
  MappedWriterMdls = PsCreateSystemThreadEx((unsigned int)&v14, 0x1FFFFF, 0, 0, 0LL, *v8, (__int64)a1, 0LL, 0LL);
  if ( MappedWriterMdls >= 0 )
  {
    a1[v10 + 20] = v14;
    goto LABEL_12;
  }
  if ( (_DWORD)v10 == 4 )
    MiDeleteMappedMdls((__int64)a1);
LABEL_13:
  MiUnlockPartitionSystemThreads((__int64)a1, (__int64)CurrentThread);
  return (unsigned int)MappedWriterMdls;
}
