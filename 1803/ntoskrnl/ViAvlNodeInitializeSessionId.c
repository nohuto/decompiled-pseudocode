/*
 * XREFs of ViAvlNodeInitializeSessionId @ 0x140161744
 * Callers:
 *     VfAvlLookupTreeNode @ 0x1401609D8 (VfAvlLookupTreeNode.c)
 *     VfAvlDeleteTreeNode @ 0x140160AE8 (VfAvlDeleteTreeNode.c)
 *     VfAvlReserveNode @ 0x1401616BC (VfAvlReserveNode.c)
 * Callees:
 *     MmIsSessionAddress @ 0x140103610 (MmIsSessionAddress.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 */

__int64 __fastcall ViAvlNodeInitializeSessionId(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 28) && (LOBYTE(v3) = MmIsSessionAddress(*(_QWORD *)a2), v3) )
    result = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  else
    result = 0xFFFFFFFFLL;
  *(_DWORD *)(a2 + 16) = result;
  return result;
}
