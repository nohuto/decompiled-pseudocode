/*
 * XREFs of EditionSynthesizeMouseWheel @ 0x1C01BAD80
 * Callers:
 *     <none>
 * Callees:
 *     xxxSendInput @ 0x1C009CEF0 (xxxSendInput.c)
 */

__int64 __fastcall EditionSynthesizeMouseWheel(__int128 *a1)
{
  __int128 v1; // xmm0
  __int128 v2; // xmm1
  int v4; // [rsp+20h] [rbp-38h] BYREF
  __int128 v5; // [rsp+28h] [rbp-30h]
  __int128 v6; // [rsp+38h] [rbp-20h]

  v1 = *a1;
  v4 = 0;
  v2 = a1[1];
  v5 = v1;
  v6 = v2;
  return xxxSendInput(1u, (__int64)&v4);
}
