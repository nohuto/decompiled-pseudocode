/*
 * XREFs of PspSetJobMemoryPartition @ 0x14077C020
 * Callers:
 *     NtSetInformationJobObject @ 0x140532FE4 (NtSetInformationJobObject.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140060520 (ObfReferenceObjectWithTag.c)
 *     PsDereferencePartition @ 0x14006FEF8 (PsDereferencePartition.c)
 *     PsIsServerSilo @ 0x14008A910 (PsIsServerSilo.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     PsReferencePartitionByHandle @ 0x140512414 (PsReferencePartitionByHandle.c)
 *     PsAssignProcessToJobObject @ 0x140530390 (PsAssignProcessToJobObject.c)
 *     PspConvertJobToMixed @ 0x14077B6C4 (PspConvertJobToMixed.c)
 */

__int64 __fastcall PspSetJobMemoryPartition(ULONG_PTR a1, char a2, __int64 a3)
{
  ULONG_PTR v4; // rax
  char v5; // r14
  int v6; // ebx
  __int64 v7; // rcx
  volatile signed __int32 *v8; // rdi
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  Object = 0LL;
  v4 = a3;
  LOBYTE(a3) = a2;
  v5 = 0;
  v6 = PsReferencePartitionByHandle(v4, 1LL, a3, 0x624A7350u, &Object);
  if ( v6 < 0 )
    goto LABEL_13;
  if ( _interlockedbittestandset((volatile signed __int32 *)Object + 30, 0) )
  {
    v6 = -1073741637;
LABEL_13:
    v8 = (volatile signed __int32 *)Object;
    goto LABEL_14;
  }
  v5 = 1;
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 56), 1u);
  if ( PsIsServerSilo(a1) || *(_QWORD *)(a1 + 1544) || *(_QWORD *)(a1 + 1056) != a1 + 1056 || *(_DWORD *)(a1 + 216) )
  {
    v6 = -1073741637;
    goto LABEL_12;
  }
  v6 = PspConvertJobToMixed(v7, 1);
  if ( v6 < 0 )
  {
LABEL_12:
    ExReleaseResourceLite((PERESOURCE)(a1 + 56));
    goto LABEL_13;
  }
  *(_QWORD *)(a1 + 1544) = -1LL;
  ExReleaseResourceLite((PERESOURCE)(a1 + 56));
  v8 = (volatile signed __int32 *)Object;
  v6 = PsAssignProcessToJobObject(a1, *((PVOID *)Object + 13), 0LL);
  if ( v6 >= 0 )
  {
    ObfReferenceObjectWithTag((PVOID)v8, 0x624A7350u);
    ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 56), 1u);
    *(_QWORD *)(a1 + 1544) = v8;
    *(_QWORD *)(a1 + 1552) = a1;
    ExReleaseResourceLite((PERESOURCE)(a1 + 56));
    v5 = 0;
    v6 = 0;
  }
LABEL_14:
  if ( v8 )
  {
    if ( *(_QWORD *)(a1 + 1544) == -1LL )
      *(_QWORD *)(a1 + 1544) = 0LL;
    if ( v5 )
    {
      _interlockedbittestandreset(v8 + 30, 0);
      v8 = (volatile signed __int32 *)Object;
    }
    PsDereferencePartition((__int64)v8);
  }
  return (unsigned int)v6;
}
