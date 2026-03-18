/*
 * XREFs of PnpCompareMultiSz @ 0x1406A6970
 * Callers:
 *     PiSwDoesCreateChangesRequireReEnum @ 0x1406A30E0 (PiSwDoesCreateChangesRequireReEnum.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1406AA480 (PiCreateDriverSwDeviceCallback.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x140485820 (RtlCompareUnicodeStrings.c)
 *     PnpGetMultiSzLength @ 0x1404A7B64 (PnpGetMultiSzLength.c)
 */

bool __fastcall PnpCompareMultiSz(PCWCH String1, PCWCH String2)
{
  char v4; // bl
  SIZE_T String2Length[3]; // [rsp+30h] [rbp-18h] BYREF
  SIZE_T String1Length; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0;
  if ( (int)PnpGetMultiSzLength((__int64)String1, 0x7FFFFFFFLL, (__int64 *)&String1Length) >= 0
    && (int)PnpGetMultiSzLength((__int64)String2, 0x7FFFFFFFLL, (__int64 *)String2Length) >= 0
    && String1Length == String2Length[0] )
  {
    return RtlCompareUnicodeStrings(String1, String1Length, String2, String2Length[0], 1u) == 0;
  }
  return v4;
}
