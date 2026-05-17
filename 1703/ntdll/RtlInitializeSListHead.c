/*
 * XREFs of RtlInitializeSListHead @ 0x1800779F0
 * Callers:
 *     sub_18000A534 @ 0x18000A534 (sub_18000A534.c)
 *     RtlCreateMemoryBlockLookaside @ 0x1800800B0 (RtlCreateMemoryBlockLookaside.c)
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 *     RtlResetMemoryBlockLookaside @ 0x1800E97C0 (RtlResetMemoryBlockLookaside.c)
 *     sub_1800F8D00 @ 0x1800F8D00 (sub_1800F8D00.c)
 *     sub_1800FF204 @ 0x1800FF204 (sub_1800FF204.c)
 *     sub_180102D18 @ 0x180102D18 (sub_180102D18.c)
 *     RtlAllocateMemoryBlockLookaside @ 0x18010F010 (RtlAllocateMemoryBlockLookaside.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180004BD0 (RtlRaiseStatus.c)
 */

void __stdcall RtlInitializeSListHead(PSLIST_HEADER ListHead)
{
  if ( ((unsigned __int8)ListHead & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  *ListHead = 0uLL;
}
