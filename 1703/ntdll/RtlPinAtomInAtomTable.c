/*
 * XREFs of RtlPinAtomInAtomTable @ 0x1800E9660
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     sub_1800729B0 @ 0x1800729B0 (sub_1800729B0.c)
 *     sub_1800729D8 @ 0x1800729D8 (sub_1800729D8.c)
 */

__int64 __fastcall RtlPinAtomInAtomTable(__int64 a1, unsigned __int16 a2)
{
  unsigned int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rax

  if ( !sub_1800729B0(a1) )
    return 3221225485LL;
  v5 = -1073741816;
  if ( a2 < 0xC000u )
  {
    if ( a2 )
      v5 = 0;
  }
  else
  {
    v6 = sub_1800729D8(a1, a2 & 0x3FFF);
    if ( v6 && *(_WORD *)(v6 + 10) == a2 )
    {
      v7 = v6 + 12;
      if ( v7 )
      {
        v5 = 0;
        *(_WORD *)(v7 + 2) |= 1u;
      }
    }
  }
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 8));
  return v5;
}
