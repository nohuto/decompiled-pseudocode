/*
 * XREFs of MiDbgUnTranslatePhysicalAddress @ 0x140261178
 * Callers:
 *     MiDbgCopyMemory @ 0x1402607B8 (MiDbgCopyMemory.c)
 *     MiDbgTranslatePhysicalAddress @ 0x140260E34 (MiDbgTranslatePhysicalAddress.c)
 * Callees:
 *     KeFlushSingleTb @ 0x14003B184 (KeFlushSingleTb.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeFlushSingleCurrentTb @ 0x14014F598 (KeFlushSingleCurrentTb.c)
 */

unsigned __int8 __fastcall MiDbgUnTranslatePhysicalAddress(int *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  int v4; // eax
  unsigned __int8 result; // al

  if ( (*a1 & 0x20) != 0 )
  {
    v2 = qword_1403CBF88 << 25;
    _InterlockedExchange64((volatile __int64 *)qword_1403CBF88, ZeroPte);
    v3 = v2 >> 16;
    if ( (*a1 & 0x12) != 0 )
      KeFlushSingleTb(v3, 0, 1u);
    else
      KeFlushSingleCurrentTb(v3, 0);
  }
  v4 = *a1;
  if ( (*a1 & 4) == 0 )
  {
    if ( (v4 & 1) != 0 || (v4 & 2) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(*((_QWORD *)a1 + 1) + 24LL), 0x7FFFFFFFFFFFFFFFuLL);
    }
    else if ( (v4 & 8) != 0 || (v4 & 0x10) != 0 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1403CC340);
    }
  }
  result = *((_BYTE *)a1 + 4);
  if ( result != 17 )
    __writecr8(result);
  return result;
}
