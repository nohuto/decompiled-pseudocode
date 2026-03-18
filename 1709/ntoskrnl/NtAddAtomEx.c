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

__int64 __fastcall NtAddAtomEx(char *Src, size_t Size, _WORD *a3, int a4)
{
  char v4; // r12
  size_t v6; // rbx
  union _RTL_RUN_ONCE *Win32Callouts; // rax
  char PreviousMode; // r15
  char *v10; // r14
  __int64 v11; // rcx
  __int64 result; // rax
  __int16 v13; // [rsp+20h] [rbp-268h] BYREF
  __int64 v14; // [rsp+28h] [rbp-260h] BYREF
  char *v15; // [rsp+30h] [rbp-258h]
  _WORD v16[256]; // [rsp+40h] [rbp-248h] BYREF

  v4 = a4;
  v6 = (unsigned int)Size;
  v14 = 0LL;
  if ( (a4 & 0xFFFFFFFD) != 0 )
    return 3221225485LL;
  Win32Callouts = MmSessionGetWin32Callouts();
  ExCallCallBack(Win32Callouts, 2LL, &v14);
  if ( !v14 )
    return 3221225506LL;
  if ( (unsigned int)v6 > 0x1FE )
    return 3221225485LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v10 = Src;
  v15 = Src;
  if ( PreviousMode )
  {
    if ( a3 )
    {
      v11 = (__int64)a3;
      if ( (unsigned __int64)a3 >= 0x7FFFFFFF0000LL )
        v11 = 0x7FFFFFFF0000LL;
      *(_WORD *)v11 = *(_WORD *)v11;
      v10 = v15;
    }
    if ( Src )
    {
      if ( (_DWORD)v6 )
      {
        if ( ((unsigned __int8)Src & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)&Src[v6] > 0x7FFFFFFF0000LL || &Src[v6] < Src )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      v10 = (char *)v16;
      v15 = (char *)v16;
      memmove(v16, Src, v6);
      v16[v6 >> 1] = 0;
    }
  }
  LODWORD(result) = RtlAddAtomToAtomTableEx(v14, v10, &v13, v4);
  if ( a3 )
  {
    if ( (int)result >= 0 )
      *a3 = v13;
  }
  return (unsigned int)result;
}
