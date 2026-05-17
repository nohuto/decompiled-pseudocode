/*
 * XREFs of RtlUnicodeToUTF8N @ 0x180065170
 * Callers:
 *     RtlUnicodeStringToAnsiString @ 0x180038D10 (RtlUnicodeStringToAnsiString.c)
 *     RtlUnicodeToOemN @ 0x18006B6E0 (RtlUnicodeToOemN.c)
 *     RtlUnicodeToMultiByteN @ 0x18006CF00 (RtlUnicodeToMultiByteN.c)
 *     RtlUnicodeToMultiByteSize @ 0x180079570 (RtlUnicodeToMultiByteSize.c)
 *     RtlUnicodeToCustomCPN @ 0x1800DF1A0 (RtlUnicodeToCustomCPN.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUnicodeToUTF8N(_BYTE *a1, unsigned int a2, _DWORD *a3, unsigned int *a4, unsigned int a5)
{
  unsigned int v5; // ebp
  __int64 v6; // r11
  unsigned int v7; // r10d
  int v9; // edi
  _BYTE *v10; // rdx
  _BYTE *v11; // r11
  unsigned int *v12; // rsi
  int v13; // ecx
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  __int64 result; // rax
  unsigned int *v18; // r10
  unsigned int v19; // ecx
  unsigned int v20; // r8d
  char v21; // al
  char v22; // al
  unsigned int v23; // eax
  unsigned int v24; // eax
  int v25; // r8d

  v5 = 0;
  v6 = a2;
  v7 = 0;
  v9 = (int)a1;
  if ( !a4 )
    return 3221225714LL;
  if ( a1 )
  {
    if ( (a5 & 1) == 0 )
    {
      v10 = a1;
      v11 = &a1[v6];
      v12 = (unsigned int *)((char *)a4 + 2 * ((unsigned __int64)a5 >> 1));
LABEL_5:
      while ( a4 < v12 )
      {
        v13 = *(unsigned __int16 *)a4;
        if ( v7 )
        {
          if ( (unsigned int)(v13 - 56320) <= 0x3FF )
          {
            v7 = v13 + (v7 << 10) - 56613888;
            a4 = (unsigned int *)((char *)a4 + 2);
          }
          goto LABEL_9;
        }
        v7 = *(unsigned __int16 *)a4;
        a4 = (unsigned int *)((char *)a4 + 2);
LABEL_8:
        if ( v7 - 55296 > 0x3FF )
        {
LABEL_9:
          if ( v7 - 55296 <= 0x7FF )
          {
            v5 = 263;
            v7 = 65533;
          }
          v14 = 1LL;
          if ( v7 > 0x7F )
          {
            if ( v7 > 0x7FF )
            {
              if ( v7 > 0xFFFF )
                LODWORD(v14) = 2;
              LODWORD(v14) = v14 + 1;
            }
            v14 = (unsigned int)(v14 + 1);
          }
          if ( v10 > &v11[-v14] )
          {
            result = 3221225507LL;
LABEL_20:
            *a3 = (_DWORD)v10 - v9;
            return result;
          }
          if ( v7 > 0x7F )
          {
            if ( v7 > 0x7FF )
            {
              if ( v7 > 0xFFFF )
              {
                *v10++ = (v7 >> 18) | 0xF0;
                v22 = (v7 >> 12) & 0x3F | 0x80;
              }
              else
              {
                v22 = (v7 >> 12) | 0xE0;
              }
              *v10++ = v22;
              v21 = (v7 >> 6) & 0x3F | 0x80;
            }
            else
            {
              v21 = (v7 >> 6) | 0xC0;
            }
            *v10++ = v21;
            LOBYTE(v7) = v7 & 0x3F | 0x80;
          }
          *v10++ = v7;
          v15 = ((char *)v12 - (char *)a4) >> 1;
          v16 = v11 - v10;
          if ( v15 <= 0xD )
          {
            if ( v16 < v15 )
              goto LABEL_29;
            while ( a4 < v12 )
            {
              v7 = *(unsigned __int16 *)a4;
              a4 = (unsigned int *)((char *)a4 + 2);
              if ( v7 > 0x7F )
                goto LABEL_8;
              *v10++ = v7;
            }
LABEL_19:
            result = v5;
            goto LABEL_20;
          }
          if ( v16 < v15 )
            v15 = v11 - v10;
          v18 = (unsigned int *)((char *)a4 + 2 * v15 - 10);
          if ( a4 < v18 )
          {
            while ( 1 )
            {
              v19 = *(unsigned __int16 *)a4;
              a4 = (unsigned int *)((char *)a4 + 2);
              if ( v19 <= 0x7F )
              {
                *v10++ = v19;
                if ( ((unsigned __int8)a4 & 2) == 0 )
                  goto LABEL_26;
                v19 = *(unsigned __int16 *)a4;
                a4 = (unsigned int *)((char *)a4 + 2);
                if ( v19 <= 0x7F )
                  break;
              }
LABEL_44:
              if ( v19 > 0x7FF )
              {
                if ( v19 - 55296 <= 0x7FF )
                {
                  if ( v19 > 0xDBFF )
                  {
                    a4 = (unsigned int *)((char *)a4 - 2);
                    goto LABEL_29;
                  }
                  v25 = *(unsigned __int16 *)a4;
                  a4 = (unsigned int *)((char *)a4 + 2);
                  if ( (unsigned int)(v25 - 56320) > 0x3FF )
                  {
                    --a4;
                    goto LABEL_29;
                  }
                  v19 = v25 + (v19 << 10) - 56613888;
                  *v10++ = (v19 >> 18) | 0xF0;
                  v24 = v19 & 0x3F000 | 0x80000;
                }
                else
                {
                  v24 = v19 | 0xE0000;
                }
                v18 = (unsigned int *)((char *)v18 - 2);
                *v10++ = v24 >> 12;
                v23 = v19 & 0xFC0 | 0x2000;
              }
              else
              {
                v23 = v19 | 0x3000;
              }
              v18 = (unsigned int *)((char *)v18 - 2);
              *v10++ = v23 >> 6;
              LOBYTE(v19) = v19 & 0x3F | 0x80;
LABEL_47:
              *v10++ = v19;
              if ( a4 >= v18 )
              {
                v7 = 0;
                goto LABEL_5;
              }
            }
            *v10++ = v19;
LABEL_26:
            if ( a4 >= v18 )
              goto LABEL_29;
            while ( 1 )
            {
              v20 = a4[1];
              v19 = *a4;
              if ( ((*a4 | v20) & 0xFF80FF80) != 0 )
                break;
              *v10 = v19;
              a4 += 2;
              v10[2] = v20;
              v10[1] = BYTE2(v19);
              v10[3] = BYTE2(v20);
              v10 += 4;
              if ( a4 >= v18 )
                goto LABEL_29;
            }
            v19 = (unsigned __int16)v19;
            a4 = (unsigned int *)((char *)a4 + 2);
            if ( (unsigned __int16)v19 <= 0x7Fu )
              goto LABEL_47;
            goto LABEL_44;
          }
LABEL_29:
          v7 = 0;
        }
      }
      if ( !v7 )
        goto LABEL_19;
      goto LABEL_9;
    }
    return 3221225715LL;
  }
  else if ( a3 )
  {
    return sub_180065428(a4, a5);
  }
  else
  {
    return 3221225485LL;
  }
}
