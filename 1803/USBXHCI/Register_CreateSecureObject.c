/*
 * XREFs of Register_CreateSecureObject @ 0x1C005A33C
 * Callers:
 *     Register_Create @ 0x1C005A1EC (Register_Create.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001E00 (__security_check_cookie.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C005D940 (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall Register_CreateSecureObject(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rdi
  int v4; // ebx
  int v6; // [rsp+28h] [rbp-60h]
  int v7; // [rsp+30h] [rbp-58h] BYREF
  __int64 v8; // [rsp+38h] [rbp-50h]
  _QWORD v9[7]; // [rsp+40h] [rbp-48h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(v1 + 112);
  memset(v9, 0, sizeof(v9));
  v9[3] = 0LL;
  LODWORD(v9[4]) = 6;
  v9[5] = *(_QWORD *)(v1 + 456);
  BYTE1(v9[6]) = g_AssignDoorbellsToVTL0;
  LOBYTE(v9[6]) = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 272LL) & 1;
  v4 = SecureChannel_SendRequestSynchronously(v3, (unsigned int)v9, 56, (unsigned int)&v7, 16);
  if ( v4 >= 0 )
  {
    if ( v7 >= 0 )
    {
      *(_QWORD *)(a1 + 120) = v8;
      *(_BYTE *)(a1 + 128) = g_AssignDoorbellsToVTL0;
    }
    else
    {
      v4 = v7;
      v6 = v7;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        2u,
        6u,
        0x45u,
        (__int64)&WPP_aa9a6dc92bdc315c6241291f5ec849eb_Traceguids,
        v6);
    }
  }
  return (unsigned int)v4;
}
