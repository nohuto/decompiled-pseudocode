/*
 * XREFs of CheckDesktopPolicyChange @ 0x1C00DE9E0
 * Callers:
 *     <none>
 * Callees:
 *     OpenCacheKeyEx @ 0x1C0025E50 (OpenCacheKeyEx.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 */

__int64 __fastcall CheckDesktopPolicyChange(const UNICODE_STRING *a1)
{
  unsigned int v1; // edi
  void *v3; // rsi
  NTSTATUS v4; // ebx
  void *v6; // rbx
  int v7; // [rsp+30h] [rbp-30h] BYREF
  ULONG ResultLength; // [rsp+34h] [rbp-2Ch] BYREF
  _QWORD KeyInformation[3]; // [rsp+38h] [rbp-28h] BYREF

  v1 = 0;
  v7 = 4;
  KeyInformation[0] = 0LL;
  v3 = OpenCacheKeyEx(a1, 4u, 0x20019u, &v7);
  if ( v3 )
  {
    v4 = ZwQueryKey(v3, KeyBasicInformation, KeyInformation, 0x18u, &ResultLength);
    ZwClose(v3);
    if ( v4 < 0 )
      return 0LL;
    gdwPolicyFlags |= 4u;
  }
  else
  {
    gdwPolicyFlags &= ~4u;
  }
  if ( qword_1C0196980 != KeyInformation[0] )
  {
    qword_1C0196980 = KeyInformation[0];
    v1 = 1;
  }
  KeyInformation[0] = 0LL;
  v7 = 2;
  v6 = OpenCacheKeyEx(a1, 4u, 0x20019u, &v7);
  if ( v6 )
  {
    ZwQueryKey(v6, KeyBasicInformation, KeyInformation, 0x18u, &ResultLength);
    ZwClose(v6);
    gdwPolicyFlags |= 2u;
  }
  else
  {
    gdwPolicyFlags &= ~2u;
  }
  if ( qword_1C0196988 != KeyInformation[0] )
  {
    qword_1C0196988 = KeyInformation[0];
    return 1;
  }
  return v1;
}
