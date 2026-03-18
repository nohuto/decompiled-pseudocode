/*
 * XREFs of PopSetHiberFileMcb @ 0x1406140CC
 * Callers:
 *     PopResizeHiberFile @ 0x1405F0590 (PopResizeHiberFile.c)
 *     PopCreateHiberFile @ 0x140625404 (PopCreateHiberFile.c)
 * Callees:
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PopSetHiberFileMcb(PVOID P, SIZE_T NumberOfBytes)
{
  unsigned int v2; // ebx
  PVOID PoolWithTag; // rax

  v2 = 0;
  if ( P )
  {
    LODWORD(dword_1403AA1A0) = NumberOfBytes;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x72626968u);
    qword_1403AA198 = PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag, P, (unsigned int)dword_1403AA1A0);
      ExFreePoolWithTag(P, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
