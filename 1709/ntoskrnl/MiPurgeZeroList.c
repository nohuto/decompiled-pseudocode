/*
 * XREFs of MiPurgeZeroList @ 0x14022A7B0
 * Callers:
 *     MiFinishResume @ 0x140218680 (MiFinishResume.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x14004F970 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140050BA0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiFreeZeroPageSizeIndex @ 0x1400C70F0 (MiFreeZeroPageSizeIndex.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiIsPfnInline @ 0x140106F50 (MiIsPfnInline.c)
 *     MiPurgeLargeZeroNodePages @ 0x140233458 (MiPurgeLargeZeroNodePages.c)
 */

unsigned __int64 __fastcall MiPurgeZeroList(__int64 a1)
{
  unsigned __int64 result; // rax
  unsigned int v3; // ebp
  unsigned __int64 *v4; // r14
  __int64 v5; // rsi
  unsigned __int8 v6; // r15
  unsigned __int64 v7; // rbx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  if ( *(_BYTE *)(a1 + 4677) )
  {
    MiPurgeLargeZeroNodePages();
    result = (unsigned int)dword_140388544;
    v3 = 0;
    if ( dword_140388544 )
    {
      v4 = (unsigned __int64 *)(*(_QWORD *)(a1 + 2048) + 16LL);
      do
      {
        while ( 1 )
        {
          v7 = *v4;
          if ( *v4 == 0xFFFFFFFFFLL )
            break;
          v5 = 48 * v7 - 0x58000000000LL;
          v6 = MiLockPageInline(v5);
          if ( MiIsPfnInline(v7)
            && (*(_BYTE *)(v5 + 34) & 7) == 0
            && (unsigned int)MiFreeZeroPageSizeIndex(48 * v7 - 0x58000000000LL) == -1 )
          {
            MiUnlinkFreeOrZeroedPage(v7, 0LL, 0);
            MiInsertPageInFreeOrZeroedList(v7, 2);
          }
          _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          result = v6;
          __writecr8(v6);
        }
        ++v3;
        v4 += 5;
      }
      while ( v3 < dword_140388544 );
    }
    *(_BYTE *)(a1 + 4677) = 0;
  }
  return result;
}
