/*
 * XREFs of RtlPinAtomInAtomTable @ 0x1800E48B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     sub_18004D594 @ 0x18004D594 (sub_18004D594.c)
 *     sub_18004D5BC @ 0x18004D5BC (sub_18004D5BC.c)
 */

__int64 __fastcall RtlPinAtomInAtomTable(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  unsigned __int16 v4; // si
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rax

  v4 = a2;
  if ( !sub_18004D594((_DWORD *)a1, a2, a3, a4) )
    return 3221225485LL;
  v7 = -1073741816;
  if ( v4 < 0xC000u )
  {
    if ( v4 )
      v7 = 0;
  }
  else
  {
    v8 = sub_18004D5BC(a1, v4 & 0x3FFF);
    if ( v8 && *(_WORD *)(v8 + 10) == v4 )
    {
      v9 = v8 + 12;
      if ( v9 )
      {
        v7 = 0;
        *(_WORD *)(v9 + 2) |= 1u;
      }
    }
  }
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 8));
  return v7;
}
