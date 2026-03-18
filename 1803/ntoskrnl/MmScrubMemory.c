/*
 * XREFs of MmScrubMemory @ 0x1407583E4
 * Callers:
 *     NtSetSystemInformation @ 0x14048D108 (NtSetSystemInformation.c)
 * Callees:
 *     KeWaitForGate @ 0x140086DE8 (KeWaitForGate.c)
 *     ExQueueWorkItemToPartition @ 0x14008F67C (ExQueueWorkItemToPartition.c)
 *     KeInitializeGate @ 0x1400D0BF4 (KeInitializeGate.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     MiScrubProcesses @ 0x140757F60 (MiScrubProcesses.c)
 */

NTSTATUS __fastcall MmScrubMemory(void *a1, void *a2, _QWORD *a3)
{
  NTSTATUS result; // eax
  unsigned int v5; // edi
  _DWORD *PoolWithTag; // rax
  _QWORD *v7; // rbx
  int v8; // edi
  _DWORD *v9; // rsi
  ULONG_PTR *v10; // rcx
  unsigned int *v11; // r14
  unsigned int v12; // ebp
  unsigned int **v13; // r15
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
      v10 = &MiSystemPartition;
      v7[6] = &MiSystemPartition;
      v11 = (unsigned int *)(v7 + 7);
      v7[4] = v9;
      v12 = 0;
      v7[5] = 0LL;
      if ( v5 )
      {
        v13 = (unsigned int **)(v7 + 11);
        do
        {
          *((_DWORD *)v13 - 7) = 0;
          *v11 = v12;
          *(v13 - 3) = 0LL;
          *(v13 - 1) = (unsigned int *)MiScrubMemoryWorker;
          *v13 = v11;
          ExQueueWorkItemToPartition((ULONG_PTR)(v13 - 3), 4, v12, qword_1403CDFE8);
          v11 += 10;
          v13 += 5;
          ++v12;
        }
        while ( v12 < v5 );
        v10 = (ULONG_PTR *)v7[6];
      }
      v16 = 0LL;
      v8 = MiScrubProcesses((__int64)v10, (__int64)v9, &v16);
      KeWaitForGate((__int64)(v7 + 1), 0);
      if ( v8 >= 0 )
      {
        v14 = (int *)(v11 + 1);
        while ( 1 )
        {
          v14 -= 10;
          if ( *v14 < 0 )
            break;
          if ( !--v12 )
            goto LABEL_14;
        }
        v8 = *v14;
      }
LABEL_14:
      *a3 = v16 + v7[5];
      ExFreePoolWithTag(v7, 0);
      if ( v9[1] )
      {
        v8 = -1073741248;
LABEL_18:
        ObfDereferenceObject(v9);
        return v8;
      }
      _InterlockedIncrement(&dword_1403CBEB8);
    }
    else
    {
      v8 = -1073741670;
    }
    v9 = Object;
    goto LABEL_18;
  }
  return result;
}
