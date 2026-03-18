/*
 * XREFs of SeAccessCheckFromStateEx @ 0x140025270
 * Callers:
 *     SeAccessCheckFromState @ 0x140025160 (SeAccessCheckFromState.c)
 * Callees:
 *     SeAccessCheckWithHint @ 0x14007E4B0 (SeAccessCheckWithHint.c)
 *     memset @ 0x140192F40 (memset.c)
 */

__int64 __fastcall SeAccessCheckFromStateEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        char a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v14; // r9
  _QWORD v17[4]; // [rsp+60h] [rbp-28h] BYREF

  memset(v17, 0, sizeof(v17));
  v17[2] = a2;
  if ( a3 )
  {
    LODWORD(v17[1]) = *(_DWORD *)(a3 + 196);
    v17[0] = a3;
  }
  LOBYTE(v14) = 1;
  return SeAccessCheckWithHint(a1, 0LL, v17, v14, a4, a5, a6, a7, a8, a9, a10);
}
