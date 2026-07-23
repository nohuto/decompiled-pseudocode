/*
 * XREFs of sub_1800F5104 @ 0x1800F5104
 * Callers:
 *     RtlLocaleNameToLcid @ 0x180046220 (RtlLocaleNameToLcid.c)
 *     RtlGetParentLocaleName @ 0x180047A90 (RtlGetParentLocaleName.c)
 *     RtlIsValidLocaleName @ 0x1800F4FC0 (RtlIsValidLocaleName.c)
 * Callees:
 *     ZwUnmapViewOfSection @ 0x1800A5840 (ZwUnmapViewOfSection.c)
 *     sub_1800F5178 @ 0x1800F5178 (sub_1800F5178.c)
 *     sub_1800F56C8 @ 0x1800F56C8 (sub_1800F56C8.c)
 */

__int64 __fastcall sub_1800F5104(__int64 a1, char a2, char a3, __int64 a4)
{
  int v7; // ebx
  int v8; // r8d
  int v9; // r9d
  PVOID BaseAddress; // [rsp+30h] [rbp-18h] BYREF
  __int64 v12; // [rsp+38h] [rbp-10h] BYREF

  v7 = sub_1800F56C8(a1, &BaseAddress, &v12);
  if ( v7 >= 0 )
  {
    LOBYTE(v9) = a3;
    LOBYTE(v8) = a2;
    v7 = sub_1800F5178((_DWORD)BaseAddress, v12, v8, v9, a4);
    ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
  }
  return (unsigned int)v7;
}
