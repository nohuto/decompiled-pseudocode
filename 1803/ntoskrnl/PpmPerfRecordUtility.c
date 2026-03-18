/*
 * XREFs of PpmPerfRecordUtility @ 0x1400374B0
 * Callers:
 *     PpmCheckRecordAllUtility @ 0x140037400 (PpmCheckRecordAllUtility.c)
 * Callees:
 *     EtwWriteEx @ 0x1400EF860 (EtwWriteEx.c)
 *     EtwpLevelKeywordEnabled @ 0x1401093F0 (EtwpLevelKeywordEnabled.c)
 *     PpmPerfResetHistory @ 0x14017FF08 (PpmPerfResetHistory.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

__int64 __fastcall PpmPerfRecordUtility(__int64 a1)
{
  _QWORD *v1; // rdi
  char v2; // r13
  __int64 result; // rax
  unsigned __int8 *v5; // r12
  __int64 v6; // r11
  __int64 v7; // rsi
  unsigned __int64 v8; // rcx
  __int64 v9; // r14
  unsigned __int64 v10; // r9
  __int64 v11; // r15
  unsigned __int64 v12; // r10
  int v13; // esi
  unsigned __int64 v14; // r14
  __int64 v15; // rdx
  unsigned __int64 v16; // r15
  int v17; // eax
  unsigned __int64 v18; // rcx
  int v19; // r12d
  __int64 v20; // r9
  REGHANDLE v21; // r10
  __int64 v22; // rcx
  unsigned __int64 v23; // r8
  char *v24; // rdi
  unsigned __int64 v25; // rax
  unsigned __int16 *v26; // rdx
  unsigned __int8 *v27; // r11
  int v28; // eax
  int v29; // eax
  _DWORD *v30; // r10
  signed __int64 v31; // rdi
  __int64 v32; // rdx
  int v33; // eax
  unsigned int v34; // r10d
  __int16 *v35; // rcx
  unsigned int v36; // ett
  unsigned int v37; // eax
  unsigned int v38; // eax
  unsigned __int8 v39; // cl
  char v40; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v41; // [rsp+48h] [rbp-B8h] BYREF
  __int16 v42; // [rsp+4Ch] [rbp-B4h] BYREF
  __int16 v43; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v44; // [rsp+58h] [rbp-A8h] BYREF
  int v45; // [rsp+60h] [rbp-A0h] BYREF
  int v46; // [rsp+68h] [rbp-98h] BYREF
  _DWORD *v47; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v48; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v49; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 *v51; // [rsp+A0h] [rbp-60h]
  __int64 v52; // [rsp+A8h] [rbp-58h]
  unsigned __int64 *v53; // [rsp+B0h] [rbp-50h]
  __int64 v54; // [rsp+B8h] [rbp-48h]
  int *v55; // [rsp+C0h] [rbp-40h]
  __int64 v56; // [rsp+C8h] [rbp-38h]
  __int16 *v57; // [rsp+D0h] [rbp-30h]
  __int64 v58; // [rsp+D8h] [rbp-28h]
  __int64 v59; // [rsp+E0h] [rbp-20h]
  __int64 v60; // [rsp+E8h] [rbp-18h]
  int *v61; // [rsp+F0h] [rbp-10h]
  __int64 v62; // [rsp+F8h] [rbp-8h]
  __int16 *v63; // [rsp+100h] [rbp+0h]
  __int64 v64; // [rsp+108h] [rbp+8h]
  __int16 *v65; // [rsp+110h] [rbp+10h]
  __int64 v66; // [rsp+118h] [rbp+18h]
  char *v67; // [rsp+120h] [rbp+20h]
  __int64 v68; // [rsp+128h] [rbp+28h]
  char *v69; // [rsp+130h] [rbp+30h]
  __int64 v70; // [rsp+138h] [rbp+38h]
  _QWORD *v71; // [rsp+140h] [rbp+40h]
  __int64 v72; // [rsp+148h] [rbp+48h]

  v1 = *(_QWORD **)(a1 + 24168);
  v2 = 0;
  result = (unsigned int)PpmCheckMakeupCount;
  v5 = *(unsigned __int8 **)(a1 + 24208);
  v6 = *(_QWORD *)(a1 + 24184);
  if ( !v1 )
    return result;
  v7 = v1[1];
  v8 = v1[3] - v7;
  v9 = *v1;
  v10 = v1[4] - *v1;
  v11 = v1[2];
  v12 = v1[5] - v11;
  v41 = 0;
  if ( PpmCheckMakeupCount )
  {
    v25 = v8 / (unsigned int)(PpmCheckMakeupCount + 1);
    v8 = v25;
    if ( v10 < v25 )
      v25 = v10;
    v10 = v25;
    if ( v12 >= v8 )
      v12 = v8;
  }
  v1[1] = v7 + v8;
  *v1 = v9 + v10;
  v1[2] = v11 + v12;
  if ( v10 > v8 )
    v10 = v8;
  if ( v12 > v8 )
    v12 = v8;
  if ( v8 <= 1 )
    v8 = 1LL;
  if ( v5 )
  {
    result = *v5;
    *(_DWORD *)(a1 + 24244) = *v5 * v5[1];
    return result;
  }
  v13 = *(_DWORD *)(a1 + 24228);
  v14 = v10 * (unsigned int)(100 * v13) / v8;
  v15 = 100LL;
  v16 = v10 * (unsigned int)(v13 * *(_DWORD *)(a1 + 24236)) / v8;
  if ( v6 )
    v17 = *(_DWORD *)(v6 + 116);
  else
    v17 = 100;
  v18 = v8 - v10;
  v49 = v10;
  v19 = 0;
  v40 = 100;
  v20 = 2LL;
  v44 = v16;
  v43 = v14;
  v46 = v13;
  v45 = v17;
  v47 = (_DWORD *)v12;
  v48 = v18;
  if ( PpmEtwRegistered )
  {
    v21 = PpmEtwHandle;
    if ( PpmEtwHandle )
    {
      v22 = *(_QWORD *)(PpmEtwHandle + 32);
      if ( *(_DWORD *)(v22 + 80)
        && (unsigned __int8)(*(_BYTE *)(v22 + 84) - 1) > 3u
        && (*(_BYTE *)(v22 + 96) & 2) != 0
        && (*(_QWORD *)(v22 + 104) & 2LL) == *(_QWORD *)(v22 + 104) )
      {
        goto LABEL_33;
      }
      if ( !*(_BYTE *)(PpmEtwHandle + 101) )
        goto LABEL_18;
      LOBYTE(v15) = 5;
      if ( (unsigned __int8)EtwpLevelKeywordEnabled(*(_QWORD *)(PpmEtwHandle + 40) + 80LL, v15, 2LL) )
      {
LABEL_33:
        v58 = v20;
        UserData.Ptr = (ULONGLONG)&PpmCheckTime;
        v64 = v20;
        v51 = &v48;
        v66 = v20;
        v53 = &v49;
        *(_QWORD *)&UserData.Size = 8LL;
        v55 = &v45;
        v42 = *(unsigned __int8 *)(a1 + 208);
        v57 = &v42;
        v59 = a1 + 209;
        v61 = &v46;
        v63 = &v43;
        v65 = &v44;
        v67 = &v40;
        v69 = (char *)v1 + 273;
        v71 = &v47;
        v52 = 8LL;
        v54 = 8LL;
        v56 = 4LL;
        v60 = 1LL;
        v62 = 4LL;
        v68 = 1LL;
        v70 = 1LL;
        v72 = 8LL;
        EtwWriteEx(v21, &PPM_ETW_RECORDED_UTILITY, 0LL, 0, 0LL, 0LL, 0xCu, &UserData);
        v20 = 2LL;
      }
      v15 = 100LL;
    }
  }
LABEL_18:
  v23 = *(_QWORD *)(a1 + 24216);
  v24 = (char *)(v1 + 34);
  if ( v23 )
  {
    v45 = *(_DWORD *)v23;
    v46 = *(_DWORD *)(v23 + 4);
    v26 = (unsigned __int16 *)(v23 + 28 + 8LL * (unsigned int)v46);
    v27 = (unsigned __int8 *)v26 + 5;
    *(_DWORD *)(v23 + 8) += (unsigned __int16)v14 - *v26;
    v28 = v26[1];
    *v26 = v14;
    *(_DWORD *)(v23 + 12) += (unsigned __int16)v16 - v28;
    v29 = *((unsigned __int8 *)v26 + 4);
    v26[1] = v16;
    *(_DWORD *)(v23 + 16) += (unsigned __int8)v13 - v29;
    v30 = (_DWORD *)(v23 + 20);
    v31 = v24 - (char *)v26;
    *((_BYTE *)v26 + 4) = v13;
    v32 = v20;
    v47 = (_DWORD *)(v23 + 20);
    do
    {
      v33 = *v27++;
      *v30++ -= v33;
      *(v30 - 1) += v27[v31 - 6];
      *(v27 - 1) = v27[v31 - 6];
      --v32;
    }
    while ( v32 );
    v34 = v45;
    v35 = &v41;
    if ( v46 + 1 != v45 )
      v19 = v46 + 1;
    v36 = *(_DWORD *)(v23 + 8);
    *(_DWORD *)(v23 + 4) = v19;
    LODWORD(v14) = v36 / v34;
    LODWORD(v16) = *(_DWORD *)(v23 + 12) / v34;
    v37 = *(_DWORD *)(v23 + 16);
    v23 = (unsigned __int64)v47;
    v13 = v37 / v34;
    do
    {
      v38 = *(_DWORD *)v23;
      v35 = (__int16 *)((char *)v35 + 1);
      v23 += 4LL;
      result = v38 / v34;
      *((_BYTE *)v35 - 1) = result;
      --v20;
    }
    while ( v20 );
    v15 = 100LL;
  }
  else
  {
    result = *(unsigned __int16 *)v24;
    v41 = *(_WORD *)v24;
  }
  if ( PpmCheckCurrentPipelineId == 5 )
  {
    v2 = 1;
    v39 = HIBYTE(v41);
    if ( HIBYTE(v41) >= 0x64u )
      v39 = 100;
    v23 = (unsigned int)v16 * v39;
    LODWORD(v14) = v14 - (unsigned int)v14 * v39 / 0x64;
    result = (unsigned int)(1374389535 * v23);
    v15 = (unsigned int)v23 / 0x64;
    LODWORD(v16) = v16 - v15;
  }
  *(_DWORD *)(a1 + 24244) = v14;
  *(_DWORD *)(a1 + 24248) = v16;
  *(_DWORD *)(a1 + 24232) = v13;
  if ( v2 )
    return PpmPerfResetHistory(a1, v15, v23, v20);
  return result;
}
