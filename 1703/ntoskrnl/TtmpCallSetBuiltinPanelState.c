/*
 * XREFs of TtmpCallSetBuiltinPanelState @ 0x1406D74B8
 * Callers:
 *     TtmpPushTerminalState @ 0x1406D7B20 (TtmpPushTerminalState.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     PoSessionBuiltinPanelState @ 0x140236DD0 (PoSessionBuiltinPanelState.c)
 *     TtmpStartCallout @ 0x1406D7C4C (TtmpStartCallout.c)
 *     TtmpStopCallout @ 0x1406D7D40 (TtmpStopCallout.c)
 */

__int64 __fastcall TtmpCallSetBuiltinPanelState(int *a1, __int64 a2, unsigned int a3)
{
  int v4; // ebx
  __int64 result; // rax
  _BYTE v7[56]; // [rsp+30h] [rbp-38h] BYREF

  v4 = a2;
  if ( *(_DWORD *)(a2 + 16) == 1 )
  {
    result = *(unsigned int *)(a2 + 72);
    if ( (result & 1) != 0 )
    {
      memset(v7, 0, 0x28uLL);
      TtmpStartCallout((unsigned int)v7, (_DWORD)a1, v4, 5, (__int64)PoSessionBuiltinPanelState, a3);
      PoSessionBuiltinPanelState(a3, *a1);
      return TtmpStopCallout(v7, 0LL);
    }
  }
  return result;
}
