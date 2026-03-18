/*
 * XREFs of ?NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C012CF90
 * Callers:
 *     <none>
 * Callees:
 *     xxxKeyEvent @ 0x1C0010760 (xxxKeyEvent.c)
 *     ?NlsClearKeyStateToggle@@YAXE@Z @ 0x1C012CD24 (-NlsClearKeyStateToggle@@YAXE@Z.c)
 *     ?NlsGetCurrentInputMode@@YAEPEAE@Z @ 0x1C012CED4 (-NlsGetCurrentInputMode@@YAEPEAE@Z.c)
 *     ?NlsTestKeyStateToggle@@YAHE@Z @ 0x1C012D5D0 (-NlsTestKeyStateToggle@@YAHE@Z.c)
 *     NlsKbdSendIMEProc @ 0x1C012D678 (NlsKbdSendIMEProc.c)
 */

__int64 __fastcall NlsHiraganaModeProc(struct tagKE *a1, __int64 a2)
{
  __int16 v2; // ax
  unsigned __int8 CurrentInputMode; // al
  __int16 v6; // r11

  v2 = *((_WORD *)a1 + 1);
  if ( v2 < 0 )
    return 0LL;
  *((_WORD *)a1 + 1) = v2 & 0x8F00;
  if ( !(unsigned int)NlsTestKeyStateToggle(0xF2u) )
  {
    CurrentInputMode = NlsGetCurrentInputMode(&NlsAlphaNumMode);
    NlsClearKeyStateToggle(CurrentInputMode);
    xxxKeyEvent(
      (CAsyncKeyEventMonitor *)((unsigned __int16)(*((_WORD *)a1 + 1) | v6) | 0x8000u),
      *(unsigned __int8 *)a1,
      *((_DWORD *)a1 + 1),
      a2,
      *((_QWORD *)a1 + 1),
      (unsigned __int16 *)a1 + 8,
      0,
      0,
      0LL);
  }
  *((_WORD *)a1 + 1) |= 0xF2u;
  if ( !gdwIMEOpenStatus && !(unsigned int)NlsTestKeyStateToggle(0x15u) )
    NlsKbdSendIMEProc(0LL, 0LL);
  return 1LL;
}
