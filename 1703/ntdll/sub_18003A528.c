/*
 * XREFs of sub_18003A528 @ 0x18003A528
 * Callers:
 *     sub_18003A7B0 @ 0x18003A7B0 (sub_18003A7B0.c)
 *     sub_18008AC70 @ 0x18008AC70 (sub_18008AC70.c)
 *     sub_1800DC344 @ 0x1800DC344 (sub_1800DC344.c)
 * Callees:
 *     sub_180038F14 @ 0x180038F14 (sub_180038F14.c)
 *     sub_18003A658 @ 0x18003A658 (sub_18003A658.c)
 *     ZwProtectVirtualMemory @ 0x1800A5D00 (ZwProtectVirtualMemory.c)
 */

__int64 __fastcall sub_18003A528(int a1, int a2, _QWORD *a3, unsigned __int64 a4, _QWORD *a5)
{
  _DWORD *v5; // rax
  _QWORD *v7; // rbx
  __int64 v8; // rax
  int v9; // esi
  unsigned __int64 v10; // rdi
  int v12; // [rsp+30h] [rbp-20h] BYREF
  _DWORD *v13; // [rsp+38h] [rbp-18h] BYREF
  __int64 v14; // [rsp+40h] [rbp-10h] BYREF
  _QWORD *v15; // [rsp+48h] [rbp-8h] BYREF
  unsigned int v16; // [rsp+80h] [rbp+30h] BYREF

  v5 = 0LL;
  v13 = 0LL;
  v7 = a3;
  if ( a3 )
  {
    v9 = 1;
  }
  else
  {
    v8 = sub_18003A658(a1, a2, 0, (unsigned int)&v12, (__int64)&v13);
    v9 = v12;
    v7 = (_QWORD *)v8;
    v5 = v13;
  }
  if ( a5 )
    *a5 = v5;
  if ( v5 && *v5 >= 0x94u && (v5[36] & 0x800) != 0 )
    return 1LL;
  if ( v7 && *v7 == 0x2B992DDFA232LL )
  {
    v10 = (HIDWORD(a4) ^ ((unsigned __int64)(unsigned int)a4 << 16) ^ sub_180038F14((__int64)v7)) & 0xFFFFFFFFFFFFLL;
    if ( !v10 || v10 == *v7 )
      v10 = 0x2B992DDFA233LL;
    if ( !v9 )
    {
      *v7 = v10;
      return 1LL;
    }
    v15 = v7;
    v14 = 8LL;
    if ( (int)ZwProtectVirtualMemory(-1LL, &v15, &v14, 4LL, &v16) >= 0 )
    {
      *v7 = v10;
      ZwProtectVirtualMemory(-1LL, &v15, &v14, v16, &v16);
      return 1LL;
    }
  }
  return 0LL;
}
