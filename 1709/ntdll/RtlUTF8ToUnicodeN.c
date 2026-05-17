/*
 * XREFs of RtlUTF8ToUnicodeN @ 0x180068230
 * Callers:
 *     RtlAnsiStringToUnicodeString @ 0x180030EF0 (RtlAnsiStringToUnicodeString.c)
 *     RtlMultiByteToUnicodeN @ 0x18006B810 (RtlMultiByteToUnicodeN.c)
 *     RtlAnsiCharToUnicodeChar @ 0x18006C8D0 (RtlAnsiCharToUnicodeChar.c)
 *     RtlOemToUnicodeN @ 0x18007B4F0 (RtlOemToUnicodeN.c)
 *     RtlMultiByteToUnicodeSize @ 0x180087780 (RtlMultiByteToUnicodeSize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUTF8ToUnicodeN(_WORD *a1, unsigned int a2, _DWORD *a3, char *a4, unsigned int a5)
{
  unsigned int v5; // esi
  _WORD *v8; // rax
  char *v9; // r11
  unsigned __int64 v10; // rbp
  unsigned int v11; // edx
  char *v12; // r8
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  _WORD *v16; // r10
  unsigned int v17; // edx
  unsigned int v18; // r8d
  char v19; // r10
  char v20; // r8
  int v21; // r8d
  unsigned int v22; // edx
  __int16 v23; // r8
  unsigned int v24; // edx
  unsigned int v25; // r8d
  bool v26; // zf
  char v27; // dl
  __int64 v28; // rcx
  unsigned int v29; // edx
  int v30; // r8d
  char v31; // dl

  v5 = 0;
  v8 = a1;
  v9 = &a4[a5];
  v10 = (unsigned __int64)&a1[(unsigned __int64)a2 >> 1];
  v11 = 0;
  if ( !a4 )
    return 3221225714LL;
  if ( a1 )
  {
LABEL_3:
    while ( 2 )
    {
      while ( 2 )
      {
        v12 = a4;
        if ( a4 >= v9 )
        {
          if ( v11 )
          {
            v5 = 263;
            if ( (unsigned __int64)v8 < v10 )
              *v8++ = -3;
            else
              v5 = -1073741789;
          }
LABEL_13:
          if ( a3 )
            *a3 = 2 * (v8 - a1);
          return v5;
        }
        if ( !v11 )
        {
          v11 = *a4++;
          if ( v11 <= 0x7F )
          {
LABEL_6:
            if ( (unsigned __int64)v8 >= v10 )
              goto LABEL_78;
            *v8++ = v11;
            v13 = v9 - a4;
            v14 = (__int64)(v10 - (_QWORD)v8) >> 1;
            if ( (unsigned __int64)(v9 - a4) <= 0xD )
            {
              if ( v14 < v13 )
                goto LABEL_51;
              while ( a4 < v9 )
              {
                v11 = *a4++;
                if ( v11 > 0x7F )
                  goto LABEL_36;
                *v8++ = v11;
              }
              goto LABEL_13;
            }
            if ( v13 < v14 )
              v14 = v9 - a4;
            v16 = &v8[v14 - 7];
            if ( v8 >= v16 )
              goto LABEL_51;
            while ( 1 )
            {
              v17 = *a4++;
              if ( v17 > 0x7F )
                goto LABEL_44;
              *v8++ = v17;
              if ( ((unsigned __int8)a4 & 1) != 0 )
              {
                v17 = *a4++;
                if ( v17 > 0x7F )
                  goto LABEL_44;
                *v8++ = v17;
              }
              if ( ((unsigned __int8)a4 & 2) == 0 )
                goto LABEL_25;
              v17 = *(unsigned __int16 *)a4;
              if ( (v17 & 0x8080) == 0 )
              {
                a4 += 2;
                *v8 = v17 & 0x7F;
                v8[1] = (v17 >> 8) & 0x7F;
                v8 += 2;
LABEL_25:
                while ( v8 < v16 )
                {
                  v18 = *((_DWORD *)a4 + 1);
                  v17 = *(_DWORD *)a4;
                  if ( ((*(_DWORD *)a4 | v18) & 0x80808080) != 0 )
                    goto LABEL_52;
                  a4 += 8;
                  *v8 = v17 & 0x7F;
                  v8[1] = (v17 >> 8) & 0x7F;
                  v8[2] = BYTE2(v17) & 0x7F;
                  v8[3] = HIBYTE(v17) & 0x7F;
                  v8[4] = v18 & 0x7F;
                  v8[5] = (v18 >> 8) & 0x7F;
                  v8[6] = BYTE2(v18) & 0x7F;
                  v8[7] = HIBYTE(v18) & 0x7F;
                  v8 += 8;
                }
LABEL_51:
                v11 = 0;
                goto LABEL_3;
              }
LABEL_52:
              ++a4;
              if ( (unsigned __int8)v17 <= 0x7Fu )
              {
                *v8 = (unsigned __int8)v17;
                goto LABEL_50;
              }
LABEL_44:
              v20 = *a4++;
              if ( (v17 & 0x40) == 0 || (v20 & 0xC0) != 0x80 )
              {
LABEL_63:
                a4 -= 2;
                goto LABEL_51;
              }
              v21 = v20 & 0x3F;
              if ( (v17 & 0x20) != 0 )
              {
                v25 = ((v17 & 0xF) << 6) | v21;
                v26 = (v17 & 0x10) == 0;
                v27 = *a4;
                if ( v26 )
                {
                  if ( (v25 & 0x3E0) == 0 || (v25 & 0x3E0) == 0x360 || (v27 & 0xC0) != 0x80 )
                    goto LABEL_63;
                  v23 = v27 & 0x3F | ((_WORD)v25 << 6);
                  v28 = 1LL;
                }
                else
                {
                  if ( (v25 >> 4) - 1 > 0xF )
                    goto LABEL_63;
                  if ( (v27 & 0xC0) != 0x80 )
                    goto LABEL_63;
                  v30 = v27 & 0x3F | (v25 << 6);
                  v31 = a4[1];
                  if ( (v31 & 0xC0) != 0x80 )
                    goto LABEL_63;
                  *v8++ = (((v31 & 0x3F | (unsigned int)(v30 << 6)) >> 10) & 0x7FF) - 10304;
                  v28 = 2LL;
                  v23 = (v31 & 0x3F | ((_WORD)v30 << 6) & 0x3FF) - 9216;
                }
                a4 += v28;
                --v16;
              }
              else
              {
                v22 = v17 & 0x1F;
                if ( v22 <= 1 )
                  goto LABEL_63;
                v23 = ((_WORD)v22 << 6) | v21;
              }
              *v8 = v23;
              --v16;
LABEL_50:
              if ( ++v8 >= v16 )
                goto LABEL_51;
            }
          }
LABEL_36:
          if ( (v11 & 0x40) != 0 )
          {
            if ( (v11 & 0x20) != 0 )
            {
              if ( (v11 & 0x10) == 0 )
              {
                v11 = v11 & 0xF | 0x48228000;
                continue;
              }
              v29 = v11 & 0xF;
              if ( v29 <= 4 )
              {
                v11 = v29 | 0x504D0C00;
                continue;
              }
            }
            else
            {
              v24 = v11 & 0x1F;
              if ( v24 > 1 )
              {
                v11 = v24 | 0x800000;
                continue;
              }
            }
          }
LABEL_65:
          v5 = 263;
          LOWORD(v11) = -3;
          goto LABEL_6;
        }
        break;
      }
      v19 = *a4++;
      if ( (v19 & 0xC0) != 0x80 )
      {
        a4 = v12;
        goto LABEL_65;
      }
      v11 = (v11 << 6) | v19 & 0x3F;
      if ( (v11 & 0x20000000) == 0 )
      {
        if ( (v11 & 0x10000000) != 0 )
        {
          if ( (v11 & 0x800000) != 0 || (v11 & 0x1F0) - 16 <= 0xF0 )
            continue;
        }
        else if ( (v11 & 0x3E0) != 0 )
        {
          if ( (v11 & 0x3E0) != 0x360 )
            continue;
          v5 = 263;
          LOWORD(v11) = -3;
          goto LABEL_6;
        }
        goto LABEL_65;
      }
      break;
    }
    if ( (v11 & 0x101F0000) <= 0x10000000 )
      goto LABEL_6;
    if ( (unsigned __int64)v8 < v10 )
    {
      *v8++ = ((v11 >> 10) & 0x7FF) - 10304;
      LOWORD(v11) = (v11 & 0x3FF) - 9216;
      goto LABEL_6;
    }
LABEL_78:
    if ( a3 )
      *a3 = 2 * (v8 - a1);
    return 3221225507LL;
  }
  else if ( a3 )
  {
    return CountUTF8ToUnicode(a4, a5);
  }
  else
  {
    return 3221225485LL;
  }
}
