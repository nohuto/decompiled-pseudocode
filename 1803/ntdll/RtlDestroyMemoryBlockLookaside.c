/*
 * XREFs of RtlDestroyMemoryBlockLookaside @ 0x1800831A0
 * Callers:
 *     sub_1800FDA58 @ 0x1800FDA58 (sub_1800FDA58.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_1800491C0 @ 0x1800491C0 (sub_1800491C0.c)
 *     RtlDestroyMemoryZone @ 0x180083200 (RtlDestroyMemoryZone.c)
 */

__int64 __fastcall RtlDestroyMemoryBlockLookaside(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        __int64 a4)
{
  __int64 v4; // rdi
  __int64 v6; // rsi
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int64 *v9; // r8
  __int64 v10; // r9
  int v11; // ebx
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 16);
  v6 = *(_QWORD *)(a1 + 8);
  RtlAcquireSRWLockExclusive(a1, a2, a3, a4);
  if ( *(_DWORD *)(a1 + 44) )
    sub_1800491C0(v8, v7, v9, v10);
  v11 = RtlDestroyMemoryZone(v4);
  result = RtlDestroyMemoryZone(v6);
  if ( v11 < 0 )
    return (unsigned int)v11;
  return result;
}
