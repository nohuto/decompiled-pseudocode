/*
 * XREFs of MiCreatePfnDatabase @ 0x140899444
 * Callers:
 *     MiInitNucleus @ 0x140898D68 (MiInitNucleus.c)
 * Callees:
 *     MiInitializePartition @ 0x14061BA7C (MiInitializePartition.c)
 *     MiInitializeNumaGraph @ 0x140899660 (MiInitializeNumaGraph.c)
 *     MiInitializePartitions @ 0x140899728 (MiInitializePartitions.c)
 *     MiCreateSparsePfnDatabase @ 0x14089A768 (MiCreateSparsePfnDatabase.c)
 *     MiInitializeColors @ 0x14089BED4 (MiInitializeColors.c)
 */

__int64 __fastcall MiCreatePfnDatabase(__int64 a1)
{
  unsigned __int64 *v2; // r9
  int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // r8
  unsigned __int64 *v6; // rax
  unsigned __int64 v7; // r8
  __int64 v8; // r10
  int *v9; // rcx
  unsigned __int64 v10; // rsi
  __int64 v11; // r8
  int v12; // edx
  __int64 v13; // r11
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 *v17; // rcx

  MiInitializeColors();
  v2 = (unsigned __int64 *)&unk_1403CEF68;
  v3 = (unsigned __int16)KeNumberNodes;
  dword_1403CB6DC *= (unsigned __int16)KeNumberNodes * (unsigned __int8)MiChannelMaximumPowerOf2;
  qword_1403CE780 = 48 * (qword_1403CB780 + 1);
  v4 = 40LL * (unsigned int)dword_1403CB6DC;
  qword_1403CE788 = v4 + qword_1403CE780;
  v5 = v4 + 15;
  v6 = (unsigned __int64 *)&unk_1403CEF68;
  v7 = (qword_1403CE788 + v5) & 0xFFFFFFFFFFFFFFF0uLL;
  v8 = 16LL * (unsigned int)dword_1403CB6DC;
  do
  {
    *v6 = v7;
    v7 += v8;
    ++v6;
  }
  while ( (__int64)v6 < (__int64)qword_1403CEF78 );
  v9 = dword_1403CB6E8;
  v10 = v7;
  v11 = 1984LL * (unsigned __int16)KeNumberNodes + v7;
  v12 = 0;
  v13 = 3LL;
  do
  {
    v14 = *v9++;
    v12 += 16 * v14;
    --v13;
  }
  while ( v13 );
  v15 = (unsigned int)(v3 * v12);
  qword_1403CF2E8 = v11;
  dword_1403CBD38 = v15;
  qword_1403CB6A8 = (PSLIST_HEADER)((v11 + 24 * v15 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
  qword_1403CB6A0 = &qword_1403CB6A8[25 * (unsigned __int16)KeNumberNodes];
  qword_1403CC1E8 = ((unsigned __int64)qword_1403CB6A0 + 2 * v3 * v3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  v16 = 144LL * (unsigned __int16)KeNumberNodes + qword_1403CC1E8;
  MxPfnAllocation = (v16 + 72 * (unsigned __int64)(unsigned __int16)KeNumberNodes + 4095) >> 12;
  MmPfnDatabase = 0xFFFFFA8000000000uLL;
  v17 = &qword_1403CE780;
  do
    *v17++ -= 0x58000000000LL;
  while ( (__int64)v17 < (__int64)qword_1403CE790 );
  do
    *v2++ -= 0x58000000000LL;
  while ( (__int64)v2 < (__int64)qword_1403CEF78 );
  qword_1403CF2E8 -= 0x58000000000LL;
  qword_1403CB6A8 -= 0x5800000000uLL;
  qword_1403CB6A0 = (char *)qword_1403CB6A0 - 0x58000000000LL;
  qword_1403CC1E8 -= 0x58000000000LL;
  qword_1403CC1F0 = v16 - 0x58000000000LL;
  qword_1403CDF50 = v10 - 0x58000000000LL;
  if ( !(unsigned int)MiCreateSparsePfnDatabase(a1) )
    return 0LL;
  MiInitializePartitions(0LL);
  MiInitializePartition((__int64)&MiSystemPartition, 0);
  MiInitializeNumaGraph(a1);
  return 1LL;
}
