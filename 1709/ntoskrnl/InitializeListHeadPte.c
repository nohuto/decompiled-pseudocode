/*
 * XREFs of InitializeListHeadPte @ 0x140234CA0
 * Callers:
 *     MiInitializeSystemCache @ 0x1405B3A64 (MiInitializeSystemCache.c)
 *     MiInitializeSpecialPool @ 0x1405B6FA0 (MiInitializeSpecialPool.c)
 * Callees:
 *     MiMakeLinkedListPte @ 0x14017C790 (MiMakeLinkedListPte.c)
 */

__int64 __fastcall InitializeListHeadPte(unsigned __int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 *v3; // r8

  *(_QWORD *)(a1 + 16) = a2;
  result = MiMakeLinkedListPte((__int64)(((a1 >> 9) & 0x7FFFFFFFF8LL) - a2 - 0x98000000000LL) >> 3);
  *v3 = result;
  v3[1] = result;
  return result;
}
