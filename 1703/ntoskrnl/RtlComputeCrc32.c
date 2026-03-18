/*
 * XREFs of RtlComputeCrc32 @ 0x140134030
 * Callers:
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x140058180 (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 *     SmDecompressBuffer @ 0x14012D2C4 (SmDecompressBuffer.c)
 *     ?ReadEntries@PC_GPT@@AEAAJPEAVGPT_HEADER@@PEAU_GPT_ENTRY@@@Z @ 0x140268D80 (-ReadEntries@PC_GPT@@AEAAJPEAVGPT_HEADER@@PEAU_GPT_ENTRY@@@Z.c)
 *     ?ReadHeader@PC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z @ 0x140268E04 (-ReadHeader@PC_GPT@@AEAAJKPEAVGPT_HEADER@@@Z.c)
 *     ?VerifyPartitionTable@PC_GPT@@QEAAJE@Z @ 0x140269220 (-VerifyPartitionTable@PC_GPT@@QEAAJE@Z.c)
 *     ?WritePartitionTable@PC_GPT@@QEAAJPEAU_DRIVE_LAYOUT_INFORMATION_EX@@E@Z @ 0x1402694B0 (-WritePartitionTable@PC_GPT@@QEAAJPEAU_DRIVE_LAYOUT_INFORMATION_EX@@E@Z.c)
 *     PopWriteBsdPowerTransition @ 0x140576A8C (PopWriteBsdPowerTransition.c)
 *     PoClearTransitionMarker @ 0x1405B8BC8 (PoClearTransitionMarker.c)
 *     SmKmStoreFileWriteHeader @ 0x1407039F0 (SmKmStoreFileWriteHeader.c)
 *     ExpSingleStringCheck @ 0x14081F52C (ExpSingleStringCheck.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlComputeCrc32(ULONG InitialCrc, PUCHAR Buffer, ULONG Length)
{
  ULONG v4; // r9d
  __int64 v5; // r11
  unsigned __int8 v6; // dl

  v4 = ~InitialCrc;
  if ( Length )
  {
    v5 = Length;
    do
    {
      v6 = *Buffer++ ^ v4;
      v4 = (v4 >> 8) ^ RtlCrc32Table[v6];
      --v5;
    }
    while ( v5 );
  }
  return ~v4;
}
