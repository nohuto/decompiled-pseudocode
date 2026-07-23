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

__int64 __fastcall sub_18002B1E8(void *a1, __int64 a2, unsigned __int64 *a3, unsigned __int64 a4, _QWORD *a5)
{
  _DWORD *v5; // rax
  unsigned __int64 *v7; // rbx
  int v8; // esi
  unsigned __int64 v9; // rdi
  int v11; // [rsp+30h] [rbp-20h]
  __int64 v12; // [rsp+38h] [rbp-18h] BYREF
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-10h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-8h] BYREF
  ULONG NewProtect; // [rsp+80h] [rbp+30h] BYREF

  v5 = 0LL;
  v12 = 0LL;
  v7 = a3;
  if ( a3 )
  {
    v8 = 1;
  }
  else
  {
    v8 = v11;
    v7 = (unsigned __int64 *)sub_18002B318(a1, (__int64)&v12);
    v5 = (_DWORD *)v12;
  }
  if ( a5 )
    *a5 = v5;
  if ( v5 && *v5 >= 0x94u && (v5[36] & 0x800) != 0 )
    return 1LL;
  if ( v7 && *v7 == 0x2B992DDFA232LL )
  {
    v9 = (HIDWORD(a4) ^ ((unsigned __int64)(unsigned int)a4 << 16) ^ sub_18002BB2C(v7)) & 0xFFFFFFFFFFFFLL;
    if ( !v9 || v9 == *v7 )
      v9 = 0x2B992DDFA233LL;
    if ( !v8 )
    {
      *v7 = v9;
      return 1LL;
    }
    BaseAddress = v7;
    RegionSize = 8LL;
    if ( ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 4u, &NewProtect) >= 0 )
    {
      *v7 = v9;
      ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, NewProtect, &NewProtect);
      return 1LL;
    }
  }
  return 0LL;
}
