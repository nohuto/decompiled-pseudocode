/*
 * XREFs of ?vSolidXorRect1@@YAXPEAU_RECTL@@KPEAEJKK@Z @ 0x1C00DFC80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSolidXorRect1(struct _RECTL *a1, int a2, unsigned __int8 *a3, int a4, unsigned int a5, char a6)
{
  LONG *p_top; // rsi
  __int64 v7; // rbx
  char v8; // r15
  int v9; // r10d
  int v10; // r13d
  unsigned int v11; // r9d
  unsigned __int8 *v12; // r14
  int v13; // r11d
  __int64 v14; // r8
  __int64 v15; // rdi
  __int64 v16; // r13
  int v17; // ecx
  __int64 v18; // r11
  int v19; // r12d
  int v20; // r11d
  unsigned __int8 *v21; // rcx
  __int64 v22; // rdi
  int v23; // eax
  unsigned int v24; // ecx
  unsigned __int8 *v25; // rdx
  __int64 v26; // rax
  unsigned int v27; // r11d
  unsigned __int8 *v28; // rcx
  __int64 v29; // rax
  int v30; // [rsp+40h] [rbp+10h]
  unsigned __int8 *v31; // [rsp+48h] [rbp+18h]

  if ( a2 )
  {
    v31 = a3;
    p_top = &a1->top;
    v7 = a4;
    v8 = 5 - a6;
    v9 = a2;
    while ( 1 )
    {
      v10 = p_top[1];
      v11 = p_top[2] - *p_top;
      v12 = &a3[(int)v7 * *p_top];
      v13 = v10 - *(p_top - 1);
      v14 = (unsigned int)(*(p_top - 1) >> v8);
      v15 = (*(p_top - 1) << a6) & 0x1F;
      v16 = (unsigned int)(v10 >> v8);
      v17 = aulMsk[v15];
      v18 = ((unsigned __int8)(*(p_top - 1) << a6) + (unsigned __int8)(v13 << a6)) & 0x1F;
      v30 = v18;
      v19 = 0;
      v20 = ~aulMsk[v18];
      if ( (_DWORD)v14 == (_DWORD)v16 )
        break;
      if ( (_DWORD)v15 )
        goto LABEL_15;
LABEL_5:
      if ( (_DWORD)v16 != (_DWORD)v14 )
      {
        v21 = &v12[4 * v14];
        if ( v11 )
        {
          v22 = v11;
          do
          {
            v23 = v16 - v14;
            do
            {
              *(_DWORD *)v21 ^= a5;
              v21 += 4;
              --v23;
            }
            while ( v23 );
            v21 += v7 - 4LL * (unsigned int)(v16 - v14);
            --v22;
          }
          while ( v22 );
        }
      }
      if ( v30 )
      {
        v27 = a5 & v20;
        v28 = &v12[4 * v16];
        if ( v11 )
        {
          v29 = v11;
          do
          {
            *(_DWORD *)v28 ^= v27;
            v28 += v7;
            --v29;
          }
          while ( v29 );
        }
      }
LABEL_12:
      a3 = v31;
      p_top += 4;
      if ( !--v9 )
        return;
    }
    v17 &= v20;
    v19 = 1;
LABEL_15:
    v24 = a5 & v17;
    v25 = &v12[4 * v14];
    if ( v11 )
    {
      v26 = v11;
      do
      {
        *(_DWORD *)v25 ^= v24;
        v25 += v7;
        --v26;
      }
      while ( v26 );
    }
    v14 = (unsigned int)(v14 + 1);
    if ( v19 )
      goto LABEL_12;
    goto LABEL_5;
  }
}
