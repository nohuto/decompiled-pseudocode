/*
 * XREFs of RtlDestroyMemoryBlockLookaside @ 0x180089060
 * Callers:
 *     sub_1800FF204 @ 0x1800FF204 (sub_1800FF204.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_180083C00 @ 0x180083C00 (sub_180083C00.c)
 *     RtlDestroyMemoryZone @ 0x1800890C0 (RtlDestroyMemoryZone.c)
 */

__int64 __fastcall RtlDestroyMemoryBlockLookaside(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rsi
  int v4; // ebx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 16);
  v3 = *(_QWORD *)(a1 + 8);
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)a1);
  if ( *(_DWORD *)(a1 + 44) )
    sub_180083C00();
  v4 = RtlDestroyMemoryZone(v1);
  result = RtlDestroyMemoryZone(v3);
  if ( v4 < 0 )
    return (unsigned int)v4;
  return result;
}
