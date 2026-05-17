/*
 * XREFs of CountUTF8ToUnicode @ 0x18006861C
 * Callers:
 *     RtlUTF8ToUnicodeN @ 0x180068230 (RtlUTF8ToUnicodeN.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CountUTF8ToUnicode(char *a1, int a2, _DWORD *a3)
{
  int v3; // r9d
  char *v4; // rbx
  unsigned int v5; // r11d
  char *v7; // r10
  unsigned int v8; // r9d
  __int64 result; // rax
  unsigned __int64 v10; // r10
  unsigned int v11; // r8d
  char v12; // r9
  char v13; // r8
  int v14; // eax
  __int64 v15; // rax
  unsigned int v16; // r9d
  unsigned int v17; // r9d

  v3 = 0;
  v4 = &a1[a2];
  v5 = 0;
  while ( 1 )
  {
    v7 = a1;
    if ( a1 >= v4 )
      break;
    if ( v3 )
    {
      v13 = *a1++;
      if ( (v13 & 0xC0) != 0x80 )
      {
        a1 = v7;
        a2 += v3 >> 30;
LABEL_27:
        v5 = 263;
        ++a2;
        goto LABEL_28;
      }
      v3 = (v3 << 6) | v13 & 0x3F;
      if ( (v3 & 0x20000000) != 0 )
      {
LABEL_6:
        if ( (unsigned __int64)(v4 - a1) <= 0xD )
        {
          while ( a1 < v4 )
          {
            v8 = *a1++;
            if ( v8 > 0x7F )
              goto LABEL_5;
          }
          v3 = 0;
          break;
        }
        v10 = (unsigned __int64)(v4 - 7);
        while ( (unsigned __int64)a1 < v10 )
        {
          v11 = *a1++;
          if ( v11 <= 0x7F )
          {
            if ( ((unsigned __int8)a1 & 1) == 0 || (v11 = *a1, ++a1, v11 <= 0x7F) )
            {
              if ( ((unsigned __int8)a1 & 2) == 0 )
                goto LABEL_21;
              LOWORD(v11) = *(_WORD *)a1;
              if ( (*(_WORD *)a1 & 0x8080) == 0 )
              {
                a1 += 2;
LABEL_21:
                while ( (unsigned __int64)a1 < v10 )
                {
                  v11 = *(_DWORD *)a1;
                  if ( ((*(_DWORD *)a1 | *((_DWORD *)a1 + 1)) & 0x80808080) != 0 )
                    goto LABEL_46;
                  a1 += 8;
                  if ( (unsigned __int64)a1 >= v10 )
                    break;
                  v11 = *(_DWORD *)a1;
                  if ( ((*(_DWORD *)a1 | *((_DWORD *)a1 + 1)) & 0x80808080) != 0 )
                    goto LABEL_46;
                  a1 += 8;
                }
                break;
              }
LABEL_46:
              ++a1;
              if ( (unsigned __int8)v11 <= 0x7Fu )
                continue;
            }
          }
          v12 = *a1++;
          if ( (v11 & 0x40) == 0 || (v12 & 0xC0) != 0x80 )
          {
LABEL_56:
            a1 -= 2;
            break;
          }
          if ( (v11 & 0x20) != 0 )
          {
            if ( (v11 & 0x10) != 0 )
            {
              if ( ((v12 & 0x3F | ((v11 & 0xF) << 6)) >> 4) - 1 > 0xF || (*a1 & 0xC0) != 0x80 || (a1[1] & 0xC0) != 0x80 )
                goto LABEL_56;
              v15 = 2LL;
            }
            else
            {
              v14 = v12 & 0x20 | ((v11 & 0xF) << 6) & 0x3E0;
              if ( !v14 || v14 == 864 || (*a1 & 0xC0) != 0x80 )
                goto LABEL_56;
              v15 = 1LL;
            }
            --a2;
            a1 += v15;
          }
          else if ( (v11 & 0x1E) == 0 )
          {
            goto LABEL_56;
          }
          --a2;
        }
LABEL_28:
        v3 = 0;
      }
      else if ( (v3 & 0x10000000) != 0 )
      {
        if ( (v3 & 0x800000) == 0 && (v3 & 0x1F0u) - 16 > 0xF0 )
          goto LABEL_27;
      }
      else if ( (v3 & 0x3E0) == 0 || (v3 & 0x3E0) == 0x360 )
      {
        goto LABEL_27;
      }
    }
    else
    {
      v8 = *a1++;
LABEL_5:
      if ( v8 <= 0x7F )
        goto LABEL_6;
      --a2;
      if ( (v8 & 0x40) == 0 )
        goto LABEL_27;
      if ( (v8 & 0x20) != 0 )
      {
        if ( (v8 & 0x10) != 0 )
        {
          v17 = v8 & 0xF;
          if ( v17 > 4 )
            goto LABEL_27;
          v3 = v17 | 0x504D0C00;
        }
        else
        {
          v3 = v8 & 0xF | 0x48228000;
        }
        --a2;
      }
      else
      {
        v16 = v8 & 0x1F;
        if ( v16 <= 1 )
          goto LABEL_27;
        v3 = v16 | 0x800000;
      }
    }
  }
  if ( v3 )
  {
    a2 += (v3 >> 30) + 1;
    v5 = 263;
  }
  result = v5;
  *a3 = 2 * a2;
  return result;
}
