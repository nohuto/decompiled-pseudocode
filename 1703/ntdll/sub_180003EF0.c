/*
 * XREFs of sub_180003EF0 @ 0x180003EF0
 * Callers:
 *     sub_180003CFC @ 0x180003CFC (sub_180003CFC.c)
 *     sub_180003F2C @ 0x180003F2C (sub_180003F2C.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x1800A56C0 (ZwFreeVirtualMemory.c)
 */

__int64 __fastcall sub_180003EF0(__int64 a1)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF
  __int64 v3; // [rsp+40h] [rbp+18h] BYREF

  v2 = a1;
  v3 = 12LL;
  if ( a1 )
    return ZwFreeVirtualMemory(-1LL, &v2, &v3, 0x8000LL);
  else
    return 3221225485LL;
}
