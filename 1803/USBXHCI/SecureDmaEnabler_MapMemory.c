/*
 * XREFs of SecureDmaEnabler_MapMemory @ 0x1C005D618
 * Callers:
 *     SecureDmaEnabler_AllocateCommonBufferPage @ 0x1C005D1A8 (SecureDmaEnabler_AllocateCommonBufferPage.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001C00 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0001E00 (__security_check_cookie.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C005D940 (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall SecureDmaEnabler_MapMemory(__int64 a1, _QWORD *a2, __int64 a3, _QWORD *a4)
{
  __int64 v5; // rax
  int v7; // ebx
  int v8; // eax
  unsigned __int16 v9; // r9
  __int64 v10; // rax
  int v11; // eax
  __int64 v13; // [rsp+28h] [rbp-31h]
  int v14; // [rsp+28h] [rbp-31h]
  __int64 v15; // [rsp+30h] [rbp-29h] BYREF
  int v16; // [rsp+38h] [rbp-21h] BYREF
  __int64 v17; // [rsp+40h] [rbp-19h]
  __int64 v18; // [rsp+48h] [rbp-11h]
  _QWORD v19[7]; // [rsp+50h] [rbp-9h] BYREF

  v15 = 0LL;
  v5 = *(_QWORD *)(a1 + 8);
  if ( !*a2 )
  {
    v8 = VslCreateSecureSection(&v15, *(_QWORD *)(v5 + 464), a2, 4LL, 1);
    v7 = v8;
    if ( v8 >= 0 )
    {
      memset(v19, 0, sizeof(v19));
      v19[3] = *(_QWORD *)(a1 + 16);
      v19[5] = v15;
      v10 = *(_QWORD *)(a1 + 8);
      LODWORD(v19[4]) = 4;
      LODWORD(v19[6]) = 4096;
      v7 = SecureChannel_SendRequestSynchronously(*(_QWORD *)(v10 + 112), (unsigned int)v19, 56, (unsigned int)&v16, 24);
      if ( v7 < 0 )
        goto LABEL_11;
      v8 = v16;
      if ( v16 >= 0 )
      {
        memset(a4, 0, 0x20uLL);
        *a4 = v17;
        a4[2] = v18;
        a4[3] = v15;
        *((_DWORD *)a4 + 2) = 4096;
LABEL_10:
        if ( v7 >= 0 )
          return (unsigned int)v7;
        goto LABEL_11;
      }
      v7 = v16;
      v9 = 14;
    }
    else
    {
      v9 = 13;
    }
    v14 = v8;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      2u,
      0x12u,
      v9,
      (__int64)&WPP_4fb5ac5d8fed31f024e2792297bfd0b8_Traceguids,
      v14);
    goto LABEL_10;
  }
  WPP_RECORDER_SF_(*(_QWORD *)(v5 + 72), 2u, 0x12u, 0xCu, (__int64)&WPP_4fb5ac5d8fed31f024e2792297bfd0b8_Traceguids);
  v7 = -1073741637;
LABEL_11:
  if ( v15 )
  {
    v11 = VslDeleteSecureSection(v15);
    if ( v11 < 0 )
    {
      LODWORD(v13) = v11;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        3u,
        0x12u,
        0xFu,
        (__int64)&WPP_4fb5ac5d8fed31f024e2792297bfd0b8_Traceguids,
        v13);
    }
  }
  return (unsigned int)v7;
}
