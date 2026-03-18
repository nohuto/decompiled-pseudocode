/*
 * XREFs of CapCorrection @ 0x1C02C17F8
 * Callers:
 *     sbit_EmboldenGrayFromMono @ 0x1C02C38C4 (sbit_EmboldenGrayFromMono.c)
 * Callees:
 *     <none>
 */

void __fastcall CapCorrection(__int64 a1, unsigned __int16 a2, unsigned __int16 a3)
{
  __int64 v3; // r9
  char *v4; // r14
  __int16 v5; // r12
  unsigned __int16 v6; // bx
  int v7; // ecx
  int v8; // edx
  int v9; // r10d
  __int64 v10; // r11
  int v11; // r15d
  int v12; // r8d
  _BYTE *v13; // rcx
  int v14; // r8d
  char v15; // al
  char v16; // cl
  __int16 v17; // cx
  __int16 v18; // r13
  BOOL v19; // r9d
  __int16 v20; // r11
  __int16 v21; // di
  unsigned __int16 v22; // si
  __int16 v23; // bp
  __int16 v24; // si
  int v25; // eax
  __int16 v26; // r15
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  _BYTE *v30; // rcx
  int v31; // [rsp+0h] [rbp-58h]
  int v32; // [rsp+4h] [rbp-54h]
  int v33; // [rsp+8h] [rbp-50h]
  int v34; // [rsp+Ch] [rbp-4Ch]
  int v35; // [rsp+10h] [rbp-48h]
  unsigned __int16 v37; // [rsp+70h] [rbp+18h]
  __int16 v38; // [rsp+78h] [rbp+20h]

  if ( a3 )
  {
    v3 = a1;
    v4 = 0LL;
    if ( a2 )
    {
      v35 = a2;
      v5 = 1;
      v6 = (a2 + 3) & 0xFFFC;
      v32 = a2 - 1;
      if ( v32 > 1 )
      {
        v7 = a2 - 1;
        v34 = a3;
        v33 = 1;
        v8 = a3 - 1;
        v31 = v8;
        do
        {
          v9 = 1;
          if ( v8 > 1 )
          {
            v10 = v5;
            v11 = v6;
            do
            {
              v12 = -1;
              v13 = (_BYTE *)(v3 + v10 + v11 * (unsigned __int16)v9);
              if ( *(v13 - 1) == 16 && v13[1] == 16 && !*v13 )
              {
                v14 = v9 + 1;
                v4 = &v13[v6];
                while ( v14 < v8 && *(v4 - 1) == 16 && v4[1] == 16 && !*v4 )
                {
                  v4 += v6;
                  ++v14;
                }
                v12 = v14 - 1;
              }
              if ( (unsigned int)(v12 - v9) <= 1 )
              {
                if ( (v15 = v13[-v6], v16 = *v4, v15 == 16) && v16 != 16 || v16 == 16 && v15 != 16 )
                {
                  v17 = 1;
                  v18 = v9;
                  v19 = 1;
                  if ( v15 != 16 )
                    v17 = -1;
                  v38 = v17;
                  v37 = 0;
                  v20 = v5 + 1;
                  if ( v15 == 16 )
                    v18 = v12;
                  v21 = v5 - 1;
                  v22 = 0;
                  do
                  {
                    v23 = v21;
                    if ( !v19 )
                      goto LABEL_58;
                    v18 += v17;
                    if ( v18 < 0 || v18 >= v34 )
                      v19 = 0;
                    if ( v19 )
                    {
                      ++v37;
                      v24 = v20;
                      v25 = v11 * (unsigned __int16)v18;
                      v26 = v21;
                      v27 = v21;
                      v28 = a1 + v25;
                      if ( *(_BYTE *)(v21 + v28 + 1) == 16 || *(_BYTE *)(v20 + v28 - 1) == 16 )
                        v19 = 0;
                      if ( v19 )
                      {
                        v20 = -1;
                        v21 = -1;
                        if ( *(_BYTE *)(v27 + v28) == 16 )
                        {
                          v21 = v26;
                        }
                        else if ( v23 > 0 && *(_BYTE *)(v27 + v28 - 1) == 16 )
                        {
                          v21 = v26 - 1;
                        }
                        if ( *(_BYTE *)(v24 + v28) == 16 )
                        {
                          v20 = v24;
                        }
                        else if ( v24 + 1 < v35 && *(_BYTE *)(v24 + v28 + 1) == 16 )
                        {
                          v20 = v24 + 1;
                        }
                        if ( v21 < 0 || v20 < 0 )
                        {
                          v19 = 0;
                        }
                        else
                        {
                          v19 = 1;
                          if ( v37 == 1 )
                            v19 = v20 - v21 > v24 - v26;
                        }
                      }
                      v17 = v38;
                      v22 = v37;
                      v11 = v6;
                    }
                  }
                  while ( v22 < (unsigned __int16)((v12 - v9 != 0) + 1) );
                  if ( !v19 )
                  {
LABEL_58:
                    v3 = a1;
                    goto LABEL_59;
                  }
                  v3 = a1;
                  if ( v9 <= v12 )
                  {
                    v29 = v12 - v9 + 1;
                    v30 = (_BYTE *)(a1 + v33 + v9 * v11);
                    do
                    {
                      *v30 = 16;
                      v30 += v6;
                      --v29;
                    }
                    while ( v29 );
                  }
LABEL_59:
                  v8 = v31;
                }
              }
              if ( v12 <= 0 )
                ++v9;
              else
                v9 = v12 + 1;
              v10 = v5;
            }
            while ( v9 < v8 );
            v7 = v32;
          }
          v33 = ++v5;
        }
        while ( v5 < v7 );
      }
    }
  }
}
