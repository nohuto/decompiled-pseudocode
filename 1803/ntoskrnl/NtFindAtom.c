/*
 * XREFs of NtFindAtom @ 0x1404B5ED0
 * Callers:
 *     <none>
 * Callees:
 *     MmSessionGetWin32Callouts @ 0x14003E9A0 (MmSessionGetWin32Callouts.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     RtlLookupAtomInAtomTable @ 0x1404B6050 (RtlLookupAtomInAtomTable.c)
 *     ExCallCallBack @ 0x1404B63E4 (ExCallCallBack.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtFindAtom(PWSTR AtomName, ULONG AtomNameLength, PRTL_ATOM Atom)
{
  size_t v4; // rbx
  _RTL_RUN_ONCE *Win32Callouts; // rax
  NTSTATUS result; // eax
  char PreviousMode; // r15
  WCHAR *v9; // r14
  __int64 v10; // rcx
  USHORT Atoma; // [rsp+20h] [rbp-258h] BYREF
  PRTL_ATOM_TABLE AtomTable; // [rsp+28h] [rbp-250h] BYREF
  PWSTR v13; // [rsp+30h] [rbp-248h]
  _WORD v14[256]; // [rsp+40h] [rbp-238h] BYREF

  v4 = AtomNameLength;
  AtomTable = 0LL;
  Win32Callouts = MmSessionGetWin32Callouts();
  ExCallCallBack(Win32Callouts, 2LL, &AtomTable);
  if ( !AtomTable )
    return -1073741790;
  if ( (unsigned int)v4 > 0x1FE )
    return -1073741811;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v9 = AtomName;
  v13 = AtomName;
  if ( PreviousMode )
  {
    if ( Atom )
    {
      v10 = (__int64)Atom;
      if ( (unsigned __int64)Atom >= 0x7FFFFFFF0000LL )
        v10 = 0x7FFFFFFF0000LL;
      *(_WORD *)v10 = *(_WORD *)v10;
      v9 = v13;
    }
    if ( AtomName )
    {
      if ( (_DWORD)v4 )
      {
        if ( ((unsigned __int8)AtomName & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)AtomName + v4 > 0x7FFFFFFF0000LL || (PWSTR)((char *)AtomName + v4) < AtomName )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      v9 = v14;
      v13 = v14;
      memmove(v14, AtomName, v4);
      v14[v4 >> 1] = 0;
    }
  }
  result = RtlLookupAtomInAtomTable(AtomTable, v9, &Atoma);
  if ( Atom )
  {
    if ( result >= 0 )
      *Atom = Atoma;
  }
  return result;
}
