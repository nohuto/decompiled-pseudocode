/*
 * XREFs of Register_MapSecureMmio @ 0x1C005D0D4
 * Callers:
 *     Register_PrepareHardware @ 0x1C005D868 (Register_PrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C00070C0 (__security_check_cookie.c)
 *     memset @ 0x1C0008A40 (memset.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C006053C (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall Register_MapSecureMmio(_QWORD *a1)
{
  __int64 v2; // rbx
  int v3; // ebx
  int v5; // [rsp+28h] [rbp-50h]
  int v6; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v7[6]; // [rsp+38h] [rbp-40h] BYREF

  v2 = *(_QWORD *)(a1[1] + 112LL);
  memset(v7, 0, sizeof(v7));
  v7[3] = a1[15];
  v7[5] = a1[3];
  LODWORD(v7[4]) = 7;
  v3 = SecureChannel_SendRequestSynchronously(v2, (unsigned int)v7, 48, (unsigned int)&v6, 4);
  if ( v3 >= 0 )
  {
    v3 = v6;
    if ( v6 < 0 )
    {
      v5 = v6;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 72LL),
        2u,
        6u,
        0x46u,
        (__int64)&WPP_a32df80a94123ec82d8da458aa91e220_Traceguids,
        v5);
    }
  }
  return (unsigned int)v3;
}
