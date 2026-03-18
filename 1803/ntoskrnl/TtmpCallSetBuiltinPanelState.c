/*
 * XREFs of TtmpCallSetBuiltinPanelState @ 0x140770E98
 * Callers:
 *     TtmpPushTerminalState @ 0x140771654 (TtmpPushTerminalState.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     PoSessionBuiltinPanelState @ 0x140281F60 (PoSessionBuiltinPanelState.c)
 *     TtmpStartCallout @ 0x140771790 (TtmpStartCallout.c)
 *     TtmpStopCallout @ 0x140771884 (TtmpStopCallout.c)
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
