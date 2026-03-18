/*
 * XREFs of MiEnablePartitionMappedWrites @ 0x1404F9CA4
 * Callers:
 *     MiCreateNewSection @ 0x1404F96D0 (MiCreateNewSection.c)
 *     MiCreatePagingFile @ 0x1405D3FF0 (MiCreatePagingFile.c)
 * Callees:
 *     MiAllocateMappedWriterMdls @ 0x140159AE0 (MiAllocateMappedWriterMdls.c)
 *     MiUnlockPartitionSystemThreads @ 0x14015CF08 (MiUnlockPartitionSystemThreads.c)
 *     MiLockPartitionSystemThreads @ 0x14015D498 (MiLockPartitionSystemThreads.c)
 *     MiDeleteMappedMdls @ 0x140218CF0 (MiDeleteMappedMdls.c)
 *     PsCreateSystemThreadEx @ 0x1405549A0 (PsCreateSystemThreadEx.c)
 */

__int64 __fastcall MiEnablePartitionMappedWrites(_QWORD *a1)
{
  int *v1; // rdx
  unsigned int i; // ecx
  struct _KTHREAD *CurrentThread; // r13
  int MappedWriterMdls; // esi
  unsigned int v7; // ebp
  _QWORD *v8; // r15
  int *v9; // r14
  __int64 v10; // rdi
  _QWORD v11[9]; // [rsp+50h] [rbp-48h] BYREF
  int v12; // [rsp+A8h] [rbp+10h] BYREF
  int v13; // [rsp+ACh] [rbp+14h]
  __int64 v14; // [rsp+B0h] [rbp+18h]
  __int64 v15; // [rsp+B8h] [rbp+20h] BYREF

  v12 = 2;
  v11[0] = MiDereferenceSegmentThread;
  v1 = &v12;
  v13 = 4;
  v11[1] = MiMappedPageWriter;
  for ( i = 0; i < 2; ++i )
  {
    if ( !a1[(unsigned int)*v1 + 16] )
      break;
    ++v1;
  }
  if ( i == 2 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  MappedWriterMdls = 0;
  v14 = *(_QWORD *)(a1[21] + 112LL);
  MiLockPartitionSystemThreads((__int64)a1, (__int64)CurrentThread);
  v7 = 0;
  v8 = v11;
  v9 = &v12;
  while ( 1 )
  {
    v10 = (unsigned int)*v9;
    if ( !a1[v10 + 16] )
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
  MappedWriterMdls = PsCreateSystemThreadEx(&v15, 0x1FFFFFLL, 0LL, v14, 0LL, *v8, a1, 0LL, 0LL);
  if ( MappedWriterMdls >= 0 )
  {
    a1[v10 + 16] = v15;
    goto LABEL_12;
  }
  if ( (_DWORD)v10 == 4 )
    MiDeleteMappedMdls((__int64)a1);
LABEL_13:
  MiUnlockPartitionSystemThreads((__int64)a1, (__int64)CurrentThread);
  return (unsigned int)MappedWriterMdls;
}
