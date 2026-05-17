/*
 * XREFs of sub_18005F458 @ 0x18005F458
 * Callers:
 *     sub_180019140 @ 0x180019140 (sub_180019140.c)
 *     sub_18005F34C @ 0x18005F34C (sub_18005F34C.c)
 * Callees:
 *     sub_18005F570 @ 0x18005F570 (sub_18005F570.c)
 *     sub_18005F5DC @ 0x18005F5DC (sub_18005F5DC.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

signed __int64 __fastcall sub_18005F458(__int64 a1, unsigned int a2)
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
      result = ((__int64 (__fastcall *)(_QWORD, unsigned __int64))(a1 ^ qword_18015A440 ^ *(_QWORD *)(a1 + 40)))(
                 *(_QWORD *)a1,
                 v8 + 168);
      v9 = result;
      if ( result )
      {
        memset((void *)result, 0, v8 + 168);
        sub_18005F570(v9, (unsigned int)v2, a1);
        v10 = (_QWORD *)(v9 + 104 + v7);
        *(_QWORD *)(v9 + 88) = v9 + 104;
        *(_QWORD *)(v9 + 96) = v10;
        *v10 = &v10[*(unsigned __int8 *)(a1 + 48)];
        v11 = **(void ***)(v9 + 96);
        memset(v11, 0, 0x40uLL);
        result = sub_18005F5DC(v11, *(unsigned __int8 *)(v9 + 1), 0LL);
        *(_BYTE *)(v9 + 2) = 1;
        *(_QWORD *)(a1 + 8 * v2 + 224) = v9;
      }
    }
  }
  return result;
}
