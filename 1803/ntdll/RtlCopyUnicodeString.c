/*
 * XREFs of RtlCopyUnicodeString @ 0x18001F9C0
 * Callers:
 *     sub_18000499C @ 0x18000499C (sub_18000499C.c)
 *     LdrGetDllFullName @ 0x18001F910 (LdrGetDllFullName.c)
 *     RtlConvertSidToUnicodeString @ 0x180036C30 (RtlConvertSidToUnicodeString.c)
 *     sub_180040650 @ 0x180040650 (sub_180040650.c)
 *     sub_1800410D4 @ 0x1800410D4 (sub_1800410D4.c)
 *     RtlCanonicalizeDomainName @ 0x180067E20 (RtlCanonicalizeDomainName.c)
 *     LdrGetDllDirectory @ 0x18007E280 (LdrGetDllDirectory.c)
 *     sub_1800D5B04 @ 0x1800D5B04 (sub_1800D5B04.c)
 * Callees:
 *     memmove @ 0x1800A1380 (memmove.c)
 */

void __fastcall RtlCopyUnicodeString(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned int v3; // eax
  __int64 v4; // rsi
  const void *v5; // rdx
  void *v6; // rcx
  unsigned __int64 v7; // rdi

  if ( a2 )
  {
    v3 = *a2;
    v4 = *((_QWORD *)a1 + 1);
    if ( (unsigned __int16)v3 > a1[1] )
      v3 = a1[1];
    v5 = (const void *)*((_QWORD *)a2 + 1);
    v6 = (void *)*((_QWORD *)a1 + 1);
    *a1 = v3;
    v7 = v3;
    memmove(v6, v5, v3);
    if ( (unsigned __int64)*a1 + 2 <= a1[1] )
      *(_WORD *)(v4 + 2 * (v7 >> 1)) = 0;
  }
  else
  {
    *a1 = 0;
  }
}
