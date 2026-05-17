/*
 * XREFs of RtlDeleteAtomFromAtomTable @ 0x18004CFF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     sub_18004D090 @ 0x18004D090 (sub_18004D090.c)
 *     sub_18004D594 @ 0x18004D594 (sub_18004D594.c)
 *     sub_18004D5BC @ 0x18004D5BC (sub_18004D5BC.c)
 */

__int64 __fastcall RtlDeleteAtomFromAtomTable(__int64 a1, unsigned __int16 a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rax

  if ( !(unsigned __int8)sub_18004D594() )
    return 3221225485LL;
  v4 = -1073741816;
  if ( a2 < 0xC000u )
  {
    if ( a2 )
      v4 = 0;
  }
  else
  {
    v5 = sub_18004D5BC(a1, a2 & 0x3FFF);
    if ( v5 && *(_WORD *)(v5 + 10) == a2 && v5 != -12 )
    {
      v4 = 0;
      if ( (*(_BYTE *)(v5 + 14) & 1) != 0 )
        v4 = 1073741849;
      else
        sub_18004D090(v5, v5 + 12, a1);
    }
  }
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 8));
  return v4;
}
