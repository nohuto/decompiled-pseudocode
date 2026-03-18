/*
 * XREFs of MiGetSinglePageToZero @ 0x140266CF4
 * Callers:
 *     MiGetPagesToZero @ 0x14017B8BC (MiGetPagesToZero.c)
 * Callees:
 *     MiBeginPageAccessor @ 0x1400E7730 (MiBeginPageAccessor.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     MiFreeZeroPageSizeIndex @ 0x140121FC0 (MiFreeZeroPageSizeIndex.c)
 *     MiIsPfnInline @ 0x140136FF0 (MiIsPfnInline.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiGetSinglePageToZero(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // r14d
  __int64 v4; // r15
  unsigned int v5; // r8d
  unsigned __int8 v6; // bp
  unsigned __int64 v7; // rdi
  __int64 v8; // rbx
  int v10; // eax

  v2 = *(_DWORD *)(a2 + 244);
  v4 = *(_QWORD *)(a1 + 2120);
  v5 = v2;
  v6 = 17;
  do
  {
    v7 = *(_QWORD *)(v4 + 40LL * v5 + 16);
    if ( v7 == 0xFFFFFFFFFLL )
    {
      v5 = dword_1403CB690 & (v5 + 1) | v5 & ~dword_1403CB690;
      *(_DWORD *)(a2 + 244) = v5;
      goto LABEL_8;
    }
    v8 = 48 * v7 - 0x58000000000LL;
    v6 = MiLockPageInline(v8);
    if ( MiIsPfnInline(v7)
      && (*(_BYTE *)(v8 + 34) & 7) == 1
      && (unsigned int)MiFreeZeroPageSizeIndex(48 * v7 - 0x58000000000LL) == -1 )
    {
      break;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v6);
    v5 = *(_DWORD *)(a2 + 244);
LABEL_8:
    v8 = 0LL;
  }
  while ( v5 != v2 );
  if ( !v8 )
    return 0LL;
  if ( *(_WORD *)(v8 + 32) )
    KeBugCheckEx(0x4Eu, 0x8DuLL, v7, *(unsigned int *)(v8 + 32), *(_QWORD *)(v8 + 8));
  v10 = MiBeginPageAccessor(a2, v8);
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v6);
  return v8 & -(__int64)(v10 != 0);
}
