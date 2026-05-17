/*
 * XREFs of sub_180009838 @ 0x180009838
 * Callers:
 *     sub_18000978C @ 0x18000978C (sub_18000978C.c)
 *     sub_180020404 @ 0x180020404 (sub_180020404.c)
 *     sub_1800206A8 @ 0x1800206A8 (sub_1800206A8.c)
 * Callees:
 *     sub_1800098C4 @ 0x1800098C4 (sub_1800098C4.c)
 *     sub_18000C7C0 @ 0x18000C7C0 (sub_18000C7C0.c)
 */

_BOOL8 __fastcall sub_180009838(__int64 a1, int a2, int a3)
{
  unsigned __int64 v3; // rdx
  __int64 v6; // rdi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax

  v3 = (unsigned __int64)(unsigned int)(a2 + 15) >> 4;
  v6 = (unsigned __int8)byte_1801196F0[v3];
  if ( (*(_QWORD *)(a1 + 8 * v6 + 192) & 1) != 0 )
  {
    v7 = sub_1800098C4(a1, (unsigned __int8)byte_1801196F0[v3]);
    if ( a3 )
    {
      v8 = v7 >> 16;
      if ( (v8 & 0x1F) > 0x10 || (unsigned __int16)v8 > 0xFF00u )
        sub_18000C7C0(a1, (unsigned int)v6);
    }
  }
  return (*(_QWORD *)(a1 + 8 * v6 + 192) & 1) == 0;
}
