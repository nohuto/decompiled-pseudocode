/*
 * XREFs of PopAvlGetPowerRequestKey @ 0x1404E7C68
 * Callers:
 *     PopAvlFindOrMakeStatsForPowerRequest @ 0x1404E7B74 (PopAvlFindOrMakeStatsForPowerRequest.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     RtlInitString @ 0x140120030 (RtlInitString.c)
 *     PopUnicodeStringDeepCopy @ 0x1404E6130 (PopUnicodeStringDeepCopy.c)
 *     PopAnsiStringToUnicodeString @ 0x14059B0A8 (PopAnsiStringToUnicodeString.c)
 */

NTSTATUS __fastcall PopAvlGetPowerRequestKey(__int64 a1, UNICODE_STRING *a2)
{
  __int64 v2; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  STRING *p_DestinationString; // rdx
  __int64 v8; // rdx
  const WCHAR *v9; // rdx
  STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a1 + 80);
  if ( !*(_DWORD *)v2 )
  {
    v4 = *(_QWORD *)(v2 + 8);
    if ( v4 )
    {
      v5 = *(_QWORD *)(v4 + 8);
      if ( v5 )
      {
        p_DestinationString = (STRING *)(v5 + 56);
        return PopUnicodeStringDeepCopy(a2, (PCUNICODE_STRING)p_DestinationString);
      }
    }
    v9 = UNIDENTIFIED_DRIVER;
LABEL_9:
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString, v9);
    p_DestinationString = &DestinationString;
    return PopUnicodeStringDeepCopy(a2, (PCUNICODE_STRING)p_DestinationString);
  }
  v8 = *(_QWORD *)(v2 + 8);
  if ( !v8 )
  {
    v9 = UNIDENTIFIED_PROCESS;
    goto LABEL_9;
  }
  RtlInitString(&DestinationString, (PCSZ)(v8 + 1104));
  return PopAnsiStringToUnicodeString(a2, &DestinationString);
}
