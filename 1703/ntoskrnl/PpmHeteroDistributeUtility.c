/*
 * XREFs of PpmHeteroDistributeUtility @ 0x140233F90
 * Callers:
 *     <none>
 * Callees:
 *     KeEnumerateNextProcessor @ 0x1400459E0 (KeEnumerateNextProcessor.c)
 *     PpmParkDistributeUtility @ 0x140047310 (PpmParkDistributeUtility.c)
 *     KeGetPrcb @ 0x140089100 (KeGetPrcb.c)
 *     PpmEventTraceHeteroDistributeUtility @ 0x1402364C0 (PpmEventTraceHeteroDistributeUtility.c)
 */

char PpmHeteroDistributeUtility()
{
  __int64 *v0; // r13
  char v1; // r12
  unsigned int v2; // r14d
  __int64 v3; // r15
  char v4; // si
  __int64 v5; // rbx
  unsigned __int16 v6; // r8
  __int64 v7; // rcx
  unsigned __int8 v8; // r9
  __int64 v9; // rcx
  unsigned __int8 v10; // r9
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int16 v14; // dx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  char v18; // r15
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rcx
  unsigned __int16 *v25; // [rsp+50h] [rbp-28h] BYREF
  __int64 v26; // [rsp+58h] [rbp-20h]
  __int16 v27; // [rsp+60h] [rbp-18h]
  __int16 v28; // [rsp+C0h] [rbp+48h]
  ULONG v29; // [rsp+C8h] [rbp+50h] BYREF
  unsigned int v30; // [rsp+D0h] [rbp+58h] BYREF
  __int64 v31; // [rsp+D8h] [rbp+60h]

  v0 = PpmCurrentProfile;
  v1 = 0;
  v2 = 0;
  v3 = 1400LL * dword_14034BB2C;
  v31 = v3;
  v4 = *((_BYTE *)PpmCurrentProfile + v3 + 120) != 0;
  if ( PpmParkNumNodes )
  {
    while ( 1 )
    {
      v5 = PpmParkNodes + 248LL * v2;
      if ( PpmHeteroPolicy == 4 )
        break;
      PpmParkDistributeUtility(
        *(_QWORD *)(v5 + 8),
        *(_QWORD *)(v5 + 32),
        *(_WORD *)(v5 + 4),
        *(_BYTE *)(v5 + 118),
        v4,
        0,
        0LL);
LABEL_27:
      if ( ++v2 >= PpmParkNumNodes )
        return 1;
    }
    if ( *(_BYTE *)(v5 + 119) && *(_BYTE *)(v5 + 120) )
    {
      if ( !PpmHeteroImplementationGeneration )
        goto LABEL_17;
      v6 = *(_WORD *)(v5 + 4);
      switch ( PpmHeteroParkBias )
      {
        case 0:
          PpmParkDistributeUtility(
            *(_QWORD *)(v5 + 16),
            *(_QWORD *)(v5 + 32) & *(_QWORD *)(v5 + 16),
            v6,
            *(_BYTE *)(v5 + 240),
            v4,
            0,
            0LL);
          v9 = *(_QWORD *)(v5 + 24);
          v10 = *(_BYTE *)(v5 + 241);
          v11 = *(_QWORD *)(v5 + 32) & v9;
          v6 = *(_WORD *)(v5 + 4);
LABEL_16:
          PpmParkDistributeUtility(v9, v11, v6, v10, v4, 0, 0LL);
LABEL_17:
          v12 = *(_QWORD *)(v5 + 24);
          v13 = ~*(_QWORD *)(v5 + 32);
          if ( (v13 & v12) != 0 )
          {
            v14 = *(_WORD *)(v5 + 4);
            v15 = *(_QWORD *)(v5 + 40);
            v29 = 0;
            v28 = v14;
            v25 = 0LL;
            v26 = v13 & v12 & v15;
            v27 = v14;
            while ( !(unsigned int)KeEnumerateNextProcessor(&v29, &v25) )
            {
              v16 = *(_QWORD *)(KeGetPrcb(v29) + 24296);
              if ( v16 )
              {
                v1 = *((_BYTE *)v0 + v3 + 1433);
                *(_BYTE *)(v16 + 275) = v1;
              }
            }
            v17 = *(_QWORD *)(v5 + 16);
            v18 = 0;
            v29 = 0;
            v19 = v13 & v17;
            v25 = 0LL;
            v20 = v31;
            v26 = v19;
            v27 = v28;
            while ( !(unsigned int)KeEnumerateNextProcessor(&v29, &v25) )
            {
              v23 = *(_QWORD *)(KeGetPrcb(v29) + 24296);
              if ( v23 )
              {
                v18 = *((_BYTE *)v0 + v20 + 1432);
                *(_BYTE *)(v23 + 274) = v18;
              }
            }
            LOBYTE(v22) = v1;
            LOBYTE(v21) = v18;
            PpmEventTraceHeteroDistributeUtility(v5, v21, v22);
            v1 = 0;
            v3 = v20;
          }
          goto LABEL_27;
        case 2:
          PpmParkDistributeUtility(
            *(_QWORD *)(v5 + 24),
            *(_QWORD *)(v5 + 32) & *(_QWORD *)(v5 + 24),
            v6,
            *(_BYTE *)(v5 + 241),
            v4,
            0,
            &v30);
          v7 = *(_QWORD *)(v5 + 16);
          v8 = *(_BYTE *)(v5 + 240);
          goto LABEL_11;
        case 3:
          PpmParkDistributeUtility(
            *(_QWORD *)(v5 + 16),
            *(_QWORD *)(v5 + 32) & *(_QWORD *)(v5 + 16),
            v6,
            *(_BYTE *)(v5 + 240),
            v4,
            0,
            &v30);
          v7 = *(_QWORD *)(v5 + 24);
          v8 = *(_BYTE *)(v5 + 241);
LABEL_11:
          PpmParkDistributeUtility(v7, *(_QWORD *)(v5 + 32) & v7, *(_WORD *)(v5 + 4), v8, v4, v30, 0LL);
          goto LABEL_17;
      }
    }
    else
    {
      v6 = *(_WORD *)(v5 + 4);
    }
    v10 = *(_BYTE *)(v5 + 118);
    v11 = *(_QWORD *)(v5 + 32);
    v9 = *(_QWORD *)(v5 + 8);
    goto LABEL_16;
  }
  return 1;
}
