/*
 * XREFs of PpmParkRecordNodeStatistics @ 0x1400376E0
 * Callers:
 *     PpmCheckRecordAllUtility @ 0x140037400 (PpmCheckRecordAllUtility.c)
 * Callees:
 *     PpmParkComputeSnapStatistics @ 0x140037850 (PpmParkComputeSnapStatistics.c)
 *     EtwWriteEx @ 0x1400EF860 (EtwWriteEx.c)
 *     EtwpLevelKeywordEnabled @ 0x1401093F0 (EtwpLevelKeywordEnabled.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

__int64 PpmParkRecordNodeStatistics()
{
  int v0; // r15d
  __int64 v1; // rcx
  __int64 result; // rax
  unsigned __int16 v3; // di
  unsigned __int8 v4; // r12
  unsigned __int8 i; // r13
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  REGHANDLE v11; // r10
  int v12; // ecx
  int v13; // esi
  __int64 v14; // r14
  __int64 v15; // rdi
  char v16; // [rsp+48h] [rbp-69h] BYREF
  char v17; // [rsp+50h] [rbp-61h] BYREF
  unsigned __int16 v18; // [rsp+58h] [rbp-59h]
  __int16 v19; // [rsp+60h] [rbp-51h] BYREF
  __int64 v20; // [rsp+68h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-39h] BYREF
  __int64 *v22; // [rsp+88h] [rbp-29h]
  __int64 v23; // [rsp+90h] [rbp-21h]
  char *v24; // [rsp+98h] [rbp-19h]
  __int64 v25; // [rsp+A0h] [rbp-11h]
  __int64 v26; // [rsp+A8h] [rbp-9h]
  __int64 v27; // [rsp+B0h] [rbp-1h]
  __int64 v28; // [rsp+B8h] [rbp+7h]
  int v29; // [rsp+C0h] [rbp+Fh]
  int v30; // [rsp+C4h] [rbp+13h]
  char *v31; // [rsp+C8h] [rbp+17h]
  __int64 v32; // [rsp+D0h] [rbp+1Fh]

  v0 = PpmCheckMakeupCount;
  v1 = 336LL * dword_1403AAA2C;
  result = 0LL;
  v3 = 0;
  v18 = 0;
  v4 = BYTE2(PpmCurrentProfile[v1 + 15]);
  for ( i = BYTE4(PpmCurrentProfile[v1 + 15]); v3 < (unsigned int)PpmParkNumNodes; v18 = v3 )
  {
    v6 = PpmParkNodes + 248LL * v3;
    if ( (unsigned __int8)PpmParkComputeSnapStatistics(v0, v4, i, (int)v6 + 56, v6 + 116, v6 + 117, v6 + 118) )
    {
      v17 = *(_BYTE *)(v6 + 118);
      v16 = *(_BYTE *)(v6 + 116);
      v20 = *(_QWORD *)(v6 + 8);
      v19 = *(_WORD *)(v6 + 4);
      if ( PpmEtwRegistered )
      {
        if ( PpmEtwHandle )
        {
          LOBYTE(v7) = 5;
          if ( (unsigned __int8)EtwpLevelKeywordEnabled(*(_QWORD *)(PpmEtwHandle + 32) + 80LL, v7, 2LL)
            || *(_BYTE *)(v11 + 101)
            && (LOBYTE(v8) = 5, (unsigned __int8)EtwpLevelKeywordEnabled(*(_QWORD *)(v11 + 40) + 80LL, v8, v9)) )
          {
            *(_QWORD *)&UserData.Size = 2LL;
            UserData.Ptr = (ULONGLONG)&v19;
            v23 = 8LL;
            v22 = &v20;
            v25 = 1LL;
            v24 = &v16;
            v26 = v10 + 40;
            v27 = 4LL;
            v12 = *(_DWORD *)(v10 + 40);
            v28 = *(_QWORD *)(v10 + 8);
            v30 = 0;
            v32 = 1LL;
            v29 = 8 * v12;
            v31 = &v17;
            EtwWriteEx(v11, &PPM_ETW_PARK_NODE_STATS, 0LL, 0, 0LL, 0LL, 6u, &UserData);
          }
        }
      }
    }
    result = *(unsigned __int8 *)(v6 + 104);
    if ( *(_BYTE *)(v6 + 6) != (_BYTE)result )
    {
      v13 = 0;
      v14 = v6 + 240;
      v15 = 2LL;
      do
      {
        result = PpmParkComputeSnapStatistics(v0, v4, i, v13 + (int)v6 + 144, 0LL, 0LL, v14++);
        v13 += 48;
        --v15;
      }
      while ( v15 );
      v3 = v18;
    }
    ++v3;
  }
  return result;
}
