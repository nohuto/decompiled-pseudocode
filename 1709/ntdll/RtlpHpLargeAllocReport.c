/*
 * XREFs of RtlpHpLargeAllocReport @ 0x1801074D4
 * Callers:
 *     RtlpHpHeapWalk @ 0x1800619F0 (RtlpHpHeapWalk.c)
 * Callees:
 *     RtlpHpLargeAllocSizeInternal @ 0x18006F414 (RtlpHpLargeAllocSizeInternal.c)
 */

__int64 __fastcall RtlpHpLargeAllocReport(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v3; // rax
  unsigned int v4; // r8d
  __int64 v5; // r10
  __int64 v6; // r11
  __int64 v7; // rdx
  __int64 result; // rax
  __int64 v9; // r8
  unsigned __int16 *v10; // r8
  __int64 v11; // rax
  signed __int32 v12[10]; // [rsp+0h] [rbp-28h] BYREF

  *a3 = *(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFF0000uLL;
  v3 = RtlpHpLargeAllocSizeInternal(a1, a2, 0LL);
  *(_QWORD *)(v5 + 8) = v3;
  *(_WORD *)(v5 + 18) = 16385;
  *(_BYTE *)(v5 + 17) = 64;
  *(_BYTE *)(v5 + 16) = *(_BYTE *)(v7 + 24);
  result = *(unsigned __int16 *)(v7 + 24);
  *(_QWORD *)(v5 + 36) = result;
  if ( (*(_BYTE *)(v7 + 32) & 1) != 0 )
  {
    _InterlockedOr(v12, v4);
    v9 = *(_QWORD *)v5 + *(_QWORD *)(v5 + 8) + 16LL;
    if ( (*(_DWORD *)(v6 + 20) & 0x10000000) == 0 )
      v9 = *(_QWORD *)v5 + *(_QWORD *)(v5 + 8);
    v10 = (unsigned __int16 *)((v9 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
    v11 = *((_QWORD *)v10 + 1);
    *(_WORD *)(v5 + 18) |= 0x10u;
    *(_QWORD *)(v5 + 24) = v11;
    *(_WORD *)(v5 + 18) |= *((_BYTE *)v10 + 2) >> 4 << 8;
    result = *v10;
    *(_WORD *)(v5 + 32) = result;
  }
  return result;
}
