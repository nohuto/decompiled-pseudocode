/*
 * XREFs of RtlLocaleNameToLcid @ 0x180037850
 * Callers:
 *     RtlLoadString @ 0x180031360 (RtlLoadString.c)
 *     RtlCultureNameToLCID @ 0x1800367F0 (RtlCultureNameToLCID.c)
 *     sub_18007EC88 @ 0x18007EC88 (sub_18007EC88.c)
 * Callees:
 *     sub_1800378F0 @ 0x1800378F0 (sub_1800378F0.c)
 *     sub_18007C3E8 @ 0x18007C3E8 (sub_18007C3E8.c)
 *     sub_180085FA8 @ 0x180085FA8 (sub_180085FA8.c)
 *     sub_1800F2694 @ 0x1800F2694 (sub_1800F2694.c)
 *     sub_1800F29FC @ 0x1800F29FC (sub_1800F29FC.c)
 *     sub_1800F2AD4 @ 0x1800F2AD4 (sub_1800F2AD4.c)
 */

NTSTATUS __cdecl RtlLocaleNameToLcid(PCWSTR LocaleName, PLCID lcid, ULONG Flags)
{
  char v3; // bp
  __int64 v6; // rdi
  int v7; // eax

  v3 = Flags;
  if ( !LocaleName )
    return -1073741585;
  if ( !lcid )
    return -1073741584;
  if ( (Flags & 0xFFFFFFFC) != 0 )
    return -1073741583;
  v6 = qword_18015D2B8;
  if ( qword_18015D2B8 )
    goto LABEL_5;
  if ( (unsigned __int8)sub_18007C3E8() )
  {
    v6 = qword_18015D2B8;
LABEL_5:
    v7 = sub_1800378F0(LocaleName);
    if ( v7 >= 0 )
    {
      if ( (v3 & 2) != 0
        || (_mm_lfence(),
            v6 = qword_18015D2B8,
            (*(_BYTE *)(*(unsigned __int16 *)(qword_18015D2B8 + 56)
                      * *(unsigned __int16 *)(*(_QWORD *)(qword_18015D2B8 + 32) + 8LL * v7 + 2)
                      + *(_QWORD *)(qword_18015D2B8 + 16)
                      + 24LL) & 1) != 0) )
      {
        *lcid = *(_DWORD *)(*(_QWORD *)(v6 + 32) + 8LL * v7 + 4) & 0x7FFFFFFF;
        return 0;
      }
      return -1073741585;
    }
    if ( !(unsigned __int8)sub_180085FA8(LocaleName) )
      return -1073741585;
    if ( (v3 & 1) != 0 && (unsigned __int8)sub_1800F29FC(LocaleName) )
    {
      *lcid = 5120;
      return 0;
    }
    if ( (unsigned __int8)sub_1800F2AD4(LocaleName) )
    {
      *lcid = 3072;
      return 0;
    }
    if ( (v3 & 2) != 0 || (int)sub_1800F2694(LocaleName, 0LL, 0LL, 0LL) >= 0 )
    {
      *lcid = 4096;
      return 0;
    }
  }
  return -1073741823;
}
