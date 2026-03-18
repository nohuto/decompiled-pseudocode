/*
 * XREFs of ?NlsRomanToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C012BAE0
 * Callers:
 *     <none>
 * Callees:
 *     xxxKeyEvent @ 0x1C0055EB0 (xxxKeyEvent.c)
 *     ?NlsClearKeyStateToggle@@YAXE@Z @ 0x1C012B414 (-NlsClearKeyStateToggle@@YAXE@Z.c)
 *     ?NlsGetCurrentInputMode@@YAEPEAE@Z @ 0x1C012B5C4 (-NlsGetCurrentInputMode@@YAEPEAE@Z.c)
 */

__int64 __fastcall NlsRomanToggleProc(struct tagKE *a1, __int64 a2)
{
  __int16 v2; // di
  char CurrentInputMode; // al
  int v6; // r11d

  v2 = *((_WORD *)a1 + 1);
  if ( v2 < 0 )
    return 0LL;
  CurrentInputMode = NlsGetCurrentInputMode(&NlsRomanMode);
  *((_WORD *)a1 + 1) = v2 & 0x8F00;
  NlsClearKeyStateToggle(CurrentInputMode);
  if ( v6 == 245 )
  {
    xxxKeyEvent(
      (CAsyncKeyEventMonitor *)(*((_WORD *)a1 + 1) | 0x80F5u),
      *(unsigned __int8 *)a1,
      *((_DWORD *)a1 + 1),
      a2,
      *((_QWORD *)a1 + 1),
      (unsigned __int16 *)a1 + 8,
      0,
      0,
      0LL);
    *((_WORD *)a1 + 1) |= 0xF6u;
  }
  else if ( v6 == 246 )
  {
    xxxKeyEvent(
      (CAsyncKeyEventMonitor *)(*((_WORD *)a1 + 1) | 0x80F6u),
      *(unsigned __int8 *)a1,
      *((_DWORD *)a1 + 1),
      a2,
      *((_QWORD *)a1 + 1),
      (unsigned __int16 *)a1 + 8,
      0,
      0,
      0LL);
    *((_WORD *)a1 + 1) |= 0xF5u;
  }
  return 1LL;
}
