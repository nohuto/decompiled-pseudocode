/*
 * XREFs of Register_UnmapSecureMmio @ 0x1C005B0E0
 * Callers:
 *     Controller_WdfEvtDeviceReleaseHardware @ 0x1C0057260 (Controller_WdfEvtDeviceReleaseHardware.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001E00 (__security_check_cookie.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C005D940 (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall Register_UnmapSecureMmio(__int64 a1)
{
  __int64 v2; // rdi
  _QWORD v4[5]; // [rsp+30h] [rbp-38h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL);
  memset(v4, 0, sizeof(v4));
  v4[3] = *(_QWORD *)(a1 + 120);
  LODWORD(v4[4]) = 8;
  return SecureChannel_SendRequestSynchronously(v2, (unsigned int)v4, 40, 0, 0);
}
