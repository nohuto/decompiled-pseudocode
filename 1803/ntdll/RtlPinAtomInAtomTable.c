/*
 * XREFs of RtlPinAtomInAtomTable @ 0x1800E48B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     sub_18004D594 @ 0x18004D594 (sub_18004D594.c)
 *     sub_18004D5BC @ 0x18004D5BC (sub_18004D5BC.c)
 */

NTSTATUS __cdecl RtlPinAtomInAtomTable(PVOID AtomTableHandle, RTL_ATOM Atom)
{
  NTSTATUS v5; // ebx
  _RTL_HANDLE_TABLE_ENTRY *v6; // rax
  char *v7; // rax

  if ( !sub_18004D594((__int64)AtomTableHandle) )
    return -1073741811;
  v5 = -1073741816;
  if ( Atom < 0xC000u )
  {
    if ( Atom )
      v5 = 0;
  }
  else
  {
    v6 = sub_18004D5BC((__int64)AtomTableHandle, Atom & 0x3FFF);
    if ( v6 && WORD1(v6[1].NextFree) == Atom )
    {
      v7 = (char *)&v6[1].NextFree + 4;
      if ( v7 )
      {
        v5 = 0;
        *((_WORD *)v7 + 1) |= 1u;
      }
    }
  }
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)AtomTableHandle + 1);
  return v5;
}
