/*
 * XREFs of MiFillGapPtes @ 0x14017C8E0
 * Callers:
 *     MiFillGapAddresses @ 0x14017C840 (MiFillGapAddresses.c)
 *     MiFillGapPtes @ 0x14017C8E0 (MiFillGapPtes.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiFillGapPtes @ 0x14017C8E0 (MiFillGapPtes.c)
 */

unsigned __int64 __fastcall MiFillGapPtes(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rsi
  int v7; // ebp
  unsigned __int64 result; // rax
  __int64 v9; // r9
  unsigned __int64 v10; // r10
  __int64 v11; // r11
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8

  v5 = a1;
  v6 = a2;
  v7 = a3;
  if ( a1 < *(_QWORD *)(a3 + 16LL * a5) )
    v5 = *(_QWORD *)(a3 + 16LL * a5);
  result = *(_QWORD *)(a3 + 16LL * a5 + 8);
  if ( a2 > result )
    v6 = *(_QWORD *)(a3 + 16LL * a5 + 8);
  for ( ; v5 <= v6; v5 += 8LL )
  {
    result = MI_READ_PTE_LOCK_FREE(v5);
    if ( (result & 1) != 0 )
    {
      if ( a5 && (result & 0x80u) == 0LL )
        result = MiFillGapPtes(
                   (__int64)(v5 << 25) >> 16,
                   (unsigned int)((__int64)(v5 << 25) >> 16) + 4088,
                   v7,
                   v9,
                   a5 - 1);
    }
    else
    {
      v12 = v5;
      if ( a5 )
        v12 = v10;
      *(_QWORD *)v5 = MiMakeValidPte(v12, *(_QWORD *)(v9 + 8 * v11), a5 != 0 ? -1476395004 : 536870913, v9);
      result = MiPteInShadowRange(v5);
      if ( (_DWORD)result )
        result = (unsigned __int64)MiWritePteShadow(v14, v13, v15);
    }
  }
  return result;
}
