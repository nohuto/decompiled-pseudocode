/*
 * XREFs of vComputeSpecialChars @ 0x1C0236744
 * Callers:
 *     vBmfdFill_IFIMETRICS @ 0x1C02360A0 (vBmfdFill_IFIMETRICS.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall vComputeSpecialChars(_BYTE *a1, WCHAR *a2, WCHAR *a3)
{
  char v3; // r9
  CHAR MultiByteString; // [rsp+40h] [rbp+8h] BYREF
  CHAR v7; // [rsp+58h] [rbp+20h] BYREF

  v3 = a1[4];
  MultiByteString = v3 + a1[6];
  v7 = v3 + a1[7];
  RtlMultiByteToUnicodeN(a2, 2u, 0LL, &MultiByteString, 1u);
  return RtlMultiByteToUnicodeN(a3, 2u, 0LL, &v7, 1u);
}
