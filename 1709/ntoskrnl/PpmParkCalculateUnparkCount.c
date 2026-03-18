/*
 * XREFs of PpmParkCalculateUnparkCount @ 0x14008F450
 * Callers:
 *     PpmCheckComputeHeteroResponse @ 0x1402491D0 (PpmCheckComputeHeteroResponse.c)
 * Callees:
 *     <none>
 */

char PpmParkCalculateUnparkCount()
{
  __int64 v1; // rcx
  unsigned int v2; // r15d
  unsigned int v3; // r12d
  unsigned __int16 v4; // si
  __int64 v5; // r9
  unsigned __int8 v6; // r14
  unsigned int v7; // r13d
  __int64 v8; // rbp
  unsigned __int8 v9; // bl
  unsigned __int8 v10; // di
  unsigned __int8 v11; // r10
  unsigned __int8 v12; // r11
  unsigned __int8 v13; // dl
  bool v14; // cc
  int v15; // r10d
  int v16; // r10d
  unsigned __int8 v17; // [rsp+48h] [rbp+8h]
  char v18; // [rsp+50h] [rbp+10h]
  char v19; // [rsp+58h] [rbp+18h]
  __int16 v20; // [rsp+60h] [rbp+20h]

  if ( !PpmIsParkingEnabled )
    return 1;
  v1 = 2688LL * dword_1403661AC;
  v2 = *(_DWORD *)(v1 + PpmCurrentProfile + 132);
  v3 = *(_DWORD *)(v1 + PpmCurrentProfile + 128);
  v18 = *(_BYTE *)(v1 + PpmCurrentProfile + 126);
  v19 = *(_BYTE *)(v1 + PpmCurrentProfile + 125);
  v17 = *(_BYTE *)(v1 + PpmCurrentProfile + 123);
  if ( PpmCheckCurrentPipelineId == 5 )
  {
    v3 = 0;
    v2 = 0;
  }
  v4 = 0;
  v20 = 0;
  if ( !PpmParkNumNodes )
    return 1;
  do
  {
    v5 = PpmParkNodes + 248LL * v4;
    if ( (*(_BYTE *)(v5 + 122) & 1) != 0 )
      goto LABEL_45;
    ++*(_DWORD *)v5;
    v6 = 0;
    v7 = *(_DWORD *)v5;
    v8 = 0LL;
    do
    {
      v9 = *(_BYTE *)(v5 + v8 + 104);
      if ( v9 && ((unsigned __int8)(1 << (v6 + 1)) & *(_BYTE *)(v5 + 122)) == 0 )
      {
        v10 = PpmParkGranularity;
        v11 = *(_BYTE *)(v5 + 116);
        v12 = PpmParkGranularity;
        if ( PpmParkUnparkCores )
          v12 = 1;
        if ( v11 < v9 && *(_BYTE *)(v5 + 117) > v17 )
          ++v11;
        v13 = *(_BYTE *)(v5 + v8 + 114);
        v14 = v13 <= v11;
        if ( v13 < v11 )
        {
          if ( v13 < v9 && v7 >= v2 )
          {
            *(_DWORD *)v5 = 0;
            if ( v18 )
            {
              switch ( v18 )
              {
                case 1:
                  v13 += v12;
                  break;
                case 2:
                  goto LABEL_41;
                case 3:
                  v15 = *(unsigned __int8 *)(v5 + 121);
                  if ( v15 + (unsigned int)v13 >= v9 )
                    v13 = v9;
                  else
                    v13 += v15;
                  break;
              }
LABEL_40:
              if ( v13 < v9 )
              {
LABEL_42:
                *(_BYTE *)(v5 + v8 + 114) = v13;
                goto LABEL_43;
              }
LABEL_41:
              v13 = v9;
              goto LABEL_42;
            }
            goto LABEL_39;
          }
          v14 = v13 <= v11;
        }
        if ( v14 || v13 <= v12 || v7 < v3 )
          goto LABEL_40;
        *(_DWORD *)v5 = 0;
        if ( v19 )
        {
          switch ( v19 )
          {
            case 1:
              v13 -= v12;
              break;
            case 2:
              v13 = v12;
              break;
            case 3:
              v16 = *(unsigned __int8 *)(v5 + 121);
              if ( v13 <= v16 + (unsigned int)v10 )
                v13 = v10;
              else
                v13 -= v16;
              break;
          }
          goto LABEL_40;
        }
LABEL_39:
        v13 = v11;
        goto LABEL_40;
      }
LABEL_43:
      ++v6;
      ++v8;
    }
    while ( v6 < 2u );
    v4 = v20;
LABEL_45:
    v20 = ++v4;
  }
  while ( v4 < (unsigned int)PpmParkNumNodes );
  return 1;
}
