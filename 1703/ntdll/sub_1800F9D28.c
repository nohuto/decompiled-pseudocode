/*
 * XREFs of sub_1800F9D28 @ 0x1800F9D28
 * Callers:
 *     RtlTraceDatabaseDestroy @ 0x1800F9A60 (RtlTraceDatabaseDestroy.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x1800A56C0 (ZwFreeVirtualMemory.c)
 */

bool __fastcall sub_1800F9D28(void *a1)
{
  ULONG_PTR v2; // [rsp+30h] [rbp+8h] BYREF
  PVOID v3; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0LL;
  v3 = a1;
  return ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v3, &v2, 0x8000u) >= 0;
}
