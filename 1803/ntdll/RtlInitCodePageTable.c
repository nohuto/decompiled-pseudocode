/*
 * XREFs of RtlInitCodePageTable @ 0x1800DEE70
 * Callers:
 *     RtlInitNlsTables @ 0x1800DEF30 (RtlInitNlsTables.c)
 * Callees:
 *     <none>
 */

void __cdecl RtlInitCodePageTable(PUSHORT TableBase, PCPTABLEINFO CodePageTable)
{
  __int64 v3; // r9
  __int64 v5; // r8
  unsigned __int16 v6; // r9
  USHORT *v7; // rdx
  USHORT *v8; // r8
  USHORT *v9; // rax
  _BOOL8 v10; // rcx

  v3 = *TableBase;
  v5 = v3 + 1;
  v6 = TableBase[v3] + v3;
  CodePageTable->CodePage = TableBase[1];
  CodePageTable->MaximumCharacterSize = TableBase[2];
  CodePageTable->DefaultChar = TableBase[3];
  CodePageTable->UniDefaultChar = TableBase[4];
  CodePageTable->TransDefaultChar = TableBase[5];
  CodePageTable->TransUniDefaultChar = TableBase[6];
  *(_QWORD *)CodePageTable->LeadByte = *(_QWORD *)(TableBase + 7);
  *(_DWORD *)&CodePageTable->LeadByte[8] = *(_DWORD *)(TableBase + 11);
  v7 = &TableBase[v5];
  CodePageTable->MultiByteTable = v7;
  v8 = (USHORT *)((char *)v7 + (v7[256] != 0 ? 514LL : 2LL) + 512);
  CodePageTable->DBCSRanges = v8;
  v9 = v8 + 1;
  v10 = *v8 != 0;
  if ( !*v8 )
    v9 = 0LL;
  CodePageTable->DBCSOffsets = v9;
  CodePageTable->DBCSCodePage = v10;
  CodePageTable->WideCharTable = &TableBase[v6 + 1];
}
