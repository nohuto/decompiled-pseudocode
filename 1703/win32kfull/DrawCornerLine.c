/*
 * XREFs of DrawCornerLine @ 0x1C0130E34
 * Callers:
 *     CreateStandardMonoPattern @ 0x1C01309F8 (CreateStandardMonoPattern.c)
 * Callees:
 *     memset @ 0x1C0140500 (memset.c)
 */

void __fastcall DrawCornerLine(
        char *a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        unsigned __int16 a5,
        int a6)
{
  int v7; // esi
  char *v9; // r11
  int v10; // ebx
  int v11; // r12d
  int v12; // r13d
  unsigned __int16 v13; // cx
  unsigned __int16 v14; // ax
  int v15; // r15d
  int v16; // r9d
  int v17; // ecx
  int v18; // r14d
  int v19; // r8d
  int v20; // edi
  int v21; // ebp
  int v22; // eax
  int v23; // edx
  char *v24; // rax
  int v25; // edx
  char v26; // cl
  int v27; // [rsp+20h] [rbp-38h]
  int v28; // [rsp+24h] [rbp-34h]
  int v29; // [rsp+80h] [rbp+28h]

  v7 = 0;
  v9 = a1;
  if ( a5 )
  {
    if ( a2 == 1 || a3 == 1 || a5 >= a2 )
    {
      memset(a1, 255, a4 * a3);
    }
    else
    {
      v10 = a4;
      if ( !a6 )
      {
        v9 = &a1[a4 * (a3 - 1)];
        v10 = -a4;
      }
      v29 = v10;
      if ( a2 < a3 )
      {
        v11 = 0;
        v12 = 1;
        v13 = a3;
        v14 = a2;
      }
      else
      {
        v11 = 1;
        v12 = 0;
        v13 = a2;
        v14 = a3;
      }
      v15 = v13;
      v16 = a5 - 1;
      v27 = 2 * v14;
      v17 = 2 * v13;
      v18 = v14 - v17;
      v28 = v17;
      if ( a2 > a3 )
      {
        v16 -= a2 / (unsigned int)a3;
        if ( v16 < 0 )
          v16 = 0;
      }
      v19 = v16;
      v20 = 0;
      v21 = 0;
      v22 = 0;
      if ( v15 )
      {
        v23 = v27;
        do
        {
          --v15;
          ++v19;
          v21 += v11;
          v20 += v12;
          v18 += v23;
          if ( v18 >= 0 )
          {
            v21 += v12;
            v20 += v11;
            v18 -= v17;
          }
          if ( v20 != v22 )
          {
            v24 = &v9[(__int64)v7 >> 3];
            v25 = 128 >> (v7 & 7);
            v26 = 0;
            if ( v19 )
            {
              v10 = v29;
              while ( 1 )
              {
                --v19;
                v26 |= v25;
                if ( ++v7 >= a2 )
                  break;
                LOBYTE(v25) = (unsigned __int8)v25 >> 1;
                if ( !(_BYTE)v25 )
                {
                  *v24++ = v26;
                  v26 = 0;
LABEL_26:
                  LOBYTE(v25) = 0x80;
                }
                if ( !v19 )
                  goto LABEL_20;
              }
              *v24 = v26;
              v7 = 0;
              v26 = *v9;
              v24 = v9;
              goto LABEL_26;
            }
LABEL_20:
            if ( (_BYTE)v25 != 0x80 )
              *v24 = v26;
            v23 = v27;
            v7 = v21;
            v19 = v16;
            v9 += v10;
            v22 = v20;
          }
          v17 = v28;
        }
        while ( v15 );
      }
    }
  }
}
