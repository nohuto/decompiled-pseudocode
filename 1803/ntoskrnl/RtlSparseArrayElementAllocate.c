/*
 * XREFs of RtlSparseArrayElementAllocate @ 0x14029DC74
 * Callers:
 *     RtlpHpVaMgrRangeCreate @ 0x140297130 (RtlpHpVaMgrRangeCreate.c)
 * Callees:
 *     memmove @ 0x1401BC900 (memmove.c)
 *     RtlpCSparseBitmapPageCommit @ 0x14029DDC4 (RtlpCSparseBitmapPageCommit.c)
 *     RtlCSparseBitmapLeaveLockingRegion @ 0x14029EEDC (RtlCSparseBitmapLeaveLockingRegion.c)
 *     RtlpCSparseBitmapUnlock @ 0x14029EF7C (RtlpCSparseBitmapUnlock.c)
 */

void *__fastcall RtlSparseArrayElementAllocate(__int64 a1, __int64 a2, const void *a3)
{
  int v3; // edi
  __int64 v5; // rdx
  void *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  _BYTE v10[16]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v11; // [rsp+30h] [rbp-18h] BYREF

  v3 = *(_DWORD *)(a1 + 72);
  v5 = a2 << v3;
  v6 = (void *)(v5 + *(_QWORD *)(a1 + 16));
  if ( (int)RtlpCSparseBitmapPageCommit(a1, 8 * v5 / 0x8000, v10, &v11) < 0 )
    return 0LL;
  memmove(v6, a3, (unsigned int)(1 << v3));
  RtlpCSparseBitmapUnlock(v10, v7, v8);
  RtlCSparseBitmapLeaveLockingRegion(&v11);
  return v6;
}
