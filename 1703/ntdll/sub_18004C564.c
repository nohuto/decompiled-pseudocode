/*
 * XREFs of sub_18004C564 @ 0x18004C564
 * Callers:
 *     sub_180019768 @ 0x180019768 (sub_180019768.c)
 *     sub_18004C234 @ 0x18004C234 (sub_18004C234.c)
 * Callees:
 *     sub_18004A930 @ 0x18004A930 (sub_18004A930.c)
 *     sub_18004C4D8 @ 0x18004C4D8 (sub_18004C4D8.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18004C564(__int64 a1, _OWORD *a2, _UNICODE_STRING *a3, __m128i *a4, __int64 a5, int a6)
{
  unsigned int v6; // ebx
  _OWORD *v12; // r8
  _WORD *v13; // rax
  _BYTE v14[8]; // [rsp+30h] [rbp-38h] BYREF
  __m128i v15; // [rsp+38h] [rbp-30h] BYREF

  v6 = a6;
  if ( byte_18015BF54 )
  {
    v14[0] = 0;
    v12 = a2;
    if ( a6 < 0 )
      v12 = (_OWORD *)a1;
    ((void (__fastcall *)(__m128i *, _BYTE *, _OWORD *))(__ROR8__(qword_18016B230, 64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))(
      &v15,
      v14,
      v12);
    if ( v14[0] )
    {
      *(_DWORD *)(a1 + 24) |= 0x10000u;
      sub_18004C4D8((__int64)a2);
      v13 = (_WORD *)a4->m128i_i64[1];
      a4->m128i_i16[0] = 0;
      *v13 = 0;
      return (unsigned int)sub_18004A930(&v15, a4, a3, a2, a5, *(_DWORD *)(a1 + 24));
    }
  }
  return v6;
}
