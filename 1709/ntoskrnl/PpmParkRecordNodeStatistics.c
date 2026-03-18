/*
 * XREFs of PpmParkRecordNodeStatistics @ 0x140093020
 * Callers:
 *     PpmCheckRecordAllUtility @ 0x1400917E0 (PpmCheckRecordAllUtility.c)
 * Callees:
 *     EtwWriteEx @ 0x140087CE0 (EtwWriteEx.c)
 *     PpmParkComputeSnapStatistics @ 0x140092E60 (PpmParkComputeSnapStatistics.c)
 *     EtwpLevelKeywordEnabled @ 0x1400956B0 (EtwpLevelKeywordEnabled.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

__int64 PpmParkRecordNodeStatistics()
{
  __int64 result; // rax
  unsigned __int16 v1; // di
  int v2; // r12d
  __int64 v3; // rcx
  unsigned __int8 v4; // r13
  unsigned __int8 v5; // dl
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  REGHANDLE v12; // r10
  int v13; // ecx
  _BYTE *v14; // r14
  __int64 v15; // rsi
  __int64 v16; // r15
  unsigned __int8 i; // [rsp+48h] [rbp-69h]
  char v18; // [rsp+50h] [rbp-61h] BYREF
  char v19; // [rsp+58h] [rbp-59h] BYREF
  unsigned __int16 v20; // [rsp+60h] [rbp-51h]
  __int16 v21; // [rsp+68h] [rbp-49h] BYREF
  __int64 v22; // [rsp+70h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-39h] BYREF
  __int64 *v24; // [rsp+88h] [rbp-29h]
  __int64 v25; // [rsp+90h] [rbp-21h]
  char *v26; // [rsp+98h] [rbp-19h]
  __int64 v27; // [rsp+A0h] [rbp-11h]
  __int64 v28; // [rsp+A8h] [rbp-9h]
  __int64 v29; // [rsp+B0h] [rbp-1h]
  __int64 v30; // [rsp+B8h] [rbp+7h]
  int v31; // [rsp+C0h] [rbp+Fh]
  int v32; // [rsp+C4h] [rbp+13h]
  char *v33; // [rsp+C8h] [rbp+17h]
  __int64 v34; // [rsp+D0h] [rbp+1Fh]

  result = dword_1403661AC;
  v1 = 0;
  v2 = PpmCheckMakeupCount;
  v3 = 2688LL * dword_1403661AC;
  v20 = 0;
  v4 = *(_BYTE *)(v3 + PpmCurrentProfile + 122);
  v5 = *(_BYTE *)(v3 + PpmCurrentProfile + 124);
  for ( i = v5; v1 < (unsigned int)PpmParkNumNodes; v20 = v1 )
  {
    v6 = PpmParkNodes + 248LL * v1;
    if ( PpmParkComputeSnapStatistics(
           v2,
           v4,
           v5,
           v6 + 56,
           (_BYTE *)(v6 + 116),
           (_BYTE *)(v6 + 117),
           (_BYTE *)(v6 + 118)) )
    {
      v19 = *(_BYTE *)(v6 + 118);
      v18 = *(_BYTE *)(v6 + 116);
      v22 = *(_QWORD *)(v6 + 8);
      v21 = *(_WORD *)(v6 + 4);
      if ( PpmEtwRegistered )
      {
        if ( PpmEtwHandle )
        {
          LOBYTE(v7) = 5;
          if ( (unsigned __int8)EtwpLevelKeywordEnabled(*(_QWORD *)(PpmEtwHandle + 32) + 80LL, v7, 2LL, v8)
            || *(_BYTE *)(v12 + 101)
            && (LOBYTE(v9) = 5, (unsigned __int8)EtwpLevelKeywordEnabled(*(_QWORD *)(v12 + 40) + 80LL, v9, v10, v11)) )
          {
            *(_QWORD *)&UserData.Size = 2LL;
            UserData.Ptr = (ULONGLONG)&v21;
            v25 = 8LL;
            v24 = &v22;
            v27 = 1LL;
            v26 = &v18;
            v28 = v11 + 40;
            v29 = 4LL;
            v13 = *(_DWORD *)(v11 + 40);
            v30 = *(_QWORD *)(v11 + 8);
            v32 = 0;
            v34 = 1LL;
            v31 = 8 * v13;
            v33 = &v19;
            EtwWriteEx(v12, &PPM_ETW_PARK_NODE_STATS, 0LL, 0, 0LL, 0LL, 6u, &UserData);
          }
        }
      }
    }
    if ( *(_BYTE *)(v6 + 6) != *(_BYTE *)(v6 + 104) )
    {
      v14 = (_BYTE *)(v6 + 240);
      v15 = 0LL;
      v16 = 2LL;
      do
      {
        PpmParkComputeSnapStatistics(v2, v4, i, v15 + v6 + 144, 0LL, 0LL, v14++);
        v15 += 48LL;
        --v16;
      }
      while ( v16 );
      v1 = v20;
    }
    v5 = i;
    result = ++v1;
  }
  return result;
}
