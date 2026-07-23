/*
 * XREFs of BiEnumerateBootEntries @ 0x1407E446C
 * Callers:
 *     BiBuildIdentifierList @ 0x1407E3440 (BiBuildIdentifierList.c)
 * Callees:
 *     ZwEnumerateBootEntries @ 0x1401A8FA0 (ZwEnumerateBootEntries.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     BiReleasePrivilege @ 0x1406069F8 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x140606A48 (BiAcquirePrivilege.c)
 *     BiLogMessage @ 0x140609614 (BiLogMessage.c)
 */

__int64 __fastcall BiEnumerateBootEntries(_QWORD *a1, _DWORD *a2)
{
  NTSTATUS v4; // ebx
  PVOID PoolWithTag; // rax
  void *v6; // rdi
  NTSTATUS v7; // eax
  SIZE_T NumberOfBytes; // [rsp+50h] [rbp+18h] BYREF
  unsigned int v10; // [rsp+58h] [rbp+20h] BYREF

  LODWORD(NumberOfBytes) = 0;
  v4 = BiAcquirePrivilege(0x16u, (__int64)&v10);
  if ( v4 >= 0 )
  {
    LODWORD(NumberOfBytes) = 0x2000;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x2000uLL, 0x4B444342u);
    v6 = PoolWithTag;
    LODWORD(NumberOfBytes) = PoolWithTag != 0LL ? NumberOfBytes : 0;
    while ( 1 )
    {
      v7 = ZwEnumerateBootEntries(PoolWithTag, (PULONG)&NumberOfBytes);
      v4 = v7;
      if ( v7 != -1073741789 )
        break;
      if ( v6 )
        ExFreePoolWithTag(v6, 0x4B444342u);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x4B444342u);
      v6 = PoolWithTag;
      if ( !PoolWithTag )
      {
        v4 = -1073741670;
        goto LABEL_12;
      }
    }
    if ( v7 >= 0 )
    {
      *a2 = NumberOfBytes;
      *a1 = v6;
    }
    else
    {
      BiLogMessage(4LL, L"Failed to enumerate boot entries. Status: %x", (unsigned int)v7);
      if ( v6 )
        ExFreePoolWithTag(v6, 0x4B444342u);
    }
LABEL_12:
    BiReleasePrivilege(&v10);
  }
  return (unsigned int)v4;
}
