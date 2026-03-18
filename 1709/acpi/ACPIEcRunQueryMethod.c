/*
 * XREFs of ACPIEcRunQueryMethod @ 0x1C004C324
 * Callers:
 *     ACPIEcDispatchQueries @ 0x1C004C1CC (ACPIEcDispatchQueries.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002108 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0003F20 (AMLIGetNamedChild.c)
 *     AMLIAsyncEvalObject @ 0x1C001A5F8 (AMLIAsyncEvalObject.c)
 *     ACPIEcCompleteQueryMethod @ 0x1C004C160 (ACPIEcCompleteQueryMethod.c)
 */

__int64 __fastcall ACPIEcRunQueryMethod(__int64 a1, unsigned int a2)
{
  __int64 *v3; // rsi
  unsigned int v4; // ebx

  v3 = AMLIGetNamedChild(
         *(__int64 **)(a1 + 56),
         (((unsigned __int8)HexDigit[(unsigned __int64)a2 >> 4] | ((unsigned __int8)HexDigit[a2 & 0xF] << 8)) << 16) | 0x515Fu);
  if ( v3 )
  {
    v4 = AMLIAsyncEvalObject(v3, 0LL, 0, 0LL, ACPIEcCompleteQueryMethod, a1);
    AMLIDereferenceHandleEx((__int64)v3);
  }
  else
  {
    v4 = -1073741772;
  }
  if ( v4 != 259 )
    ACPIEcCompleteQueryMethod(0LL, v4, 0LL, a1);
  return v4;
}
