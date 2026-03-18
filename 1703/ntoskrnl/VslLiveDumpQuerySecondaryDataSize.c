/*
 * XREFs of VslLiveDumpQuerySecondaryDataSize @ 0x1401ED47C
 * Callers:
 *     HvlCalculateLivedumpSize @ 0x1401EA7C0 (HvlCalculateLivedumpSize.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14002F4C0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 */

NTSTATUS __fastcall VslLiveDumpQuerySecondaryDataSize(_QWORD *a1)
{
  NTSTATUS result; // eax
  _QWORD v3[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v3, 0, 0x68uLL);
  result = VslpEnterIumSecureMode(1, 41LL, 0LL, (__int64)v3);
  if ( result >= 0 )
    *a1 = v3[2];
  return result;
}
