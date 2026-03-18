/*
 * XREFs of ?GeneratePointerInputMessages@@YAXPEBUtagPOINTERINPUTFRAME@@KHHKKH@Z @ 0x1C01C57EC
 * Callers:
 *     ?xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01C803C (-xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z.c)
 * Callees:
 *     ?GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z @ 0x1C01C58C4 (-GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z.c)
 *     ?ShouldGenerateMessagesForNode@@YAHPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@H@Z @ 0x1C01C7544 (-ShouldGenerateMessagesForNode@@YAHPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@H@Z.c)
 */

void __fastcall GeneratePointerInputMessages(
        const struct tagPOINTERINPUTFRAME *a1,
        unsigned int a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        int a7)
{
  __int64 v7; // rbx
  unsigned int i; // esi

  v7 = *((_QWORD *)a1 + 11);
  for ( i = 0; i < *((_DWORD *)a1 + 10); ++i )
  {
    if ( ShouldGenerateMessagesForNode(a1, (const struct tagPOINTERINFONODE *)v7, a7)
      && (*(_DWORD *)v7 & 0x1000) == 0
      && (a5 & *(_DWORD *)(v7 + 68)) == a5
      && (a6 & *(_DWORD *)(v7 + 68)) == 0
      && (*(_DWORD *)v7 & 0x80000) == 0 )
    {
      GeneratePointerMessage((const struct tagPOINTERINFONODE *)v7, *(_QWORD *)(v7 + 16), 0, a2, a3, a4, 0LL);
    }
    v7 += 216LL;
  }
}
