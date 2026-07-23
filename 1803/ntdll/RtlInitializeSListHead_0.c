/*
 * XREFs of RtlInitializeSListHead_0 @ 0x180073A34
 * Callers:
 *     sub_18005D72C @ 0x18005D72C (sub_18005D72C.c)
 *     RtlCreateMemoryBlockLookaside @ 0x180073870 (RtlCreateMemoryBlockLookaside.c)
 *     RtlInitializeSListHead @ 0x1800766F0 (RtlInitializeSListHead.c)
 *     RtlResetMemoryBlockLookaside @ 0x1800E4A00 (RtlResetMemoryBlockLookaside.c)
 *     sub_1800F6800 @ 0x1800F6800 (sub_1800F6800.c)
 *     sub_1800FDA58 @ 0x1800FDA58 (sub_1800FDA58.c)
 *     sub_1801028AC @ 0x1801028AC (sub_1801028AC.c)
 *     RtlAllocateMemoryBlockLookaside @ 0x18010F010 (RtlAllocateMemoryBlockLookaside.c)
 * Callees:
 *     RtlRaiseStatus @ 0x18009A570 (RtlRaiseStatus.c)
 */

void __cdecl RtlInitializeSListHead_0(PSLIST_HEADER ListHead)
{
  if ( ((unsigned __int8)ListHead & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  *ListHead = 0uLL;
}
