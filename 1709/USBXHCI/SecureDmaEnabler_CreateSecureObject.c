/*
 * XREFs of SecureDmaEnabler_CreateSecureObject @ 0x1C0060104
 * Callers:
 *     SecureDmaEnabler_Create @ 0x1C005FFAC (SecureDmaEnabler_Create.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C00070C0 (__security_check_cookie.c)
 *     memset @ 0x1C0008A40 (memset.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C006053C (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall SecureDmaEnabler_CreateSecureObject(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rdi
  int v4; // ebx
  int v6; // [rsp+28h] [rbp-60h]
  int v7; // [rsp+30h] [rbp-58h] BYREF
  __int64 v8; // [rsp+38h] [rbp-50h]
  _QWORD v9[6]; // [rsp+40h] [rbp-48h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(v1 + 112);
  memset(v9, 0, sizeof(v9));
  v9[3] = 0LL;
  LODWORD(v9[4]) = 3;
  v9[5] = *(_QWORD *)(v1 + 448);
  v4 = SecureChannel_SendRequestSynchronously(v3, (unsigned int)v9, 48, (unsigned int)&v7, 16);
  if ( v4 >= 0 )
  {
    if ( v7 >= 0 )
    {
      *(_QWORD *)(a1 + 16) = v8;
    }
    else
    {
      v4 = v7;
      v6 = v7;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        2u,
        0x12u,
        0x15u,
        (__int64)&WPP_ba9a70f1931133d64daec42b1a399418_Traceguids,
        v6);
    }
  }
  return (unsigned int)v4;
}
