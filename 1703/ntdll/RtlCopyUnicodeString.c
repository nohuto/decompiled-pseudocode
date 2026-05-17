/*
 * XREFs of RtlCopyUnicodeString @ 0x180044A30
 * Callers:
 *     RtlConvertSidToUnicodeString @ 0x180044360 (RtlConvertSidToUnicodeString.c)
 *     sub_18004A3B4 @ 0x18004A3B4 (sub_18004A3B4.c)
 *     sub_18004BD40 @ 0x18004BD40 (sub_18004BD40.c)
 *     sub_180050FCC @ 0x180050FCC (sub_180050FCC.c)
 *     RtlCanonicalizeDomainName @ 0x180069AC0 (RtlCanonicalizeDomainName.c)
 *     LdrGetDllFullName @ 0x18007AD40 (LdrGetDllFullName.c)
 *     LdrGetDllDirectory @ 0x180082570 (LdrGetDllDirectory.c)
 *     sub_1800DC344 @ 0x1800DC344 (sub_1800DC344.c)
 * Callees:
 *     memmove @ 0x1800ABA80 (memmove.c)
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
