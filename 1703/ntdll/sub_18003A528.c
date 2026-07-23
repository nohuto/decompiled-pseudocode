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

__int64 __fastcall sub_18003A528(void *a1, __int64 a2, unsigned __int64 *a3, unsigned __int64 a4, _QWORD *a5)
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
    v7 = (unsigned __int64 *)sub_18003A658(a1, (__int64)&v12);
    v5 = (_DWORD *)v12;
  }
  if ( a5 )
    *a5 = v5;
  if ( v5 && *v5 >= 0x94u && (v5[36] & 0x800) != 0 )
    return 1LL;
  if ( v7 && *v7 == 0x2B992DDFA232LL )
  {
    v9 = (HIDWORD(a4) ^ ((unsigned __int64)(unsigned int)a4 << 16) ^ sub_180038F14((__int64)v7)) & 0xFFFFFFFFFFFFLL;
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
