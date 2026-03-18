/*
 * XREFs of PspValidateJobMemoryPartitionAssignment @ 0x14054C324
 * Callers:
 *     PspImplicitAssignProcessToJob @ 0x140546C9C (PspImplicitAssignProcessToJob.c)
 *     PspAssignProcessToJob @ 0x14054B358 (PspAssignProcessToJob.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     MmGetProcessPartitionObject @ 0x140213AE8 (MmGetProcessPartitionObject.c)
 */

__int64 __fastcall PspValidateJobMemoryPartitionAssignment(__int64 a1, __int64 a2, int a3, _BYTE *a4)
{
  unsigned int v4; // ebx
  __int64 ProcessPartitionObject; // rax
  __int64 v10; // r8

  v4 = 0;
  if ( a3 != 4 )
  {
    if ( (unsigned int)(a3 - 5) <= 1 )
      return v4;
LABEL_3:
    if ( *(_QWORD *)(a2 + 1536) )
    {
      ProcessPartitionObject = MmGetProcessPartitionObject(a1);
      if ( ProcessPartitionObject != v10 )
        return (unsigned int)-1073741637;
    }
    return v4;
  }
  if ( *(_QWORD *)(a2 + 1056) != a2 + 1056 || *(_QWORD *)(a2 + 1536) )
    goto LABEL_3;
  if ( *(_QWORD *)(a1 + 944) )
  {
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 944) + 1536LL) )
    {
      ObfReferenceObjectWithTag(*(PVOID *)(*(_QWORD *)(a1 + 944) + 1536LL), 0x624A7350u);
      *(_QWORD *)(a2 + 1536) = *(_QWORD *)(*(_QWORD *)(a1 + 944) + 1536LL);
      if ( a4 )
        *a4 = 1;
    }
  }
  return 0LL;
}
