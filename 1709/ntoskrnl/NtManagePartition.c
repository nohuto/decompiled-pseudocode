/*
 * XREFs of NtManagePartition @ 0x1404FC278
 * Callers:
 *     <none>
 * Callees:
 *     PsDereferencePartition @ 0x1400B8F3C (PsDereferencePartition.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ProbeForWrite @ 0x1404A3950 (ProbeForWrite.c)
 *     MmManagePartitionMemoryInformation @ 0x1404FC4EC (MmManagePartitionMemoryInformation.c)
 *     PsReferencePartitionByHandle @ 0x1404FC8D4 (PsReferencePartitionByHandle.c)
 *     MiCreatePagingFile @ 0x1405D3FF0 (MiCreatePagingFile.c)
 *     MmManagePartitionGetMemoryEvents @ 0x1405EFA90 (MmManagePartitionGetMemoryEvents.c)
 *     MmManagePartitionCombineMemory @ 0x1406EE5D4 (MmManagePartitionCombineMemory.c)
 *     MmManagePartitionInitialAddMemory @ 0x1406EE638 (MmManagePartitionInitialAddMemory.c)
 *     MmManagePartitionMoveMemory @ 0x1406EE744 (MmManagePartitionMoveMemory.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtManagePartition(
        HANDLE TargetHandle,
        HANDLE SourceHandle,
        PARTITION_INFORMATION_CLASS PartitionInformationClass,
        PVOID PartitionInformation,
        ULONG PartitionInformationLength)
{
  __int64 v6; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  char PreviousMode; // r14
  __int64 v12; // r15
  NTSTATUS v13; // edi
  int MemoryEvents; // eax
  _QWORD *v16; // rax
  int v17; // ebx
  int v18; // ebx
  int v19; // ebx
  _QWORD *v20; // rax
  char v21; // [rsp+30h] [rbp-158h]
  char v22; // [rsp+31h] [rbp-157h]
  _QWORD *v23; // [rsp+38h] [rbp-150h] BYREF
  _QWORD *v24; // [rsp+40h] [rbp-148h] BYREF
  _DWORD Src[60]; // [rsp+50h] [rbp-138h] BYREF

  v6 = (unsigned int)PartitionInformationClass;
  memset(Src, 0, sizeof(Src));
  v22 = 0;
  v21 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v24 = 0LL;
  v23 = 0LL;
  if ( (unsigned int)v6 >= 6 )
  {
    v13 = -1073741821;
    goto LABEL_26;
  }
  v12 = (unsigned int)v6;
  if ( PartitionInformationLength != WORD2(PspPartitionInfoDetails[v6]) )
  {
    v13 = -1073741820;
    goto LABEL_26;
  }
  if ( (PspPartitionInfoDetails[v6] & 0x100000000000000LL) != 0 )
  {
    if ( PreviousMode && PartitionInformationLength )
    {
      if ( ((BYTE6(PspPartitionInfoDetails[v6]) - 1) & (unsigned __int64)PartitionInformation) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)PartitionInformation + PartitionInformationLength > 0x7FFFFFFF0000LL
        || (char *)PartitionInformation + PartitionInformationLength < PartitionInformation )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    memmove(Src, PartitionInformation, PartitionInformationLength);
  }
  if ( TargetHandle == (HANDLE)-1LL )
  {
    v16 = *(_QWORD **)&KeGetCurrentThread()->ApcState.Process[2].AddressPolicy;
LABEL_33:
    v23 = v16;
    goto LABEL_17;
  }
  if ( TargetHandle == (HANDLE)-2LL )
  {
    v16 = PspSystemPartition;
    goto LABEL_33;
  }
  LOBYTE(v9) = PreviousMode;
  v13 = PsReferencePartitionByHandle(TargetHandle, LODWORD(PspPartitionInfoDetails[v6]), v9, &v23);
  if ( v13 < 0 )
    goto LABEL_26;
  v21 = 1;
LABEL_17:
  if ( (PspPartitionInfoDetails[v6] & 0x400000000000000LL) != 0 )
  {
    if ( SourceHandle == (HANDLE)-1LL )
    {
      v20 = *(_QWORD **)&KeGetCurrentThread()->ApcState.Process[2].AddressPolicy;
    }
    else
    {
      if ( SourceHandle != (HANDLE)-2LL )
      {
        LOBYTE(v9) = PreviousMode;
        v13 = PsReferencePartitionByHandle(SourceHandle, LODWORD(PspPartitionInfoDetails[v6]), v9, &v24);
        if ( v13 < 0 )
          goto LABEL_26;
        v22 = 1;
LABEL_50:
        if ( v24 == v23 )
        {
          v13 = -1073741811;
          goto LABEL_26;
        }
        goto LABEL_19;
      }
      v20 = PspSystemPartition;
    }
    v24 = v20;
    goto LABEL_50;
  }
  if ( SourceHandle )
  {
    v13 = -1073741584;
    goto LABEL_26;
  }
LABEL_19:
  if ( (_DWORD)v6 )
  {
    v17 = v6 - 1;
    if ( v17 )
    {
      v18 = v17 - 1;
      if ( v18 )
      {
        v19 = v18 - 1;
        if ( v19 )
        {
          if ( v19 == 1 )
          {
            LOBYTE(v10) = PreviousMode;
            MemoryEvents = MmManagePartitionInitialAddMemory(v23, Src, PartitionInformation, v10);
          }
          else
          {
            LOBYTE(v9) = PreviousMode;
            MemoryEvents = MmManagePartitionGetMemoryEvents(v23, Src, v9);
          }
        }
        else
        {
          LOBYTE(v10) = PreviousMode;
          MemoryEvents = MmManagePartitionCombineMemory(v23, Src, PartitionInformation, v10);
        }
      }
      else
      {
        LOBYTE(v10) = PreviousMode;
        MemoryEvents = MiCreatePagingFile(
                         PartitionInformation,
                         (char *)PartitionInformation + 16,
                         (char *)PartitionInformation + 24,
                         v10,
                         Src[8],
                         *v23);
      }
    }
    else
    {
      LOBYTE(v10) = PreviousMode;
      MemoryEvents = MmManagePartitionMoveMemory(v23, v24, Src, v10);
    }
  }
  else
  {
    MemoryEvents = MmManagePartitionMemoryInformation(v23, Src);
  }
  v13 = MemoryEvents;
  if ( MemoryEvents >= 0 && (PspPartitionInfoDetails[v12] & 0x200000000000000LL) != 0 )
  {
    if ( PreviousMode )
      ProbeForWrite(PartitionInformation, PartitionInformationLength, BYTE6(PspPartitionInfoDetails[v12]));
    memmove(PartitionInformation, Src, PartitionInformationLength);
  }
LABEL_26:
  if ( v21 )
    PsDereferencePartition((__int64)v23);
  if ( v22 )
    PsDereferencePartition((__int64)v24);
  return v13;
}
