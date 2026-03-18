/*
 * XREFs of ProcessorpGetSecondaryInterruptAffinity @ 0x1C00A841C
 * Callers:
 *     ProcessorpFindIdtEntriesApic @ 0x1C0088400 (ProcessorpFindIdtEntriesApic.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ProcessorpGetSecondaryInterruptAffinity(__int64 a1, int a2, KAFFINITY *a3)
{
  unsigned int v4; // ebx
  KAFFINITY GroupAffinity; // rax

  if ( a2 == 1 )
  {
    v4 = 0;
    *a3 = 0LL;
    a3[1] = 0LL;
    *((_WORD *)a3 + 4) = 0;
    GroupAffinity = KeQueryGroupAffinity(0);
    *a3 = GroupAffinity;
    if ( GroupAffinity )
      *a3 = 1LL << RtlFindLeastSignificantBit(GroupAffinity);
    else
      return (unsigned int)-1073741823;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
