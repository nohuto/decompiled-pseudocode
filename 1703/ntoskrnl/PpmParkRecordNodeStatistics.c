/*
 * XREFs of PpmParkRecordNodeStatistics @ 0x140046970
 * Callers:
 *     PpmCheckRecordAllUtility @ 0x140046680 (PpmCheckRecordAllUtility.c)
 * Callees:
 *     PpmParkComputeSnapStatistics @ 0x140046B00 (PpmParkComputeSnapStatistics.c)
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     EtwpLevelKeywordEnabled @ 0x1400F2C40 (EtwpLevelKeywordEnabled.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

__int64 PpmParkRecordNodeStatistics()
{
  unsigned int v0; // r15d
  unsigned __int16 v1; // di
  __int64 result; // rax
  int v3; // r13d
  __int64 v4; // rcx
  unsigned __int8 v5; // r10
  unsigned __int8 v6; // dl
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  REGHANDLE v12; // r10
  int v13; // edx
  __int64 v14; // r14
  int v15; // esi
  __int64 v16; // r12
  unsigned __int8 i; // [rsp+48h] [rbp-89h]
  unsigned __int8 v18; // [rsp+49h] [rbp-88h]
  char v19; // [rsp+50h] [rbp-81h] BYREF
  char v20; // [rsp+58h] [rbp-79h] BYREF
  unsigned __int16 v21; // [rsp+60h] [rbp-71h]
  __int16 v22; // [rsp+68h] [rbp-69h] BYREF
  int v23; // [rsp+70h] [rbp-61h]
  __int64 v24; // [rsp+78h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+88h] [rbp-49h] BYREF
  __int64 *v26; // [rsp+98h] [rbp-39h]
  __int64 v27; // [rsp+A0h] [rbp-31h]
  char *v28; // [rsp+A8h] [rbp-29h]
  __int64 v29; // [rsp+B0h] [rbp-21h]
  __int64 v30; // [rsp+B8h] [rbp-19h]
  __int64 v31; // [rsp+C0h] [rbp-11h]
  __int64 v32; // [rsp+C8h] [rbp-9h]
  int v33; // [rsp+D0h] [rbp-1h]
  int v34; // [rsp+D4h] [rbp+3h]
  char *v35; // [rsp+D8h] [rbp+7h]
  __int64 v36; // [rsp+E0h] [rbp+Fh]

  v0 = PpmParkNumNodes;
  v1 = 0;
  result = dword_14034BB2C;
  v3 = PpmCheckMakeupCount;
  v4 = 175LL * dword_14034BB2C;
  v21 = 0;
  v23 = PpmParkNumNodes;
  v5 = BYTE2(PpmCurrentProfile[v4 + 15]);
  v6 = BYTE4(PpmCurrentProfile[v4 + 15]);
  v18 = v6;
  for ( i = v5; v1 < v0; v21 = v1 )
  {
    v7 = PpmParkNodes + 248LL * v1;
    if ( (unsigned __int8)PpmParkComputeSnapStatistics(v3, v5, v6, (int)v7 + 56, v7 + 116, v7 + 117, v7 + 118) )
    {
      v20 = *(_BYTE *)(v7 + 118);
      v19 = *(_BYTE *)(v7 + 116);
      v24 = *(_QWORD *)(v7 + 8);
      v22 = *(_WORD *)(v7 + 4);
      if ( PpmEtwRegistered )
      {
        if ( PpmEtwHandle )
        {
          LOBYTE(v8) = 5;
          if ( (unsigned __int8)EtwpLevelKeywordEnabled(*(_QWORD *)(PpmEtwHandle + 32) + 80LL, v8, 2LL)
            || *(_BYTE *)(v12 + 101)
            && (LOBYTE(v9) = 5, (unsigned __int8)EtwpLevelKeywordEnabled(*(_QWORD *)(v12 + 40) + 80LL, v9, v10)) )
          {
            *(_QWORD *)&UserData.Size = 2LL;
            UserData.Ptr = (ULONGLONG)&v22;
            v27 = 8LL;
            v26 = &v24;
            v29 = 1LL;
            v28 = &v19;
            v30 = v11 + 40;
            v31 = 4LL;
            v13 = *(_DWORD *)(v11 + 40);
            v32 = *(_QWORD *)(v11 + 8);
            v35 = &v20;
            v33 = 8 * v13;
            v34 = 0;
            v36 = 1LL;
            EtwWriteEx(v12, &PPM_ETW_PARK_NODE_STATS, 0LL, 0, 0LL, 0LL, 6u, &UserData);
            v0 = PpmParkNumNodes;
            v23 = PpmParkNumNodes;
          }
        }
      }
    }
    if ( *(_BYTE *)(v7 + 6) != *(_BYTE *)(v7 + 104) )
    {
      v14 = v7 + 240;
      v15 = 0;
      v16 = 2LL;
      do
      {
        PpmParkComputeSnapStatistics(v3, i, v18, v15 + v7 + 144, 0LL, 0LL, v14++);
        v15 += 48;
        --v16;
      }
      while ( v16 );
      v1 = v21;
      v0 = v23;
    }
    v5 = i;
    ++v1;
    v6 = v18;
    result = v1;
  }
  return result;
}
