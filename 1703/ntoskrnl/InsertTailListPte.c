/*
 * XREFs of InsertTailListPte @ 0x1400ABE6C
 * Callers:
 *     MiReleaseSystemCacheView @ 0x1400A8EF8 (MiReleaseSystemCacheView.c)
 *     MiExpandSystemCache @ 0x140126CDC (MiExpandSystemCache.c)
 *     MiExpandSpecialPool @ 0x140216C28 (MiExpandSpecialPool.c)
 *     MiRemoveSpecialPoolRange @ 0x140216E10 (MiRemoveSpecialPoolRange.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiGetPteLink @ 0x14017CE5C (MiGetPteLink.c)
 *     MiMakeLinkedListPte @ 0x14017CF2C (MiMakeLinkedListPte.c)
 *     MiUpdateLinkedListInPte @ 0x14017D130 (MiUpdateLinkedListInPte.c)
 */

__int64 __fastcall InsertTailListPte(__int64 *a1)
{
  __int64 v2; // rbx
  __int64 LinkedListPte; // rax
  __int64 *v4; // rdx
  __int64 v5; // rcx
  __int64 PteLink; // rsi
  __int64 v7; // r10
  __int64 updated; // rax
  __int64 v9; // r11
  __int64 v10; // rcx
  __int64 v11; // r11
  __int64 v12; // r8
  __int64 v13; // rbx
  __int64 result; // rax
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 *v17; // rcx
  __int64 v18; // rcx

  v2 = ((unsigned __int64)a1 >> 9) & 0x7FFFFFFFF8LL;
  LinkedListPte = MiMakeLinkedListPte((v2 - a1[2] - 0x98000000000LL) >> 3);
  *v4 = LinkedListPte;
  if ( (unsigned int)MiPteInShadowRange(v4) )
    MiWritePteShadow(v5);
  PteLink = MiGetPteLink(a1[1]);
  updated = MiUpdateLinkedListInPte(v7, PteLink);
  *(_QWORD *)(v9 + 8) = updated;
  if ( (unsigned int)MiPteInShadowRange(v9 + 8) )
    MiWritePteShadow(v10);
  v12 = a1[2];
  v13 = (v2 - v12 - 0x98000000000LL) >> 3;
  result = MiMakeLinkedListPte((v11 - v12) >> 3);
  v16 = result;
  if ( PteLink == v13 )
  {
    *a1 = result;
  }
  else
  {
    v17 = (__int64 *)(v15 + 8 * PteLink);
    *v17 = result;
    result = MiPteInShadowRange(v17);
    if ( (_DWORD)result )
      result = MiWritePteShadow(v18);
  }
  a1[1] = v16;
  return result;
}
