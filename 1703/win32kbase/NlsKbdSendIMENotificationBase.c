/*
 * XREFs of NlsKbdSendIMENotificationBase @ 0x1C008BFD0
 * Callers:
 *     NlsKbdSendIMEProc @ 0x1C012E098 (NlsKbdSendIMEProc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NlsKbdSendIMENotificationBase(int a1, int a2)
{
  if ( gpKbdNlsTbl && (*(_BYTE *)(gpKbdNlsTbl + 2) & 1) != 0 )
  {
    gdwUpdateKeyboard |= 4u;
    gKbdImeStatus = 0;
    dword_1C018F50C = a1;
    dword_1C018F510 = a2;
  }
  return 1LL;
}
