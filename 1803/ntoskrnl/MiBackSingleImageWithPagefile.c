/*
 * XREFs of MiBackSingleImageWithPagefile @ 0x1405F65E0
 * Callers:
 *     MiBackSystemImageWithPagefile @ 0x1405F64C8 (MiBackSystemImageWithPagefile.c)
 *     MmLoadSystemImageEx @ 0x1405F9AF4 (MmLoadSystemImageEx.c)
 * Callees:
 *     MiMakeDriverPagesPrivate @ 0x14013F254 (MiMakeDriverPagesPrivate.c)
 *     MiSnapDriverRange @ 0x1405F8770 (MiSnapDriverRange.c)
 */

__int64 __fastcall MiBackSingleImageWithPagefile(__int64 a1)
{
  int v2; // edi
  __int64 result; // rax
  unsigned __int64 v4; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  do
  {
    result = MiSnapDriverRange(a1, v2, 8, 0, (__int64)&v4, (__int64)&v5);
    v2 = result;
    if ( v4 )
      result = MiMakeDriverPagesPrivate(a1, v4, v5, 0x11u, 4);
  }
  while ( v2 );
  *(_DWORD *)(a1 + 196) |= 2u;
  return result;
}
