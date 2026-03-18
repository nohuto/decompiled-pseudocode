/*
 * XREFs of xxxBroadcastImeShowStatusChange @ 0x1C01C1BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z @ 0x1C01C14E4 (-xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxBroadcastImeShowStatusChange(__int64 a1, int a2)
{
  if ( (*(_WORD *)(a1 + 82) & 0x3FFF) == 0x2A9 )
  {
    gfIMEShowStatus = a2 != 0;
    xxxNotifyImeShowStatus((struct tagWND *)a1);
  }
  return 1LL;
}
