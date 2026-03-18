/*
 * XREFs of BgkAcquireDisplayOwnership @ 0x1401F3F10
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     BgLibraryEnable @ 0x140290490 (BgLibraryEnable.c)
 */

__int64 (__fastcall *__fastcall BgkAcquireDisplayOwnership(__int64 a1))(_QWORD, _QWORD, _QWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD); // rax
  __int64 v2; // rdx
  char v3; // cl
  __int64 v4; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v5[40]; // [rsp+28h] [rbp-40h] BYREF

  if ( byte_140389F22 && !byte_140389F19 )
    return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))BgLibraryEnable(0LL, 1LL);
  result = qword_140389F10;
  if ( qword_140389F10 )
  {
    v4 = 0LL;
    LOBYTE(a1) = 1;
    result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_140389F10(a1, v5, &v4);
    if ( (int)result >= 0 )
    {
      LOBYTE(v2) = 1;
      result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))BgLibraryEnable(v5, v2);
      v3 = byte_140389F22;
      if ( (int)result >= 0 )
        v3 = 1;
      qword_140389F08 = 0LL;
      byte_140389F22 = v3;
    }
  }
  return result;
}
