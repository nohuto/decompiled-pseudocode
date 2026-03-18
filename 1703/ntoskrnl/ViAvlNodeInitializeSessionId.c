/*
 * XREFs of ViAvlNodeInitializeSessionId @ 0x14006E100
 * Callers:
 *     VfAvlReserveNode @ 0x14006E078 (VfAvlReserveNode.c)
 *     VfAvlDeleteTreeNode @ 0x1401489E0 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x140148A98 (VfAvlLookupTreeNode.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     MmIsSessionAddress @ 0x140112130 (MmIsSessionAddress.c)
 */

void __fastcall ViAvlNodeInitializeSessionId(__int64 a1, __int64 a2)
{
  if ( *(_BYTE *)(a1 + 28) && (unsigned int)MmIsSessionAddress(*(_QWORD *)a2) )
    *(_DWORD *)(a2 + 16) = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
  else
    *(_DWORD *)(a2 + 16) = -1;
}
