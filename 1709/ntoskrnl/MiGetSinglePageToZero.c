/*
 * XREFs of MiGetSinglePageToZero @ 0x14022B680
 * Callers:
 *     MiGetPagesToZero @ 0x1401352C8 (MiGetPagesToZero.c)
 * Callees:
 *     MiFreeZeroPageSizeIndex @ 0x1400C70F0 (MiFreeZeroPageSizeIndex.c)
 *     MiBeginPageAccessor @ 0x1400C73E4 (MiBeginPageAccessor.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiIsPfnInline @ 0x140106F50 (MiIsPfnInline.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

__int64 __fastcall MiGetSinglePageToZero(__int64 a1, unsigned __int64 a2, int *a3)
{
  unsigned int v3; // r9d
  __int64 v5; // r15
  int v6; // r14d
  unsigned __int8 v7; // bp
  unsigned __int64 v8; // rdi
  __int64 v9; // rbx
  int v11; // eax

  v3 = *a3;
  v5 = *(_QWORD *)(a1 + 2056);
  v6 = *a3;
  v7 = 17;
  do
  {
    v8 = *(_QWORD *)(v5 + 40LL * v3 + 16);
    if ( v8 == 0xFFFFFFFFFLL )
    {
      *a3 = dword_1403884F8 & (v3 + 1) | v3 & ~dword_1403884F8;
      goto LABEL_8;
    }
    v9 = 48 * v8 - 0x58000000000LL;
    v7 = MiLockPageInline(v9);
    if ( MiIsPfnInline(v8)
      && (*(_BYTE *)(v9 + 34) & 7) == 1
      && (unsigned int)MiFreeZeroPageSizeIndex(48 * v8 - 0x58000000000LL) == -1 )
    {
      break;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v7);
LABEL_8:
    v3 = *a3;
    v9 = 0LL;
  }
  while ( *a3 != v6 );
  if ( !v9 )
    return 0LL;
  if ( *(_WORD *)(v9 + 32) )
    KeBugCheckEx(0x4Eu, 0x8DuLL, v8, *(unsigned int *)(v9 + 32), *(_QWORD *)(v9 + 8));
  v11 = MiBeginPageAccessor(a2, v9);
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v7);
  return v9 & -(__int64)(v11 != 0);
}
