/*
 * XREFs of CcInitializePartition @ 0x140147624
 * Callers:
 *     CcCreatePartition @ 0x140148170 (CcCreatePartition.c)
 * Callees:
 *     DbgPrintEx @ 0x1401471C0 (DbgPrintEx.c)
 *     CcInitializeAsyncRead @ 0x140147B98 (CcInitializeAsyncRead.c)
 *     CcInitializePartitionVacbs @ 0x140147F2C (CcInitializePartitionVacbs.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     PsCreateSystemThread @ 0x140554950 (PsCreateSystemThread.c)
 *     MmGetNumberOfPhysicalPagesForPartitionObject @ 0x14059F504 (MmGetNumberOfPhysicalPagesForPartitionObject.c)
 */

char __fastcall CcInitializePartition(HANDLE *StartContext, _QWORD *a2)
{
  char v4; // si
  _QWORD *v5; // rdx
  PVOID *v6; // rcx
  char *v7; // r14
  char *v8; // r15
  _QWORD *v9; // r12
  unsigned __int64 NumberOfPhysicalPagesForPartitionObject; // rax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  void *v16; // r9
  unsigned int v17; // ebx
  _DWORD *PoolWithTag; // rax
  char **v19; // rcx
  unsigned int v20; // ebx
  _DWORD *v21; // rax
  char **v22; // rcx
  PVOID v23; // rax
  PVOID v24; // rbx
  void *v26; // rax
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-48h] BYREF

  v4 = 0;
  memset(StartContext, 0, 0x400uLL);
  *(_DWORD *)StartContext = 67109623;
  StartContext[1] = a2;
  v5 = StartContext + 9;
  StartContext[113] = (HANDLE)1;
  StartContext[5] = StartContext + 4;
  StartContext[4] = StartContext + 4;
  StartContext[3] = StartContext + 2;
  StartContext[2] = StartContext + 2;
  StartContext[13] = StartContext + 12;
  StartContext[12] = StartContext + 12;
  StartContext[7] = StartContext + 6;
  StartContext[6] = StartContext + 6;
  *((_DWORD *)StartContext + 16) = 2048;
  v6 = (PVOID *)StartContext[7];
  if ( *v6 != StartContext + 6 )
    __fastfail(3u);
  *v5 = StartContext + 6;
  v7 = (char *)(StartContext + 26);
  StartContext[10] = v6;
  v8 = (char *)(StartContext + 36);
  *v6 = v5;
  v9 = StartContext + 78;
  StartContext[7] = v5;
  *((_DWORD *)StartContext + 22) = 2048;
  StartContext[16] = 0LL;
  StartContext[24] = 0LL;
  StartContext[27] = StartContext + 26;
  StartContext[26] = StartContext + 26;
  StartContext[29] = StartContext + 28;
  StartContext[28] = StartContext + 28;
  StartContext[31] = StartContext + 30;
  StartContext[30] = StartContext + 30;
  StartContext[33] = StartContext + 32;
  StartContext[32] = StartContext + 32;
  StartContext[35] = StartContext + 34;
  StartContext[34] = StartContext + 34;
  StartContext[37] = StartContext + 36;
  StartContext[36] = StartContext + 36;
  *((_WORD *)StartContext + 168) = 1;
  *((_BYTE *)StartContext + 338) = 6;
  *((_DWORD *)StartContext + 85) = 0;
  StartContext[44] = StartContext + 43;
  StartContext[43] = StartContext + 43;
  *((_WORD *)StartContext + 180) = 1;
  *((_BYTE *)StartContext + 362) = 6;
  *((_DWORD *)StartContext + 91) = 0;
  StartContext[47] = StartContext + 46;
  StartContext[46] = StartContext + 46;
  *((_WORD *)StartContext + 192) = 1;
  *((_BYTE *)StartContext + 386) = 6;
  *((_DWORD *)StartContext + 97) = 0;
  StartContext[50] = StartContext + 49;
  StartContext[49] = StartContext + 49;
  *((_WORD *)StartContext + 204) = 1;
  *((_BYTE *)StartContext + 410) = 6;
  *((_DWORD *)StartContext + 103) = 0;
  StartContext[53] = StartContext + 52;
  StartContext[52] = StartContext + 52;
  *((_WORD *)StartContext + 216) = 1;
  *((_BYTE *)StartContext + 434) = 6;
  *((_DWORD *)StartContext + 109) = 0;
  StartContext[56] = StartContext + 55;
  StartContext[55] = StartContext + 55;
  *((_WORD *)StartContext + 456) = 0;
  *((_BYTE *)StartContext + 914) = 6;
  *((_DWORD *)StartContext + 229) = 0;
  StartContext[116] = StartContext + 115;
  StartContext[115] = StartContext + 115;
  *((_WORD *)StartContext + 468) = 0;
  *((_BYTE *)StartContext + 938) = 6;
  *((_DWORD *)StartContext + 235) = 0;
  StartContext[119] = StartContext + 118;
  StartContext[118] = StartContext + 118;
  StartContext[75] = 0LL;
  StartContext[76] = 0LL;
  StartContext[77] = 0LL;
  memset(StartContext + 78, 0, 0x38uLL);
  memset(StartContext + 58, 0, 0x88uLL);
  *((_DWORD *)StartContext + 116) = 275;
  StartContext[61] = CcScanDpc;
  StartContext[62] = StartContext;
  StartContext[65] = 0LL;
  StartContext[60] = 0LL;
  StartContext[66] = 0LL;
  *((_BYTE *)StartContext + 528) = 8;
  StartContext[68] = StartContext + 67;
  StartContext[67] = StartContext + 67;
  StartContext[69] = 0LL;
  StartContext[73] = 0LL;
  NumberOfPhysicalPagesForPartitionObject = MmGetNumberOfPhysicalPagesForPartitionObject(a2);
  if ( (_BYTE)dword_140400130 )
  {
    StartContext[79] = (HANDLE)(NumberOfPhysicalPagesForPartitionObject >> 1);
    StartContext[80] = (HANDLE)((unsigned __int64)MmGetNumberOfPhysicalPagesForPartitionObject(a2) >> 3);
    v11 = ExCriticalWorkerThreads - 1;
    *v9 = v12;
    *((_DWORD *)StartContext + 77) = v11;
  }
  else
  {
    v26 = (void *)(NumberOfPhysicalPagesForPartitionObject >> 3);
    StartContext[80] = v26;
    StartContext[79] = v26;
    *v9 = v26;
    *((_DWORD *)StartContext + 77) = 1;
  }
  *((_DWORD *)StartContext + 168) = 10;
  StartContext[83] = 0LL;
  v13 = MmGetNumberOfPhysicalPagesForPartitionObject(a2);
  *((_BYTE *)StartContext + 901) = 0;
  *((_DWORD *)StartContext + 34) = 0;
  *((_BYTE *)StartContext + 140) = 0;
  v14 = 5 * v13;
  StartContext[96] = 0LL;
  LODWORD(v13) = ExCriticalWorkerThreads;
  StartContext[82] = (HANDLE)(2 * v14);
  *((_DWORD *)StartContext + 50) = v13 - 1;
  v15 = (*v9 >> 1) + (*v9 >> 2);
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 0;
  if ( v15 > 0xFFFFFFFF )
    LODWORD(v15) = -1;
  ObjectAttributes.ObjectName = 0LL;
  *((_DWORD *)StartContext + 162) = v15;
  StartContext[94] = StartContext + 93;
  StartContext[93] = StartContext + 93;
  StartContext[106] = StartContext + 105;
  StartContext[105] = StartContext + 105;
  *((_DWORD *)StartContext + 224) = -1;
  StartContext[108] = 0LL;
  StartContext[109] = 0LL;
  *((_DWORD *)StartContext + 220) = 32;
  *((_DWORD *)StartContext + 221) = 5;
  StartContext[111] = 0LL;
  v16 = (void *)a2[14];
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( PsCreateSystemThread(
         StartContext + 120,
         0x1FFFFFu,
         &ObjectAttributes,
         v16,
         0LL,
         CcQueueLazyWriteScanThread,
         StartContext) >= 0
    && (unsigned __int8)CcInitializePartitionVacbs(StartContext) )
  {
    v17 = 0;
    if ( *((_DWORD *)StartContext + 50) )
    {
      while ( 1 )
      {
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x71576343u);
        if ( !PoolWithTag )
          break;
        PoolWithTag[8] = 1;
        PoolWithTag[9] = -1;
        *((_QWORD *)PoolWithTag + 7) = StartContext;
        PoolWithTag[10] = v17;
        *((_QWORD *)PoolWithTag + 2) = CcWorkerThread;
        *((_QWORD *)PoolWithTag + 3) = PoolWithTag;
        *(_QWORD *)PoolWithTag = 0LL;
        v19 = (char **)StartContext[27];
        if ( *v19 != v7 )
          __fastfail(3u);
        *(_QWORD *)PoolWithTag = v7;
        ++v17;
        *((_QWORD *)PoolWithTag + 1) = v19;
        *v19 = (char *)PoolWithTag;
        StartContext[27] = PoolWithTag;
        if ( v17 >= *((_DWORD *)StartContext + 50) )
          goto LABEL_12;
      }
    }
    else
    {
LABEL_12:
      v20 = 0;
      if ( *((_DWORD *)StartContext + 77) )
      {
        while ( 1 )
        {
          v21 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x71576343u);
          if ( !v21 )
            break;
          v21[8] = 2;
          v21[9] = -1;
          *((_QWORD *)v21 + 7) = StartContext;
          v21[10] = v20;
          *((_QWORD *)v21 + 2) = CcWorkerThread;
          *((_QWORD *)v21 + 3) = v21;
          *(_QWORD *)v21 = 0LL;
          v22 = (char **)StartContext[37];
          if ( *v22 != v8 )
            __fastfail(3u);
          *(_QWORD *)v21 = v8;
          ++v20;
          *((_QWORD *)v21 + 1) = v22;
          *v22 = (char *)v21;
          StartContext[37] = v21;
          if ( v20 >= *((_DWORD *)StartContext + 77) )
            goto LABEL_16;
        }
      }
      else
      {
LABEL_16:
        v23 = ExAllocatePoolWithTag(
                NonPagedPoolNx,
                8LL * (unsigned int)(*((_DWORD *)StartContext + 77) + 1),
                0x70546343u);
        v24 = v23;
        if ( v23 )
        {
          memset(v23, 0, 8LL * (unsigned int)(*((_DWORD *)StartContext + 77) + 1));
          StartContext[85] = v24;
          if ( (unsigned __int8)CcInitializeAsyncRead(StartContext) )
          {
            v4 = 1;
            DbgPrintEx(
              0x7Fu,
              2u,
              "CcInitializePartition: Initialized Partition=%p, PartitionObject=%p \n",
              StartContext,
              a2);
          }
        }
      }
    }
  }
  return v4;
}
