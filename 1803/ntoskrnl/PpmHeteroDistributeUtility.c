/*
 * XREFs of PpmHeteroDistributeUtility @ 0x14027F470
 * Callers:
 *     <none>
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140034620 (KeEnumerateNextProcessor.c)
 *     PpmParkDistributeUtility @ 0x140035950 (PpmParkDistributeUtility.c)
 *     KeGetPrcb @ 0x140036E98 (KeGetPrcb.c)
 *     PpmEventTraceHeteroDistributeUtility @ 0x1402814C8 (PpmEventTraceHeteroDistributeUtility.c)
 */

char PpmHeteroDistributeUtility()
{
  __int64 *v0; // r14
  unsigned int v1; // r15d
  char v2; // si
  __int64 v3; // rbx
  unsigned __int16 v4; // r8
  __int64 v5; // rcx
  unsigned __int8 v6; // r9
  __int64 v7; // rcx
  unsigned __int8 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  char v12; // r12
  __int16 v13; // r13
  __int64 v14; // rax
  unsigned __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx
  char v19; // r14
  __int64 v20; // rax
  unsigned __int64 v21; // rsi
  __int64 v22; // rcx
  __int64 *v24; // [rsp+40h] [rbp-28h]
  unsigned __int16 *v25; // [rsp+48h] [rbp-20h] BYREF
  __int64 v26; // [rsp+50h] [rbp-18h]
  __int16 v27; // [rsp+58h] [rbp-10h]
  char v28; // [rsp+B0h] [rbp+48h]
  ULONG v29; // [rsp+B8h] [rbp+50h] BYREF
  unsigned int v30; // [rsp+C0h] [rbp+58h] BYREF
  unsigned __int64 v31; // [rsp+C8h] [rbp+60h]

  v0 = PpmCurrentProfile;
  v1 = 0;
  v24 = PpmCurrentProfile;
  v31 = 2688LL * dword_1403AAA2C;
  v2 = LOBYTE(PpmCurrentProfile[v31 / 8 + 15]) != 0;
  v28 = v2;
  if ( PpmParkNumNodes )
  {
    while ( 1 )
    {
      v3 = PpmParkNodes + 248LL * v1;
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
LABEL_29:
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
          v10 = *(_QWORD *)(v3 + 24);
          v11 = ~*(_QWORD *)(v3 + 32);
          if ( (v10 & v11) != 0 )
          {
            v12 = 0;
            v13 = *(_WORD *)(v3 + 4);
            v14 = v10 & *(_QWORD *)(v3 + 40);
            v29 = 0;
            v25 = 0LL;
            v15 = v31;
            v26 = v11 & v14;
            v27 = v13;
            while ( !(unsigned int)KeEnumerateNextProcessor(&v29, &v25) )
            {
              v18 = *(_QWORD *)(KeGetPrcb(v29) + 24168);
              if ( v18 )
              {
                v12 = *((_BYTE *)v0 + v15 + 2714);
                *(_BYTE *)(v18 + 275) = v12;
              }
            }
            v2 = v28;
            v19 = 0;
            if ( !PpmPerfQosEnabled )
            {
              v20 = *(_QWORD *)(v3 + 16);
              v29 = 0;
              v21 = v31;
              v27 = v13;
              v25 = 0LL;
              v26 = v11 & v20;
              while ( !(unsigned int)KeEnumerateNextProcessor(&v29, &v25) )
              {
                v22 = *(_QWORD *)(KeGetPrcb(v29) + 24168);
                if ( v22 )
                {
                  v19 = *((_BYTE *)v24 + v21 + 2713);
                  *(_BYTE *)(v22 + 274) = v19;
                }
              }
              v2 = v28;
            }
            LOBYTE(v17) = v12;
            LOBYTE(v16) = v19;
            PpmEventTraceHeteroDistributeUtility(v3, v16, v17);
            v0 = v24;
          }
          goto LABEL_29;
        case 2:
          PpmParkDistributeUtility(
            *(_QWORD *)(v3 + 24),
            *(_QWORD *)(v3 + 32) & *(_QWORD *)(v3 + 24),
            v4,
            *(_BYTE *)(v3 + 241),
            v2,
            0,
            &v30);
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
            &v30);
          v5 = *(_QWORD *)(v3 + 24);
          v6 = *(_BYTE *)(v3 + 241);
LABEL_11:
          PpmParkDistributeUtility(v5, *(_QWORD *)(v3 + 32) & v5, *(_WORD *)(v3 + 4), v6, v2, v30, 0LL);
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
