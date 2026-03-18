/*
 * XREFs of RtlpHpLfhBucketActivate @ 0x140299370
 * Callers:
 *     RtlpHpLfhBucketUpdateStats @ 0x14029A1F0 (RtlpHpLfhBucketUpdateStats.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     RtlpHpLfhBucketInitialize @ 0x140299ACC (RtlpHpLfhBucketInitialize.c)
 *     RtlpHpLfhOwnerInitialize @ 0x14029A814 (RtlpHpLfhOwnerInitialize.c)
 */

signed __int64 __fastcall RtlpHpLfhBucketActivate(__int64 a1, unsigned int a2)
{
  __int64 v2; // r14
  signed __int64 result; // rax
  __int64 v5; // rtt
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r15
  signed __int64 v9; // rbp
  _QWORD *v10; // rdx
  void *v11; // rbx
  signed __int64 v12; // [rsp+40h] [rbp+8h]

  v2 = a2;
  result = *(_QWORD *)(a1 + 8LL * a2 + 224);
  if ( (result & 1) != 0 && (result & 2) == 0 )
  {
    v12 = *(_QWORD *)(a1 + 8LL * a2 + 224);
    LOWORD(v12) = result | 2;
    v5 = *(_QWORD *)(a1 + 8LL * a2 + 224);
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8LL * a2 + 224), v12, result);
    if ( v5 == result )
    {
      v6 = *(unsigned __int8 *)(a1 + 48);
      v7 = (v6 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      v8 = v7 + 8 * v6;
      result = ((__int64 (__fastcall *)(_QWORD, unsigned __int64))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 40)))(
                 *(_QWORD *)a1,
                 v8 + 168);
      v9 = result;
      if ( result )
      {
        memset((void *)result, 0, v8 + 168);
        RtlpHpLfhBucketInitialize(v9, (unsigned int)v2, a1);
        v10 = (_QWORD *)(v9 + 104 + v7);
        *(_QWORD *)(v9 + 88) = v9 + 104;
        *(_QWORD *)(v9 + 96) = v10;
        *v10 = &v10[*(unsigned __int8 *)(a1 + 48)];
        v11 = **(void ***)(v9 + 96);
        memset(v11, 0, 0x40uLL);
        result = RtlpHpLfhOwnerInitialize(v11, *(unsigned __int8 *)(v9 + 1), 0LL, a1);
        *(_BYTE *)(v9 + 2) = 1;
        *(_QWORD *)(a1 + 8 * v2 + 224) = v9;
      }
    }
  }
  return result;
}
