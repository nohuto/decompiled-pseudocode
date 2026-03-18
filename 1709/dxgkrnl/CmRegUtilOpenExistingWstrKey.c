/*
 * XREFs of CmRegUtilOpenExistingWstrKey @ 0x1C010F068
 * Callers:
 *     PpRegStateReadCreateClassCreationSettings @ 0x1C010E9F8 (PpRegStateReadCreateClassCreationSettings.c)
 *     PiRegStateOpenClassKey @ 0x1C010ECB8 (PiRegStateOpenClassKey.c)
 * Callees:
 *     WdmlibRtlInitUnicodeStringEx @ 0x1C0012398 (WdmlibRtlInitUnicodeStringEx.c)
 *     CmRegUtilOpenExistingUcKey @ 0x1C010F09C (CmRegUtilOpenExistingUcKey.c)
 */

NTSTATUS __fastcall CmRegUtilOpenExistingWstrKey(__int64 a1, const WCHAR *a2)
{
  NTSTATUS result; // eax
  unsigned int v3; // r10d
  __int64 v4; // r11
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  result = WdmlibRtlInitUnicodeStringEx(&DestinationString, a2);
  if ( result >= 0 )
    return CmRegUtilOpenExistingUcKey(v4, &DestinationString, v3);
  return result;
}
