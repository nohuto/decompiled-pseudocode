/*
 * XREFs of SecureDmaEnabler_MapMemory @ 0x1C0060218
 * Callers:
 *     SecureDmaEnabler_AllocateCommonBufferPage @ 0x1C005FDBC (SecureDmaEnabler_AllocateCommonBufferPage.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001A20 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C00070C0 (__security_check_cookie.c)
 *     memset @ 0x1C0008A40 (memset.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C006053C (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall SecureDmaEnabler_MapMemory(__int64 a1, _QWORD *a2, __int64 a3, _QWORD *a4)
{
  int v6; // ebx
  int v7; // eax
  unsigned __int16 v8; // r9
  __int64 v9; // rax
  int v10; // eax
  __int64 v12; // [rsp+28h] [rbp-31h]
  int v13; // [rsp+28h] [rbp-31h]
  __int64 v14; // [rsp+30h] [rbp-29h] BYREF
  int v15; // [rsp+38h] [rbp-21h] BYREF
  __int64 v16; // [rsp+40h] [rbp-19h]
  __int64 v17; // [rsp+48h] [rbp-11h]
  _QWORD v18[7]; // [rsp+50h] [rbp-9h] BYREF

  v14 = 0LL;
  if ( !*a2 )
  {
    v7 = VslCreateSecureSection(&v14, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 456LL), a2, 4LL, 1);
    v6 = v7;
    if ( v7 >= 0 )
    {
      memset(v18, 0, sizeof(v18));
      v18[3] = *(_QWORD *)(a1 + 16);
      v18[5] = v14;
      v9 = *(_QWORD *)(a1 + 8);
      LODWORD(v18[4]) = 4;
      LODWORD(v18[6]) = 4096;
      v6 = SecureChannel_SendRequestSynchronously(*(_QWORD *)(v9 + 112), (unsigned int)v18, 56, (unsigned int)&v15, 24);
      if ( v6 < 0 )
        goto LABEL_11;
      v7 = v15;
      if ( v15 >= 0 )
      {
        memset(a4, 0, 0x20uLL);
        *a4 = v16;
        a4[2] = v17;
        a4[3] = v14;
        *((_DWORD *)a4 + 2) = 4096;
LABEL_10:
        if ( v6 >= 0 )
          return (unsigned int)v6;
        goto LABEL_11;
      }
      v6 = v15;
      v8 = 14;
    }
    else
    {
      v8 = 13;
    }
    v13 = v7;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      2u,
      0x12u,
      v8,
      (__int64)&WPP_ba9a70f1931133d64daec42b1a399418_Traceguids,
      v13);
    goto LABEL_10;
  }
  WPP_RECORDER_SF_(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
    2u,
    0x12u,
    0xCu,
    (__int64)&WPP_ba9a70f1931133d64daec42b1a399418_Traceguids);
  v6 = -1073741637;
LABEL_11:
  if ( v14 )
  {
    v10 = VslDeleteSecureSection(v14);
    if ( v10 < 0 )
    {
      LODWORD(v12) = v10;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        3u,
        0x12u,
        0xFu,
        (__int64)&WPP_ba9a70f1931133d64daec42b1a399418_Traceguids,
        v12);
    }
  }
  return (unsigned int)v6;
}
