/*
 * XREFs of ArbpBuildAlternative @ 0x1C0087B84
 * Callers:
 *     ArbBootAllocation @ 0x1C0087790 (ArbBootAllocation.c)
 *     ArbpBuildAllocationStack @ 0x1C0087A74 (ArbpBuildAllocationStack.c)
 *     ArbQueryConflict @ 0x1C00A6A30 (ArbQueryConflict.c)
 *     ArbRetestAllocation @ 0x1C00A6DC0 (ArbRetestAllocation.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ArbpBuildAlternative(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 result; // rax
  int v6; // eax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx

  a3[5] = a2;
  result = (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *, __int64 *, __int64 *))(a1 + 120))(
             a2,
             a3,
             a3 + 1,
             a3 + 2,
             a3 + 3);
  if ( (int)result >= 0 )
  {
    *((_DWORD *)a3 + 9) = 0;
    v6 = *((_DWORD *)a3 + 9);
    v7 = a3[1];
    if ( *(_BYTE *)(a2 + 2) == 3 )
      v6 = 1;
    v8 = *a3;
    *((_DWORD *)a3 + 9) = v6;
    if ( v7 - v8 + 1 == a3[2] )
      *((_DWORD *)a3 + 9) |= 2u;
    if ( ((*(_BYTE *)(a2 + 1) - 3) & 0xFB) == 0 && (*(_WORD *)(a2 + 4) & 0x100) != 0 )
      *((_DWORD *)a3 + 9) |= 8u;
    if ( v7 < v8 )
      *((_DWORD *)a3 + 9) |= 4u;
    return 0LL;
  }
  return result;
}
