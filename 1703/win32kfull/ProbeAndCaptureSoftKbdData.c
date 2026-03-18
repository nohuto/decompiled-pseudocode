/*
 * XREFs of ProbeAndCaptureSoftKbdData @ 0x1C01BDF74
 * Callers:
 *     NtUserfnIMECONTROL @ 0x1C01E1D20 (NtUserfnIMECONTROL.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 */

_DWORD *__fastcall ProbeAndCaptureSoftKbdData(char *Src)
{
  unsigned int *v2; // rax
  int v3; // r14d
  SIZE_T v4; // rbx
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v8; // eax
  unsigned int v9; // edi
  _DWORD *v10; // rax
  _DWORD *v11; // rbx

  v2 = (unsigned int *)Src;
  if ( (unsigned __int64)Src >= W32UserProbeAddress )
    v2 = (unsigned int *)W32UserProbeAddress;
  v3 = *v2;
  v4 = (unsigned __int64)*v2 << 9;
  ProbeForRead(Src + 4, v4, 2u);
  v5 = 0xFFFFFFFFLL;
  if ( v4 > 0xFFFFFFFF )
  {
    LODWORD(v4) = -1;
    v6 = -2147024362;
  }
  else
  {
    v6 = 0;
  }
  if ( v6 < 0 )
    return 0LL;
  v8 = v4 + 4;
  if ( (int)v4 + 4 >= (unsigned int)v4 )
    v5 = v8;
  if ( v8 < (unsigned int)v4 )
    return 0LL;
  v9 = v5;
  v10 = (_DWORD *)Win32AllocPool(v5, 1835627349LL);
  v11 = v10;
  if ( !v10 )
    ExRaiseStatus(-1073741801);
  memmove(v10, Src, v9);
  *v11 = v3;
  return v11;
}
