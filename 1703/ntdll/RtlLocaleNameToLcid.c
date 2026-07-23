/*
 * XREFs of RtlLocaleNameToLcid @ 0x180046220
 * Callers:
 *     RtlCultureNameToLCID @ 0x180045FF0 (RtlCultureNameToLCID.c)
 *     RtlLoadString @ 0x1800753A0 (RtlLoadString.c)
 *     sub_180088CF8 @ 0x180088CF8 (sub_180088CF8.c)
 * Callees:
 *     sub_1800462C0 @ 0x1800462C0 (sub_1800462C0.c)
 *     sub_180080990 @ 0x180080990 (sub_180080990.c)
 *     sub_1800F5104 @ 0x1800F5104 (sub_1800F5104.c)
 *     sub_1800F546C @ 0x1800F546C (sub_1800F546C.c)
 *     sub_1800F5558 @ 0x1800F5558 (sub_1800F5558.c)
 *     sub_1800F5630 @ 0x1800F5630 (sub_1800F5630.c)
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
  v6 = qword_18015C278;
  if ( qword_18015C278 )
  {
LABEL_5:
    v7 = sub_1800462C0(LocaleName);
    if ( v7 >= 0 )
    {
      if ( (v3 & 2) != 0
        || (_mm_lfence(),
            v6 = qword_18015C278,
            (*(_BYTE *)(*(unsigned __int16 *)(qword_18015C278 + 56)
                      * *(unsigned __int16 *)(*(_QWORD *)(qword_18015C278 + 32) + 8LL * v7 + 2)
                      + *(_QWORD *)(qword_18015C278 + 16)
                      + 24LL) & 1) != 0) )
      {
        *lcid = *(_DWORD *)(*(_QWORD *)(v6 + 32) + 8LL * v7 + 4) & 0x7FFFFFFF;
        return 0;
      }
      return -1073741585;
    }
    if ( (unsigned __int8)sub_1800F546C(LocaleName) )
    {
      if ( (v3 & 1) != 0 && (unsigned __int8)sub_1800F5558(LocaleName) )
      {
        *lcid = 5120;
        return 0;
      }
      if ( (unsigned __int8)sub_1800F5630(LocaleName) )
      {
        *lcid = 3072;
        return 0;
      }
      if ( (v3 & 2) != 0 || (int)sub_1800F5104(LocaleName, 0LL, 0LL, 0LL) >= 0 )
      {
        *lcid = 4096;
        return 0;
      }
      return -1073741823;
    }
    return -1073741585;
  }
  if ( (unsigned __int8)sub_180080990() )
  {
    v6 = qword_18015C278;
    goto LABEL_5;
  }
  return -1073741823;
}
