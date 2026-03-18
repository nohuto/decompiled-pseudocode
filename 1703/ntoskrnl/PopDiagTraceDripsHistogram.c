/*
 * XREFs of PopDiagTraceDripsHistogram @ 0x140230F80
 * Callers:
 *     PpmSnapDripsAccountingSnapshot @ 0x1402294AC (PpmSnapDripsAccountingSnapshot.c)
 * Callees:
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceDripsHistogram(unsigned __int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned __int64 v4; // rax
  char v6; // si
  unsigned int v7; // r8d
  _QWORD *v8; // rdx
  __int64 v9; // rbx
  char *v10; // rcx
  __int64 v11; // r9
  const GUID *v12; // r9
  __int16 v13; // r11
  char v15; // [rsp+38h] [rbp-59h] BYREF
  char v16; // [rsp+39h] [rbp-58h] BYREF
  char v17; // [rsp+3Ah] [rbp-57h] BYREF
  char v18; // [rsp+3Bh] [rbp-56h] BYREF
  char v19; // [rsp+3Ch] [rbp-55h] BYREF
  __int16 v20; // [rsp+40h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-49h] BYREF
  char v22; // [rsp+58h] [rbp-39h] BYREF
  __int64 v23; // [rsp+60h] [rbp-31h]
  __int16 *v24; // [rsp+68h] [rbp-29h]
  __int64 v25; // [rsp+70h] [rbp-21h]
  __int64 v26; // [rsp+78h] [rbp-19h]
  __int64 v27; // [rsp+80h] [rbp-11h]
  char *v28; // [rsp+88h] [rbp-9h]
  __int64 v29; // [rsp+90h] [rbp-1h]
  char *v30; // [rsp+98h] [rbp+7h]
  __int64 v31; // [rsp+A0h] [rbp+Fh]
  char *v32; // [rsp+A8h] [rbp+17h]
  __int64 v33; // [rsp+B0h] [rbp+1Fh]
  char *v34; // [rsp+B8h] [rbp+27h]
  __int64 v35; // [rsp+C0h] [rbp+2Fh]

  v29 = -1LL;
  pData.Ptr = 20000000LL;
  *(_QWORD *)&pData.Size = 0LL;
  LOBYTE(v4) = -89 * a1;
  v22 = 0;
  v23 = 160000000LL;
  v24 = 0LL;
  LOBYTE(v25) = 0;
  v26 = 600000000LL;
  v27 = 0LL;
  LOBYTE(v28) = 0;
  v30 = 0LL;
  LOBYTE(v31) = 0;
  if ( (unsigned __int16)(a1 / 0x23C34600) )
  {
    v4 = 100 * a2 / a1;
    v6 = v4;
    if ( (_BYTE)v4 )
    {
      v7 = 0;
      v8 = &unk_1403E34B8;
      v9 = 26LL;
      do
      {
        for ( ; v7 < 3; ++v7 )
        {
          if ( *v8 <= *(&pData.Ptr + 3 * v7) )
            break;
        }
        v8 += 3;
        *((_QWORD *)&pData.Size + 3 * v7) += *a4++;
        --v9;
      }
      while ( v9 );
      v10 = &v22;
      v11 = 4LL;
      do
      {
        v4 = ((a1 >> 1) + 100LL * *((_QWORD *)v10 - 1)) / a1;
        *v10 = v4;
        v10 += 24;
        --v11;
      }
      while ( v11 );
      if ( hProvider.LevelPlus1 > 5 )
      {
        LOBYTE(v4) = TlgKeywordOn(&hProvider, 0x400000000000uLL);
        if ( (_BYTE)v4 )
        {
          v16 = v22;
          v17 = v25;
          v18 = (char)v28;
          v19 = v31;
          v24 = &v20;
          v26 = (__int64)&v15;
          v28 = &v16;
          v30 = &v17;
          v32 = &v18;
          v34 = &v19;
          v20 = v13;
          v15 = v6;
          v25 = 2LL;
          v27 = 1LL;
          v29 = 1LL;
          v31 = 1LL;
          v33 = 1LL;
          v35 = 1LL;
          LOBYTE(v4) = TlgWrite(&hProvider, &unk_1402ADB12, 0LL, v12, 8u, &pData);
        }
      }
    }
  }
  return v4;
}
