/*
 * XREFs of _ResGetFileAttributesW @ 0x1801102D4
 * Callers:
 *     ResCGetHighestCacheIndex @ 0x1801106D8 (ResCGetHighestCacheIndex.c)
 *     ResCGetHighestConsecutiveCacheIndex @ 0x18011086C (ResCGetHighestConsecutiveCacheIndex.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18001ACF0 (RtlSetLastWin32Error.c)
 *     RtlDosPathNameToNtPathName_U @ 0x180035B40 (RtlDosPathNameToNtPathName_U.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     ZwQueryAttributesFile @ 0x1800A0860 (ZwQueryAttributesFile.c)
 */

__int64 __fastcall ResGetFileAttributesW(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // rdi
  int AttributesFile; // ebx
  char v4; // [rsp+20h] [rbp-78h] BYREF
  unsigned __int64 v5; // [rsp+28h] [rbp-70h]
  int v6; // [rsp+30h] [rbp-68h]
  __int64 v7; // [rsp+38h] [rbp-60h]
  char *v8; // [rsp+40h] [rbp-58h]
  int v9; // [rsp+48h] [rbp-50h]
  __int128 v10; // [rsp+50h] [rbp-48h]
  unsigned int v11; // [rsp+80h] [rbp-18h]

  if ( RtlDosPathNameToNtPathName_U(a1, (int)&v4, 0LL, 0LL) )
  {
    v2 = v5;
    v7 = 0LL;
    v8 = &v4;
    v6 = 48;
    v10 = 0LL;
    v9 = 64;
    AttributesFile = ZwQueryAttributesFile();
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v2);
    result = 0xFFFFFFFFLL;
    if ( AttributesFile >= 0 )
      return v11;
  }
  else
  {
    RtlSetLastWin32Error(3u);
    return 0xFFFFFFFFLL;
  }
  return result;
}
