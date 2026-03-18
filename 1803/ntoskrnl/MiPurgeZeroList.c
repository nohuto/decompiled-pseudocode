/*
 * XREFs of MiPurgeZeroList @ 0x14014F71C
 * Callers:
 *     MiFinishResume @ 0x14014F670 (MiFinishResume.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x14002BD00 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14002D3C0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     MiFreeZeroPageSizeIndex @ 0x140121FC0 (MiFreeZeroPageSizeIndex.c)
 *     MiIsPfnInline @ 0x140136FF0 (MiIsPfnInline.c)
 *     MiPurgeLargeZeroNodePages @ 0x14014F82C (MiPurgeLargeZeroNodePages.c)
 */

__int64 __fastcall MiPurgeZeroList(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // ebp
  ULONG_PTR *v4; // r14
  ULONG_PTR v5; // rbx
  __int64 v6; // rsi
  unsigned __int8 v7; // r15
  unsigned __int64 v8; // r9
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  if ( *(_BYTE *)(a1 + 4765) )
  {
    result = MiPurgeLargeZeroNodePages();
    v3 = 0;
    if ( dword_1403CB6DC )
    {
      v4 = (ULONG_PTR *)(*(_QWORD *)(a1 + 2112) + 16LL);
      do
      {
        while ( 1 )
        {
          v5 = *v4;
          if ( *v4 == 0xFFFFFFFFFLL )
            break;
          v6 = 48 * v5 - 0x58000000000LL;
          v7 = MiLockPageInline(v6);
          if ( MiIsPfnInline(v5)
            && (*(_BYTE *)(v6 + 34) & 7) == 0
            && (unsigned int)MiFreeZeroPageSizeIndex(48 * v5 - 0x58000000000LL) == -1 )
          {
            MiUnlinkFreeOrZeroedPage(v5, 0LL, 0, v8);
            MiInsertPageInFreeOrZeroedList(v5, 2);
          }
          _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          result = v7;
          __writecr8(v7);
        }
        ++v3;
        v4 += 5;
      }
      while ( v3 < dword_1403CB6DC );
    }
    *(_BYTE *)(a1 + 4765) = 0;
  }
  return result;
}
