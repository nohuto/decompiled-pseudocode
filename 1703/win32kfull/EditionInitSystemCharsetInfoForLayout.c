/*
 * XREFs of EditionInitSystemCharsetInfoForLayout @ 0x1C0114920
 * Callers:
 *     <none>
 * Callees:
 *     xxxClientGetCharsetInfo @ 0x1C01149AC (xxxClientGetCharsetInfo.c)
 */

__int64 __fastcall EditionInitSystemCharsetInfoForLayout(__int64 a1, __int64 a2)
{
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  DWORD DefaultLocaleId; // [rsp+40h] [rbp+8h] BYREF
  ULONG Value; // [rsp+50h] [rbp+18h] BYREF

  if ( !gSystemFS )
  {
    ZwQueryDefaultLocale(0, &DefaultLocaleId);
    if ( (unsigned int)xxxClientGetCharsetInfo(DefaultLocaleId, a2) )
    {
      gSystemFS = *(_DWORD *)(a2 + 24);
      gSystemCPCharSet = *(_BYTE *)a2;
    }
    else
    {
      gSystemFS = 0xFFFF;
      gSystemCPCharSet = 0;
    }
  }
  RtlInitUnicodeString(&DestinationString, (PCWSTR)(a1 + 8));
  RtlUnicodeStringToInteger(&DestinationString, 0x10u, &Value);
  return xxxClientGetCharsetInfo(Value, a2);
}
