/*
 * XREFs of FsRtlGetNextBaseMcbEntry @ 0x140016A50
 * Callers:
 *     FsRtlGetNextLargeMcbEntry @ 0x1401E2D00 (FsRtlGetNextLargeMcbEntry.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlGetNextBaseMcbEntry(
        PBASE_MCB Mcb,
        ULONG RunIndex,
        PLONGLONG Vbn,
        PLONGLONG Lbn,
        PLONGLONG SectorCount)
{
  int v7; // r11d
  int v8; // r8d
  int v9; // eax
  int v10; // ecx

  if ( RunIndex >= Mcb->PairCount )
    return 0;
  v7 = 0;
  if ( RunIndex )
  {
    v8 = *((_DWORD *)Mcb->Mapping + 2 * RunIndex - 2);
    *(_DWORD *)Vbn = v8;
    if ( v8 == -1 )
    {
      v9 = -1;
      goto LABEL_5;
    }
  }
  else
  {
    *(_DWORD *)Vbn = 0;
  }
  v9 = 0;
LABEL_5:
  *((_DWORD *)Vbn + 1) = v9;
  v10 = *((_DWORD *)Mcb->Mapping + 2 * RunIndex + 1);
  *(_DWORD *)Lbn = v10;
  *((_DWORD *)Lbn + 1) = (v10 != -1) - 1;
  if ( RunIndex )
    v7 = *((_DWORD *)Mcb->Mapping + 2 * RunIndex - 2);
  *SectorCount = (unsigned int)(*((_DWORD *)Mcb->Mapping + 2 * RunIndex) - v7);
  return 1;
}
