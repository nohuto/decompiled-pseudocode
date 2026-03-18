/*
 * XREFs of SetDebugHotKeys @ 0x1C0124F28
 * Callers:
 *     RawInputThread @ 0x1C0087D60 (RawInputThread.c)
 * Callees:
 *     _RegisterHotKey @ 0x1C0052DB4 (_RegisterHotKey.c)
 */

_BOOL8 SetDebugHotKeys()
{
  unsigned int v0; // ecx
  int v1; // eax
  int v2; // eax
  unsigned __int8 v3; // cf
  ULONG_PTR BugCheckParameter2; // [rsp+20h] [rbp-18h]
  ULONG_PTR BugCheckParameter2a; // [rsp+20h] [rbp-18h]
  ULONG_PTR v7; // [rsp+40h] [rbp+8h] BYREF

  FastGetProfileDwordW(0LL, 21LL, L"UserDebuggerHotkey", 0LL, &v7, 0);
  v1 = v7;
  if ( !(_DWORD)v7 )
  {
    LOBYTE(v0) = gKeyboardInfo[0];
    if ( LOBYTE(gKeyboardInfo[0]) > 8u || (v2 = 404, v3 = _bittest(&v2, v0), v1 = 123, !v3) )
      v1 = 109;
    LODWORD(v7) = v1;
  }
  LODWORD(BugCheckParameter2) = v1;
  RegisterHotKey((struct tagWND *)1, 0LL, -5, 0, BugCheckParameter2);
  LODWORD(BugCheckParameter2a) = v7;
  return RegisterHotKey((struct tagWND *)1, 0LL, -6, 4, BugCheckParameter2a);
}
