/*
 * XREFs of WdipSemSqmLogTimeoutDataPoints @ 0x1407A2260
 * Callers:
 *     WdipSemLogTimeoutInformation @ 0x1407A1A38 (WdipSemLogTimeoutInformation.c)
 * Callees:
 *     WdipSemGetGuidKey @ 0x1407A1E48 (WdipSemGetGuidKey.c)
 *     WdipSemSqmAddToStream @ 0x1407A2004 (WdipSemSqmAddToStream.c)
 */

NTSTATUS __fastcall WdipSemSqmLogTimeoutDataPoints(__int64 a1, int a2)
{
  NTSTATUS result; // eax
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF
  int v5; // [rsp+34h] [rbp+Ch]

  v4 = 0;
  if ( !a1 )
    return -1073741811;
  result = WdipSemGetGuidKey(a1, &v4);
  if ( result >= 0 )
  {
    v5 = a2;
    return WdipSemSqmAddToStream(1054, 2u, (ULONGLONG)&v4);
  }
  return result;
}
