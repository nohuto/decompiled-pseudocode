/*
 * XREFs of PpmParkCalculateCoreParkingMask @ 0x14008F400
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x14008D0A4 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x14008F8D0 (KeEnumerateNextProcessor.c)
 *     KeCpuSetQueryUnparkRecommendation @ 0x140208C88 (KeCpuSetQueryUnparkRecommendation.c)
 *     PpmEventLPICoreParking @ 0x14024A9FC (PpmEventLPICoreParking.c)
 *     PpmEventTraceCoreParkingSelection @ 0x14024B3D4 (PpmEventTraceCoreParkingSelection.c)
 *     PpmParkChooseCoresToUnpark @ 0x14024C4A4 (PpmParkChooseCoresToUnpark.c)
 *     PpmParkComputeDiff @ 0x14024CACC (PpmParkComputeDiff.c)
 */

char PpmParkCalculateCoreParkingMask()
{
  unsigned int v1; // r12d
  __int64 v2; // r14
  unsigned int v3; // esi
  __int64 v4; // rbx
  unsigned __int8 v5; // dl
  unsigned __int8 v6; // cl
  unsigned __int8 v7; // al
  __int64 v8; // rdi
  __int16 v9; // ax
  __int64 Prcb; // rax
  unsigned int v11; // r13d
  __int64 *v12; // rax
  __int64 v13; // r15
  __int64 v14; // r12
  __int64 v15; // r10
  int v16; // esi
  unsigned int v17; // r9d
  unsigned int v18; // edi
  unsigned int v19; // eax
  unsigned int v20; // r8d
  unsigned int v21; // r8d
  unsigned __int8 v22; // al
  unsigned __int64 v23; // r14
  unsigned __int64 v24; // rdx
  __int16 v25; // ax
  unsigned int v26; // eax
  int v27; // eax
  __int64 v28; // r9
  int v29; // edx
  int v30; // eax
  unsigned __int64 v31; // [rsp+50h] [rbp-49h] BYREF
  ULONG v32; // [rsp+58h] [rbp-41h] BYREF
  int v33; // [rsp+5Ch] [rbp-3Dh]
  unsigned int v34; // [rsp+60h] [rbp-39h]
  __int64 v35; // [rsp+68h] [rbp-31h]
  __int64 v36; // [rsp+70h] [rbp-29h]
  __int64 v37; // [rsp+78h] [rbp-21h]
  _QWORD v38[2]; // [rsp+80h] [rbp-19h] BYREF
  __int16 v39; // [rsp+90h] [rbp-9h]
  _QWORD v40[2]; // [rsp+98h] [rbp-1h] BYREF
  __int16 v41; // [rsp+A8h] [rbp+Fh]
  int v42; // [rsp+100h] [rbp+67h] BYREF
  unsigned int v43; // [rsp+108h] [rbp+6Fh]
  unsigned int v44; // [rsp+110h] [rbp+77h]
  ULONG v45; // [rsp+118h] [rbp+7Fh] BYREF

  if ( !PpmIsParkingEnabled )
    return 1;
  v1 = 0;
  v44 = 0;
  v2 = 2688LL * dword_1403661AC + PpmCurrentProfile + 40;
  v37 = v2;
  v3 = 100 * *(unsigned __int8 *)(v2 + 81);
  v34 = v3;
  if ( !PpmParkNumNodes )
    goto LABEL_43;
  do
  {
    v4 = PpmParkNodes + 248LL * v1;
    if ( (*(_BYTE *)(v4 + 122) & 1) != 0 )
      goto LABEL_42;
    v5 = *(_BYTE *)(v4 + 111);
    v6 = *(_BYTE *)(v4 + 113);
    *(_QWORD *)(v4 + 40) = *(_QWORD *)(v4 + 32);
    v7 = v6;
    if ( v5 < v6 )
      v7 = v5;
    v43 = v7;
    v33 = 2 - (v5 < v6);
    v8 = 0LL;
    v9 = *(_WORD *)(v4 + 4);
    v38[0] = 0LL;
    v39 = v9;
    v38[1] = *(_QWORD *)(v4 + 8);
    while ( !(unsigned int)KeEnumerateNextProcessor(&v45, v38) )
    {
      Prcb = KeGetPrcb(v45);
      if ( *(_DWORD *)(Prcb + 24248) >= v3 )
        v8 |= *(_QWORD *)(Prcb + 200);
    }
    v11 = 0;
    v12 = (__int64 *)(v4 + 16);
    v13 = 0LL;
    v35 = v4 + 16;
    v14 = v8;
    do
    {
      v15 = *v12;
      v16 = 0;
      v42 = 0;
      v36 = v15;
      if ( !v15 )
        break;
      v17 = *(unsigned __int8 *)(v4 + v13 + 104);
      v18 = v17;
      if ( !PpmPerfMaxOverrideEnabled )
      {
        v19 = *(unsigned __int8 *)(v4 + v13 + 114);
        if ( v17 <= v19 )
          v19 = *(unsigned __int8 *)(v4 + v13 + 104);
        v18 = v19
            + (unsigned __int8)PpmParkGranularity
            - 1
            - (v19 + (unsigned __int8)PpmParkGranularity - 1) % (unsigned __int8)PpmParkGranularity;
        if ( PpmParkUnparkCores )
          v18 *= (unsigned __int8)PpmParkGranularity;
      }
      if ( PpmCheckLatencyBoostActive )
      {
        v20 = (v17 * *(unsigned __int8 *)(v13 + v2 + 75) + 50) / 0x64;
        v21 = (v17 - v20) % (unsigned __int8)PpmParkGranularity + v20;
        if ( v18 < v21 )
        {
          v16 = 64;
          v18 = v21;
          v42 = 64;
        }
      }
      if ( !v11 && *(_BYTE *)(v4 + 115) )
      {
        v18 = *(unsigned __int8 *)(v4 + 104);
        v16 |= 0x80u;
        v42 = v16;
      }
      *(_BYTE *)(v13 + v4 + 114) = v18;
      v22 = KeCpuSetQueryUnparkRecommendation(*(unsigned __int16 *)(v4 + 4), v15, &v31);
      v23 = v31;
      LODWORD(v24) = v22;
      if ( v22 )
      {
        if ( (unsigned __int8)PpmParkGranularity > 1u )
        {
          v25 = *(_WORD *)(v4 + 4);
          v40[0] = 0LL;
          v41 = v25;
          v40[1] = v31;
          while ( !(unsigned int)KeEnumerateNextProcessor(&v32, v40) )
            v23 |= *(_QWORD *)(KeGetPrcb(v32) + 24920);
          v31 = v23;
          v24 = (0x101010101010101LL
               * ((((v23 - ((v23 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                 + (((v23 - ((v23 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                 + ((((v23 - ((v23 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                   + (((v23 - ((v23 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
        }
        v18 += v24;
        if ( v18 >= *(unsigned __int8 *)(v4 + v13 + 104) )
          v18 = *(unsigned __int8 *)(v4 + v13 + 104);
        v16 |= 0x10u;
        v42 = v16;
      }
      v26 = *(unsigned __int8 *)(v4 + v13 + 106);
      if ( v18 < v26 )
      {
        v16 |= 4u;
LABEL_37:
        v18 = v26;
        v42 = v16;
        goto LABEL_38;
      }
      v26 = *(unsigned __int8 *)(v13 + v4 + 108);
      if ( v18 > v26 )
      {
        v16 |= 8u;
        goto LABEL_37;
      }
LABEL_38:
      v27 = 0;
      if ( v43 < v18 )
      {
        v18 = v43;
        v42 = v33 | v16;
        v27 = 1;
      }
      v28 = *(_QWORD *)(v4 + 40);
      v29 = *(unsigned __int16 *)(v4 + 4);
      v43 -= v18;
      *(_BYTE *)(v4 + v13 + 119) = PpmParkChooseCoresToUnpark(v18, v29, v36, v28, v14, v23, v4 + 32, v27, (__int64)&v42);
      PpmEventTraceCoreParkingSelection(v4, v11++, v14, v23, v18, v42);
      v2 = v37;
      v12 = (__int64 *)(v35 + 8);
      ++v13;
      v35 += 8LL;
    }
    while ( v11 < 2 );
    v1 = v44;
    v3 = v34;
LABEL_42:
    v44 = ++v1;
  }
  while ( v1 < PpmParkNumNodes );
LABEL_43:
  PpmParkComputeDiff();
  if ( PpmParkLpiEngaged != (PpmParkLpiCap != 0) || (v30 = 0, PpmParkLpiCapChanged) )
    v30 = 1;
  PpmParkLpiEngaged = PpmParkLpiCap != 0;
  PpmParkLpiCapChanged = 0;
  if ( v30 )
    PpmEventLPICoreParking();
  return 1;
}
