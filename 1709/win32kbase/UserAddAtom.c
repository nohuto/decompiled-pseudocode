/*
 * XREFs of UserAddAtom @ 0x1C009B4E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 */

__int64 __fastcall UserAddAtom(PWSTR AtomName, int a2)
{
  struct _RTL_ATOM_TABLE *v2; // rbx
  int v4; // eax
  __int64 result; // rax
  ULONG v6; // eax
  USHORT v7; // [rsp+40h] [rbp+18h] BYREF

  v2 = UserAtomTableHandle;
  v7 = 0;
  v4 = RtlAddAtomToAtomTable(UserAtomTableHandle, AtomName, &v7);
  if ( v4 < 0 )
  {
    v6 = RtlNtStatusToDosError(v4);
    UserSetLastError(v6);
  }
  result = v7;
  if ( v7 )
  {
    if ( a2 )
    {
      RtlPinAtomInAtomTable(v2, v7);
      return v7;
    }
  }
  return result;
}
