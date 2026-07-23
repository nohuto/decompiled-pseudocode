/*
 * XREFs of RtlInitCodePageTable @ 0x1800E3E10
 * Callers:
 *     RtlInitNlsTables @ 0x1800E3EC0 (RtlInitNlsTables.c)
 * Callees:
 *     <none>
 */

void __cdecl RtlInitCodePageTable(PUSHORT TableBase, PCPTABLEINFO CodePageTable)
{
  __int64 v2; // r8
  unsigned __int16 v3; // r9
  USHORT *v4; // rax
  USHORT *v5; // rax

  v2 = *TableBase;
  v3 = *TableBase + TableBase[v2];
  CodePageTable->CodePage = TableBase[1];
  CodePageTable->MaximumCharacterSize = TableBase[2];
  CodePageTable->DefaultChar = TableBase[3];
  CodePageTable->UniDefaultChar = TableBase[4];
  CodePageTable->TransDefaultChar = TableBase[5];
  CodePageTable->TransUniDefaultChar = TableBase[6];
  *(_QWORD *)CodePageTable->LeadByte = *(_QWORD *)(TableBase + 7);
  *(_DWORD *)&CodePageTable->LeadByte[8] = *(_DWORD *)(TableBase + 11);
  v4 = &TableBase[v2 + 1];
  CodePageTable->MultiByteTable = v4;
  if ( v4[256] )
    v5 = v4 + 513;
  else
    v5 = v4 + 257;
  CodePageTable->DBCSRanges = v5;
  if ( *v5 )
  {
    CodePageTable->DBCSOffsets = v5 + 1;
    CodePageTable->DBCSCodePage = 1;
  }
  else
  {
    CodePageTable->DBCSCodePage = 0;
    CodePageTable->DBCSOffsets = 0LL;
  }
  CodePageTable->WideCharTable = &TableBase[v3 + 1];
}
