/*
 * XREFs of _umatherr @ 0x180099854
 * Callers:
 *     _except1 @ 0x1800991D0 (_except1.c)
 *     _handle_qnan1 @ 0x180099528 (_handle_qnan1.c)
 * Callees:
 *     WinSqmCheckEscalationSetString @ 0x180086D70 (WinSqmCheckEscalationSetString.c)
 *     _set_errno_from_matherr @ 0x180099824 (_set_errno_from_matherr.c)
 *     _ctrlfp @ 0x180099AEC (_ctrlfp.c)
 */

double __fastcall umatherr(int a1, int a2, __int64 a3, __int64 a4, double a5, __int64 a6)
{
  _DWORD *v7; // rax
  int v8; // r8d
  __int64 v9; // rax

  v7 = &unk_180159170;
  v8 = 0;
  while ( *v7 != a2 )
  {
    ++v8;
    v7 += 4;
    if ( (__int64)v7 >= (__int64)&_lconv_c )
    {
      v9 = 0LL;
      goto LABEL_6;
    }
  }
  v9 = *((_QWORD *)&unk_180159170 + 2 * v8 + 1);
LABEL_6:
  if ( v9 )
  {
    ctrlfp(a6, 65472LL);
    if ( !(unsigned int)WinSqmCheckEscalationSetString() )
      set_errno_from_matherr(a1);
    return a5;
  }
  else
  {
    ctrlfp(a6, 65472LL);
    set_errno_from_matherr(a1);
    return a5;
  }
}
