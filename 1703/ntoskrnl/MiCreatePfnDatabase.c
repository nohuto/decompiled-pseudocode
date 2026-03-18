/*
 * XREFs of MiCreatePfnDatabase @ 0x1407FFCB0
 * Callers:
 *     MmInitNucleus @ 0x140813B1C (MmInitNucleus.c)
 * Callees:
 *     MiInsertNewPartitionInList @ 0x140154374 (MiInsertNewPartitionInList.c)
 *     MiInitializePartition @ 0x1405A1920 (MiInitializePartition.c)
 *     MiInitializePartitions @ 0x1407FFA0C (MiInitializePartitions.c)
 *     MiInitializeNumaGraph @ 0x1407FFE68 (MiInitializeNumaGraph.c)
 *     MiCreateSparsePfnDatabase @ 0x14080119C (MiCreateSparsePfnDatabase.c)
 *     MiInitializeColors @ 0x140802A54 (MiInitializeColors.c)
 */

__int64 __fastcall MiCreatePfnDatabase(__int64 a1)
{
  unsigned __int16 v2; // r10
  int v3; // r11d
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned __int64 *v7; // rdx
  __int64 v8; // r9
  unsigned __int64 *v9; // rax
  unsigned __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // r11
  __int64 *v16; // rcx

  MiInitializeColors();
  v2 = KeNumberNodes;
  v3 = (unsigned __int16)KeNumberNodes;
  v4 = (unsigned __int16)KeNumberNodes * (unsigned int)(unsigned __int8)MiChannelMaximumPowerOf2 * dword_14036C1FC;
  v5 = (unsigned int)v4;
  dword_14036C1FC *= (unsigned __int16)KeNumberNodes * (unsigned __int8)MiChannelMaximumPowerOf2;
  qword_140380980 = 48 * (qword_14036C290 + 1);
  v6 = 40 * v4;
  v7 = (unsigned __int64 *)&unk_140381168;
  qword_140380988 = v6 + qword_140380980;
  v8 = v6 + 15;
  v9 = (unsigned __int64 *)&unk_140381168;
  v10 = (qword_140380988 + v8) & 0xFFFFFFFFFFFFFFF0uLL;
  v11 = 16 * v5;
  do
  {
    *v9 = v10;
    v10 += v11;
    ++v9;
  }
  while ( (__int64)v9 < (__int64)qword_140381178 );
  v12 = 400LL * v2;
  v13 = 144LL * v2 + 4095;
  v14 = (v10 + 2184LL * v2 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  v15 = (v12 + v14 + 2LL * v3 * v3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  MxPfnAllocation = (v15 + v13) >> 12;
  MmPfnDatabase = 0xFFFFFA8000000000uLL;
  v16 = &qword_140380980;
  do
    *v16++ -= 0x58000000000LL;
  while ( (__int64)v16 < (__int64)qword_140380990 );
  do
    *v7++ -= 0x58000000000LL;
  while ( (__int64)v7 < (__int64)qword_140381178 );
  qword_14036C1C8 = (PSLIST_HEADER)(v14 - 0x58000000000LL);
  qword_14036C1C0 = (void *)(v12 + v14 - 0x58000000000LL);
  qword_14036CD28 = v15 - 0x58000000000LL;
  qword_140380230 = v10 - 0x58000000000LL;
  if ( !(unsigned int)MiCreateSparsePfnDatabase(a1) )
    return 0LL;
  MiInitializePartitions(0);
  MiInitializePartition((unsigned __int64)&MiSystemPartition, 0);
  MiInsertNewPartitionInList((__int64)&MiSystemPartition);
  MiInitializeNumaGraph(a1);
  return 1LL;
}
