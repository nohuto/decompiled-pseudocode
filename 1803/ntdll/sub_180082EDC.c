/*
 * XREFs of sub_180082EDC @ 0x180082EDC
 * Callers:
 *     sub_18002BBDC @ 0x18002BBDC (sub_18002BBDC.c)
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 * Callees:
 *     sub_18002D32C @ 0x18002D32C (sub_18002D32C.c)
 *     sub_18003BC9C @ 0x18003BC9C (sub_18003BC9C.c)
 *     sub_180082F40 @ 0x180082F40 (sub_180082F40.c)
 */

__int64 __fastcall sub_180082EDC(__int64 a1)
{
  int v2; // edi

  *(_DWORD *)(*(_QWORD *)(a1 + 152) + 56LL) = 6;
  v2 = sub_180082F40(a1);
  if ( v2 >= 0 )
  {
    sub_18002D32C(a1, 1u);
    sub_18003BC9C(*(_QWORD *)(a1 + 48), a1 + 72, 0x14ADu);
    *(_DWORD *)(*(_QWORD *)(a1 + 152) + 56LL) = 7;
  }
  return (unsigned int)v2;
}
