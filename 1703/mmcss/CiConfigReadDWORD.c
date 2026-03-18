/*
 * XREFs of CiConfigReadDWORD @ 0x1C000D5E0
 * Callers:
 *     CiConfigInitialize @ 0x1C000D300 (CiConfigInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002D40 (__security_check_cookie.c)
 *     WPP_SF_Zd @ 0x1C00047AC (WPP_SF_Zd.c)
 */

__int64 __fastcall CiConfigReadDWORD(void *a1, struct _UNICODE_STRING *a2, unsigned int a3)
{
  __int64 Length; // [rsp+20h] [rbp-38h]
  ULONG ResultLength; // [rsp+30h] [rbp-28h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+38h] [rbp-20h] BYREF
  int v9; // [rsp+3Ch] [rbp-1Ch]
  unsigned int v10; // [rsp+44h] [rbp-14h]

  if ( ZwQueryValueKey(a1, a2, KeyValuePartialInformation, KeyValueInformation, 0x10u, &ResultLength) >= 0 && v9 == 4 )
    return v10;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    LODWORD(Length) = a3;
    WPP_SF_Zd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x11u,
      (__int64)&WPP_a0dee8c3b2673bbedaa186a94f32f503_Traceguids,
      &a2->Length,
      Length);
  }
  return a3;
}
