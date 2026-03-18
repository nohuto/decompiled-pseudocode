/*
 * XREFs of PpmParkCalculateCoreParkingMask @ 0x140036BE0
 * Callers:
 *     <none>
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140034620 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x140036E98 (KeGetPrcb.c)
 *     KeCpuSetQueryUnparkRecommendation @ 0x140246760 (KeCpuSetQueryUnparkRecommendation.c)
 *     PpmEventLPICoreParking @ 0x14028096C (PpmEventLPICoreParking.c)
 *     PpmEventTraceCoreParkingSelection @ 0x14028134C (PpmEventTraceCoreParkingSelection.c)
 *     PpmParkChooseCoresToUnpark @ 0x140282200 (PpmParkChooseCoresToUnpark.c)
 *     PpmParkComputeDiff @ 0x140282868 (PpmParkComputeDiff.c)
 */

char PpmParkCalculateCoreParkingMask()
{
  unsigned int v1; // r12d
  __int64 *v2; // r14
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
  __int64 v15; // r9
  int v16; // edi
  unsigned int v17; // r8d
  unsigned int v18; // esi
  unsigned int v19; // eax
  int v20; // eax
  unsigned int v21; // r9d
  unsigned int v22; // r9d
  int v23; // r14d
  unsigned __int8 v24; // al
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // r14
  __int16 v27; // ax
  int v28; // edi
  unsigned int v29; // eax
  int v30; // eax
  __int64 v31; // r9
  int v32; // edx
  int v33; // eax
  unsigned __int16 *v34; // [rsp+50h] [rbp-49h] BYREF
  unsigned int v35; // [rsp+58h] [rbp-41h] BYREF
  int v36; // [rsp+5Ch] [rbp-3Dh]
  unsigned int v37; // [rsp+60h] [rbp-39h]
  __int64 v38; // [rsp+68h] [rbp-31h]
  __int64 v39; // [rsp+70h] [rbp-29h]
  __int64 *v40; // [rsp+78h] [rbp-21h]
  unsigned __int16 *v41[2]; // [rsp+80h] [rbp-19h] BYREF
  __int16 v42; // [rsp+90h] [rbp-9h]
  unsigned __int16 *v43[2]; // [rsp+98h] [rbp-1h] BYREF
  __int16 v44; // [rsp+A8h] [rbp+Fh]
  int v45; // [rsp+100h] [rbp+67h] BYREF
  unsigned int v46; // [rsp+108h] [rbp+6Fh]
  unsigned int v47; // [rsp+110h] [rbp+77h]
  unsigned int v48; // [rsp+118h] [rbp+7Fh] BYREF

  if ( !PpmIsParkingEnabled )
    return 1;
  v1 = 0;
  v47 = 0;
  v2 = &PpmCurrentProfile[336 * dword_1403AAA2C + 5];
  v40 = v2;
  v3 = 100 * *((unsigned __int8 *)v2 + 81);
  v37 = v3;
  if ( !PpmParkNumNodes )
    goto LABEL_44;
  do
  {
    v4 = PpmParkNodes + 248LL * v1;
    if ( (*(_BYTE *)(v4 + 122) & 1) != 0 )
      goto LABEL_43;
    v5 = *(_BYTE *)(v4 + 111);
    v6 = *(_BYTE *)(v4 + 113);
    *(_QWORD *)(v4 + 40) = *(_QWORD *)(v4 + 32);
    v7 = v5;
    if ( v5 >= v6 )
      v7 = v6;
    v46 = v7;
    v36 = 2 - (v5 < v6);
    v8 = 0LL;
    v9 = *(_WORD *)(v4 + 4);
    v41[0] = 0LL;
    v42 = v9;
    v41[1] = *(unsigned __int16 **)(v4 + 8);
    while ( !(unsigned int)KeEnumerateNextProcessor(&v48, v41) )
    {
      Prcb = KeGetPrcb(v48);
      if ( *(_DWORD *)(Prcb + 24248) >= v3 )
        v8 |= *(_QWORD *)(Prcb + 200);
    }
    v11 = 0;
    v12 = (__int64 *)(v4 + 16);
    v13 = 0LL;
    v39 = v4 + 16;
    v14 = v8;
    do
    {
      v15 = *v12;
      v16 = 0;
      v45 = 0;
      v38 = v15;
      if ( !v15 )
        break;
      v17 = *(unsigned __int8 *)(v4 + v13 + 104);
      v18 = v17;
      if ( !PpmPerfMaxOverrideEnabled )
      {
        v19 = *(unsigned __int8 *)(v13 + v4 + 114);
        if ( v17 <= v19 )
          v19 = *(unsigned __int8 *)(v4 + v13 + 104);
        v18 = v19
            + (unsigned __int8)PpmParkGranularity
            - 1
            - (v19 + (unsigned __int8)PpmParkGranularity - 1) % (unsigned __int8)PpmParkGranularity;
      }
      v20 = 0;
      if ( PpmCheckLatencyBoostActive )
      {
        v21 = (v17 * *((unsigned __int8 *)v2 + v13 + 75) + 50) / 0x64;
        v20 = 0;
        v22 = (v17 - v21) % (unsigned __int8)PpmParkGranularity + v21;
        if ( v18 < v22 )
        {
          v20 = 64;
          v18 = v22;
          v16 = 64;
          v45 = 64;
        }
        v15 = v38;
      }
      v23 = v20;
      if ( !v11 && *(_BYTE *)(v4 + 115) )
      {
        v18 = *(unsigned __int8 *)(v4 + 104);
        v16 = v20 | 0x80;
        v45 = v20 | 0x80;
        v23 = v20 | 0x80;
      }
      *(_BYTE *)(v13 + v4 + 114) = v18;
      v24 = KeCpuSetQueryUnparkRecommendation(*(unsigned __int16 *)(v4 + 4), v15, &v34);
      LODWORD(v25) = v24;
      if ( v24 )
      {
        v26 = (unsigned __int64)v34;
        if ( (unsigned __int8)PpmParkGranularity > 1u )
        {
          v27 = *(_WORD *)(v4 + 4);
          v43[0] = 0LL;
          v44 = v27;
          v43[1] = v34;
          while ( !(unsigned int)KeEnumerateNextProcessor(&v35, v43) )
            v26 |= *(_QWORD *)(KeGetPrcb(v35) + 24920);
          v34 = (unsigned __int16 *)v26;
          v25 = (0x101010101010101LL
               * ((((v26 - ((v26 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                 + (((v26 - ((v26 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                 + ((((v26 - ((v26 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                   + (((v26 - ((v26 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
        }
        v18 += v25;
        if ( v18 >= *(unsigned __int8 *)(v4 + v13 + 104) )
          v18 = *(unsigned __int8 *)(v4 + v13 + 104);
        v28 = v16 | 0x10;
        v45 = v28;
      }
      else
      {
        v28 = v23;
        v26 = (unsigned __int64)v34;
      }
      v29 = *(unsigned __int8 *)(v13 + v4 + 106);
      if ( v18 < v29 )
      {
        v28 |= 4u;
LABEL_38:
        v18 = v29;
        v45 = v28;
        goto LABEL_39;
      }
      v29 = *(unsigned __int8 *)(v13 + v4 + 108);
      if ( v18 > v29 )
      {
        v28 |= 8u;
        goto LABEL_38;
      }
LABEL_39:
      v30 = 0;
      if ( v46 < v18 )
      {
        v18 = v46;
        v45 = v28 | v36;
        v30 = 1;
      }
      v31 = *(_QWORD *)(v4 + 40);
      v32 = *(unsigned __int16 *)(v4 + 4);
      v46 -= v18;
      *(_BYTE *)(v13 + v4 + 119) = PpmParkChooseCoresToUnpark(v18, v32, v38, v31, v14, v26, v4 + 32, v30, (__int64)&v45);
      PpmEventTraceCoreParkingSelection(v4, v11++, v14, v26, v18, v45);
      v2 = v40;
      v12 = (__int64 *)(v39 + 8);
      ++v13;
      v39 += 8LL;
    }
    while ( v11 < 2 );
    v1 = v47;
    v3 = v37;
LABEL_43:
    v47 = ++v1;
  }
  while ( v1 < PpmParkNumNodes );
LABEL_44:
  PpmParkComputeDiff();
  if ( PpmParkLpiEngaged != (PpmParkLpiCap != 0) || (v33 = 0, PpmParkLpiCapChanged) )
    v33 = 1;
  PpmParkLpiEngaged = PpmParkLpiCap != 0;
  PpmParkLpiCapChanged = 0;
  if ( v33 )
    PpmEventLPICoreParking();
  return 1;
}
