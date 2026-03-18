/*
 * XREFs of CmpValueEnumStackEntryInitialize @ 0x1401E4658
 * Callers:
 *     CmpValueEnumStackInitialize @ 0x14069C53C (CmpValueEnumStackInitialize.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 */

__int64 __fastcall CmpValueEnumStackEntryInitialize(__int64 a1)
{
  __int64 result; // rax

  memset((void *)a1, 0, 0x20uLL);
  result = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 16) = -1;
  *(_WORD *)(a1 + 20) = 0;
  return result;
}
