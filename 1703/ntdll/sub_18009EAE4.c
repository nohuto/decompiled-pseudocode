/*
 * XREFs of sub_18009EAE4 @ 0x18009EAE4
 * Callers:
 *     sub_18009E460 @ 0x18009E460 (sub_18009E460.c)
 *     sub_18009E7B8 @ 0x18009E7B8 (sub_18009E7B8.c)
 * Callees:
 *     WinSqmStartSqmOptinListener @ 0x180087C00 (WinSqmStartSqmOptinListener.c)
 *     sub_18009EAB4 @ 0x18009EAB4 (sub_18009EAB4.c)
 *     sub_18009ED7C @ 0x18009ED7C (sub_18009ED7C.c)
 */

double __fastcall sub_18009EAE4(int a1, int a2, __int64 a3, __int64 a4, double a5, __int64 a6)
{
  _DWORD *v7; // rax
  int v8; // r8d
  __int64 v9; // rax

  v7 = &unk_180155170;
  v8 = 0;
  while ( *v7 != a2 )
  {
    ++v8;
    v7 += 4;
    if ( (__int64)v7 >= (__int64)&off_180155340 )
    {
      v9 = 0LL;
      goto LABEL_6;
    }
  }
  v9 = *((_QWORD *)&unk_180155170 + 2 * v8 + 1);
LABEL_6:
  if ( v9 )
  {
    sub_18009ED7C(a6, 65472LL);
    if ( !(unsigned int)WinSqmStartSqmOptinListener() )
      sub_18009EAB4(a1);
    return a5;
  }
  else
  {
    sub_18009ED7C(a6, 65472LL);
    sub_18009EAB4(a1);
    return a5;
  }
}
