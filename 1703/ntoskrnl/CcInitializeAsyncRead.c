/*
 * XREFs of CcInitializeAsyncRead @ 0x1401618DC
 * Callers:
 *     CcInitializePartition @ 0x140161450 (CcInitializePartition.c)
 * Callees:
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     PsCreateSystemThread @ 0x140567970 (PsCreateSystemThread.c)
 */

char __fastcall CcInitializeAsyncRead(_QWORD *a1)
{
  PVOID PoolWithTag; // rax
  __int64 v3; // rdx
  PVOID v4; // rax
  __int64 v5; // rdx
  PVOID v6; // rax
  __int64 v7; // rcx
  PVOID v8; // rax
  __int64 v9; // rdx
  PVOID v10; // rax
  __int64 v11; // rdx
  PVOID v12; // rax
  unsigned int v13; // ebp
  unsigned int v14; // esi
  __int64 v15; // rbx
  __int64 v16; // r14
  _QWORD *v17; // rcx
  _QWORD *v18; // rcx
  _QWORD *v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rax
  _QWORD *v22; // rax
  unsigned int i; // ebx
  _DWORD *v24; // rax
  __int64 v25; // rdx
  _QWORD *v26; // rcx
  unsigned int v27; // ebx
  _DWORD *StartContext; // rax
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-48h] BYREF
  HANDLE ThreadHandle; // [rsp+90h] [rbp+8h] BYREF

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 16LL * (unsigned int)(CcMaxNestingLevel + 1), 0x71576343u);
  v3 = (unsigned int)(CcMaxNestingLevel + 1);
  a1[105] = PoolWithTag;
  v4 = ExAllocatePoolWithTag(NonPagedPoolNx, 16 * v3, 0x71576343u);
  v5 = (unsigned int)(CcMaxNestingLevel + 1);
  a1[108] = v4;
  v6 = ExAllocatePoolWithTag(NonPagedPoolNx, 16 * v5, 0x71576343u);
  v7 = (unsigned int)(CcMaxNestingLevel + 1);
  a1[109] = v6;
  a1[111] = ExAllocatePoolWithTag(NonPagedPoolNx, 404 * v7, 0x71576343u);
  v8 = ExAllocatePoolWithTag(NonPagedPoolNx, 24LL * (unsigned int)(CcMaxNestingLevel + 1), 0x71576343u);
  v9 = (unsigned int)(CcMaxNestingLevel + 1);
  a1[110] = v8;
  v10 = ExAllocatePoolWithTag(NonPagedPoolNx, 4 * v9, 0x71576343u);
  v11 = (unsigned int)(CcMaxNestingLevel + 1);
  a1[106] = v10;
  v12 = ExAllocatePoolWithTag(NonPagedPoolNx, 4 * v11, 0x71576343u);
  a1[107] = v12;
  if ( !a1[105] || !a1[108] || !a1[109] || !a1[111] || !a1[110] || !a1[106] || !v12 )
    KeBugCheckEx(0x34u, 0x40164uLL, 0LL, 0LL, 0LL);
  v13 = CcMaxAsyncReadWorkerThreads;
  v14 = 0;
  do
  {
    v15 = 404LL * v14;
    v16 = 16LL * v14;
    v17 = (_QWORD *)(v16 + a1[105]);
    v17[1] = v17;
    *v17 = v17;
    v18 = (_QWORD *)(v16 + a1[108]);
    v18[1] = v18;
    *v18 = v18;
    v19 = (_QWORD *)(v16 + a1[109]);
    v19[1] = v19;
    *v19 = v19;
    v20 = 3LL * v14;
    v21 = a1[110];
    *(_WORD *)(v21 + 8 * v20) = 1;
    *(_BYTE *)(v21 + 8 * v20 + 2) = 6;
    *(_DWORD *)(v21 + 8 * v20 + 4) = 0;
    v22 = (_QWORD *)(v21 + 24LL * v14 + 8);
    v22[1] = v22;
    *v22 = v22;
    *(_DWORD *)(a1[106] + 4LL * v14) = 0;
    *(_DWORD *)(a1[107] + 4LL * v14) = 0;
    memset((void *)(v15 + a1[111]), 255, 4LL * v13);
    *(_DWORD *)(v15 + a1[111]) = 0;
    for ( i = 1; i < v13; *(_QWORD *)(v25 + 8) = v24 )
    {
      v24 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x71576343u);
      if ( !v24 )
        KeBugCheckEx(0x34u, 0x4018FuLL, 0LL, 0LL, 0LL);
      v24[8] = 3;
      *((_QWORD *)v24 + 7) = a1;
      v24[10] = i;
      v24[9] = v14;
      *((_QWORD *)v24 + 2) = CcAsyncReadWorkerThread;
      *((_QWORD *)v24 + 3) = v24;
      *(_QWORD *)v24 = 0LL;
      v25 = v16 + a1[105];
      v26 = *(_QWORD **)(v25 + 8);
      if ( *v26 != v25 )
        __fastfail(3u);
      v13 = CcMaxAsyncReadWorkerThreads;
      ++i;
      *(_QWORD *)v24 = v25;
      *((_QWORD *)v24 + 1) = v26;
      *v26 = v24;
    }
    ++v14;
  }
  while ( v14 <= CcMaxNestingLevel );
  a1[112] = 0LL;
  v27 = 0;
  while ( 1 )
  {
    ObjectAttributes.Length = 48;
    memset(&ObjectAttributes.RootDirectory, 0, 20);
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    StartContext = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x71576343u);
    if ( !StartContext )
      KeBugCheckEx(0x34u, 0x401B5uLL, 0LL, 0LL, 0LL);
    StartContext[8] = 3;
    *((_QWORD *)StartContext + 7) = a1;
    StartContext[10] = 0;
    StartContext[9] = v27;
    *((_QWORD *)StartContext + 2) = CcAsyncReadWorkerThread;
    *((_QWORD *)StartContext + 3) = StartContext;
    *(_QWORD *)StartContext = 0LL;
    ++*(_DWORD *)(a1[106] + 4LL * v27);
    if ( PsCreateSystemThread(
           &ThreadHandle,
           0x1FFFFFu,
           &ObjectAttributes,
           0LL,
           0LL,
           (PKSTART_ROUTINE)CcAsyncReadWorker,
           StartContext) < 0 )
      break;
    ZwClose(ThreadHandle);
    if ( ++v27 > CcMaxNestingLevel )
      return 1;
  }
  return 0;
}
