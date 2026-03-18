/*
 * XREFs of ttfdSemQueryTrueTypeTable @ 0x1C02259A0
 * Callers:
 *     <none>
 * Callees:
 *     EngUnmapFontFileFD @ 0x1C00FCCB0 (EngUnmapFontFileFD.c)
 *     bttfdMapFontFileFD @ 0x1C022528C (bttfdMapFontFileFD.c)
 *     vMarkFontGone @ 0x1C0225AE8 (vMarkFontGone.c)
 *     ttfdQueryTrueTypeTable2 @ 0x1C022EDC0 (ttfdQueryTrueTypeTable2.c)
 */

__int64 __fastcall ttfdSemQueryTrueTypeTable(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        void *a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int TrueTypeTable2; // edi
  __int64 v13; // rdx

  TrueTypeTable2 = -1;
  if ( (unsigned int)bttfdMapFontFileFD(a1) )
  {
    EngAcquireSemaphore(ghsemTTFD);
    v13 = *(_QWORD *)(a1 + 16 * ((unsigned int)(a2 - 1) + 3LL));
    if ( !*(_DWORD *)(v13 + 48) )
    {
      *(_QWORD *)(v13 + 64) = *(_QWORD *)(a1 + 16);
      *(_DWORD *)(v13 + 72) = *(_DWORD *)(a1 + 24);
    }
    TrueTypeTable2 = ttfdQueryTrueTypeTable2(a1, a2, a3, a4, a5, a6, a7, a8);
    EngReleaseSemaphore(ghsemTTFD);
    EngUnmapFontFileFD(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 56LL));
  }
  return TrueTypeTable2;
}
