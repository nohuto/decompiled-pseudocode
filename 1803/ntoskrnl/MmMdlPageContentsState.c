/*
 * XREFs of MmMdlPageContentsState @ 0x1400BA570
 * Callers:
 *     SmKmIssueVolumeIo @ 0x1402A73DC (SmKmIssueVolumeIo.c)
 *     MdlInvariantPostProcessing1 @ 0x1402AA340 (MdlInvariantPostProcessing1.c)
 *     MdlInvariantPreProcessing1 @ 0x1402AA534 (MdlInvariantPreProcessing1.c)
 *     SmKmStoreFileWriteHeader @ 0x14079ECF8 (SmKmStoreFileWriteHeader.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmMdlPageContentsState(__int64 a1, unsigned int a2)
{
  unsigned __int16 v2; // ax
  __int16 v3; // ax

  v2 = *(_WORD *)(a1 + 10);
  if ( a2 == 2 )
    return (v2 >> 14) & 1;
  if ( a2 == 1 )
    v3 = v2 | 0x4000;
  else
    v3 = v2 & 0xBFFF;
  *(_WORD *)(a1 + 10) = v3;
  return a2;
}
