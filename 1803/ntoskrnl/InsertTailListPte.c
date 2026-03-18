/*
 * XREFs of InsertTailListPte @ 0x1400E06C0
 * Callers:
 *     MiExpandSystemCache @ 0x1400C2710 (MiExpandSystemCache.c)
 *     MiReleaseSystemCacheView @ 0x1400DD1D0 (MiReleaseSystemCacheView.c)
 *     MiExpandSpecialPool @ 0x14025C0AC (MiExpandSpecialPool.c)
 *     MiRemoveSpecialPoolRange @ 0x14025C410 (MiRemoveSpecialPoolRange.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiGetPteLink @ 0x1401A653C (MiGetPteLink.c)
 *     MiMakeLinkedListPte @ 0x1401A65E4 (MiMakeLinkedListPte.c)
 *     MiUpdateLinkedListInPte @ 0x1401A6800 (MiUpdateLinkedListInPte.c)
 */

struct _KTHREAD *__fastcall InsertTailListPte(unsigned __int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 LinkedListPte; // rax
  __int64 *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r10
  __int64 v9; // r11
  __int64 PteLink; // rsi
  __int64 v11; // r10
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r11
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 *v18; // r11
  struct _KTHREAD *result; // rax
  __int64 *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // r8

  v3 = (a1 >> 9) & 0x7FFFFFFFF8LL;
  LinkedListPte = MiMakeLinkedListPte((v3 - *(_QWORD *)(a1 + 16) - 0x98000000000LL) >> 3);
  *v5 = LinkedListPte;
  if ( MiPteInShadowRange((unsigned __int64)v5) )
    MiWritePteShadow(v6, v8, v7);
  PteLink = MiGetPteLink(*(_QWORD *)(v9 + 8));
  *(_QWORD *)(a2 + 8) = MiUpdateLinkedListInPte(v11, PteLink);
  if ( MiPteInShadowRange(a2 + 8) )
    MiWritePteShadow(v13, v12, v14);
  v16 = MiMakeLinkedListPte((a2 - *(_QWORD *)(v15 + 16)) >> 3);
  result = (struct _KTHREAD *)0xFFFFF68000000000LL;
  if ( PteLink == (v3 - v17 - 0x98000000000LL) >> 3 )
  {
    *v18 = v16;
  }
  else
  {
    v20 = (__int64 *)(v17 + 8 * PteLink);
    *v20 = v16;
    result = (struct _KTHREAD *)MiPteInShadowRange((unsigned __int64)v20);
    if ( (_DWORD)result )
      result = MiWritePteShadow(v21, v16, v22);
  }
  v18[1] = v16;
  return result;
}
