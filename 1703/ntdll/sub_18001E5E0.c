/*
 * XREFs of sub_18001E5E0 @ 0x18001E5E0
 * Callers:
 *     RtlDestroyHeap @ 0x18000ABF0 (RtlDestroyHeap.c)
 *     sub_18000AE60 @ 0x18000AE60 (sub_18000AE60.c)
 *     sub_18000C540 @ 0x18000C540 (sub_18000C540.c)
 *     RtlCreateHeap @ 0x18000CA40 (RtlCreateHeap.c)
 *     sub_18001BE98 @ 0x18001BE98 (sub_18001BE98.c)
 *     sub_18001C798 @ 0x18001C798 (sub_18001C798.c)
 *     sub_180021F28 @ 0x180021F28 (sub_180021F28.c)
 *     sub_180022560 @ 0x180022560 (sub_180022560.c)
 *     sub_1800265E0 @ 0x1800265E0 (sub_1800265E0.c)
 *     sub_180090710 @ 0x180090710 (sub_180090710.c)
 *     RtlValidateProcessHeaps @ 0x1800EFD20 (RtlValidateProcessHeaps.c)
 *     sub_180101390 @ 0x180101390 (sub_180101390.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x1800A56C0 (ZwFreeVirtualMemory.c)
 *     RtlFlushSecureMemoryCache @ 0x1800F30F0 (RtlFlushSecureMemoryCache.c)
 */

NTSTATUS __fastcall sub_18001E5E0(__int64 a1, PVOID *a2, ULONG_PTR *a3, ULONG a4)
{
  NTSTATUS v7; // esi

  v7 = ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, a2, a3, a4);
  if ( v7 == -1073741755 && RtlFlushSecureMemoryCache(*a2, *a3) )
    return ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, a2, a3, a4);
  else
    return v7;
}
