/*
 * XREFs of xxxSendUAHMenuMessage @ 0x1C000D3A0
 * Callers:
 *     xxxPaintMenuBar @ 0x1C000D23C (xxxPaintMenuBar.c)
 *     xxxMenuDraw @ 0x1C000D438 (xxxMenuDraw.c)
 *     xxxMNDrawFullNC @ 0x1C013E3E8 (xxxMNDrawFullNC.c)
 *     xxxMenuWindowProc @ 0x1C0207D70 (xxxMenuWindowProc.c)
 * Callees:
 *     xxxSendMessage @ 0x1C00509B0 (xxxSendMessage.c)
 */

__int64 __fastcall xxxSendUAHMenuMessage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  _QWORD v6[2]; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+30h] [rbp-18h]

  if ( a3 )
    v6[0] = *(_QWORD *)a3;
  else
    v6[0] = 0LL;
  v4 = *(_DWORD *)(a3 + 56);
  v6[1] = a4;
  v7 = v4;
  return xxxSendMessage(a1, a2, 0LL, v6);
}
