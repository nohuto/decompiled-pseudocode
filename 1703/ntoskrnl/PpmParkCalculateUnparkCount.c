/*
 * XREFs of PpmParkCalculateUnparkCount @ 0x140047230
 * Callers:
 *     PpmCheckComputeHeteroResponse @ 0x140233CA0 (PpmCheckComputeHeteroResponse.c)
 * Callees:
 *     <none>
 */

char PpmParkCalculateUnparkCount()
{
  __int64 v1; // rcx
  unsigned int v2; // r15d
  unsigned int v3; // r12d
  unsigned int v4; // r14d
  unsigned __int16 v5; // di
  __int64 v6; // rcx
  char v7; // r10
  unsigned __int8 v8; // r13
  __int64 v9; // r9
  unsigned __int8 v10; // bp
  unsigned int v11; // r14d
  __int64 v12; // rsi
  unsigned __int8 v13; // bl
  bool v14; // zf
  unsigned __int8 v15; // r11
  unsigned __int8 v16; // r10
  unsigned __int8 v17; // dl
  bool v18; // cc
  int v19; // r10d
  int v20; // r10d
  __int16 v21; // [rsp+0h] [rbp-58h]
  int v22; // [rsp+4h] [rbp-54h]
  __int64 v23; // [rsp+8h] [rbp-50h]
  unsigned __int8 v24; // [rsp+60h] [rbp+8h]
  char v25; // [rsp+68h] [rbp+10h]
  char v26; // [rsp+70h] [rbp+18h]
  char v27; // [rsp+78h] [rbp+20h]

  if ( !PpmIsParkingEnabled )
    return 1;
  v1 = 175LL * dword_14034BB2C;
  v2 = HIDWORD(PpmCurrentProfile[v1 + 16]);
  v3 = PpmCurrentProfile[v1 + 16];
  v25 = BYTE6(PpmCurrentProfile[v1 + 15]);
  v26 = BYTE5(PpmCurrentProfile[v1 + 15]);
  v24 = BYTE3(PpmCurrentProfile[v1 + 15]);
  if ( PpmCheckCurrentPipelineId == 5 )
  {
    v3 = 0;
    v2 = 0;
  }
  v4 = PpmParkNumNodes;
  v5 = 0;
  v21 = 0;
  v22 = PpmParkNumNodes;
  if ( !PpmParkNumNodes )
    return 1;
  v6 = PpmParkNodes;
  v7 = PpmParkUnparkCores;
  v8 = PpmParkGranularity;
  v23 = PpmParkNodes;
  v27 = PpmParkUnparkCores;
  do
  {
    v9 = v6 + 248LL * v5;
    if ( (*(_BYTE *)(v9 + 122) & 1) != 0 )
      goto LABEL_46;
    ++*(_DWORD *)v9;
    v10 = 0;
    v11 = *(_DWORD *)v9;
    v12 = 0LL;
    do
    {
      v13 = *(_BYTE *)(v12 + v9 + 104);
      if ( v13 && ((unsigned __int8)(1 << (v10 + 1)) & *(_BYTE *)(v9 + 122)) == 0 )
      {
        v14 = v7 == 0;
        v15 = v8;
        v16 = *(_BYTE *)(v9 + 116);
        if ( !v14 )
          v15 = 1;
        if ( v16 < v13 && *(_BYTE *)(v9 + 117) > v24 )
          ++v16;
        v17 = *(_BYTE *)(v12 + v9 + 114);
        v18 = v17 <= v16;
        if ( v17 < v16 )
        {
          if ( v17 < v13 && v11 >= v2 )
          {
            *(_DWORD *)v9 = 0;
            if ( v25 )
            {
              switch ( v25 )
              {
                case 1:
                  v17 += v15;
                  break;
                case 2:
                  goto LABEL_42;
                case 3:
                  v19 = *(unsigned __int8 *)(v9 + 121);
                  if ( v19 + (unsigned int)v17 >= v13 )
                    v17 = v13;
                  else
                    v17 += v19;
                  break;
              }
LABEL_41:
              if ( v17 < v13 )
              {
LABEL_43:
                v7 = v27;
                *(_BYTE *)(v12 + v9 + 114) = v17;
                goto LABEL_44;
              }
LABEL_42:
              v17 = v13;
              goto LABEL_43;
            }
            goto LABEL_40;
          }
          v18 = v17 <= v16;
        }
        if ( v18 || v17 <= v15 || v11 < v3 )
          goto LABEL_41;
        *(_DWORD *)v9 = 0;
        if ( v26 )
        {
          switch ( v26 )
          {
            case 1:
              v17 -= v15;
              break;
            case 2:
              v17 = v15;
              break;
            case 3:
              v20 = *(unsigned __int8 *)(v9 + 121);
              if ( v17 <= v20 + (unsigned int)v8 )
                v17 = v8;
              else
                v17 -= v20;
              break;
          }
          goto LABEL_41;
        }
LABEL_40:
        v17 = v16;
        goto LABEL_41;
      }
LABEL_44:
      ++v10;
      ++v12;
    }
    while ( v10 < 2u );
    v5 = v21;
    v4 = v22;
    v6 = v23;
LABEL_46:
    v21 = ++v5;
  }
  while ( v5 < v4 );
  return 1;
}
