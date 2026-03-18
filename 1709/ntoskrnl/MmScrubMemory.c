/*
 * XREFs of MmScrubMemory @ 0x1406EEF04
 * Callers:
 *     NtSetSystemInformation @ 0x140469CA0 (NtSetSystemInformation.c)
 * Callees:
 *     ExQueueWorkItemToPartition @ 0x140023404 (ExQueueWorkItemToPartition.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     KeWaitForGate @ 0x1400E3F18 (KeWaitForGate.c)
 *     KeInitializeGate @ 0x14012C014 (KeInitializeGate.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     MiScrubProcesses @ 0x1406EEA90 (MiScrubProcesses.c)
 */

NTSTATUS __fastcall MmScrubMemory(void *a1, void *a2, _QWORD *a3)
{
  NTSTATUS result; // eax
  unsigned int v5; // esi
  _DWORD *PoolWithTag; // rax
  _QWORD *v7; // rbx
  int v8; // esi
  _DWORD *v9; // rdi
  unsigned int *v10; // r14
  unsigned int v11; // ebp
  unsigned int **v12; // r15
  __int64 v13; // rcx
  int *v14; // rax
  PVOID Object; // [rsp+70h] [rbp+8h] BYREF
  __int64 v16; // [rsp+80h] [rbp+18h] BYREF

  Object = a1;
  *a3 = 0LL;
  result = ObReferenceObjectByHandle(
             a2,
             1u,
             (POBJECT_TYPE)ExEventObjectType,
             KeGetCurrentThread()->PreviousMode,
             &Object,
             0LL);
  if ( result >= 0 )
  {
    v5 = (unsigned __int16)KeNumberNodes;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 40LL * (unsigned __int16)KeNumberNodes + 56, 0x6363454Du);
    v7 = PoolWithTag;
    if ( PoolWithTag )
    {
      *PoolWithTag = v5;
      KeInitializeGate((__int64)(PoolWithTag + 2));
      v9 = Object;
      v7[6] = &MiSystemPartition;
      v10 = (unsigned int *)(v7 + 7);
      v7[4] = v9;
      v11 = 0;
      v7[5] = 0LL;
      if ( v5 )
      {
        v12 = (unsigned int **)(v7 + 11);
        do
        {
          *((_DWORD *)v12 - 7) = 0;
          *v10 = v11;
          *(v12 - 3) = 0LL;
          *(v12 - 1) = (unsigned int *)MiScrubMemoryWorker;
          *v12 = v10;
          ExQueueWorkItemToPartition((ULONG_PTR)(v12 - 3), 4, v11, qword_14038A168);
          v10 += 10;
          v12 += 5;
          ++v11;
        }
        while ( v11 < v5 );
      }
      v13 = v7[6];
      v16 = 0LL;
      v8 = MiScrubProcesses(v13, (__int64)v9, &v16);
      KeWaitForGate((__int64)(v7 + 1), 0);
      if ( v8 >= 0 )
      {
        v14 = (int *)(v10 + 1);
        while ( 1 )
        {
          v14 -= 10;
          if ( *v14 < 0 )
            break;
          if ( !--v11 )
            goto LABEL_13;
        }
        v8 = *v14;
      }
LABEL_13:
      *a3 = v16 + v7[5];
      ExFreePoolWithTag(v7, 0);
      if ( v9[1] )
      {
        v8 = -1073741248;
LABEL_17:
        ObfDereferenceObject(v9);
        return v8;
      }
      _InterlockedIncrement(&dword_140388C1C);
    }
    else
    {
      v8 = -1073741670;
    }
    v9 = Object;
    goto LABEL_17;
  }
  return result;
}
