/*
 * XREFs of CmRegUtilWstrValueGetDword @ 0x1C00FD6D8
 * Callers:
 *     PiRegStateReadStackCreationSettingsFromKey @ 0x1C00FCE50 (PiRegStateReadStackCreationSettingsFromKey.c)
 * Callees:
 *     WdmlibRtlInitUnicodeStringEx @ 0x1C007C9A8 (WdmlibRtlInitUnicodeStringEx.c)
 *     CmRegUtilUcValueGetDword @ 0x1C00FD41C (CmRegUtilUcValueGetDword.c)
 */

int __fastcall CmRegUtilWstrValueGetDword(__int64 a1, const WCHAR *a2)
{
  int result; // eax
  __int64 v3; // r8
  _DWORD *v4; // r9
  void *v5; // r10
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  result = WdmlibRtlInitUnicodeStringEx(&DestinationString, a2);
  if ( result >= 0 )
    return CmRegUtilUcValueGetDword(v5, &DestinationString, v3, v4);
  return result;
}
