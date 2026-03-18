/*
 * XREFs of VslLiveDumpQuerySecondaryDataSize @ 0x1401F229C
 * Callers:
 *     HvlCalculateLivedumpSize @ 0x1401EF970 (HvlCalculateLivedumpSize.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14011D800 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 */

NTSTATUS __fastcall VslLiveDumpQuerySecondaryDataSize(_QWORD *a1)
{
  NTSTATUS result; // eax
  _QWORD v3[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v3, 0, 0x68uLL);
  result = VslpEnterIumSecureMode(2u, 47LL, 0, (__int64)v3);
  if ( result >= 0 )
    *a1 = v3[2];
  return result;
}
