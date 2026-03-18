/*
 * XREFs of PpmInfoTraceProfileSettings @ 0x1406CF138
 * Callers:
 *     PpmEventTraceControlCallback @ 0x1405D6570 (PpmEventTraceControlCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     PpmEventTraceProfileSetting @ 0x1405CC7D8 (PpmEventTraceProfileSetting.c)
 */

char PpmInfoTraceProfileSettings()
{
  unsigned __int8 v0; // bp
  __int64 *v1; // rdi
  __int64 v2; // r12
  char *v3; // rsi
  __int64 v4; // rbx
  unsigned int v5; // r14d
  __int128 *v6; // rax
  BOOL v7; // r15d
  unsigned int v8; // r15d
  __int64 *v9; // r12
  __int64 *v10; // rbp
  unsigned __int8 v12; // [rsp+40h] [rbp-58h]
  __int64 v13; // [rsp+48h] [rbp-50h]
  __int128 v14; // [rsp+50h] [rbp-48h] BYREF

  v0 = 0;
  v1 = PpmDefaultProfile;
  while ( 1 )
  {
    v2 = 43LL;
    v12 = v0;
    v13 = 43LL;
    v3 = (char *)&unk_1403E3880;
    do
    {
      v4 = 1LL << v3[4];
      v5 = 0;
      v6 = (__int128 *)*((_QWORD *)v3 - 3);
      v7 = (v3[5] & 4) != 0;
      v14 = *v6;
      v8 = v7 + 1;
      if ( v8 )
      {
        v9 = v1 + 5;
        v10 = v1 + 180;
        do
        {
          if ( (v4 & v9[v5]) != 0 )
            LOBYTE(v6) = PpmEventTraceProfileSetting(
                           *((_BYTE *)v1 + 8),
                           *((_QWORD *)v3 - 4),
                           (__int64)&v14,
                           v5,
                           (__int64)v9 + *((_QWORD *)v3 - 1) + v5 * *(_DWORD *)v3,
                           *(_DWORD *)v3,
                           0,
                           1);
          if ( (v4 & v10[v5]) != 0 )
            LOBYTE(v6) = PpmEventTraceProfileSetting(
                           *((_BYTE *)v1 + 8),
                           *((_QWORD *)v3 - 4),
                           (__int64)&v14,
                           v5,
                           (__int64)v10 + *((_QWORD *)v3 - 1) + v5 * *(_DWORD *)v3,
                           *(_DWORD *)v3,
                           1,
                           1);
          ++HIBYTE(v14);
          ++v5;
        }
        while ( v5 < v8 );
        v2 = v13;
      }
      v3 += 40;
      v13 = --v2;
    }
    while ( v2 );
    if ( v12 == PpmProfileCount )
      break;
    v1 = (__int64 *)(PpmProfiles + 2880LL * v12);
    v0 = v12 + 1;
  }
  return (char)v6;
}
