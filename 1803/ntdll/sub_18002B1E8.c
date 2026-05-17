/*
 * XREFs of sub_18002B1E8 @ 0x18002B1E8
 * Callers:
 *     sub_18002AFBC @ 0x18002AFBC (sub_18002AFBC.c)
 *     sub_1800CC6AC @ 0x1800CC6AC (sub_1800CC6AC.c)
 *     sub_1800D5B04 @ 0x1800D5B04 (sub_1800D5B04.c)
 * Callees:
 *     sub_18002B318 @ 0x18002B318 (sub_18002B318.c)
 *     sub_18002BB2C @ 0x18002BB2C (sub_18002BB2C.c)
 *     ZwProtectVirtualMemory @ 0x18009B4C0 (ZwProtectVirtualMemory.c)
 */

__int64 __fastcall sub_18002B1E8(int a1, int a2, _QWORD *a3, unsigned __int64 a4, _QWORD *a5)
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
    v8 = sub_18002B318(a1, a2, 0, (unsigned int)&v12, (__int64)&v13);
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
    v10 = (HIDWORD(a4) ^ ((unsigned __int64)(unsigned int)a4 << 16) ^ sub_18002BB2C(v7)) & 0xFFFFFFFFFFFFLL;
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
