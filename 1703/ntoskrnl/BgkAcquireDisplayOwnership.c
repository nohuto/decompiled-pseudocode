/*
 * XREFs of BgkAcquireDisplayOwnership @ 0x1401EE810
 * Callers:
 *     <none>
 * Callees:
 *     BgLibraryEnable @ 0x14013DDEC (BgLibraryEnable.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall BgkAcquireDisplayOwnership(__int64 a1))(_QWORD, _QWORD, _QWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD); // rax
  char v2; // cl
  __int64 v3; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v4[40]; // [rsp+28h] [rbp-40h] BYREF

  if ( byte_14036E49D && !byte_14036E488 )
    return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))BgLibraryEnable(0LL, 1);
  result = qword_14036E480;
  if ( qword_14036E480 )
  {
    v3 = 0LL;
    LOBYTE(a1) = 1;
    result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_14036E480(a1, v4, &v3);
    if ( (int)result >= 0 )
    {
      result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))BgLibraryEnable((__int64)v4, 1);
      v2 = byte_14036E49D;
      if ( (int)result >= 0 )
        v2 = 1;
      qword_14036E478 = 0LL;
      byte_14036E49D = v2;
    }
  }
  return result;
}
