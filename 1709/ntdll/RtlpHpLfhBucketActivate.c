/*
 * XREFs of RtlpHpLfhBucketActivate @ 0x180007258
 * Callers:
 *     RtlpAllocateHeapInternal @ 0x180040E70 (RtlpAllocateHeapInternal.c)
 *     RtlpHpLfhBucketUpdateStats @ 0x18004C48C (RtlpHpLfhBucketUpdateStats.c)
 * Callees:
 *     RtlpHpLfhBucketInitialize @ 0x180007490 (RtlpHpLfhBucketInitialize.c)
 *     RtlpHpLfhOwnerInitialize @ 0x1800074F4 (RtlpHpLfhOwnerInitialize.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

signed __int64 __fastcall RtlpHpLfhBucketActivate(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbp
  signed __int64 result; // rax
  __int64 v5; // rtt
  __int64 v6; // rax
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // r15
  signed __int64 v9; // rsi
  _QWORD *v10; // rdx
  signed __int64 v11; // [rsp+40h] [rbp+8h]

  v2 = a2;
  result = *(_QWORD *)(a1 + 8LL * a2 + 208);
  if ( (result & 1) != 0 && (result & 2) == 0 )
  {
    v11 = *(_QWORD *)(a1 + 8LL * a2 + 208);
    LOWORD(v11) = result | 2;
    v5 = *(_QWORD *)(a1 + 8LL * a2 + 208);
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8LL * a2 + 208), v11, result);
    if ( v5 == result )
    {
      v6 = *(unsigned __int8 *)(a1 + 48);
      v7 = (v6 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      v8 = v7 + 8 * v6;
      result = ((__int64 (__fastcall *)(_QWORD, unsigned __int64))(a1 ^ RtlpHeapKey ^ *(_QWORD *)(a1 + 40)))(
                 *(_QWORD *)a1,
                 v8 + 168);
      v9 = result;
      if ( result )
      {
        memset((void *)result, 0, v8 + 168);
        RtlpHpLfhBucketInitialize(v9, (unsigned int)v2);
        v10 = (_QWORD *)(v9 + 104 + v7);
        *(_QWORD *)(v9 + 88) = v9 + 104;
        *(_QWORD *)(v9 + 96) = v10;
        *v10 = &v10[*(unsigned __int8 *)(a1 + 48)];
        result = RtlpHpLfhOwnerInitialize(**(_QWORD **)(v9 + 96), *(unsigned __int8 *)(v9 + 1), 0LL);
        *(_BYTE *)(v9 + 2) = 1;
        *(_QWORD *)(a1 + 8 * v2 + 208) = v9;
      }
    }
  }
  return result;
}
