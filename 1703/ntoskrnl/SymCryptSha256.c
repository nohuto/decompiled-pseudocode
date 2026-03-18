/*
 * XREFs of SymCryptSha256 @ 0x1401778AC
 * Callers:
 *     RtlDeriveCapabilitySidsFromName @ 0x140067040 (RtlDeriveCapabilitySidsFromName.c)
 *     KeComputeSha256 @ 0x1401FD5E0 (KeComputeSha256.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     SymCryptSha256Append @ 0x140177920 (SymCryptSha256Append.c)
 *     SymCryptSha256Init @ 0x1401790A0 (SymCryptSha256Init.c)
 *     SymCryptSha256Result @ 0x1401790D0 (SymCryptSha256Result.c)
 */

__int64 __fastcall SymCryptSha256(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE v7[128]; // [rsp+20h] [rbp-A8h] BYREF

  SymCryptSha256Init(v7);
  SymCryptSha256Append(v7, a1, a2);
  return SymCryptSha256Result(v7, a3);
}
