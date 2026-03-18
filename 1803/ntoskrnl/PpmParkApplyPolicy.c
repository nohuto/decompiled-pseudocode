/*
 * XREFs of PpmParkApplyPolicy @ 0x14017FB78
 * Callers:
 *     PpmParkRegisterParking @ 0x14017F43C (PpmParkRegisterParking.c)
 *     PpmParkSetLpiCap @ 0x1402829EC (PpmParkSetLpiCap.c)
 *     PpmRegisterPerfStates @ 0x14063EACC (PpmRegisterPerfStates.c)
 *     PpmReapplyPerfPolicy @ 0x14063F630 (PpmReapplyPerfPolicy.c)
 *     PpmParkApplyForcedMask @ 0x14076FDB8 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x14076FE88 (PpmParkClearForcedMask.c)
 * Callees:
 *     PpmEventParkNodeCapChange @ 0x140280A2C (PpmEventParkNodeCapChange.c)
 */

void __fastcall PpmParkApplyPolicy(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  unsigned __int16 v4; // bx
  unsigned __int8 v5; // si
  __int64 v6; // rcx
  unsigned int v7; // ecx
  int v8; // r10d
  int v9; // r15d
  int v10; // r11d
  unsigned int v11; // r13d
  unsigned int v12; // r12d
  unsigned __int16 v13; // dx
  int v14; // ebp
  int v15; // edi
  unsigned __int8 v16; // cl
  unsigned __int8 v17; // r8
  int v18; // edx
  unsigned __int8 v19; // cl
  __int64 v20; // rcx
  char v21; // dl
  unsigned int v22; // eax
  __int64 v23; // rbp
  unsigned __int8 v24; // r8
  unsigned int v25; // r14d
  unsigned __int8 v26; // r14
  unsigned int v27; // edi
  unsigned __int8 v28; // di
  char v29; // dl
  unsigned __int8 v30; // cl
  __int64 v31; // rdi
  __int64 v32; // r8
  char v33; // cl
  unsigned __int8 v34; // cl
  unsigned __int8 v35; // cl
  char v36; // al
  char v37; // cl
  char v38; // al
  char v39; // cl
  char v40; // al
  char v41; // cl
  char v42; // al
  char v43; // cl
  unsigned __int16 v44; // r8
  __int64 v45; // rdx
  unsigned __int8 v46; // r9
  unsigned __int8 v47; // al
  unsigned __int16 v48; // r8
  __int64 v49; // rdx
  unsigned __int8 v50; // r9
  unsigned __int8 v51; // al
  char v52; // al
  unsigned int v53; // [rsp+20h] [rbp-68h]
  char v54; // [rsp+90h] [rbp+8h]
  __int16 v55; // [rsp+98h] [rbp+10h] BYREF
  __int16 v56; // [rsp+A0h] [rbp+18h]
  unsigned __int16 v57; // [rsp+A8h] [rbp+20h]

  v4 = 0;
  if ( PpmParkNodes )
  {
    v5 = 64;
    v6 = 336LL * dword_1403AAA2C;
    v56 = PpmCurrentProfile[v6 + 17];
    v55 = WORD1(PpmCurrentProfile[v6 + 17]);
    if ( (((unsigned __int64)qword_14039BCC8[(unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[0] >> 6] >> (KiProcessorIndexToNumberMappingTable[0] & 0x3F)) & 1) == 0 )
    {
      v33 = PpmParkInitialClass1UnParkCount;
      if ( (unsigned int)PpmParkInitialClass1UnParkCount > 0x40 )
        v33 = 64;
      HIBYTE(v56) = 0;
      v5 = v33;
    }
    v7 = PpmParkNumNodes;
    v8 = PpmParkLpiCap;
    v9 = (unsigned __int8)PpmParkGranularity;
    v10 = PpmParkThermalCap;
    v57 = 0;
    v11 = PpmParkLpiCap / (unsigned int)PpmParkNumNodes
        - PpmParkLpiCap / (unsigned int)PpmParkNumNodes % (unsigned __int8)PpmParkGranularity;
    v12 = PpmParkThermalCap / (unsigned int)PpmParkNumNodes
        - PpmParkThermalCap / (unsigned int)PpmParkNumNodes % (unsigned __int8)PpmParkGranularity;
    v13 = 0;
    if ( PpmParkNumNodes )
    {
      v14 = (unsigned __int8)v11;
      v15 = (unsigned __int8)v12;
      do
      {
        v16 = v11;
        a4 = (_BYTE *)(PpmParkNodes + 248LL * v13);
        v17 = a4[6];
        v18 = v17 - v9;
        if ( v14 > v18 )
          v16 = v17 - PpmParkGranularity;
        v8 -= v16;
        a4[110] = v16;
        v19 = v12;
        if ( v15 > v18 )
          v19 = v17 - PpmParkGranularity;
        a4[112] = v19;
        v10 -= v19;
        v54 = 0;
        v20 = a4 - (_BYTE *)&v55;
        v53 = 0;
        v21 = 0;
        v22 = 0;
        v23 = 0LL;
        do
        {
          v24 = *((_BYTE *)&v55 + v23 + v20 + 104);
          if ( v24 )
          {
            v25 = (v24 * (unsigned int)*((unsigned __int8 *)&v55 + v23) + 50) / 0x64;
            v26 = (v24 - (unsigned __int8)v25) % v9 + v25;
            v27 = (v24 * (unsigned int)*((unsigned __int8 *)&v56 + v23) + 50) / 0x64;
            v28 = (v24 - (unsigned __int8)v27) % v9 + v27;
            if ( v53 )
            {
              v34 = v26;
              if ( v26 >= v5 )
                v34 = v5;
              v26 = v34;
            }
            if ( v28 )
            {
              v29 = v28;
              if ( (unsigned __int8)PpmParkGranularity > v28 )
                v29 = PpmParkGranularity;
              v28 = v29;
            }
            v21 = v28 + v54;
            v30 = v28;
            v54 += v28;
            if ( v26 >= v28 )
              v30 = v26;
            a4[v23 + 106] = v28;
            v22 = v53;
            a4[v23 + 108] = v30;
            v20 = a4 - (_BYTE *)&v55;
          }
          ++v22;
          ++v23;
          v53 = v22;
        }
        while ( v22 < 2 );
        if ( !v21 )
        {
          v35 = PpmParkGranularity;
          a4[106] = PpmParkGranularity;
          if ( v35 <= a4[108] )
            v35 = a4[108];
          a4[108] = v35;
        }
        if ( PpmHeteroPolicy == 2 )
        {
          v36 = a4[106];
          v37 = 1;
          a4[115] = 0;
          a4[107] = 0;
          if ( (unsigned __int8)v36 > 1u )
            v37 = v36;
          a4[109] = 0;
          v38 = a4[108];
          a4[106] = v37;
          v39 = 1;
          if ( (unsigned __int8)v38 > 1u )
            v39 = v38;
          a4[108] = v39;
          a4[122] |= 4u;
        }
        else if ( PpmHeteroPolicy == 3 && a4[105] )
        {
          v40 = a4[107];
          v41 = 1;
          a4[114] = 0;
          a4[106] = 0;
          if ( (unsigned __int8)v40 > 1u )
            v41 = v40;
          a4[108] = 0;
          v42 = a4[109];
          a4[107] = v41;
          v43 = 1;
          if ( (unsigned __int8)v42 > 1u )
            v43 = v42;
          a4[109] = v43;
          a4[122] |= 2u;
        }
        v7 = PpmParkNumNodes;
        v13 = v57 + 1;
        v15 = (unsigned __int8)v12;
        v14 = (unsigned __int8)v11;
        ++v57;
      }
      while ( v57 < (unsigned int)PpmParkNumNodes );
    }
    do
    {
LABEL_24:
      if ( !v8 )
        goto LABEL_25;
      v44 = 0;
    }
    while ( !v7 );
    while ( v8 )
    {
      v45 = PpmParkNodes + 248LL * v44;
      v46 = *(_BYTE *)(v45 + 6);
      if ( v46 )
      {
        v47 = PpmParkGranularity + *(_BYTE *)(v45 + 110);
        if ( v47 < v46 )
        {
          *(_BYTE *)(v45 + 110) = v47;
          v8 -= v9;
        }
      }
      if ( ++v44 >= v7 )
        goto LABEL_24;
    }
LABEL_25:
    while ( v10 )
    {
      v48 = 0;
      if ( v7 )
      {
        while ( v10 )
        {
          v49 = PpmParkNodes + 248LL * v48;
          v50 = *(_BYTE *)(v49 + 6);
          if ( v50 )
          {
            v51 = PpmParkGranularity + *(_BYTE *)(v49 + 112);
            if ( v51 < v50 )
            {
              *(_BYTE *)(v49 + 112) = v51;
              v10 -= v9;
            }
          }
          if ( ++v48 >= v7 )
            goto LABEL_25;
        }
        break;
      }
    }
    if ( v7 )
    {
      do
      {
        v31 = PpmParkNodes + 248LL * v4;
        v32 = *(unsigned __int8 *)(v31 + 110);
        if ( *(unsigned __int8 *)(v31 + 111) != *(unsigned __int8 *)(v31 + 6) - (_DWORD)v32
          || *(unsigned __int8 *)(v31 + 113) != *(unsigned __int8 *)(v31 + 6) - *(unsigned __int8 *)(v31 + 112) )
        {
          LOBYTE(a4) = *(_BYTE *)(v31 + 112);
          PpmEventParkNodeCapChange(*(unsigned __int16 *)(v31 + 4), *(_QWORD *)(v31 + 8), v32, a4);
          v52 = *(_BYTE *)(v31 + 6) - *(_BYTE *)(v31 + 110);
          *(_BYTE *)(v31 + 113) = *(_BYTE *)(v31 + 6) - *(_BYTE *)(v31 + 112);
          *(_BYTE *)(v31 + 111) = v52;
        }
        ++v4;
      }
      while ( v4 < (unsigned int)PpmParkNumNodes );
    }
  }
}
