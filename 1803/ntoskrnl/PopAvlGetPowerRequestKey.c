/*
 * XREFs of PopAvlGetPowerRequestKey @ 0x140524CD0
 * Callers:
 *     PopAvlFindOrMakeStatsForPowerRequest @ 0x140524BE4 (PopAvlFindOrMakeStatsForPowerRequest.c)
 * Callees:
 *     RtlInitString @ 0x140076840 (RtlInitString.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     PopAnsiStringToUnicodeString @ 0x140524D84 (PopAnsiStringToUnicodeString.c)
 *     PopUnicodeStringDeepCopy @ 0x1405252C0 (PopUnicodeStringDeepCopy.c)
 */

__int64 __fastcall PopAvlGetPowerRequestKey(__int64 a1, UNICODE_STRING *a2)
{
  __int64 v2; // rax
  __int64 v4; // rdx
  __int64 v6; // rdx
  STRING *p_DestinationString; // rdx
  const WCHAR *v8; // rdx
  STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a1 + 80);
  v4 = *(_QWORD *)(v2 + 8);
  if ( *(_DWORD *)v2 )
  {
    if ( v4 )
    {
      RtlInitString(&DestinationString, (PCSZ)(v4 + 1104));
      return PopAnsiStringToUnicodeString(a2, &DestinationString);
    }
    v8 = UNIDENTIFIED_PROCESS;
    goto LABEL_9;
  }
  if ( !v4 || (v6 = *(_QWORD *)(v4 + 8)) == 0 )
  {
    v8 = UNIDENTIFIED_DRIVER;
LABEL_9:
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString, v8);
    p_DestinationString = &DestinationString;
    return PopUnicodeStringDeepCopy(a2, (PCUNICODE_STRING)p_DestinationString);
  }
  p_DestinationString = (STRING *)(v6 + 56);
  return PopUnicodeStringDeepCopy(a2, (PCUNICODE_STRING)p_DestinationString);
}
