/*
 * XREFs of RtlQueryPackageIdentity @ 0x180061980
 * Callers:
 *     sub_1800616E4 @ 0x1800616E4 (sub_1800616E4.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800D3C90 (LdrAppxHandleIntegrityFailure.c)
 *     sub_1800D6E6C @ 0x1800D6E6C (sub_1800D6E6C.c)
 * Callees:
 *     RtlQueryPackageIdentityEx @ 0x1800619D0 (RtlQueryPackageIdentityEx.c)
 */

__int64 __fastcall RtlQueryPackageIdentity(int a1, int a2, int a3, int a4, __int64 a5, bool *a6)
{
  __int64 result; // rax
  _QWORD v7[3]; // [rsp+40h] [rbp-18h] BYREF

  result = RtlQueryPackageIdentityEx(a1, a2, a3, a4, a5, 0LL, (__int64)v7);
  if ( (int)result >= 0 )
  {
    if ( a6 )
      *a6 = v7[0] != 0LL;
  }
  return result;
}
