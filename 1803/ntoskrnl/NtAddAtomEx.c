/*
 * XREFs of NtAddAtomEx @ 0x14056890C
 * Callers:
 *     NtAddAtom @ 0x1407C62D0 (NtAddAtom.c)
 * Callees:
 *     MmSessionGetWin32Callouts @ 0x14003E9A0 (MmSessionGetWin32Callouts.c)
 *     RtlAddAtomToAtomTableEx @ 0x14003F560 (RtlAddAtomToAtomTableEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExCallCallBack @ 0x1404B63E4 (ExCallCallBack.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtAddAtomEx(char *Src, size_t Size, _WORD *a3, unsigned int a4)
{
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

  v6 = (unsigned int)Size;
  v14 = 0LL;
  if ( (a4 & 0xFFFFFFFD) != 0 )
    return 3221225485LL;
  Win32Callouts = MmSessionGetWin32Callouts();
  ExCallCallBack((signed __int64 *)Win32Callouts, 2LL, (__int64)&v14);
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
  LODWORD(result) = RtlAddAtomToAtomTableEx(v14, v10, &v13, a4);
  if ( a3 )
  {
    if ( (int)result >= 0 )
      *a3 = v13;
  }
  return (unsigned int)result;
}
