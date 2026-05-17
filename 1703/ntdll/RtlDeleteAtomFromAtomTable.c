/*
 * XREFs of RtlDeleteAtomFromAtomTable @ 0x1800723A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     sub_180072440 @ 0x180072440 (sub_180072440.c)
 *     sub_1800729B0 @ 0x1800729B0 (sub_1800729B0.c)
 *     sub_1800729D8 @ 0x1800729D8 (sub_1800729D8.c)
 */

__int64 __fastcall RtlDeleteAtomFromAtomTable(__int64 a1, unsigned __int16 a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rax

  if ( !(unsigned __int8)sub_1800729B0() )
    return 3221225485LL;
  v4 = -1073741816;
  if ( a2 < 0xC000u )
  {
    if ( a2 )
      v4 = 0;
  }
  else
  {
    v5 = sub_1800729D8(a1, a2 & 0x3FFF);
    if ( v5 && *(_WORD *)(v5 + 10) == a2 && v5 != -12 )
    {
      v4 = 0;
      if ( (*(_BYTE *)(v5 + 14) & 1) != 0 )
        v4 = 1073741849;
      else
        sub_180072440(v5, v5 + 12, a1);
    }
  }
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 8));
  return v4;
}
