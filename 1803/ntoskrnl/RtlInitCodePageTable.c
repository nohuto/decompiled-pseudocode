/*
 * XREFs of RtlInitCodePageTable @ 0x14064F950
 * Callers:
 *     RtlInitNlsTables @ 0x14064F8E8 (RtlInitNlsTables.c)
 * Callees:
 *     <none>
 */

void __stdcall RtlInitCodePageTable(PUSHORT TableBase, PCPTABLEINFO CodePageTable)
{
  __int64 v3; // r9
  __int64 v5; // r8
  unsigned __int16 v6; // r9
  USHORT *v7; // rdx
  USHORT *v8; // rax
  _BOOL8 v9; // rcx
  USHORT *v10; // rax

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
  LOWORD(v7) = *v8;
  v9 = *v8 != 0;
  v10 = v8 + 1;
  if ( !(_WORD)v7 )
    v10 = 0LL;
  CodePageTable->DBCSOffsets = v10;
  CodePageTable->DBCSCodePage = v9;
  CodePageTable->WideCharTable = &TableBase[v6 + 1];
}
