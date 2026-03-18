/*
 * XREFs of PspSetJobMemoryPartition @ 0x140718000
 * Callers:
 *     NtSetInformationJobObject @ 0x140510C80 (NtSetInformationJobObject.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     PsDereferencePartition @ 0x1400B8F3C (PsDereferencePartition.c)
 *     PsIsServerSilo @ 0x1400D4250 (PsIsServerSilo.c)
 *     PsReferencePartitionByHandle @ 0x1404FC8D4 (PsReferencePartitionByHandle.c)
 *     PsAssignProcessToJobObject @ 0x14050BD70 (PsAssignProcessToJobObject.c)
 *     PspConvertJobToMixed @ 0x140717750 (PspConvertJobToMixed.c)
 */

__int64 __fastcall PspSetJobMemoryPartition(ULONG_PTR a1, KPROCESSOR_MODE a2, void *a3)
{
  char v4; // r14
  int v5; // ebx
  __int64 v6; // rcx
  volatile signed __int32 *v7; // rdi
  void *v9; // [rsp+20h] [rbp-28h]
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  Object = 0LL;
  v4 = 0;
  v5 = PsReferencePartitionByHandle(a3, 1u, a2, &Object, v9);
  if ( v5 < 0 )
    goto LABEL_13;
  if ( _interlockedbittestandset((volatile signed __int32 *)Object + 30, 0) )
  {
    v5 = -1073741637;
LABEL_13:
    v7 = (volatile signed __int32 *)Object;
    goto LABEL_14;
  }
  v4 = 1;
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 56), 1u);
  if ( PsIsServerSilo(a1) || *(_QWORD *)(a1 + 1544) || *(_QWORD *)(a1 + 1056) != a1 + 1056 || *(_DWORD *)(a1 + 216) )
  {
    v5 = -1073741637;
    goto LABEL_12;
  }
  v5 = PspConvertJobToMixed(v6, 1);
  if ( v5 < 0 )
  {
LABEL_12:
    ExReleaseResourceLite((PERESOURCE)(a1 + 56));
    goto LABEL_13;
  }
  *(_QWORD *)(a1 + 1544) = -1LL;
  ExReleaseResourceLite((PERESOURCE)(a1 + 56));
  v7 = (volatile signed __int32 *)Object;
  v5 = PsAssignProcessToJobObject(a1, *((PVOID *)Object + 13), 0LL);
  if ( v5 >= 0 )
  {
    ObfReferenceObject((PVOID)v7);
    ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 56), 1u);
    *(_QWORD *)(a1 + 1544) = v7;
    *(_QWORD *)(a1 + 1552) = a1;
    ExReleaseResourceLite((PERESOURCE)(a1 + 56));
    v4 = 0;
    v5 = 0;
  }
LABEL_14:
  if ( v7 )
  {
    if ( *(_QWORD *)(a1 + 1544) == -1LL )
      *(_QWORD *)(a1 + 1544) = 0LL;
    if ( v4 )
    {
      _interlockedbittestandreset(v7 + 30, 0);
      v7 = (volatile signed __int32 *)Object;
    }
    PsDereferencePartition((__int64)v7);
  }
  return (unsigned int)v5;
}
