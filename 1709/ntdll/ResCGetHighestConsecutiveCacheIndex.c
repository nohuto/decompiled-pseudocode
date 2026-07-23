/*
 * XREFs of ResCGetHighestConsecutiveCacheIndex @ 0x18011086C
 * Callers:
 *     ResCKeGetCacheIndices @ 0x18010BE24 (ResCKeGetCacheIndices.c)
 * Callees:
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     _ResGetFileAttributesW @ 0x1801102D4 (_ResGetFileAttributesW.c)
 *     ResCGetIndexedName @ 0x180110974 (ResCGetIndexedName.c)
 *     ResCGetName @ 0x180110DA8 (ResCGetName.c)
 */

__int64 __fastcall ResCGetHighestConsecutiveCacheIndex(__int64 a1, int a2)
{
  int v2; // r8d
  unsigned int v3; // esi
  int v5; // ebx
  BOOL v6; // edi
  BOOL v7; // ebp
  int v8; // eax
  WCHAR v10[264]; // [rsp+30h] [rbp-458h] BYREF
  WCHAR v11[264]; // [rsp+240h] [rbp-248h] BYREF

  v2 = 0;
  v3 = -1;
  if ( a2 >= 0 )
    v2 = a2 + 1;
  if ( a1 )
  {
    v5 = 0;
    if ( v2 <= 9999 )
      v5 = v2;
    v6 = v2 <= 9999;
LABEL_16:
    if ( v5 <= 9999 )
    {
      while ( 1 )
      {
        v7 = v6;
        if ( !(unsigned int)ResCGetIndexedName(a1, 257LL, (unsigned int)v5, v10)
          || (unsigned int)ResGetFileAttributesW(v10) == -1
          || !(unsigned int)ResCGetName(v10, 260LL, v11)
          || (unsigned int)ResGetFileAttributesW(v11) == -1 )
        {
          break;
        }
        v3 = v5++;
        v8 = v5;
        if ( v5 > 9999 )
        {
          v5 = 0;
          if ( !v6 )
            v5 = v8;
          v6 = 0;
          if ( !v7 )
            v6 = 0;
          goto LABEL_16;
        }
      }
    }
  }
  return v3;
}
