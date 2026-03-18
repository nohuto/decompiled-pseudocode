/*
 * XREFs of NlsKbdSendIMENotificationBase @ 0x1C00921A0
 * Callers:
 *     NlsKbdSendIMEProc @ 0x1C012D678 (NlsKbdSendIMEProc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NlsKbdSendIMENotificationBase(int a1, int a2)
{
  if ( gpKbdNlsTbl && (*(_BYTE *)(gpKbdNlsTbl + 2) & 1) != 0 )
  {
    gdwUpdateKeyboard |= 4u;
    LOWORD(gKbdImeStatus) = 0;
    HIDWORD(gKbdImeStatus) = a1;
    dword_1C0195C00 = a2;
  }
  return 1LL;
}
