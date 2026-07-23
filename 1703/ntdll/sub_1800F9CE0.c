/*
 * XREFs of sub_1800F9CE0 @ 0x1800F9CE0
 * Callers:
 *     RtlTraceDatabaseCreate @ 0x1800F9930 (RtlTraceDatabaseCreate.c)
 *     sub_1800F9D5C @ 0x1800F9D5C (sub_1800F9D5C.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x1800A5600 (ZwAllocateVirtualMemory.c)
 */

PVOID __fastcall sub_1800F9CE0(ULONG_PTR a1)
{
  __int64 v1; // rbx
  PVOID v3; // [rsp+40h] [rbp+8h] BYREF
  ULONG_PTR v4; // [rsp+58h] [rbp+20h] BYREF

  v4 = a1;
  v1 = 0LL;
  v3 = 0LL;
  if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v3, 0LL, &v4, 0x3000u, 4u) >= 0 )
    return v3;
  return (PVOID)v1;
}
