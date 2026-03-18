/*
 * XREFs of MiSelectCfgBitMap @ 0x1404B5BBC
 * Callers:
 *     MiCfgMarkValidEntries @ 0x1404B3738 (MiCfgMarkValidEntries.c)
 *     MiCommitVadCfgBits @ 0x1404B5948 (MiCommitVadCfgBits.c)
 * Callees:
 *     MiSelectBitMapForImage @ 0x1404F1C00 (MiSelectBitMapForImage.c)
 */

__int64 __fastcall MiSelectCfgBitMap(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int16 v5; // ax

  v3 = *(_QWORD *)(a1 + 1064);
  if ( v3
    && ((v5 = *(_WORD *)(v3 + 8), v5 == 332) || v5 == 452)
    && a2 < 0x100000000LL
    && (!a3 || !(unsigned int)MiSelectBitMapForImage(a3)) )
  {
    return *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode + 400LL;
  }
  else
  {
    return *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode + 376LL;
  }
}
