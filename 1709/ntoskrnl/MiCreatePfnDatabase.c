/*
 * XREFs of MiCreatePfnDatabase @ 0x140829C3C
 * Callers:
 *     MmInitNucleus @ 0x14082CC5C (MmInitNucleus.c)
 * Callees:
 *     MiInitializePartition @ 0x1405B30A8 (MiInitializePartition.c)
 *     MiInitializeNumaGraph @ 0x140829DFC (MiInitializeNumaGraph.c)
 *     MiInitializePartitions @ 0x140829F70 (MiInitializePartitions.c)
 *     MiCreateSparsePfnDatabase @ 0x14082B158 (MiCreateSparsePfnDatabase.c)
 *     MiInitializeColors @ 0x14082CAE0 (MiInitializeColors.c)
 */

__int64 __fastcall MiCreatePfnDatabase(__int64 a1)
{
  int v2; // r11d
  unsigned __int64 *v3; // r8
  unsigned __int64 v4; // r9
  unsigned __int64 *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r10
  __int64 *v8; // rcx

  MiInitializeColors();
  v2 = (unsigned __int16)KeNumberNodes;
  dword_140388544 *= (unsigned __int16)KeNumberNodes * (unsigned __int8)MiChannelMaximumPowerOf2;
  qword_14038A8C0 = 48 * (qword_1403885E0 + 1);
  qword_14038A8C8 = 40LL * (unsigned int)dword_140388544 + qword_14038A8C0;
  v3 = (unsigned __int64 *)&unk_14038B0A8;
  v4 = (qword_14038A8C8 + 40LL * (unsigned int)dword_140388544 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  v5 = (unsigned __int64 *)&unk_14038B0A8;
  v6 = 16LL * (unsigned int)dword_140388544;
  do
  {
    *v5 = v4;
    v4 += v6;
    ++v5;
  }
  while ( (__int64)v5 < (__int64)qword_14038B0B8 );
  qword_140388510 = (PSLIST_HEADER)((v4 + 8256LL * (unsigned __int16)KeNumberNodes + 15) & 0xFFFFFFFFFFFFFFF0uLL);
  qword_140388508 = &qword_140388510[25 * (unsigned __int16)KeNumberNodes];
  qword_140388F28 = ((unsigned __int64)qword_140388508 + 2 * v2 * v2 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  v7 = 144LL * (unsigned __int16)KeNumberNodes + qword_140388F28;
  MxPfnAllocation = (v7 + 72 * (unsigned __int64)(unsigned __int16)KeNumberNodes + 4095) >> 12;
  MmPfnDatabase = 0xFFFFFA8000000000uLL;
  v8 = &qword_14038A8C0;
  do
    *v8++ -= 0x58000000000LL;
  while ( (__int64)v8 < (__int64)qword_14038A8D0 );
  do
    *v3++ -= 0x58000000000LL;
  while ( (__int64)v3 < (__int64)qword_14038B0B8 );
  qword_140388510 -= 0x5800000000uLL;
  qword_140388508 = (char *)qword_140388508 - 0x58000000000LL;
  qword_140388F28 -= 0x58000000000LL;
  qword_140388F30 = v7 - 0x58000000000LL;
  qword_14038A0D0 = v4 - 0x58000000000LL;
  if ( !(unsigned int)MiCreateSparsePfnDatabase(a1) )
    return 0LL;
  MiInitializePartitions(0LL);
  MiInitializePartition((__int64)&MiSystemPartition, 0);
  MiInitializeNumaGraph(a1);
  return 1LL;
}
