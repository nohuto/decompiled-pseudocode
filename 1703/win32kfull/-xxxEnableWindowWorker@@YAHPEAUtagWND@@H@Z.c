/*
 * XREFs of ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C00B78BC
 * Callers:
 *     xxxEnableWindow @ 0x1C00B7870 (xxxEnableWindow.c)
 *     xxxDisableImmersiveOwner @ 0x1C01D2B6C (xxxDisableImmersiveOwner.c)
 * Callees:
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     xxxSendMessage @ 0x1C00509B0 (xxxSendMessage.c)
 *     xxxWindowEvent @ 0x1C005A820 (xxxWindowEvent.c)
 *     xxxSetFocus @ 0x1C00B507C (xxxSetFocus.c)
 */

__int64 __fastcall xxxEnableWindowWorker(struct tagWND *a1, int a2)
{
  unsigned int v2; // esi
  unsigned int v5; // edi
  int v6; // esi

  v2 = *((unsigned __int8 *)a1 + 71);
  v5 = *((_BYTE *)a1 + 71) & 8;
  if ( a2 )
  {
    v6 = *((_BYTE *)a1 + 71) & 8;
    SetOrClrWF(0, a1, 0xF08u, 1);
    *((_BYTE *)a1 + 306) &= ~1u;
  }
  else
  {
    LOBYTE(v2) = ~(_BYTE)v2;
    v6 = (v2 >> 3) & 1;
    xxxSendMessage((int)a1, 31, 0, 0);
    if ( a1 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 384LL) + 80LL) )
      xxxSetFocus(0LL, 0LL);
    SetOrClrWF(1, a1, 0xF08u, 1);
  }
  if ( v6 )
  {
    xxxWindowEvent(0x800Au, (__int64 *)a1, 0, 0, 0);
    xxxSendMessage((int)a1, 10, a2, 0);
  }
  return v5;
}
