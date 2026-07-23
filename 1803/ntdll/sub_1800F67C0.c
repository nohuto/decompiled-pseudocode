/*
 * XREFs of sub_1800F67C0 @ 0x1800F67C0
 * Callers:
 *     sub_1800F6B98 @ 0x1800F6B98 (sub_1800F6B98.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x18009AE80 (ZwFreeVirtualMemory.c)
 */

NTSTATUS __fastcall sub_1800F67C0(_QWORD *a1)
{
  PVOID v2; // [rsp+30h] [rbp+8h] BYREF
  ULONG_PTR v3; // [rsp+38h] [rbp+10h] BYREF

  v2 = a1;
  v3 = a1[23] - (_QWORD)a1;
  return ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v2, &v3, 0x8000u);
}
