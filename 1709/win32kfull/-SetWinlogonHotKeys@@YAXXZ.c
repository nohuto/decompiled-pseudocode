/*
 * XREFs of ?SetWinlogonHotKeys@@YAXXZ @ 0x1C012033C
 * Callers:
 *     RawInputThread @ 0x1C0087D60 (RawInputThread.c)
 * Callees:
 *     _RegisterHotKey @ 0x1C0052DB4 (_RegisterHotKey.c)
 */

void SetWinlogonHotKeys(void)
{
  ULONG_PTR BugCheckParameter2; // [rsp+20h] [rbp-18h]
  ULONG_PTR BugCheckParameter2a; // [rsp+20h] [rbp-18h]
  ULONG_PTR BugCheckParameter2b; // [rsp+20h] [rbp-18h]
  ULONG_PTR BugCheckParameter2c; // [rsp+20h] [rbp-18h]
  ULONG_PTR BugCheckParameter2d; // [rsp+20h] [rbp-18h]
  ULONG_PTR BugCheckParameter2e; // [rsp+20h] [rbp-18h]
  ULONG_PTR BugCheckParameter2f; // [rsp+20h] [rbp-18h]
  ULONG_PTR BugCheckParameter2g; // [rsp+20h] [rbp-18h]
  ULONG_PTR BugCheckParameter2h; // [rsp+20h] [rbp-18h]
  ULONG_PTR BugCheckParameter2i; // [rsp+20h] [rbp-18h]
  ULONG_PTR BugCheckParameter2j; // [rsp+20h] [rbp-18h]
  ULONG_PTR BugCheckParameter2k; // [rsp+20h] [rbp-18h]
  ULONG_PTR BugCheckParameter2l; // [rsp+20h] [rbp-18h]
  ULONG_PTR BugCheckParameter2m; // [rsp+20h] [rbp-18h]
  ULONG_PTR BugCheckParameter2n; // [rsp+20h] [rbp-18h]
  ULONG_PTR BugCheckParameter2o; // [rsp+20h] [rbp-18h]
  ULONG_PTR BugCheckParameter2p; // [rsp+20h] [rbp-18h]
  ULONG_PTR BugCheckParameter2q; // [rsp+20h] [rbp-18h]
  ULONG_PTR BugCheckParameter2r; // [rsp+20h] [rbp-18h]
  ULONG_PTR BugCheckParameter2s; // [rsp+20h] [rbp-18h]
  ULONG_PTR BugCheckParameter2t; // [rsp+20h] [rbp-18h]
  ULONG_PTR BugCheckParameter2u; // [rsp+20h] [rbp-18h]
  ULONG_PTR BugCheckParameter2v; // [rsp+20h] [rbp-18h]
  ULONG_PTR BugCheckParameter2w; // [rsp+20h] [rbp-18h]
  ULONG_PTR BugCheckParameter2x; // [rsp+20h] [rbp-18h]
  ULONG_PTR BugCheckParameter2y; // [rsp+20h] [rbp-18h]

  LODWORD(BugCheckParameter2) = 46;
  RegisterHotKey(0LL, (__int64)WinlogonHotkeyCallback, 0, 32771, BugCheckParameter2);
  LODWORD(BugCheckParameter2a) = 27;
  RegisterHotKey(0LL, (__int64)WinlogonHotkeyCallback, 4, 6, BugCheckParameter2a);
  LODWORD(BugCheckParameter2b) = 76;
  RegisterHotKey(0LL, (__int64)WinlogonHotkeyCallback, 5, 32776, BugCheckParameter2b);
  LODWORD(BugCheckParameter2c) = 85;
  RegisterHotKey(0LL, (__int64)WinlogonHotkeyCallback, 6, 8200, BugCheckParameter2c);
  LODWORD(BugCheckParameter2d) = 85;
  RegisterHotKey(0LL, (__int64)WinlogonHotkeyCallback, 10, 8202, BugCheckParameter2d);
  LODWORD(BugCheckParameter2e) = 13;
  RegisterHotKey(0LL, (__int64)WinlogonHotkeyCallback, 13, 24586, BugCheckParameter2e);
  LODWORD(BugCheckParameter2f) = 13;
  RegisterHotKey(0LL, (__int64)WinlogonHotkeyCallback, 14, 24584, BugCheckParameter2f);
  LODWORD(BugCheckParameter2g) = 187;
  RegisterHotKey(0LL, (__int64)WinlogonHotkeyCallback, 12, 24584, BugCheckParameter2g);
  LODWORD(BugCheckParameter2h) = 107;
  RegisterHotKey(0LL, (__int64)WinlogonHotkeyCallback, 12, 24584, BugCheckParameter2h);
  LODWORD(BugCheckParameter2i) = 125;
  RegisterHotKey(0LL, (__int64)WinlogonHotkeyCallback, 10, 24586, BugCheckParameter2i);
  LODWORD(BugCheckParameter2j) = 80;
  RegisterHotKey(0LL, (__int64)WinlogonHotkeyCallback, 7, 8200, BugCheckParameter2j);
  LODWORD(BugCheckParameter2k) = 80;
  RegisterHotKey(0LL, (__int64)WinlogonHotkeyCallback, 8, 8202, BugCheckParameter2k);
  LODWORD(BugCheckParameter2l) = 80;
  RegisterHotKey(0LL, (__int64)WinlogonHotkeyCallback, 9, 8204, BugCheckParameter2l);
  LODWORD(BugCheckParameter2m) = 79;
  RegisterHotKey(0LL, (__int64)RotationLockCallback, -12, 8200, BugCheckParameter2m);
  LODWORD(BugCheckParameter2n) = 32;
  RegisterHotKey(0LL, (__int64)WinlogonWinSpaceCallback, -8, 8200, BugCheckParameter2n);
  LODWORD(BugCheckParameter2o) = 32;
  RegisterHotKey(0LL, (__int64)WinlogonWinSpaceCallback, -9, 8202, BugCheckParameter2o);
  LODWORD(BugCheckParameter2p) = 32;
  RegisterHotKey(0LL, (__int64)WinlogonWinSpaceCallback, -10, 8204, BugCheckParameter2p);
  LODWORD(BugCheckParameter2q) = 32;
  RegisterHotKey(0LL, (__int64)WinlogonWinSpaceCallback, -11, 8206, BugCheckParameter2q);
  LODWORD(BugCheckParameter2r) = 133;
  RegisterHotKey(0LL, (__int64)WinlogonHotkeyCallback, 7, 8200, BugCheckParameter2r);
  LODWORD(BugCheckParameter2s) = 133;
  RegisterHotKey(0LL, (__int64)WinlogonHotkeyCallback, 8, 8202, BugCheckParameter2s);
  LODWORD(BugCheckParameter2t) = 133;
  RegisterHotKey(0LL, (__int64)WinlogonHotkeyCallback, 9, 8204, BugCheckParameter2t);
  LODWORD(BugCheckParameter2u) = 125;
  RegisterHotKey(0LL, (__int64)RotationLockCallback, -13, 24584, BugCheckParameter2u);
  LODWORD(BugCheckParameter2v) = 127;
  RegisterHotKey(0LL, (__int64)WinlogonHotkeyCallback, 11, 26632, BugCheckParameter2v);
  LODWORD(BugCheckParameter2w) = 135;
  RegisterHotKey(0LL, (__int64)PTPEnableHotkeyCallback, -14, 18442, BugCheckParameter2w);
  LODWORD(BugCheckParameter2x) = 66;
  RegisterHotKey(0LL, (__int64)DisplayDiagHotkeyCallback, -15, 24590, BugCheckParameter2x);
  LODWORD(BugCheckParameter2y) = 128;
  RegisterHotKey(0LL, (__int64)DisplayDiagHotkeyCallback, -16, 26632, BugCheckParameter2y);
}
