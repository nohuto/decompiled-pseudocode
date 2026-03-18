/*
 * XREFs of RtlpCSparseBitmapPageCommit @ 0x14029DDC4
 * Callers:
 *     RtlCSparseBitmapBitmaskWrite @ 0x14029D404 (RtlCSparseBitmapBitmaskWrite.c)
 *     RtlSparseArrayElementAllocate @ 0x14029DC74 (RtlSparseArrayElementAllocate.c)
 * Callees:
 *     RtlpHpEnvAllocVA @ 0x1402975D8 (RtlpHpEnvAllocVA.c)
 *     RtlCSparseBitmapEnterLockingRegion @ 0x14029EEA4 (RtlCSparseBitmapEnterLockingRegion.c)
 *     RtlCSparseBitmapLeaveLockingRegion @ 0x14029EEDC (RtlCSparseBitmapLeaveLockingRegion.c)
 *     RtlpCSparseBitmapLock @ 0x14029EF04 (RtlpCSparseBitmapLock.c)
 *     RtlpCSparseBitmapUnlock @ 0x14029EF7C (RtlpCSparseBitmapUnlock.c)
 *     RtlpCSparseBitmapWaitOnAddress @ 0x14029F1BC (RtlpCSparseBitmapWaitOnAddress.c)
 */

__int64 __fastcall RtlpCSparseBitmapPageCommit(__int64 a1, unsigned __int64 a2, __int64 a3, __int128 *a4)
{
  unsigned __int64 v5; // r15
  unsigned __int64 v7; // rsi
  int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r8
  int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // r8
  ULONG_PTR v17; // [rsp+38h] [rbp-38h]
  ULONG_PTR v18[2]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v19; // [rsp+50h] [rbp-20h] BYREF
  _BYTE v20[16]; // [rsp+60h] [rbp-10h] BYREF
  __int64 v21; // [rsp+A0h] [rbp+30h] BYREF
  unsigned __int64 v22; // [rsp+A8h] [rbp+38h] BYREF

  v22 = a2;
  v5 = a2 >> 15;
  v7 = a2;
  if ( !_bittest64((const signed __int64 *)a1, a2 >> 15) )
  {
    v21 = 4096LL;
    v18[0] = *(_QWORD *)(a1 + 8) + (v5 << 12);
    v9 = RtlpHpEnvAllocVA(
           v18,
           &v21,
           0LL,
           1073745920,
           4u,
           *(unsigned __int8 *)(a1 + 57),
           *(unsigned __int8 *)(a1 + 58),
           v17);
    if ( v9 < 0 )
      return (unsigned int)v9;
    _interlockedbittestandset64((volatile signed __int32 *)a1, v5);
    v7 = v22;
  }
  *a4 = *(_OWORD *)RtlCSparseBitmapEnterLockingRegion(v20, a1);
  while ( 1 )
  {
    RtlpCSparseBitmapLock(a1, 0LL, a3);
    if ( *(_QWORD *)(a1 + 40) != v7 )
      break;
    RtlpCSparseBitmapUnlock(a3, v10, v11);
    RtlpCSparseBitmapWaitOnAddress(a1 + 40, &v22, v12, a1);
  }
  if ( !_bittest64(*(const signed __int64 **)(a1 + 8), v7) )
  {
    v13 = *(unsigned __int8 *)(a1 + 57);
    v21 = 4096LL;
    v18[0] = *(_QWORD *)(a1 + 16) + (v7 << 12);
    v9 = RtlpHpEnvAllocVA(v18, &v21, 0LL, 1073745920, 4u, v13, *(unsigned __int8 *)(a1 + 58), v17);
    if ( v9 < 0 )
    {
      RtlpCSparseBitmapUnlock(a3, v14, v15);
      v19 = *a4;
      RtlCSparseBitmapLeaveLockingRegion(&v19);
      return (unsigned int)v9;
    }
    _interlockedbittestandset64(*(volatile signed __int32 **)(a1 + 8), v7);
  }
  return 0;
}
