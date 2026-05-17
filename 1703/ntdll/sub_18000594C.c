/*
 * XREFs of sub_18000594C @ 0x18000594C
 * Callers:
 *     sub_180005870 @ 0x180005870 (sub_180005870.c)
 * Callees:
 *     sub_1800059EC @ 0x1800059EC (sub_1800059EC.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall sub_18000594C(__int64 a1)
{
  int v2; // ebx
  __int64 v4; // rdx
  __int64 (__fastcall *v5)(_QWORD *, __int64); // rax
  _QWORD v6[22]; // [rsp+20h] [rbp-79h] BYREF
  __int64 v7; // [rsp+D0h] [rbp+37h] BYREF
  __int64 v8; // [rsp+D8h] [rbp+3Fh]
  int v9; // [rsp+E0h] [rbp+47h]

  if ( *(_DWORD *)a1 == 0x80000000 || (unsigned int)(*(_DWORD *)a1 - 1) <= 4 )
  {
    sub_1800059EC(sub_180005AE0, 1LL, 1LL);
    if ( *(_DWORD *)a1 == 0x80000000 )
      goto LABEL_3;
    v7 = 0LL;
    v8 = 0LL;
    v9 = 0;
    v2 = sub_1800059EC(sub_180095A80, &v7, 3LL);
    if ( v2 >= 0 )
    {
      memset(v6, 0, 0xA8uLL);
      v4 = *(_QWORD *)(a1 + 16);
      LODWORD(v6[4]) = v9;
      v6[2] = v7;
      v6[3] = v8;
      v5 = *(__int64 (__fastcall **)(_QWORD *, __int64))(a1 + 8);
      LODWORD(v6[0]) = 1;
      v6[1] = 48LL;
      v2 = v5(v6, v4);
      if ( v2 >= 0 && *(_DWORD *)a1 >= 2u )
LABEL_3:
        v2 = sub_1800059EC(sub_180005B00, a1, 3LL);
    }
    sub_1800059EC(sub_180005AE0, 0LL, 1LL);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v2;
}
