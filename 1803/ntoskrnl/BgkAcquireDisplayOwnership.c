/*
 * XREFs of BgkAcquireDisplayOwnership @ 0x140231440
 * Callers:
 *     <none>
 * Callees:
 *     BgLibraryEnable @ 0x140156038 (BgLibraryEnable.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall BgkAcquireDisplayOwnership(__int64 a1))(_QWORD, _QWORD, _QWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD); // rax
  char v2; // cl
  __int64 v3; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v4[40]; // [rsp+28h] [rbp-40h] BYREF

  if ( byte_1403CDD5D && !byte_1403CDD48 )
    return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))BgLibraryEnable(0LL, 1);
  result = qword_1403CDD40;
  if ( qword_1403CDD40 )
  {
    v3 = 0LL;
    LOBYTE(a1) = 1;
    result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_1403CDD40(a1, v4, &v3);
    if ( (int)result >= 0 )
    {
      result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))BgLibraryEnable((__int64)v4, 1);
      v2 = byte_1403CDD5D;
      if ( (int)result >= 0 )
        v2 = 1;
      qword_1403CDD38 = 0LL;
      byte_1403CDD5D = v2;
    }
  }
  return result;
}
