/*
 * XREFs of sub_18006E740 @ 0x18006E740
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180032530 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008A690 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlpSetUserPreferredUILanguages @ 0x1800E9D60 (RtlpSetUserPreferredUILanguages.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     sub_180031FD4 @ 0x180031FD4 (sub_180031FD4.c)
 *     RtlpMuiFreeLangRegistryInfo @ 0x18006E920 (RtlpMuiFreeLangRegistryInfo.c)
 *     sub_18006ECB4 @ 0x18006ECB4 (sub_18006ECB4.c)
 */

__int64 sub_18006E740()
{
  int v0; // ebx
  _QWORD *v1; // rax
  PVOID BaseAddress; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  if ( !qword_18015D000 || *((_DWORD *)qword_18015D000 + 3) != MEMORY[0x7FFE03A4] )
  {
    BaseAddress = 0LL;
    v0 = sub_18006ECB4(&BaseAddress);
    if ( v0 >= 0 )
    {
      sub_180031FD4();
      RtlEnterCriticalSection(&stru_18015ABE0);
      if ( qword_18015D000 && *((_DWORD *)qword_18015D000 + 3) == MEMORY[0x7FFE03A4] )
      {
        RtlpMuiFreeLangRegistryInfo(BaseAddress);
      }
      else
      {
        v1 = BaseAddress;
        *((_QWORD *)BaseAddress + 13) = qword_18015D000;
        if ( qword_18015D000 )
          v1[9] = *((_QWORD *)qword_18015D000 + 9);
        qword_18015D000 = v1;
      }
      RtlLeaveCriticalSection(&stru_18015ABE0);
    }
  }
  return (unsigned int)v0;
}
