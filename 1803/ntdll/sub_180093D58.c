/*
 * XREFs of sub_180093D58 @ 0x180093D58
 * Callers:
 *     sub_1800936D0 @ 0x1800936D0 (sub_1800936D0.c)
 *     sub_180093A28 @ 0x180093A28 (sub_180093A28.c)
 * Callees:
 *     WinSqmStartSqmOptinListener @ 0x180004030 (WinSqmStartSqmOptinListener.c)
 *     sub_180093D28 @ 0x180093D28 (sub_180093D28.c)
 *     sub_180093FF8 @ 0x180093FF8 (sub_180093FF8.c)
 */

double __fastcall sub_180093D58(int a1, int a2, __int64 a3, __int64 a4, double a5, __int64 a6)
{
  _DWORD *v7; // rax
  int v8; // r8d
  __int64 v9; // rax

  v7 = &unk_180156170;
  v8 = 0;
  while ( *v7 != a2 )
  {
    ++v8;
    v7 += 4;
    if ( (__int64)v7 >= (__int64)&off_180156340 )
    {
      v9 = 0LL;
      goto LABEL_6;
    }
  }
  v9 = *((_QWORD *)&unk_180156170 + 2 * v8 + 1);
LABEL_6:
  if ( v9 )
  {
    sub_180093FF8(a6, 65472LL);
    if ( !(unsigned int)WinSqmStartSqmOptinListener() )
      sub_180093D28(a1);
    return a5;
  }
  else
  {
    sub_180093FF8(a6, 65472LL);
    sub_180093D28(a1);
    return a5;
  }
}
