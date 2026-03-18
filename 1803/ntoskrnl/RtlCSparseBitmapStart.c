/*
 * XREFs of RtlCSparseBitmapStart @ 0x14029DB28
 * Callers:
 *     RtlHpHeapManagerStart @ 0x140293128 (RtlHpHeapManagerStart.c)
 *     RtlpHpVaMgrCtxStart @ 0x140296DFC (RtlpHpVaMgrCtxStart.c)
 * Callees:
 *     RtlpHpEnvAllocVA @ 0x1402975D8 (RtlpHpEnvAllocVA.c)
 *     RtlpEnvRegisterFaultRange @ 0x14029F208 (RtlpEnvRegisterFaultRange.c)
 */

__int64 __fastcall RtlCSparseBitmapStart(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rdi
  __int64 result; // rax
  __int64 *v8; // r14
  unsigned __int64 v9; // rax
  int v10; // r9d
  int v11; // r8d
  __int64 v12; // rcx
  ULONG_PTR v13; // [rsp+38h] [rbp-20h]
  ULONG_PTR v14; // [rsp+38h] [rbp-20h]
  unsigned __int64 v15; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v16; // [rsp+68h] [rbp+10h] BYREF

  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_BYTE *)(a1 + 56) = a4 != 0;
  *(_BYTE *)(a1 + 57) = 1;
  *(_BYTE *)(a1 + 58) = a4;
  *(_QWORD *)(a1 + 24) = a2;
  v5 = (((unsigned __int64)(a2 + 7) >> 3) + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v6 = ((((v5 >> 12) + 7) >> 3) + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v16 = v6;
  if ( (((v6 >> 12) + 7) & 0xFFFFFFFFFFFFFFF8uLL) > 0x40 )
    return 2147483653LL;
  v15 = v6 + v5;
  v8 = (__int64 *)(a1 + 16);
  result = RtlpHpEnvAllocVA((ULONG_PTR *)(a1 + 16), (__int64 *)&v15, 0LL, 1056768, 4u, 1, (unsigned __int8)a4, v13);
  if ( (int)result >= 0 )
  {
    _BitScanForward64(&v9, v15);
    v10 = *(unsigned __int8 *)(a1 + 58);
    v11 = *(unsigned __int8 *)(a1 + 57);
    v12 = *v8;
    *(_BYTE *)(a1 + 59) = v9;
    result = RtlpEnvRegisterFaultRange(v12, v5, v11, v10, 0);
    if ( (int)result >= 0 )
    {
      *(_QWORD *)(a1 + 8) = v5 + *v8;
      if ( v6 <= 0x1000 )
      {
        result = RtlpHpEnvAllocVA(
                   (ULONG_PTR *)(a1 + 8),
                   (__int64 *)&v16,
                   0LL,
                   1073745920,
                   4u,
                   *(unsigned __int8 *)(a1 + 57),
                   *(unsigned __int8 *)(a1 + 58),
                   v14);
        if ( (int)result < 0 )
          return result;
        *(_QWORD *)a1 = 1LL;
      }
      return 0LL;
    }
  }
  return result;
}
