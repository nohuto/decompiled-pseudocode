/*
 * XREFs of ApiSetSetContactBoundary @ 0x1C013DC60
 * Callers:
 *     RIMAddSimulatedPointerDeviceData @ 0x1C0105A80 (RIMAddSimulatedPointerDeviceData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetSetContactBoundary(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = IsSetContactBoundarySupported();
  if ( (int)result >= 0 )
    return SetContactBoundary(a1, a2, a3, 0LL, 0);
  return result;
}
