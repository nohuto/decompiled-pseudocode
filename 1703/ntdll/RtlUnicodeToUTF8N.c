/*
 * XREFs of RtlUnicodeToUTF8N @ 0x180064CD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUnicodeToUTF8N(_BYTE *a1, int a2, _DWORD *a3, unsigned int *a4, unsigned int a5)
{
  unsigned int v5; // ebp
  unsigned int v6; // r10d
  int v8; // ebx
  _BYTE *v9; // rsi
  unsigned int *v10; // r11
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 result; // rax
  unsigned int *v15; // r10
  unsigned int v16; // edx
  unsigned int v17; // r8d
  unsigned int v18; // eax
  char v19; // al
  char v20; // al
  unsigned int v21; // eax
  int v22; // edx
  int v23; // r8d

  v5 = 0;
  v6 = 0;
  v8 = (int)a1;
  if ( !a4 )
    return 3221225714LL;
  if ( a1 )
  {
    if ( (a5 & 1) == 0 )
    {
      v9 = &a1[a2];
      v10 = (unsigned int *)((char *)a4 + 2 * ((unsigned __int64)a5 >> 1));
LABEL_5:
      while ( a4 < v10 )
      {
        if ( v6 )
        {
          v22 = *(unsigned __int16 *)a4;
          if ( (unsigned int)(v22 - 56320) <= 0x3FF )
          {
            v6 = v22 + (v6 << 10) - 56613888;
            a4 = (unsigned int *)((char *)a4 + 2);
          }
          goto LABEL_9;
        }
        v6 = *(unsigned __int16 *)a4;
        a4 = (unsigned int *)((char *)a4 + 2);
LABEL_8:
        if ( v6 - 55296 > 0x3FF )
        {
LABEL_9:
          if ( v6 - 55296 <= 0x7FF )
          {
            v5 = 263;
            v6 = 65533;
          }
          v11 = 1LL;
          if ( v6 > 0x7F )
          {
            if ( v6 > 0x7FF )
            {
              if ( v6 > 0xFFFF )
                v11 = 2LL;
              ++v11;
            }
            ++v11;
          }
          if ( a1 > &v9[-v11] )
          {
            result = 3221225507LL;
LABEL_20:
            *a3 = (_DWORD)a1 - v8;
            return result;
          }
          if ( v6 > 0x7F )
          {
            if ( v6 > 0x7FF )
            {
              if ( v6 > 0xFFFF )
              {
                *a1++ = (v6 >> 18) | 0xF0;
                v20 = (v6 >> 12) & 0x3F | 0x80;
              }
              else
              {
                v20 = (v6 >> 12) | 0xE0;
              }
              *a1++ = v20;
              v19 = (v6 >> 6) & 0x3F | 0x80;
            }
            else
            {
              v19 = (v6 >> 6) | 0xC0;
            }
            *a1++ = v19;
            LOBYTE(v6) = v6 & 0x3F | 0x80;
          }
          *a1++ = v6;
          v12 = ((char *)v10 - (char *)a4) >> 1;
          v13 = v9 - a1;
          if ( v12 <= 0xD )
          {
            if ( v13 < v12 )
              goto LABEL_29;
            while ( a4 < v10 )
            {
              v6 = *(unsigned __int16 *)a4;
              a4 = (unsigned int *)((char *)a4 + 2);
              if ( v6 > 0x7F )
                goto LABEL_8;
              *a1++ = v6;
            }
LABEL_19:
            result = v5;
            goto LABEL_20;
          }
          if ( v13 < v12 )
            v12 = v9 - a1;
          v15 = (unsigned int *)((char *)a4 + 2 * v12 - 10);
          if ( a4 < v15 )
          {
            while ( 1 )
            {
              v16 = *(unsigned __int16 *)a4;
              a4 = (unsigned int *)((char *)a4 + 2);
              if ( v16 <= 0x7F )
              {
                *a1++ = v16;
                if ( ((unsigned __int8)a4 & 2) != 0 )
                {
                  v16 = *(unsigned __int16 *)a4;
                  a4 = (unsigned int *)((char *)a4 + 2);
                  if ( v16 > 0x7F )
                    goto LABEL_38;
                  *a1++ = v16;
                }
                if ( a4 >= v15 )
                  break;
                while ( 1 )
                {
                  v17 = a4[1];
                  v16 = *a4;
                  if ( ((*a4 | v17) & 0xFF80FF80) != 0 )
                    break;
                  *a1 = v16;
                  a4 += 2;
                  a1[2] = v17;
                  a1[1] = BYTE2(v16);
                  a1[3] = BYTE2(v17);
                  a1 += 4;
                  if ( a4 >= v15 )
                    goto LABEL_29;
                }
                v16 = (unsigned __int16)v16;
                a4 = (unsigned int *)((char *)a4 + 2);
                if ( (unsigned __int16)v16 <= 0x7Fu )
                {
                  *a1++ = v16;
                  goto LABEL_36;
                }
              }
LABEL_38:
              if ( v16 > 0x7FF )
              {
                if ( v16 - 55296 <= 0x7FF )
                {
                  if ( v16 > 0xDBFF )
                  {
                    a4 = (unsigned int *)((char *)a4 - 2);
                    break;
                  }
                  v23 = *(unsigned __int16 *)a4;
                  a4 = (unsigned int *)((char *)a4 + 2);
                  if ( (unsigned int)(v23 - 56320) > 0x3FF )
                  {
                    --a4;
                    v6 = 0;
                    goto LABEL_5;
                  }
                  v16 = v23 + (v16 << 10) - 56613888;
                  *a1++ = (v16 >> 18) | 0xF0;
                  v21 = v16 & 0x3F000 | 0x80000;
                }
                else
                {
                  v21 = v16 | 0xE0000;
                }
                v15 = (unsigned int *)((char *)v15 - 2);
                *a1++ = v21 >> 12;
                v18 = v16 & 0xFC0 | 0x2000;
              }
              else
              {
                v18 = v16 | 0x3000;
              }
              *a1 = v18 >> 6;
              v15 = (unsigned int *)((char *)v15 - 2);
              a1[1] = v16 & 0x3F | 0x80;
              a1 += 2;
LABEL_36:
              if ( a4 >= v15 )
              {
                v6 = 0;
                goto LABEL_5;
              }
            }
          }
LABEL_29:
          v6 = 0;
        }
      }
      if ( !v6 )
        goto LABEL_19;
      goto LABEL_9;
    }
    return 3221225715LL;
  }
  else if ( a3 )
  {
    return sub_180064FE0(a4, a5);
  }
  else
  {
    return 3221225485LL;
  }
}
