/*
 * XREFs of xxxSendUAHInitMenuMessage @ 0x1C007D214
 * Callers:
 *     xxxMenuDraw @ 0x1C007D26C (xxxMenuDraw.c)
 *     xxxMNCompute @ 0x1C007D6E8 (xxxMNCompute.c)
 *     xxxPaintMenuBar @ 0x1C0080FE0 (xxxPaintMenuBar.c)
 * Callees:
 *     xxxSendMessage @ 0x1C00A6110 (xxxSendMessage.c)
 */

__int64 __fastcall xxxSendUAHInitMenuMessage(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  __int64 result; // rax
  _QWORD v6[2]; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+30h] [rbp-18h]

  if ( a2 )
    v6[0] = *(_QWORD *)a2;
  else
    v6[0] = 0LL;
  v4 = *(_DWORD *)(a2 + 56);
  v6[1] = a3;
  v7 = v4;
  result = xxxSendMessage(a1, 147LL, 0LL, v6);
  if ( (_DWORD)result )
    *(_DWORD *)(a2 + 56) |= 0x800u;
  else
    *(_DWORD *)(a2 + 56) &= ~0x800u;
  return result;
}
