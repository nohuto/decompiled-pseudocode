/*
 * XREFs of HvpViewMapTouchPages @ 0x140512FBC
 * Callers:
 *     HvpViewMapMakeViewRangeValid @ 0x140497274 (HvpViewMapMakeViewRangeValid.c)
 *     HvpViewMapMakeViewRangeCOWByCaller @ 0x140513BA8 (HvpViewMapMakeViewRangeCOWByCaller.c)
 * Callees:
 *     HvpInpageErrorFilter @ 0x140706C4C (HvpInpageErrorFilter.c)
 */

__int64 __fastcall HvpViewMapTouchPages(_BYTE *a1, __int64 a2)
{
  _BYTE *v2; // r8
  _BYTE *v4; // [rsp+20h] [rbp-18h]

  v4 = a1;
  v2 = &a1[a2];
  while ( a1 < v2 )
  {
    *v4 = *a1;
    a1 = v4 + 4096;
    v4 += 4096;
  }
  return 0LL;
}
