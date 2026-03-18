/*
 * XREFs of SetWindowArrangementHotKeys @ 0x1C011F4F0
 * Callers:
 *     RawInputThread @ 0x1C0087D60 (RawInputThread.c)
 * Callees:
 *     _RegisterHotKey @ 0x1C0052DB4 (_RegisterHotKey.c)
 */

_BOOL8 SetWindowArrangementHotKeys()
{
  _DWORD *v0; // rbx
  __int64 v1; // rdi
  _BOOL8 result; // rax
  ULONG_PTR BugCheckParameter2; // [rsp+20h] [rbp-18h]

  v0 = &unk_1C02DD864;
  v1 = 14LL;
  do
  {
    LODWORD(BugCheckParameter2) = v0[1];
    result = RegisterHotKey(0LL, (__int64)WindowArrangementHotKeyCallback, *(v0 - 1), *v0 | 0x4000u, BugCheckParameter2);
    v0 += 4;
    --v1;
  }
  while ( v1 );
  return result;
}
