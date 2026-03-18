/*
 * XREFs of UserAddAtomToAtomTableEx @ 0x1C0006F50
 * Callers:
 *     UserAddAtomEx @ 0x1C0006F20 (UserAddAtomEx.c)
 *     Win32UserInitialize @ 0x1C01DD910 (Win32UserInitialize.c)
 * Callees:
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 */

__int64 __fastcall UserAddAtomToAtomTableEx(PRTL_ATOM_TABLE AtomTable, __int64 a2, int a3)
{
  NTSTATUS v5; // eax
  __int64 result; // rax
  ULONG v7; // eax
  RTL_ATOM v8[12]; // [rsp+20h] [rbp-18h] BYREF

  v8[0] = 0;
  v5 = RtlAddAtomToAtomTableEx(AtomTable, a2, v8);
  if ( v5 < 0 )
  {
    v7 = RtlNtStatusToDosError(v5);
    UserSetLastError(v7);
  }
  result = v8[0];
  if ( v8[0] )
  {
    if ( a3 )
    {
      RtlPinAtomInAtomTable(AtomTable, v8[0]);
      return v8[0];
    }
  }
  return result;
}
