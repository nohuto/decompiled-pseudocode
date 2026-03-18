/*
 * XREFs of PpmParkCalculateCoreParkingMask @ 0x140046CD0
 * Callers:
 *     <none>
 * Callees:
 *     KeEnumerateNextProcessor @ 0x1400459E0 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x140089100 (KeGetPrcb.c)
 *     KeCpuSetQueryUnparkRecommendation @ 0x140202560 (KeCpuSetQueryUnparkRecommendation.c)
 *     PpmEventLPICoreParking @ 0x140235964 (PpmEventLPICoreParking.c)
 *     PpmEventTraceCoreParkingSelection @ 0x140236340 (PpmEventTraceCoreParkingSelection.c)
 *     PpmParkChooseCoresToUnpark @ 0x140237400 (PpmParkChooseCoresToUnpark.c)
 *     PpmParkComputeDiff @ 0x140237A28 (PpmParkComputeDiff.c)
 */

char PpmParkCalculateCoreParkingMask()
{
  unsigned int v1; // r12d
  unsigned int v2; // ecx
  unsigned int v3; // edi
  __int64 v4; // rbx
  unsigned __int8 v5; // cl
  unsigned __int8 v6; // al
  int v7; // ecx
  __int64 v8; // r13
  __int16 v9; // ax
  __int64 Prcb; // rax
  unsigned int v11; // r12d
  __int64 *v12; // rax
  unsigned int v13; // r14d
  __int64 v14; // r15
  __int64 v15; // r11
  int v16; // esi
  unsigned int v17; // r9d
  unsigned int v18; // edi
  unsigned int v19; // r8d
  unsigned int v20; // r8d
  unsigned __int8 v21; // al
  unsigned __int64 v22; // r14
  unsigned __int64 v23; // rdx
  __int16 v24; // ax
  unsigned int v25; // eax
  int v26; // eax
  int v27; // r9d
  unsigned int v28; // r14d
  BOOL v29; // eax
  unsigned __int16 *v30; // [rsp+50h] [rbp-49h] BYREF
  unsigned int v31; // [rsp+58h] [rbp-41h] BYREF
  unsigned int v32; // [rsp+5Ch] [rbp-3Dh] BYREF
  unsigned int v33; // [rsp+60h] [rbp-39h]
  __int64 v34; // [rsp+68h] [rbp-31h]
  __int64 *v35; // [rsp+70h] [rbp-29h]
  __int64 v36; // [rsp+78h] [rbp-21h]
  unsigned __int16 *v37[2]; // [rsp+80h] [rbp-19h] BYREF
  __int16 v38; // [rsp+90h] [rbp-9h]
  unsigned __int16 *v39[2]; // [rsp+98h] [rbp-1h] BYREF
  __int16 v40; // [rsp+A8h] [rbp+Fh]
  int v41; // [rsp+100h] [rbp+67h] BYREF
  int v42; // [rsp+108h] [rbp+6Fh]
  unsigned int v43; // [rsp+110h] [rbp+77h]
  unsigned int v44; // [rsp+118h] [rbp+7Fh]

  if ( !PpmIsParkingEnabled )
    return 1;
  v1 = 0;
  v44 = 0;
  v2 = PpmParkNumNodes;
  v35 = &PpmCurrentProfile[175 * dword_14034BB2C + 5];
  v3 = 100 * *((unsigned __int8 *)v35 + 81);
  v33 = v3;
  if ( !PpmParkNumNodes )
    goto LABEL_44;
  do
  {
    v4 = PpmParkNodes + 248LL * v1;
    if ( (*(_BYTE *)(v4 + 122) & 1) != 0 )
      goto LABEL_43;
    v5 = *(_BYTE *)(v4 + 113);
    *(_QWORD *)(v4 + 40) = *(_QWORD *)(v4 + 32);
    v6 = *(_BYTE *)(v4 + 111);
    if ( v6 >= v5 )
    {
      v42 = 2;
      v6 = v5;
    }
    else
    {
      v42 = 1;
    }
    v7 = v6;
    v8 = 0LL;
    v9 = *(_WORD *)(v4 + 4);
    v37[0] = 0LL;
    v38 = v9;
    v37[1] = *(unsigned __int16 **)(v4 + 8);
    v41 = v7;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v31, v37) )
    {
      Prcb = KeGetPrcb(v31);
      if ( *(_DWORD *)(Prcb + 24376) >= v3 )
        v8 |= *(_QWORD *)(Prcb + 200);
    }
    v11 = v41;
    v12 = (__int64 *)(v4 + 16);
    v13 = 0;
    v34 = v4 + 16;
    v43 = 0;
    v14 = 0LL;
    do
    {
      v15 = *v12;
      v16 = 0;
      v41 = 0;
      v36 = v15;
      if ( !v15 )
        break;
      v17 = *(unsigned __int8 *)(v4 + v14 + 104);
      v18 = v17;
      if ( !PpmPerfMaxOverrideEnabled )
      {
        if ( v17 > *(unsigned __int8 *)(v14 + v4 + 114) )
          v18 = *(unsigned __int8 *)(v14 + v4 + 114);
        v18 = (unsigned __int8)PpmParkGranularity
            + v18
            - 1
            - ((unsigned __int8)PpmParkGranularity + v18 - 1) % (unsigned __int8)PpmParkGranularity;
        if ( PpmParkUnparkCores )
          v18 *= (unsigned __int8)PpmParkGranularity;
      }
      if ( PpmCheckLatencyBoostActive )
      {
        v19 = (v17 * *((unsigned __int8 *)v35 + v14 + 75) + 50) / 0x64;
        v20 = (v17 - v19) % (unsigned __int8)PpmParkGranularity + v19;
        if ( v18 < v20 )
        {
          v16 = 64;
          v18 = v20;
          v41 = 64;
        }
      }
      if ( !v13 && *(_BYTE *)(v4 + 115) )
      {
        v18 = *(unsigned __int8 *)(v4 + 104);
        v16 |= 0x80u;
        v41 = v16;
      }
      *(_BYTE *)(v14 + v4 + 114) = v18;
      v21 = KeCpuSetQueryUnparkRecommendation(*(unsigned __int16 *)(v4 + 4), v15, &v30);
      v22 = (unsigned __int64)v30;
      LODWORD(v23) = v21;
      if ( v21 )
      {
        if ( (unsigned __int8)PpmParkGranularity > 1u )
        {
          v24 = *(_WORD *)(v4 + 4);
          v39[0] = 0LL;
          v40 = v24;
          v39[1] = v30;
          while ( !(unsigned int)KeEnumerateNextProcessor(&v32, v39) )
            v22 |= *(_QWORD *)(KeGetPrcb(v32) + 25176);
          v30 = (unsigned __int16 *)v22;
          v23 = (0x101010101010101LL
               * ((((v22 - ((v22 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                 + (((v22 - ((v22 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                 + ((((v22 - ((v22 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                   + (((v22 - ((v22 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
        }
        v18 += v23;
        if ( v18 >= *(unsigned __int8 *)(v4 + v14 + 104) )
          v18 = *(unsigned __int8 *)(v4 + v14 + 104);
        v16 |= 0x10u;
        v41 = v16;
      }
      v25 = *(unsigned __int8 *)(v14 + v4 + 106);
      if ( v18 < v25 )
      {
        v16 |= 4u;
LABEL_38:
        v18 = v25;
        v41 = v16;
        goto LABEL_39;
      }
      v25 = *(unsigned __int8 *)(v14 + v4 + 108);
      if ( v18 > v25 )
      {
        v16 |= 8u;
        goto LABEL_38;
      }
LABEL_39:
      v26 = 0;
      if ( v11 < v18 )
      {
        v18 = v11;
        v41 = v42 | v16;
        v26 = 1;
      }
      v11 -= v18;
      *(_BYTE *)(v14 + v4 + 119) = PpmParkChooseCoresToUnpark(
                                     v18,
                                     *(unsigned __int16 *)(v4 + 4),
                                     v36,
                                     *(_QWORD *)(v4 + 40),
                                     v8,
                                     v22,
                                     v4 + 32,
                                     v26,
                                     (__int64)&v41);
      v27 = v22;
      v28 = v43;
      PpmEventTraceCoreParkingSelection(v4, v43, v8, v27, v18, v41);
      v13 = v28 + 1;
      v12 = (__int64 *)(v34 + 8);
      v43 = v13;
      ++v14;
      v34 += 8LL;
    }
    while ( v13 < 2 );
    v2 = PpmParkNumNodes;
    v1 = v44;
    v3 = v33;
LABEL_43:
    v44 = ++v1;
  }
  while ( v1 < v2 );
LABEL_44:
  PpmParkComputeDiff();
  v29 = __PAIR64__(PpmParkLpiCapChanged, PpmParkLpiEngaged) != (PpmParkLpiCap != 0);
  PpmParkLpiCapChanged = 0;
  PpmParkLpiEngaged = PpmParkLpiCap != 0;
  if ( v29 )
    PpmEventLPICoreParking();
  return 1;
}
