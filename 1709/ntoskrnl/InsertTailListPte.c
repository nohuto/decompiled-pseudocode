/*
 * XREFs of InsertTailListPte @ 0x1400A477C
 * Callers:
 *     MiReleaseSystemCacheView @ 0x1400A4150 (MiReleaseSystemCacheView.c)
 *     MiExpandSystemCache @ 0x1400F52C8 (MiExpandSystemCache.c)
 *     MiExpandSpecialPool @ 0x14022042C (MiExpandSpecialPool.c)
 *     MiRemoveSpecialPoolRange @ 0x140220644 (MiRemoveSpecialPoolRange.c)
 * Callees:
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiGetPteLink @ 0x14017C6E8 (MiGetPteLink.c)
 *     MiMakeLinkedListPte @ 0x14017C790 (MiMakeLinkedListPte.c)
 *     MiUpdateLinkedListInPte @ 0x14017C9D8 (MiUpdateLinkedListInPte.c)
 */

__int64 __fastcall InsertTailListPte(__int64 *a1)
{
  __int64 v2; // rbx
  __int64 *v3; // rdx
  __int64 LinkedListPte; // r10
  __int64 v5; // r11
  __int64 PteLink; // rsi
  __int64 v7; // r10
  __int64 updated; // rax
  __int64 v9; // r11
  unsigned __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbx
  __int64 result; // rax
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 *v16; // rcx

  v2 = ((unsigned __int64)a1 >> 9) & 0x7FFFFFFFF8LL;
  LinkedListPte = MiMakeLinkedListPte((v2 - a1[2] - 0x98000000000LL) >> 3);
  *v3 = LinkedListPte;
  if ( (unsigned __int64)v3 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v3 <= 0xFFFFF6FB7DBED7F8uLL )
    MiWritePteShadow(v5, LinkedListPte);
  PteLink = MiGetPteLink(a1[1]);
  updated = MiUpdateLinkedListInPte(v7, PteLink);
  v10 = v9 + 8;
  *(_QWORD *)(v9 + 8) = updated;
  if ( (unsigned __int64)(v9 + 8) >= 0xFFFFF6FB7DBED000uLL && v10 <= 0xFFFFF6FB7DBED7F8uLL )
    MiWritePteShadow(v10, updated);
  v11 = a1[2];
  v12 = (v2 - v11 - 0x98000000000LL) >> 3;
  result = MiMakeLinkedListPte((v9 - v11) >> 3);
  v15 = result;
  if ( PteLink == v12 )
  {
    *a1 = result;
  }
  else
  {
    v16 = (__int64 *)(v14 + 8 * PteLink);
    *v16 = result;
    result = 0xFFFFF6FB7DBED000uLL;
    if ( (unsigned __int64)v16 >= 0xFFFFF6FB7DBED000uLL )
    {
      result = 0xFFFFF6FB7DBED7F8uLL;
      if ( (unsigned __int64)v16 <= 0xFFFFF6FB7DBED7F8uLL )
        result = MiWritePteShadow(v16, v15);
    }
  }
  a1[1] = v15;
  return result;
}
