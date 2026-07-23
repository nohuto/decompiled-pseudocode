/*
 * XREFs of NtAddAtomEx @ 0x140489AD8
 * Callers:
 *     NtAddAtom @ 0x14075EFD0 (NtAddAtom.c)
 * Callees:
 *     RtlAddAtomToAtomTableEx @ 0x1400194E0 (RtlAddAtomToAtomTableEx.c)
 *     MmSessionGetWin32Callouts @ 0x1400A54D0 (MmSessionGetWin32Callouts.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExCallCallBack @ 0x1404D25EC (ExCallCallBack.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtAddAtomEx(PWSTR AtomName, ULONG Length, PRTL_ATOM Atom, ULONG Flags)
{
  char v4; // r12
  size_t v6; // rbx
  _RTL_RUN_ONCE *Win32Callouts; // rax
  char PreviousMode; // r15
  WCHAR *v10; // r14
  __int64 v11; // rcx
  NTSTATUS result; // eax
  USHORT v13; // [rsp+20h] [rbp-268h] BYREF
  __int64 v14; // [rsp+28h] [rbp-260h] BYREF
  PWSTR v15; // [rsp+30h] [rbp-258h]
  _WORD v16[256]; // [rsp+40h] [rbp-248h] BYREF

  v4 = Flags;
  v6 = Length;
  v14 = 0LL;
  if ( (Flags & 0xFFFFFFFD) != 0 )
    return -1073741811;
  Win32Callouts = MmSessionGetWin32Callouts();
  ExCallCallBack(Win32Callouts, 2LL, &v14);
  if ( !v14 )
    return -1073741790;
  if ( (unsigned int)v6 > 0x1FE )
    return -1073741811;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v10 = AtomName;
  v15 = AtomName;
  if ( PreviousMode )
  {
    if ( Atom )
    {
      v11 = (__int64)Atom;
      if ( (unsigned __int64)Atom >= 0x7FFFFFFF0000LL )
        v11 = 0x7FFFFFFF0000LL;
      *(_WORD *)v11 = *(_WORD *)v11;
      v10 = v15;
    }
    if ( AtomName )
    {
      if ( (_DWORD)v6 )
      {
        if ( ((unsigned __int8)AtomName & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)AtomName + v6 > 0x7FFFFFFF0000LL || (PWSTR)((char *)AtomName + v6) < AtomName )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      v10 = v16;
      v15 = v16;
      memmove(v16, AtomName, v6);
      v16[v6 >> 1] = 0;
    }
  }
  result = RtlAddAtomToAtomTableEx(v14, v10, &v13, v4);
  if ( Atom )
  {
    if ( result >= 0 )
      *Atom = v13;
  }
  return result;
}
