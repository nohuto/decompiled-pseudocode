/*
 * XREFs of ViAvlNodeInitializeSessionId @ 0x1400F9C94
 * Callers:
 *     VfAvlLookupTreeNode @ 0x1400F90E8 (VfAvlLookupTreeNode.c)
 *     VfAvlDeleteTreeNode @ 0x1400F91F8 (VfAvlDeleteTreeNode.c)
 *     VfAvlReserveNode @ 0x1400F9C0C (VfAvlReserveNode.c)
 * Callees:
 *     MmIsSessionAddress @ 0x140083FA0 (MmIsSessionAddress.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 */

void __fastcall ViAvlNodeInitializeSessionId(__int64 a1, __int64 a2)
{
  if ( *(_BYTE *)(a1 + 28) && MmIsSessionAddress(*(_QWORD *)a2) )
    *(_DWORD *)(a2 + 16) = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  else
    *(_DWORD *)(a2 + 16) = -1;
}
