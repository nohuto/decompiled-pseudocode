/*
 * XREFs of EmpCacheBiosDate @ 0x140804FF0
 * Callers:
 *     EmInitSystem @ 0x140804CF0 (EmInitSystem.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     strtoul @ 0x14016C4FC (strtoul.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwUnmapViewOfSection @ 0x14017E480 (ZwUnmapViewOfSection.c)
 *     EmpMapPhysicalAddress @ 0x140805124 (EmpMapPhysicalAddress.c)
 */

char __fastcall EmpCacheBiosDate(__int64 a1, __int64 a2)
{
  char v2; // di
  __int64 v3; // rax
  _WORD *v4; // rbx
  unsigned int v5; // eax
  HANDLE v6; // rbx
  char Str[2]; // [rsp+30h] [rbp-58h] BYREF
  char v9; // [rsp+32h] [rbp-56h]
  char v10; // [rsp+34h] [rbp-54h]
  HANDLE Handle; // [rsp+38h] [rbp-50h] BYREF
  PVOID BaseAddress; // [rsp+40h] [rbp-48h] BYREF
  $5BC46E0569261879018906DEC3127961 v13; // [rsp+48h] [rbp-40h] BYREF

  v2 = 0;
  EmpCachedBiosDate = 0;
  v9 = 0;
  if ( dword_140344B30 == 1 )
  {
    v3 = EmpMapPhysicalAddress(a1, a2, &Handle, &BaseAddress, &v13);
    v4 = (_WORD *)v3;
    if ( v3 )
    {
      *(_WORD *)Str = *(_WORD *)(v3 + 6);
      v5 = strtoul(Str, 0LL, 16);
      EmpCachedBiosDate = (v5 < 0x80 ? 0x20000000 : 419430400) + (v5 << 16);
      *(_WORD *)Str = *v4;
      EmpCachedBiosDate |= strtoul(Str, 0LL, 16) << 8;
      *(_WORD *)Str = *(_WORD *)((char *)v4 + 3);
      EmpCachedBiosDate |= strtoul(Str, 0LL, 16);
      v2 = 1;
      v10 = 1;
      v6 = Handle;
      ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
      KiUnstackDetachProcess(&v13, 0LL);
      ZwClose(v6);
    }
  }
  return v2;
}
