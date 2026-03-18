/*
 * XREFs of CountUTF8ToUnicode @ 0x140256CAC
 * Callers:
 *     RtlUTF8ToUnicodeN @ 0x1405867F0 (RtlUTF8ToUnicodeN.c)
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
  char v9; // r8
  unsigned int v10; // r9d
  unsigned int v11; // r9d
  unsigned __int64 v12; // r10
  unsigned int v13; // r8d
  char v14; // r9
  __int64 v15; // rax
  int v16; // eax
  __int64 result; // rax

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
      v9 = *a1++;
      if ( (v9 & 0xC0) != 0x80 )
      {
        a1 = v7;
        a2 += v3 >> 30;
LABEL_7:
        v5 = 263;
        ++a2;
        goto LABEL_8;
      }
      v3 = (v3 << 6) | v9 & 0x3F;
      if ( (v3 & 0x20000000) != 0 )
      {
LABEL_17:
        if ( (unsigned __int64)(v4 - a1) <= 0xD )
        {
          while ( a1 < v4 )
          {
            v8 = *a1++;
            if ( v8 > 0x7F )
              goto LABEL_20;
          }
          v3 = 0;
          break;
        }
        v12 = (unsigned __int64)(v4 - 7);
        while ( (unsigned __int64)a1 < v12 )
        {
          v13 = *a1++;
          if ( v13 <= 0x7F )
          {
            if ( ((unsigned __int8)a1 & 1) == 0 || (v13 = *a1, ++a1, v13 <= 0x7F) )
            {
              if ( ((unsigned __int8)a1 & 2) == 0 )
                goto LABEL_37;
              LOWORD(v13) = *(_WORD *)a1;
              if ( (*(_WORD *)a1 & 0x8080) == 0 )
              {
                a1 += 2;
LABEL_37:
                while ( (unsigned __int64)a1 < v12 )
                {
                  v13 = *(_DWORD *)a1;
                  if ( ((*(_DWORD *)a1 | *((_DWORD *)a1 + 1)) & 0x80808080) != 0 )
                    goto LABEL_42;
                  a1 += 8;
                  if ( (unsigned __int64)a1 >= v12 )
                    break;
                  v13 = *(_DWORD *)a1;
                  if ( ((*(_DWORD *)a1 | *((_DWORD *)a1 + 1)) & 0x80808080) != 0 )
                    goto LABEL_42;
                  a1 += 8;
                }
                break;
              }
LABEL_42:
              ++a1;
              if ( (unsigned __int8)v13 <= 0x7Fu )
                continue;
            }
          }
          v14 = *a1++;
          if ( (v13 & 0x40) == 0 || (v14 & 0xC0) != 0x80 )
          {
LABEL_60:
            a1 -= 2;
            break;
          }
          if ( (v13 & 0x20) != 0 )
          {
            if ( (v13 & 0x10) != 0 )
            {
              if ( ((v14 & 0x3F | ((v13 & 0xF) << 6)) >> 4) - 1 > 0xF || (*a1 & 0xC0) != 0x80 || (a1[1] & 0xC0) != 0x80 )
                goto LABEL_60;
              v15 = 2LL;
            }
            else
            {
              v16 = v14 & 0x20 | ((v13 & 0xF) << 6) & 0x3E0;
              if ( !v16 || v16 == 864 || (*a1 & 0xC0) != 0x80 )
                goto LABEL_60;
              v15 = 1LL;
            }
            --a2;
            a1 += v15;
          }
          else if ( (v13 & 0x1E) == 0 )
          {
            goto LABEL_60;
          }
          --a2;
        }
LABEL_8:
        v3 = 0;
      }
      else if ( (v3 & 0x10000000) != 0 )
      {
        if ( (v3 & 0x800000) == 0 && (v3 & 0x1F0u) - 16 > 0xF0 )
          goto LABEL_7;
      }
      else if ( (v3 & 0x3E0) == 0 || (v3 & 0x3E0) == 0x360 )
      {
        goto LABEL_7;
      }
    }
    else
    {
      v8 = *a1++;
LABEL_20:
      if ( v8 <= 0x7F )
        goto LABEL_17;
      --a2;
      if ( (v8 & 0x40) == 0 )
        goto LABEL_7;
      if ( (v8 & 0x20) != 0 )
      {
        if ( (v8 & 0x10) != 0 )
        {
          v10 = v8 & 0xF;
          if ( v10 <= 4 )
          {
            v3 = v10 | 0x504D0C00;
            goto LABEL_27;
          }
          goto LABEL_7;
        }
        v3 = v8 & 0xF | 0x48228000;
LABEL_27:
        --a2;
      }
      else
      {
        v11 = v8 & 0x1F;
        if ( v11 <= 1 )
          goto LABEL_7;
        v3 = v11 | 0x800000;
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
