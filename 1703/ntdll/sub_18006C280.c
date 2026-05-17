/*
 * XREFs of sub_18006C280 @ 0x18006C280
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180040520 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008EA60 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlpSetUserPreferredUILanguages @ 0x1800EDFA0 (RtlpSetUserPreferredUILanguages.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     RtlpMuiFreeLangRegistryInfo @ 0x18006C440 (RtlpMuiFreeLangRegistryInfo.c)
 *     RtlpInitializeLangRegistryInfo @ 0x18006CE80 (RtlpInitializeLangRegistryInfo.c)
 *     sub_18006E3A0 @ 0x18006E3A0 (sub_18006E3A0.c)
 */

__int64 sub_18006C280()
{
  int v0; // ebx
  __int64 v1; // rdx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  if ( !qword_18015BF90 || *(_DWORD *)(qword_18015BF90 + 12) != MEMORY[0x7FFE03A4] )
  {
    v3 = 0LL;
    v0 = RtlpInitializeLangRegistryInfo(&v3);
    if ( v0 >= 0 )
    {
      sub_18006E3A0();
      RtlEnterCriticalSection((__int64)&unk_180159BA0);
      if ( qword_18015BF90 && *(_DWORD *)(qword_18015BF90 + 12) == MEMORY[0x7FFE03A4] )
      {
        RtlpMuiFreeLangRegistryInfo(v3);
      }
      else
      {
        v1 = v3;
        *(_QWORD *)(v3 + 104) = qword_18015BF90;
        if ( qword_18015BF90 )
          *(_QWORD *)(v1 + 72) = *(_QWORD *)(qword_18015BF90 + 72);
        qword_18015BF90 = v1;
      }
      RtlLeaveCriticalSection((__int64)&unk_180159BA0);
    }
  }
  return (unsigned int)v0;
}
