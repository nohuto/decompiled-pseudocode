/*
 * XREFs of ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C009DE30
 * Callers:
 *     xxxEnableWindow @ 0x1C009DF50 (xxxEnableWindow.c)
 *     xxxDisableImmersiveOwner @ 0x1C01D2E5C (xxxDisableImmersiveOwner.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C006D410 (xxxWindowEvent.c)
 *     xxxSetFocus @ 0x1C0085260 (xxxSetFocus.c)
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     xxxSendMessage @ 0x1C00A6110 (xxxSendMessage.c)
 *     ClrWFNoDwmNotify @ 0x1C01B8880 (ClrWFNoDwmNotify.c)
 *     SetWFNoDwmNotify @ 0x1C01B8908 (SetWFNoDwmNotify.c)
 */

__int64 __fastcall xxxEnableWindowWorker(struct tagWND *a1, int a2)
{
  unsigned int v2; // esi
  __int64 v4; // rbp
  unsigned int v5; // edi
  int v6; // esi

  v2 = *((unsigned __int8 *)a1 + 71);
  v4 = a2;
  v5 = *((_BYTE *)a1 + 71) & 8;
  if ( a2 )
  {
    v6 = *((_BYTE *)a1 + 71) & 8;
    if ( gbNoDwmStyleNotify )
      ClrWFNoDwmNotify(a1, 3848LL);
    else
      SetOrClrWF(0, a1, 0xF08u, 1);
    ClrWFNoDwmNotify(a1, 64001LL);
  }
  else
  {
    LOBYTE(v2) = ~(_BYTE)v2;
    v6 = (v2 >> 3) & 1;
    xxxSendMessage(a1, 31LL, 0LL, 0LL);
    if ( a1 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 408LL) + 112LL) )
      xxxSetFocus(0LL, 0LL);
    if ( gbNoDwmStyleNotify )
      SetWFNoDwmNotify(a1, 3848LL);
    else
      SetOrClrWF(1, a1, 0xF08u, 1);
  }
  if ( v6 )
  {
    xxxWindowEvent(0x800Au, (volatile signed __int32 *)a1, 0LL, 0LL, 0);
    xxxSendMessage(a1, 10LL, v4, 0LL);
  }
  return v5;
}
