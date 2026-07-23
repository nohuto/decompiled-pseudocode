/*
 * XREFs of sub_1800D7D5C @ 0x1800D7D5C
 * Callers:
 *     sub_1800D7658 @ 0x1800D7658 (sub_1800D7658.c)
 *     sub_1800D7A54 @ 0x1800D7A54 (sub_1800D7A54.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x18009AE80 (ZwFreeVirtualMemory.c)
 */

NTSTATUS __fastcall sub_1800D7D5C(void *a1)
{
  PVOID v2; // [rsp+30h] [rbp+8h] BYREF
  ULONG_PTR v3; // [rsp+40h] [rbp+18h] BYREF

  v2 = a1;
  v3 = 12LL;
  if ( a1 )
    return ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v2, &v3, 0x8000u);
  else
    return -1073741811;
}
