/*
 * XREFs of UserAddAtomToAtomTableEx @ 0x1C0075670
 * Callers:
 *     UserAddAtomEx @ 0x1C0075650 (UserAddAtomEx.c)
 *     Win32UserInitialize @ 0x1C01D6270 (Win32UserInitialize.c)
 * Callees:
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 */

__int64 __fastcall UserAddAtomToAtomTableEx(PRTL_ATOM_TABLE AtomTable, __int64 a2, int a3)
{
  NTSTATUS v5; // eax
  __int64 result; // rax
  ULONG v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  RTL_ATOM v11[12]; // [rsp+20h] [rbp-18h] BYREF

  v11[0] = 0;
  v5 = RtlAddAtomToAtomTableEx(AtomTable, a2, v11);
  if ( v5 < 0 )
  {
    v7 = RtlNtStatusToDosError(v5);
    UserSetLastError(v7, v8, v9, v10);
  }
  result = v11[0];
  if ( v11[0] )
  {
    if ( a3 )
    {
      RtlPinAtomInAtomTable(AtomTable, v11[0]);
      return v11[0];
    }
  }
  return result;
}
