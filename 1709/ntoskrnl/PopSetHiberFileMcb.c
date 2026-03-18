/*
 * XREFs of PopSetHiberFileMcb @ 0x1406FC2D8
 * Callers:
 *     PopCreateHiberFile @ 0x1406FB4BC (PopCreateHiberFile.c)
 *     PopResizeHiberFile @ 0x1406FC068 (PopResizeHiberFile.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PopSetHiberFileMcb(PVOID P, SIZE_T NumberOfBytes)
{
  unsigned int v2; // ebx
  PVOID PoolWithTag; // rax

  v2 = 0;
  if ( P )
  {
    LODWORD(dword_140365B20) = NumberOfBytes;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x72626968u);
    qword_140365B18 = PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag, P, (unsigned int)dword_140365B20);
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
