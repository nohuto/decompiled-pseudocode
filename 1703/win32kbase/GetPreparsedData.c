/*
 * XREFs of GetPreparsedData @ 0x1C0105840
 * Callers:
 *     RIMExtractPointerPropertyValues @ 0x1C0105F90 (RIMExtractPointerPropertyValues.c)
 *     RIMGetPointerDeviceProperties @ 0x1C01063E0 (RIMGetPointerDeviceProperties.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C006F6C4 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall GetPreparsedData(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax
  unsigned int v5; // r8d
  __int64 v6; // rcx

  v4 = HMValidateHandleNoSecure(*(_QWORD *)(a1 + 712), 19);
  v5 = 0;
  if ( v4 )
    v6 = *(_QWORD *)(*(_QWORD *)(v4 + 456) + 16LL);
  else
    v6 = *(_QWORD *)(a1 + 1504);
  *a2 = v6;
  LOBYTE(v5) = v6 != 0;
  return v5;
}
