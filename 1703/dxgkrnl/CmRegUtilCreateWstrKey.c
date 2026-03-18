/*
 * XREFs of CmRegUtilCreateWstrKey @ 0x1C011A984
 * Callers:
 *     PpRegStateUpdateStackCreationSettings @ 0x1C011A458 (PpRegStateUpdateStackCreationSettings.c)
 *     PiRegStateOpenClassKey @ 0x1C011AA78 (PiRegStateOpenClassKey.c)
 * Callees:
 *     WdmlibRtlInitUnicodeStringEx @ 0x1C0011844 (WdmlibRtlInitUnicodeStringEx.c)
 *     CmRegUtilCreateUcKey @ 0x1C011A9D8 (CmRegUtilCreateUcKey.c)
 */

NTSTATUS __fastcall CmRegUtilCreateWstrKey(
        __int64 a1,
        const WCHAR *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  NTSTATUS result; // eax
  int v8; // r8d
  int v9; // r9d
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  result = WdmlibRtlInitUnicodeStringEx(&DestinationString, a2);
  if ( result >= 0 )
    return CmRegUtilCreateUcKey(v9, (unsigned int)&DestinationString, v8, v9, a5, a6, a7);
  return result;
}
