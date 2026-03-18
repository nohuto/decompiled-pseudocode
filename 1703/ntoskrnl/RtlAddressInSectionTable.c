/*
 * XREFs of RtlAddressInSectionTable @ 0x140012DC0
 * Callers:
 *     RtlpImageDirectoryEntryToData32 @ 0x140012D24 (RtlpImageDirectoryEntryToData32.c)
 *     RtlpImageDirectoryEntryToData64 @ 0x14008BADC (RtlpImageDirectoryEntryToData64.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x14042A100 (LdrpAccessResourceDataNoMultipleLanguage.c)
 * Callees:
 *     RtlSectionTableFromVirtualAddress @ 0x140012E20 (RtlSectionTableFromVirtualAddress.c)
 */

__int64 __fastcall RtlAddressInSectionTable(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v5; // rax

  v3 = a3;
  v5 = RtlSectionTableFromVirtualAddress();
  if ( v5
    && (a2 >= 0x7FFFFFFEFFFFLL
     || v3 + a2 + *(unsigned int *)(v5 + 20) - (unsigned __int64)*(unsigned int *)(v5 + 12) < 0x7FFFFFFEFFFFLL) )
  {
    return v3 + a2 + *(unsigned int *)(v5 + 20) - (unsigned __int64)*(unsigned int *)(v5 + 12);
  }
  else
  {
    return 0LL;
  }
}
