/*
 * XREFs of RtlCopyUnicodeString @ 0x18002DA90
 * Callers:
 *     RtlConvertSidToUnicodeString @ 0x18002D250 (RtlConvertSidToUnicodeString.c)
 *     LdrpSearchPath @ 0x18004D43C (LdrpSearchPath.c)
 *     RtlCanonicalizeDomainName @ 0x18004DF70 (RtlCanonicalizeDomainName.c)
 *     RtlpComputeLangListCheckSum @ 0x18005042C (RtlpComputeLangListCheckSum.c)
 *     EtwpQueryUmLogger @ 0x1800628CC (EtwpQueryUmLogger.c)
 *     LdrGetDllFullName @ 0x180079D70 (LdrGetDllFullName.c)
 *     LdrGetDllDirectory @ 0x180081100 (LdrGetDllDirectory.c)
 *     AvrfMiniLoadDll @ 0x1800DB92C (AvrfMiniLoadDll.c)
 * Callees:
 *     memmove @ 0x1800A6940 (memmove.c)
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
