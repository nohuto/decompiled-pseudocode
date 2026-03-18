/*
 * XREFs of MiInitializePartitions @ 0x1407FFA0C
 * Callers:
 *     MiCreatePfnDatabase @ 0x1407FFCB0 (MiCreatePfnDatabase.c)
 *     MiInitSystem @ 0x1408032EC (MiInitSystem.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     ObCreateObjectType @ 0x14059EB50 (ObCreateObjectType.c)
 *     MiSystemPartitionObjectCreate @ 0x1407FFB40 (MiSystemPartitionObjectCreate.c)
 */

_BOOL8 __fastcall MiInitializePartitions(int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  UNICODE_STRING v4; // [rsp+20h] [rbp-39h] BYREF
  _QWORD v5[16]; // [rsp+30h] [rbp-29h] BYREF

  *(_DWORD *)&v4.Length = 1310738;
  v4.Buffer = L"Partition";
  if ( !a1 )
  {
    qword_14036C8B0 = 0LL;
    qword_14036C8B8 = 0LL;
    qword_14036C8D8 = (PRTL_BITMAP)&dword_14036C8E0;
    dword_14036C8E0 = 1;
    qword_14036C8E8 = (__int64)dword_14036C8C0;
    dword_14036C8C0[0] |= 1u;
    qword_14036C8D0 = (__int64)&qword_14036C8C8;
    qword_14036C8C8 = (__int64)&qword_14036C8C8;
    qword_14036C8F0 = (__int64)&MiSystemPartition;
    qword_14036C8F8 = (__int64)&qword_14036C8F0;
    return 1LL;
  }
  memset(v5, 0, 0x78uLL);
  LODWORD(v5[1]) = 0;
  v5[9] = MmPartitionObjectDelete;
  LOWORD(v5[0]) = 120;
  BYTE2(v5[0]) |= 0xCu;
  HIDWORD(v5[4]) = 512;
  HIDWORD(v5[5]) = 8;
  *(_OWORD *)((char *)&v5[1] + 4) = MiPartitionMapping;
  HIDWORD(v5[3]) = 2031619;
  return (int)ObCreateObjectType(&v4, (__int64)v5, 0LL, (__int64)&MmPartitionObjectType) >= 0
      && (int)MiSystemPartitionObjectCreate(v3, v2) >= 0;
}
