/*
 * XREFs of sub_18005CD8C @ 0x18005CD8C
 * Callers:
 *     sub_1800128F0 @ 0x1800128F0 (sub_1800128F0.c)
 *     sub_180013F50 @ 0x180013F50 (sub_180013F50.c)
 *     sub_1800150A0 @ 0x1800150A0 (sub_1800150A0.c)
 *     sub_18002A508 @ 0x18002A508 (sub_18002A508.c)
 *     sub_180059FA8 @ 0x180059FA8 (sub_180059FA8.c)
 *     RtlCreateHeap @ 0x18005AA80 (RtlCreateHeap.c)
 *     sub_18005CC10 @ 0x18005CC10 (sub_18005CC10.c)
 *     RtlDestroyHeap @ 0x18005D440 (RtlDestroyHeap.c)
 *     sub_18005D664 @ 0x18005D664 (sub_18005D664.c)
 *     RtlValidateProcessHeaps @ 0x1800EBD00 (RtlValidateProcessHeaps.c)
 *     sub_1800FFF44 @ 0x1800FFF44 (sub_1800FFF44.c)
 *     sub_18010120C @ 0x18010120C (sub_18010120C.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x18009AE80 (ZwFreeVirtualMemory.c)
 *     RtlFlushSecureMemoryCache @ 0x1800F01D0 (RtlFlushSecureMemoryCache.c)
 */

NTSTATUS __fastcall sub_18005CD8C(__int64 a1, PVOID *a2, ULONG_PTR *a3, ULONG a4)
{
  NTSTATUS v7; // esi

  v7 = ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, a2, a3, a4);
  if ( v7 == -1073741755 && RtlFlushSecureMemoryCache(*a2, *a3) )
    return ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, a2, a3, a4);
  else
    return v7;
}
