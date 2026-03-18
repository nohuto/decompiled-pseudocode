/*
 * XREFs of PnpCompareMultiSz @ 0x14073949C
 * Callers:
 *     PiSwDoesCreateChangesRequireReEnum @ 0x140735320 (PiSwDoesCreateChangesRequireReEnum.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14073F390 (PiCreateDriverSwDeviceCallback.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x140557CF0 (RtlCompareUnicodeStrings.c)
 *     PnpGetMultiSzLength @ 0x1406481FC (PnpGetMultiSzLength.c)
 */

bool __fastcall PnpCompareMultiSz(PCWCH String1, PCWCH String2)
{
  char v4; // bl
  SIZE_T String2Length[3]; // [rsp+30h] [rbp-18h] BYREF
  SIZE_T String1Length; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0;
  if ( (int)PnpGetMultiSzLength((__int64)String1, 0x7FFFFFFFLL, &String1Length) >= 0
    && (int)PnpGetMultiSzLength((__int64)String2, 0x7FFFFFFFLL, String2Length) >= 0
    && String1Length == String2Length[0] )
  {
    return RtlCompareUnicodeStrings(String1, String1Length, String2, String2Length[0], 1u) == 0;
  }
  return v4;
}
