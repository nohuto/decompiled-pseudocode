/*
 * XREFs of _UnregisterHotKey @ 0x1C00BCF40
 * Callers:
 *     NtUserUnregisterHotKey @ 0x1C00BCEC0 (NtUserUnregisterHotKey.c)
 *     _RegisterWindowArrangementCallout @ 0x1C00F66E0 (_RegisterWindowArrangementCallout.c)
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?FindHotKey@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@HIIHPEAPEAUtagHOTKEY@@@Z @ 0x1C00BD31C (-FindHotKey@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@HIIHPEAPEAUtagHOTKEY@@@Z.c)
 */

__int64 __fastcall UnregisterHotKey(struct tagWND *a1, int a2)
{
  struct tagHOTKEY *v3; // [rsp+60h] [rbp+18h] BYREF

  if ( (unsigned int)FindHotKey(gptiCurrent, a1, a2, 0, 0, 1, &v3) )
  {
    qword_1C032C3A8 = 0LL;
    return 1LL;
  }
  else
  {
    UserSetLastError(1419LL);
    return 0LL;
  }
}
