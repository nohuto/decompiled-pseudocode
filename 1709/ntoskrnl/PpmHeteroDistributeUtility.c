/*
 * XREFs of PpmHeteroDistributeUtility @ 0x1402494B0
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x14008D0A4 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x14008F8D0 (KeEnumerateNextProcessor.c)
 *     PpmParkDistributeUtility @ 0x14008F9F0 (PpmParkDistributeUtility.c)
 *     PpmEventTraceHeteroDistributeUtility @ 0x14024B550 (PpmEventTraceHeteroDistributeUtility.c)
 */

char PpmHeteroDistributeUtility()
{
  __int64 v0; // r14
  unsigned int v1; // r15d
  char v2; // si
  __int64 v3; // rbx
  unsigned __int16 v4; // r8
  __int64 v5; // rcx
  unsigned __int8 v6; // r9
  __int64 v7; // rcx
  unsigned __int8 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rdi
  char v11; // r12
  __int16 v12; // r13
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rcx
  char v16; // r14
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v22; // [rsp+40h] [rbp-38h]
  __int64 v23; // [rsp+48h] [rbp-30h]
  unsigned __int16 *v24; // [rsp+50h] [rbp-28h] BYREF
  __int64 v25; // [rsp+58h] [rbp-20h]
  __int16 v26; // [rsp+60h] [rbp-18h]
  char v27; // [rsp+C0h] [rbp+48h]
  ULONG v28; // [rsp+C8h] [rbp+50h] BYREF
  unsigned int v29; // [rsp+D0h] [rbp+58h] BYREF
  __int64 v30; // [rsp+D8h] [rbp+60h]

  v0 = PpmCurrentProfile;
  v1 = 0;
  v22 = PpmCurrentProfile;
  v30 = 2688LL * dword_1403661AC;
  v2 = *(_BYTE *)(v30 + PpmCurrentProfile + 120) != 0;
  v27 = v2;
  if ( PpmParkNumNodes )
  {
    while ( 1 )
    {
      v3 = PpmParkNodes + 248LL * v1;
      v23 = v3;
      if ( PpmHeteroPolicy == 4 )
        break;
      PpmParkDistributeUtility(
        *(_QWORD *)(v3 + 8),
        *(_QWORD *)(v3 + 32),
        *(_WORD *)(v3 + 4),
        *(_BYTE *)(v3 + 118),
        v2,
        0,
        0LL);
LABEL_27:
      if ( ++v1 >= PpmParkNumNodes )
        return 1;
    }
    if ( *(_BYTE *)(v3 + 119) && *(_BYTE *)(v3 + 120) )
    {
      if ( !PpmHeteroImplementationGeneration )
        goto LABEL_17;
      v4 = *(_WORD *)(v3 + 4);
      switch ( PpmHeteroParkBias )
      {
        case 0:
          PpmParkDistributeUtility(
            *(_QWORD *)(v3 + 16),
            *(_QWORD *)(v3 + 32) & *(_QWORD *)(v3 + 16),
            v4,
            *(_BYTE *)(v3 + 240),
            v2,
            0,
            0LL);
          v7 = *(_QWORD *)(v3 + 24);
          v8 = *(_BYTE *)(v3 + 241);
          v9 = *(_QWORD *)(v3 + 32) & v7;
          v4 = *(_WORD *)(v3 + 4);
LABEL_16:
          PpmParkDistributeUtility(v7, v9, v4, v8, v2, 0, 0LL);
LABEL_17:
          v10 = ~*(_QWORD *)(v3 + 32);
          if ( (v10 & *(_QWORD *)(v3 + 24)) != 0 )
          {
            v11 = 0;
            v12 = *(_WORD *)(v3 + 4);
            v13 = *(_QWORD *)(v3 + 24) & *(_QWORD *)(v3 + 40);
            v28 = 0;
            v24 = 0LL;
            v14 = v30;
            v25 = v10 & v13;
            v26 = v12;
            while ( !(unsigned int)KeEnumerateNextProcessor(&v28, &v24) )
            {
              v15 = *(_QWORD *)(KeGetPrcb(v28) + 24168);
              if ( v15 )
              {
                v11 = *(_BYTE *)(v14 + v0 + 2713);
                *(_BYTE *)(v15 + 275) = v11;
              }
            }
            v16 = 0;
            v28 = 0;
            v17 = v30;
            v26 = v12;
            v25 = v10 & *(_QWORD *)(v23 + 16);
            v24 = 0LL;
            while ( !(unsigned int)KeEnumerateNextProcessor(&v28, &v24) )
            {
              v20 = *(_QWORD *)(KeGetPrcb(v28) + 24168);
              if ( v20 )
              {
                v16 = *(_BYTE *)(v17 + v22 + 2712);
                *(_BYTE *)(v20 + 274) = v16;
              }
            }
            LOBYTE(v19) = v11;
            LOBYTE(v18) = v16;
            PpmEventTraceHeteroDistributeUtility(v23, v18, v19);
            v2 = v27;
            v0 = v22;
          }
          goto LABEL_27;
        case 2:
          PpmParkDistributeUtility(
            *(_QWORD *)(v3 + 24),
            *(_QWORD *)(v3 + 32) & *(_QWORD *)(v3 + 24),
            v4,
            *(_BYTE *)(v3 + 241),
            v2,
            0,
            &v29);
          v5 = *(_QWORD *)(v3 + 16);
          v6 = *(_BYTE *)(v3 + 240);
          goto LABEL_11;
        case 3:
          PpmParkDistributeUtility(
            *(_QWORD *)(v3 + 16),
            *(_QWORD *)(v3 + 32) & *(_QWORD *)(v3 + 16),
            v4,
            *(_BYTE *)(v3 + 240),
            v2,
            0,
            &v29);
          v5 = *(_QWORD *)(v3 + 24);
          v6 = *(_BYTE *)(v3 + 241);
LABEL_11:
          PpmParkDistributeUtility(v5, *(_QWORD *)(v3 + 32) & v5, *(_WORD *)(v3 + 4), v6, v2, v29, 0LL);
          goto LABEL_17;
      }
    }
    else
    {
      v4 = *(_WORD *)(v3 + 4);
    }
    v8 = *(_BYTE *)(v3 + 118);
    v9 = *(_QWORD *)(v3 + 32);
    v7 = *(_QWORD *)(v3 + 8);
    goto LABEL_16;
  }
  return 1;
}
