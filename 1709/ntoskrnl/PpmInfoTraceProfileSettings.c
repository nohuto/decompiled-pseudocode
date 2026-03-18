/*
 * XREFs of PpmInfoTraceProfileSettings @ 0x1407067B4
 * Callers:
 *     PpmEventTraceControlCallback @ 0x1405F2F90 (PpmEventTraceControlCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     PpmEventTraceProfileSetting @ 0x1405E1CDC (PpmEventTraceProfileSetting.c)
 */

char PpmInfoTraceProfileSettings()
{
  __int64 *v0; // rdi
  char *v1; // rsi
  __int64 *v2; // r12
  __int64 *v3; // rbp
  __int64 v4; // rbx
  unsigned int v5; // r14d
  __int128 *v6; // rax
  unsigned int v7; // r15d
  unsigned __int8 i; // [rsp+40h] [rbp-58h]
  __int64 v10; // [rsp+48h] [rbp-50h]
  __int128 v11; // [rsp+50h] [rbp-48h] BYREF

  v0 = PpmDefaultProfile;
  for ( i = 0; ; ++i )
  {
    v1 = (char *)&unk_140400978;
    v10 = 45LL;
    do
    {
      v2 = v0 + 5;
      v3 = v0 + 341;
      v4 = 1LL << v1[12];
      v5 = 0;
      v6 = (__int128 *)*((_QWORD *)v1 - 2);
      v7 = ((v1[13] & 4) != 0) + 1;
      v11 = *v6;
      do
      {
        if ( (v4 & v2[v5]) != 0 )
          LOBYTE(v6) = PpmEventTraceProfileSetting(
                         *((_BYTE *)v0 + 8),
                         *((_QWORD *)v1 - 3),
                         (__int64)&v11,
                         v5,
                         (__int64)v2 + *(_QWORD *)v1 + v5 * *((_DWORD *)v1 + 2),
                         *((_DWORD *)v1 + 2),
                         0,
                         1);
        if ( (v4 & v3[v5]) != 0 )
          LOBYTE(v6) = PpmEventTraceProfileSetting(
                         *((_BYTE *)v0 + 8),
                         *((_QWORD *)v1 - 3),
                         (__int64)&v11,
                         v5,
                         (__int64)v3 + *(_QWORD *)v1 + v5 * *((_DWORD *)v1 + 2),
                         *((_DWORD *)v1 + 2),
                         1,
                         1);
        ++HIBYTE(v11);
        ++v5;
      }
      while ( v5 < v7 );
      v1 += 40;
      --v10;
    }
    while ( v10 );
    if ( i == PpmProfileCount )
      break;
    v0 = (__int64 *)(PpmProfiles + 5456LL * i);
  }
  return (char)v6;
}
