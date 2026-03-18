/*
 * XREFs of MiLockOwnedProtoPage @ 0x1400322A0
 * Callers:
 *     MiLockProtoPoolPage @ 0x1400320B0 (MiLockProtoPoolPage.c)
 *     MiRelockProtoPoolPage @ 0x140059A10 (MiRelockProtoPoolPage.c)
 *     MiMigratePfn @ 0x14011B910 (MiMigratePfn.c)
 * Callees:
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     MiWriteValidPteVolatile @ 0x1401259B0 (MiWriteValidPteVolatile.c)
 *     HvlNotifyLongSpinWait @ 0x14015AFE0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall MiLockOwnedProtoPage(__int64 a1, unsigned __int8 a2)
{
  unsigned __int64 v2; // rsi
  char i; // al
  __int64 result; // rax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // r8

  v2 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  for ( i = *(_BYTE *)(a1 + 34); (i & 0x20) != 0; i = *(_BYTE *)(a1 + 34) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( a2 != 17 )
      __writecr8(a2);
    v8 = 0;
    while ( (*(_BYTE *)(a1 + 34) & 0x20) != 0 )
    {
      if ( (HvlLongSpinCountMask & ++v8) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v8);
    }
    MiLockPageInline(a1);
  }
  *(_BYTE *)(a1 + 34) = i | 0x20;
  result = *(_QWORD *)(a1 + 24) >> 62;
  if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) == 0 )
  {
    v7 = *(_QWORD *)v2;
    result = 0xFFFFF6FB7DBED000uLL;
    if ( v2 >= 0xFFFFF6FB7DBED000uLL )
    {
      result = 0xFFFFF6FB7DBED7F8uLL;
      if ( v2 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0x1800000) != 0 )
      {
        result = (__int64)KeGetCurrentThread();
        if ( *(_BYTE *)(*(_QWORD *)(result + 184) + 640LL) != 1
          && (v7 & 1) != 0
          && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
        {
          result = (__int64)KeGetCurrentThread();
          v9 = *(_QWORD *)(*(_QWORD *)(result + 184) + 1544LL);
          if ( v9 )
          {
            result = *(_QWORD *)(v9 + 8 * ((v2 >> 3) & 0x1FF));
            LOBYTE(v9) = v7 | 0x20;
            if ( (result & 0x20) == 0 )
              v9 = *(_QWORD *)v2;
            LOBYTE(v7) = v9;
            if ( (result & 0x42) != 0 )
              LOBYTE(v7) = v9 | 0x42;
          }
        }
      }
    }
    if ( (v7 & 0x20) == 0 )
      result = MiWriteValidPteVolatile(v2, 1LL, 0LL);
  }
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
