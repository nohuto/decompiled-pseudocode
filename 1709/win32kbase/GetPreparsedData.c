/*
 * XREFs of GetPreparsedData @ 0x1C00128FC
 * Callers:
 *     RIMGetPointerDeviceProperties @ 0x1C0012420 (RIMGetPointerDeviceProperties.c)
 *     RIMExtractPointerPropertyValues @ 0x1C0106F10 (RIMExtractPointerPropertyValues.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0012E00 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall GetPreparsedData(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rbx
  __int64 v4; // rax
  unsigned int v5; // r8d
  __int64 v6; // rcx

  v2 = a2;
  LOBYTE(a2) = 19;
  v4 = HMValidateHandleNoSecure(*(_QWORD *)(a1 + 696), a2);
  v5 = 0;
  if ( v4 )
    v6 = *(_QWORD *)(*(_QWORD *)(v4 + 456) + 16LL);
  else
    v6 = *(_QWORD *)(a1 + 840);
  *v2 = v6;
  LOBYTE(v5) = v6 != 0;
  return v5;
}
