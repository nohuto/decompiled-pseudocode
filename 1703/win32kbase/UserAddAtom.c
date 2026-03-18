/*
 * XREFs of UserAddAtom @ 0x1C0092160
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 */

__int64 __fastcall UserAddAtom(PWSTR AtomName, int a2)
{
  struct _RTL_ATOM_TABLE *v2; // rbx
  int v4; // eax
  __int64 result; // rax
  ULONG v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  USHORT v10; // [rsp+40h] [rbp+18h] BYREF

  v2 = UserAtomTableHandle;
  v10 = 0;
  v4 = RtlAddAtomToAtomTable(UserAtomTableHandle, AtomName, &v10);
  if ( v4 < 0 )
  {
    v6 = RtlNtStatusToDosError(v4);
    UserSetLastError(v6, v7, v8, v9);
  }
  result = v10;
  if ( v10 )
  {
    if ( a2 )
    {
      RtlPinAtomInAtomTable(v2, v10);
      return v10;
    }
  }
  return result;
}
