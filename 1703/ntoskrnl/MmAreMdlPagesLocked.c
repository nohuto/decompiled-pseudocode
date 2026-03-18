/*
 * XREFs of MmAreMdlPagesLocked @ 0x140763D78
 * Callers:
 *     VERIFY_BUFFER_LOCKED @ 0x1407686B8 (VERIFY_BUFFER_LOCKED.c)
 * Callees:
 *     MiIsPfn @ 0x1400DC8A0 (MiIsPfn.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     MiLockPage @ 0x14021EF00 (MiLockPage.c)
 *     MiUnlockPage @ 0x14021EF0C (MiUnlockPage.c)
 */

__int64 __fastcall MmAreMdlPagesLocked(__int64 a1)
{
  unsigned __int64 *v2; // r14
  unsigned __int64 v3; // rsi
  __int64 v4; // r9
  __int64 v5; // rbx
  unsigned __int8 v6; // dl
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r8

  if ( (*(_WORD *)(a1 + 10) & 0x804) != 0 )
    return 1LL;
  v2 = (unsigned __int64 *)(a1 + 48);
  v3 = (((*(_DWORD *)(a1 + 32) + *(_DWORD *)(a1 + 44)) & 0xFFF) + (unsigned __int64)*(unsigned int *)(a1 + 40) + 4095) >> 12;
  while ( !MiIsPfn(*v2) )
  {
LABEL_19:
    ++v2;
    if ( !--v3 )
      return 1LL;
  }
  v5 = 48 * v4 - 0x58000000000LL;
  if ( dword_14036C91C == 2 )
    v6 = 17;
  else
    v6 = MiLockPage(48 * v4 - 0x58000000000LL);
  v7 = *(unsigned __int16 *)(v5 + 32);
  if ( v7 > (*(_QWORD *)(v5 + 24) & 0x3FFFFFFFFFFFFFFFuLL)
    || (*(_QWORD *)(v5 + 40) & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL
    || ((*(_QWORD *)(v5 + 40) >> 54) & 7) == 1
    || (unsigned __int16)v7 > 1u
    || !*(_QWORD *)v5
    || (v8 = (__int64)(*(_QWORD *)(v5 + 8) << 25) >> 16, (*(_BYTE *)(v5 + 34) & 7) == 6)
    && (unsigned int)MiGetSystemRegionType((__int64)(*(_QWORD *)(v5 + 8) << 25) >> 16) == 5
    || v8 && (unsigned int)MiGetSystemRegionType(v8) == 13 )
  {
    if ( v6 != 17 )
      MiUnlockPage(v5, v6);
    goto LABEL_19;
  }
  if ( v6 != 17 )
    MiUnlockPage(v5, v6);
  return 0LL;
}
