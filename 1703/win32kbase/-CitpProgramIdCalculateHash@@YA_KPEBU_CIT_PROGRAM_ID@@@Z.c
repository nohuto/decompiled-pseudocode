/*
 * XREFs of ?CitpProgramIdCalculateHash@@YA_KPEBU_CIT_PROGRAM_ID@@@Z @ 0x1C008B84C
 * Callers:
 *     ?CitpProcessGetProgramId@@YAJPEAUtagPROCESSINFO@@PEAU_CIT_PROGRAM_ID@@@Z @ 0x1C00539D4 (-CitpProcessGetProgramId@@YAJPEAUtagPROCESSINFO@@PEAU_CIT_PROGRAM_ID@@@Z.c)
 *     ?CitpSavedDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAXPEBU_CIT_SAVE_KEY@@@Z @ 0x1C01554E4 (-CitpSavedDataLoad@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEAXPEBU_CIT_SAVE_KEY@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CitpProgramIdCalculateHash(unsigned __int8 **a1)
{
  unsigned __int8 *v1; // r10
  __int64 v2; // r8
  __int64 v4; // rdx
  __int64 v5; // r9
  unsigned __int8 *v6; // r9
  __int64 v8; // r9
  unsigned __int64 v9; // r11
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // r9d
  int v13; // r9d
  int v14; // r9d
  int v15; // r9d
  int v16; // r9d
  int v17; // r9d
  __int64 v18; // r8
  unsigned __int64 v19; // r10
  __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // r8d
  int v23; // r8d
  int v24; // r8d
  int v25; // r8d
  int v26; // r8d
  int v27; // r8d

  v1 = *a1;
  v2 = -1LL;
  v4 = 314159LL;
  if ( *a1 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( *(_WORD *)&v1[2 * v5] );
    v8 = 2 * v5;
    if ( v8 >= 8 )
    {
      v9 = (unsigned __int64)v8 >> 3;
      v8 -= 8 * ((unsigned __int64)v8 >> 3);
      do
      {
        v10 = v1[6] + 37 * (v1[5] + 37 * (v1[4] + 37 * (v1[3] + 37 * (v1[2] + 37 * (v1[1] + 37 * (*v1 + 37 * v4))))));
        v11 = v1[7];
        v1 += 8;
        v4 = v11 + 37 * v10;
        --v9;
      }
      while ( v9 );
    }
    if ( (unsigned __int64)(v8 - 1) <= 6 )
    {
      v12 = v8 - 1;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( v13 )
        {
          v14 = v13 - 1;
          if ( v14 )
          {
            v15 = v14 - 1;
            if ( v15 )
            {
              v16 = v15 - 1;
              if ( v16 )
              {
                v17 = v16 - 1;
                if ( v17 )
                {
                  if ( v17 != 1 )
                    goto LABEL_5;
                  v4 = *v1++ + 37 * v4;
                }
                v4 = *v1++ + 37 * v4;
              }
              v4 = *v1++ + 37 * v4;
            }
            v4 = *v1++ + 37 * v4;
          }
          v4 = *v1++ + 37 * v4;
        }
        v4 = *v1++ + 37 * v4;
      }
      v4 = *v1 + 37 * v4;
    }
  }
LABEL_5:
  v6 = a1[1];
  if ( v6 )
  {
    do
      ++v2;
    while ( *(_WORD *)&v6[2 * v2] );
    v18 = 2 * v2;
    if ( v18 >= 8 )
    {
      v19 = (unsigned __int64)v18 >> 3;
      v18 -= 8 * ((unsigned __int64)v18 >> 3);
      do
      {
        v20 = v6[6] + 37 * (v6[5] + 37 * (v6[4] + 37 * (v6[3] + 37 * (v6[2] + 37 * (v6[1] + 37 * (*v6 + 37 * v4))))));
        v21 = v6[7];
        v6 += 8;
        v4 = v21 + 37 * v20;
        --v19;
      }
      while ( v19 );
    }
    if ( (unsigned __int64)(v18 - 1) <= 6 )
    {
      v22 = v18 - 1;
      if ( !v22 )
      {
LABEL_42:
        v4 = *v6 + 37 * v4;
        return v4 ^ *((unsigned int *)a1 + 6) ^ *((unsigned int *)a1 + 7) ^ (unsigned __int64)*((unsigned int *)a1 + 8);
      }
      v23 = v22 - 1;
      if ( !v23 )
      {
LABEL_41:
        v4 = *v6++ + 37 * v4;
        goto LABEL_42;
      }
      v24 = v23 - 1;
      if ( !v24 )
      {
LABEL_40:
        v4 = *v6++ + 37 * v4;
        goto LABEL_41;
      }
      v25 = v24 - 1;
      if ( !v25 )
      {
LABEL_39:
        v4 = *v6++ + 37 * v4;
        goto LABEL_40;
      }
      v26 = v25 - 1;
      if ( !v26 )
      {
LABEL_38:
        v4 = *v6++ + 37 * v4;
        goto LABEL_39;
      }
      v27 = v26 - 1;
      if ( !v27 )
      {
LABEL_37:
        v4 = *v6++ + 37 * v4;
        goto LABEL_38;
      }
      if ( v27 == 1 )
      {
        v4 = *v6++ + 37 * v4;
        goto LABEL_37;
      }
    }
  }
  return v4 ^ *((unsigned int *)a1 + 6) ^ *((unsigned int *)a1 + 7) ^ (unsigned __int64)*((unsigned int *)a1 + 8);
}
