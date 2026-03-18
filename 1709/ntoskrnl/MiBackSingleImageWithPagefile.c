/*
 * XREFs of MiBackSingleImageWithPagefile @ 0x1405C87A4
 * Callers:
 *     MmLoadSystemImageEx @ 0x1405431E0 (MmLoadSystemImageEx.c)
 *     MiBackSystemImageWithPagefile @ 0x1405C86AC (MiBackSystemImageWithPagefile.c)
 * Callees:
 *     MiMakeDriverPagesPrivate @ 0x1400DC7CC (MiMakeDriverPagesPrivate.c)
 *     MiSnapDriverRange @ 0x140516C14 (MiSnapDriverRange.c)
 */

__int64 __fastcall MiBackSingleImageWithPagefile(__int64 a1)
{
  unsigned int v2; // edi
  __int64 result; // rax
  unsigned __int64 v4; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  do
  {
    result = MiSnapDriverRange(a1, v2, 8, 0LL, &v4, &v5);
    v2 = result;
    if ( v4 )
      result = MiMakeDriverPagesPrivate(a1, v4, v5, 0x11u, 4);
  }
  while ( v2 );
  *(_DWORD *)(a1 + 196) |= 2u;
  return result;
}
