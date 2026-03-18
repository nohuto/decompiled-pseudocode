/*
 * XREFs of xxxUpdateClientRect @ 0x1C020BD50
 * Callers:
 *     <none>
 * Callees:
 *     xxxCalcClientRect @ 0x1C0040AB0 (xxxCalcClientRect.c)
 */

__int64 __fastcall xxxUpdateClientRect(__int64 a1)
{
  __int64 result; // rax
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(_OWORD *)(a1 + 128);
  xxxCalcClientRect(a1, &v3, 0);
  result = 1LL;
  *(_OWORD *)(a1 + 144) = v3;
  return result;
}
