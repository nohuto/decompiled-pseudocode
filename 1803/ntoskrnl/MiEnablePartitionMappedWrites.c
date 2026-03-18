/*
 * XREFs of MiEnablePartitionMappedWrites @ 0x1404BEC88
 * Callers:
 *     MiCreateNewSection @ 0x1404BE6AC (MiCreateNewSection.c)
 *     MiCreatePagingFile @ 0x14063BE50 (MiCreatePagingFile.c)
 * Callees:
 *     MiPartitionActive @ 0x140071968 (MiPartitionActive.c)
 *     MiAllocateMappedWriterMdls @ 0x140184BD0 (MiAllocateMappedWriterMdls.c)
 *     MiUnlockPartitionSystemThreads @ 0x140186E04 (MiUnlockPartitionSystemThreads.c)
 *     MiLockPartitionSystemThreads @ 0x140187274 (MiLockPartitionSystemThreads.c)
 *     MiDeleteMappedMdls @ 0x140255B5C (MiDeleteMappedMdls.c)
 *     PsCreateSystemThreadEx @ 0x14052AC40 (PsCreateSystemThreadEx.c)
 */

__int64 __fastcall MiEnablePartitionMappedWrites(_QWORD *a1)
{
  int *v1; // rdx
  unsigned int i; // ecx
  struct _KTHREAD *CurrentThread; // r13
  int MappedWriterMdls; // esi
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ebp
  _QWORD *v10; // r15
  int *v11; // r14
  __int64 v12; // rdi
  _QWORD v13[9]; // [rsp+50h] [rbp-48h] BYREF
  int v14; // [rsp+A8h] [rbp+10h] BYREF
  int v15; // [rsp+ACh] [rbp+14h]
  __int64 v16; // [rsp+B0h] [rbp+18h]
  __int64 v17; // [rsp+B8h] [rbp+20h] BYREF

  v14 = 2;
  v13[0] = MiDereferenceSegmentThread;
  v1 = &v14;
  v15 = 4;
  v13[1] = MiMappedPageWriter;
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
  v16 = *(_QWORD *)(a1[21] + 112LL);
  MiLockPartitionSystemThreads((__int64)a1, (__int64)CurrentThread);
  v9 = 0;
  v10 = v13;
  v11 = &v14;
  while ( 1 )
  {
    v12 = (unsigned int)*v11;
    if ( !a1[v12 + 16] )
      break;
LABEL_12:
    ++v9;
    ++v11;
    ++v10;
    if ( v9 >= 2 )
      goto LABEL_13;
  }
  if ( (_DWORD)v12 == 4 )
  {
    MappedWriterMdls = MiAllocateMappedWriterMdls(a1);
    if ( MappedWriterMdls < 0 )
      goto LABEL_13;
  }
  MappedWriterMdls = PsCreateSystemThreadEx(&v17, 0x1FFFFFLL, 0LL, v16, 0LL, *v10, a1, 0LL, 0LL);
  if ( MappedWriterMdls >= 0 )
  {
    a1[v12 + 16] = v17;
    goto LABEL_12;
  }
  if ( (_DWORD)v12 == 4 )
    MiDeleteMappedMdls((__int64)a1);
LABEL_13:
  MiUnlockPartitionSystemThreads((__int64)a1, (__int64)CurrentThread, v7, v8);
  MiPartitionActive((__int64)a1);
  return (unsigned int)MappedWriterMdls;
}
