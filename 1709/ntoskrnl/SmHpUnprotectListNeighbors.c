/*
 * XREFs of SmHpUnprotectListNeighbors @ 0x14027223C
 * Callers:
 *     SmHpBufferUpdateFullness @ 0x140271F94 (SmHpBufferUpdateFullness.c)
 * Callees:
 *     SmHpBufferProtectEx @ 0x140271E6C (SmHpBufferProtectEx.c)
 */

__int64 __fastcall SmHpUnprotectListNeighbors(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // r9
  ULONG_PTR v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  ULONG_PTR v10; // rcx
  __int64 result; // rax
  __int64 v12; // r8

  if ( !a3 )
  {
    v6 = *(unsigned int *)(*(_QWORD *)(a2 + 8) + 16LL);
    _BitScanReverse((unsigned int *)&v7, v6);
    v8 = v6 ^ (unsigned int)(1 << v7);
    return SmHpBufferProtectEx(v7, *(_QWORD *)(a1 + 8 * v7) + 16 * v8, 1, 0);
  }
  if ( *a3 != a2 )
  {
    v9 = *(unsigned int *)(*a3 + 16LL);
    _BitScanReverse((unsigned int *)&v10, v9);
    SmHpBufferProtectEx(v10, *(_QWORD *)(a1 + 8 * v10) + 16 * (v9 ^ (unsigned int)(1 << v10)), 1, 0);
  }
  result = a3[1];
  if ( result != a2 )
  {
    v12 = *(unsigned int *)(result + 16);
    _BitScanReverse((unsigned int *)&v7, v12);
    v8 = v12 ^ (unsigned int)(1 << v7);
    return SmHpBufferProtectEx(v7, *(_QWORD *)(a1 + 8 * v7) + 16 * v8, 1, 0);
  }
  return result;
}
