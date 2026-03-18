/*
 * XREFs of xxxSendUAHMenuMessage @ 0x1C0080D50
 * Callers:
 *     xxxMenuDraw @ 0x1C007D26C (xxxMenuDraw.c)
 *     xxxPaintMenuBar @ 0x1C0080FE0 (xxxPaintMenuBar.c)
 *     xxxMenuWindowProc @ 0x1C0209E90 (xxxMenuWindowProc.c)
 *     xxxMNDrawFullNC @ 0x1C0216BF0 (xxxMNDrawFullNC.c)
 * Callees:
 *     xxxSendMessage @ 0x1C00A6110 (xxxSendMessage.c)
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
