/*
 * XREFs of SeAccessCheckFromStateEx @ 0x1400882E0
 * Callers:
 *     SeAccessCheckFromState @ 0x1400881D0 (SeAccessCheckFromState.c)
 * Callees:
 *     SeAccessCheckWithHint @ 0x14008D7C0 (SeAccessCheckWithHint.c)
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 __fastcall SeAccessCheckFromStateEx(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v7[4]; // [rsp+60h] [rbp-28h] BYREF

  memset(v7, 0, sizeof(v7));
  v7[2] = a2;
  if ( a3 )
  {
    LODWORD(v7[1]) = *(_DWORD *)(a3 + 196);
    v7[0] = a3;
  }
  return SeAccessCheckWithHint(a1, 0LL, v7);
}
