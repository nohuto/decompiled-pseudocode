/*
 * XREFs of PpmParkCalculateUnparkCount @ 0x140037A00
 * Callers:
 *     PpmCheckComputeHeteroResponse @ 0x14027F160 (PpmCheckComputeHeteroResponse.c)
 * Callees:
 *     <none>
 */

char PpmParkCalculateUnparkCount()
{
  __int64 v1; // rcx
  unsigned __int8 v2; // r9
  unsigned int v3; // r13d
  unsigned __int16 v4; // si
  __int64 v5; // r11
  unsigned __int8 v6; // r15
  __int64 v7; // rbp
  unsigned __int8 v8; // di
  char v9; // r12
  unsigned __int8 v10; // r14
  unsigned __int8 v11; // r8
  unsigned __int8 v12; // bl
  unsigned __int8 v13; // r9
  bool v14; // cc
  int v15; // ecx
  unsigned int v16; // r8d
  int v17; // edx
  unsigned __int8 v18; // cl
  unsigned int v19; // [rsp+0h] [rbp-58h]
  unsigned int v20; // [rsp+4h] [rbp-54h]
  char v21; // [rsp+60h] [rbp+8h]
  char v22; // [rsp+68h] [rbp+10h]
  unsigned __int8 v23; // [rsp+70h] [rbp+18h]
  __int16 v24; // [rsp+78h] [rbp+20h]

  if ( !PpmIsParkingEnabled )
    return 1;
  v1 = 336LL * dword_1403AAA2C;
  v2 = BYTE3(PpmCurrentProfile[v1 + 15]);
  v3 = PpmCurrentProfile[v1 + 16];
  v21 = BYTE6(PpmCurrentProfile[v1 + 15]);
  v22 = BYTE5(PpmCurrentProfile[v1 + 15]);
  v20 = HIDWORD(PpmCurrentProfile[v1 + 16]);
  v23 = v2;
  if ( PpmCheckCurrentPipelineId == 5 )
  {
    v3 = 0;
    v20 = 0;
  }
  v4 = 0;
  v24 = 0;
  if ( !PpmParkNumNodes )
    return 1;
  do
  {
    v5 = PpmParkNodes + 248LL * v4;
    if ( (*(_BYTE *)(v5 + 122) & 1) != 0 )
      goto LABEL_50;
    ++*(_DWORD *)v5;
    v6 = 0;
    v7 = 0LL;
    v19 = *(_DWORD *)v5;
    do
    {
      v8 = *(_BYTE *)(v5 + v7 + 104);
      if ( !v8 || ((unsigned __int8)(1 << (v6 + 1)) & *(_BYTE *)(v5 + 122)) != 0 )
        goto LABEL_48;
      v9 = PpmParkUnparkCores;
      v10 = PpmParkGranularity;
      v11 = *(_BYTE *)(v5 + 116);
      v12 = PpmParkGranularity;
      if ( !PpmParkUnparkCores || (v12 = 1, PpmParkGranularity == 1) )
      {
        if ( v11 < v8 && *(_BYTE *)(v5 + 117) > v2 )
          ++v11;
      }
      v13 = *(_BYTE *)(v5 + v7 + 114);
      if ( PpmParkUnparkCores )
        v13 /= (unsigned __int8)PpmParkGranularity;
      v14 = v13 <= v11;
      if ( v13 < v11 )
      {
        if ( v13 < v8 && v19 >= v20 )
        {
          *(_DWORD *)v5 = 0;
          if ( v21 )
          {
            switch ( v21 )
            {
              case 1:
                v13 += v12;
                break;
              case 2:
                v13 = v8;
                break;
              case 3:
                v15 = *(unsigned __int8 *)(v5 + 121);
                v16 = v15 + v13;
                v13 += v15;
                if ( v16 >= v8 )
                  v13 = v8;
                break;
            }
            goto LABEL_43;
          }
          goto LABEL_42;
        }
        v14 = v13 <= v11;
      }
      if ( v14 || v13 <= v12 || v19 < v3 )
        goto LABEL_43;
      *(_DWORD *)v5 = 0;
      if ( v22 )
      {
        switch ( v22 )
        {
          case 1:
            v13 -= v12;
            break;
          case 2:
            v13 = v12;
            break;
          case 3:
            v17 = *(unsigned __int8 *)(v5 + 121);
            if ( v13 <= v17 + (unsigned int)v10 )
              v13 = v10;
            else
              v13 -= v17;
            break;
        }
        goto LABEL_43;
      }
LABEL_42:
      v13 = v11;
LABEL_43:
      v18 = v13;
      if ( v13 >= v8 )
        v18 = v8;
      if ( v9 )
        v18 *= v10;
      v2 = v23;
      *(_BYTE *)(v5 + v7 + 114) = v18;
LABEL_48:
      ++v6;
      ++v7;
    }
    while ( v6 < 2u );
    v4 = v24;
LABEL_50:
    v24 = ++v4;
  }
  while ( v4 < (unsigned int)PpmParkNumNodes );
  return 1;
}
