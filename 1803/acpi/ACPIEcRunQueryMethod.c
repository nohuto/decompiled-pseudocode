/*
 * XREFs of ACPIEcRunQueryMethod @ 0x1C00225DC
 * Callers:
 *     ACPIEcDispatchQueries @ 0x1C002248C (ACPIEcDispatchQueries.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0002B24 (AMLIGetNamedChild.c)
 *     ACPIEcCompleteQueryMethod @ 0x1C0022420 (ACPIEcCompleteQueryMethod.c)
 *     AMLIAsyncEvalObject @ 0x1C004321C (AMLIAsyncEvalObject.c)
 */

__int64 __fastcall ACPIEcRunQueryMethod(__int64 a1, unsigned int a2)
{
  __int64 *v3; // rsi
  unsigned int v4; // ebx

  v3 = AMLIGetNamedChild(
         *(_QWORD **)(a1 + 56),
         (((unsigned __int8)HexDigit[(unsigned __int64)a2 >> 4] | ((unsigned __int8)HexDigit[a2 & 0xF] << 8)) << 16) | 0x515Fu);
  if ( v3 )
  {
    v4 = AMLIAsyncEvalObject(v3, 0LL, 0LL, 0LL, ACPIEcCompleteQueryMethod, a1);
    AMLIDereferenceHandleEx((volatile signed __int32 *)v3);
  }
  else
  {
    v4 = -1073741772;
  }
  if ( v4 != 259 )
    ACPIEcCompleteQueryMethod(0LL, v4, 0LL, a1);
  return v4;
}
