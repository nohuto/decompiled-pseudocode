/*
 * XREFs of sub_180003B70 @ 0x180003B70
 * Callers:
 *     sub_180003970 @ 0x180003970 (sub_180003970.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     ZwFreeVirtualMemory @ 0x18009AE80 (ZwFreeVirtualMemory.c)
 */

LOGICAL __fastcall sub_180003B70(__int64 a1)
{
  void *v1; // r8
  LOGICAL result; // eax
  ULONG_PTR RegionSize; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(void **)(a1 + 432);
  if ( v1 )
    result = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v1);
  if ( *(_QWORD *)(a1 + 440) )
  {
    RegionSize = 0LL;
    return ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)(a1 + 440), &RegionSize, 0x8000u);
  }
  return result;
}
