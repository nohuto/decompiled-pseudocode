/*
 * XREFs of MiReturnPfnList @ 0x14015B5D8
 * Callers:
 *     MiPfnRangeIsZero @ 0x14015B174 (MiPfnRangeIsZero.c)
 *     MiJoinBitmapPages @ 0x140216A20 (MiJoinBitmapPages.c)
 *     MiInitializeDynamicBitmap @ 0x14057E66C (MiInitializeDynamicBitmap.c)
 *     MiDeleteLargePfnBitMap @ 0x1406BFB38 (MiDeleteLargePfnBitMap.c)
 * Callees:
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C6A20 (MiInsertPageInFreeOrZeroedList.c)
 */

__int64 __fastcall MiReturnPfnList(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rbp
  __int64 v3; // rsi
  unsigned __int64 v4; // rdi

  v1 = a1;
  v2 = 0LL;
  if ( a1 )
  {
    do
    {
      v3 = *(_QWORD *)v1;
      v4 = (unsigned __int8)MiLockPageInline(v1);
      *(_WORD *)(v1 + 32) = 0;
      *(_QWORD *)(v1 + 24) &= 0xC000000000000000uLL;
      MiInsertPageInFreeOrZeroedList((v1 + 0x58000000000LL) / 48, 2);
      _InterlockedAnd64((volatile signed __int64 *)(v1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v4);
      ++v2;
      v1 = v3;
    }
    while ( v3 );
  }
  return v2;
}
