/*
 * XREFs of SepMatchCapability @ 0x140027230
 * Callers:
 *     SepNormalAccessCheck @ 0x140090270 (SepNormalAccessCheck.c)
 *     SepMaximumAccessCheck @ 0x140090C10 (SepMaximumAccessCheck.c)
 *     SepMaximumAccessCheckEx @ 0x1401331B0 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x1401332E0 (SepNormalAccessCheckEx.c)
 * Callees:
 *     SepSidInTokenSidHash @ 0x140091F00 (SepSidInTokenSidHash.c)
 */

_BYTE *__fastcall SepMatchCapability(__int64 a1, int a2, __int64 a3, int a4, _BYTE *a5, _DWORD *a6)
{
  _BYTE *result; // rax
  char v9; // [rsp+20h] [rbp-18h]
  char v10; // [rsp+28h] [rbp-10h]

  v10 = 0;
  v9 = 1;
  result = (_BYTE *)SepSidInTokenSidHash(a1 + 808, 0LL, a3, 0LL, v9, v10);
  if ( (_BYTE)result )
  {
    *a6 |= a4 & a2;
    result = a5;
    *a5 = 1;
  }
  return result;
}
