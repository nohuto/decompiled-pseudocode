/*
 * XREFs of ?NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C012B320
 * Callers:
 *     <none>
 * Callees:
 *     xxxKeyEvent @ 0x1C0055EB0 (xxxKeyEvent.c)
 *     ?NlsClearKeyStateToggle@@YAXE@Z @ 0x1C012B414 (-NlsClearKeyStateToggle@@YAXE@Z.c)
 *     ?NlsGetCurrentInputMode@@YAEPEAE@Z @ 0x1C012B5C4 (-NlsGetCurrentInputMode@@YAEPEAE@Z.c)
 *     ?NlsTestKeyStateToggle@@YAHE@Z @ 0x1C012BD60 (-NlsTestKeyStateToggle@@YAHE@Z.c)
 *     NlsKbdSendIMEProc @ 0x1C012C06C (NlsKbdSendIMEProc.c)
 */

__int64 __fastcall NlsAlphanumericModeProc(struct tagKE *a1, __int64 a2)
{
  __int16 v2; // r8
  __int16 v5; // r8
  unsigned __int8 CurrentInputMode; // al
  __int16 v7; // r11

  v2 = *((_WORD *)a1 + 1);
  if ( v2 < 0 )
    return 0LL;
  *((_WORD *)a1 + 1) = v2 & 0x8F00;
  if ( !(unsigned int)NlsTestKeyStateToggle(0xF0u) )
  {
    CurrentInputMode = NlsGetCurrentInputMode(&NlsAlphaNumMode);
    NlsClearKeyStateToggle(CurrentInputMode);
    xxxKeyEvent(
      (CAsyncKeyEventMonitor *)((unsigned __int16)(*((_WORD *)a1 + 1) | v7) | 0x8000u),
      *(unsigned __int8 *)a1,
      *((_DWORD *)a1 + 1),
      a2,
      *((_QWORD *)a1 + 1),
      (unsigned __int16 *)a1 + 8,
      0,
      0,
      0LL);
    v5 = *((_WORD *)a1 + 1);
  }
  *((_WORD *)a1 + 1) = v5 | 0xF0;
  if ( !gdwIMEOpenStatus )
  {
    if ( (unsigned int)NlsTestKeyStateToggle(0x15u) )
      NlsKbdSendIMEProc(1LL, 2LL);
  }
  return 1LL;
}
