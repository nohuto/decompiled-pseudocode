/*
 * XREFs of RtlUnicodeToUTF8N @ 0x180067AA0
 * Callers:
 *     RtlUnicodeToMultiByteN @ 0x18002E8B0 (RtlUnicodeToMultiByteN.c)
 *     RtlUnicodeToOemN @ 0x18006CFA0 (RtlUnicodeToOemN.c)
 *     RtlUnicodeToMultiByteSize @ 0x18007D660 (RtlUnicodeToMultiByteSize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUnicodeToUTF8N(_BYTE *a1, int a2, _DWORD *a3, unsigned int *a4, unsigned int a5)
{
  unsigned int v5; // ebp
  unsigned int v6; // r10d
  int v8; // ebx
  _BYTE *v9; // rax
  _BYTE *v10; // rsi
  unsigned int *v11; // r11
  __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned int *v16; // r10
  unsigned int v17; // edx
  unsigned int v18; // r8d
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  char v21; // cl
  _BYTE *v22; // rax
  int v23; // r8d
  int v24; // edx

  v5 = 0;
  v6 = 0;
  v8 = (int)a1;
  if ( !a4 )
    return 3221225714LL;
  if ( !a1 )
  {
    if ( a3 )
      return CountUnicodeToUTF8(a4, a5);
    else
      return 3221225485LL;
  }
  if ( (a5 & 1) != 0 )
    return 3221225715LL;
  v9 = a1;
  v10 = &a1[a2];
  v11 = (unsigned int *)((char *)a4 + 2 * ((unsigned __int64)a5 >> 1));
  while ( 1 )
  {
    do
    {
LABEL_5:
      if ( a4 >= v11 )
      {
        if ( !v6 )
          goto LABEL_19;
        break;
      }
      if ( v6 )
      {
        v24 = *(unsigned __int16 *)a4;
        if ( (unsigned int)(v24 - 56320) <= 0x3FF )
        {
          v6 = v24 + (v6 << 10) - 56613888;
          a4 = (unsigned int *)((char *)a4 + 2);
        }
        break;
      }
      v6 = *(unsigned __int16 *)a4;
      a4 = (unsigned int *)((char *)a4 + 2);
LABEL_8:
      ;
    }
    while ( v6 - 55296 <= 0x3FF );
    if ( v6 - 55296 <= 0x7FF )
    {
      v5 = 263;
      v6 = 65533;
    }
    v12 = 1LL;
    if ( v6 > 0x7F )
    {
      if ( v6 > 0x7FF )
      {
        if ( v6 > 0xFFFF )
          LODWORD(v12) = 2;
        LODWORD(v12) = v12 + 1;
      }
      v12 = (unsigned int)(v12 + 1);
    }
    if ( v9 > &v10[-v12] )
    {
      *a3 = (_DWORD)v9 - v8;
      return 3221225507LL;
    }
    if ( v6 > 0x7F )
    {
      if ( v6 <= 0x7FF )
      {
        *v9++ = (v6 >> 6) | 0xC0;
        LOBYTE(v6) = v6 & 0x3F | 0x80;
      }
      else
      {
        if ( v6 > 0xFFFF )
        {
          *v9++ = (v6 >> 18) | 0xF0;
          v21 = (v6 >> 12) & 0x3F | 0x80;
        }
        else
        {
          v21 = (v6 >> 12) | 0xE0;
        }
        *v9 = v21;
        v22 = v9 + 1;
        *v22 = (v6 >> 6) & 0x3F | 0x80;
        v9 = v22 + 1;
        LOBYTE(v6) = v6 & 0x3F | 0x80;
      }
    }
    *v9++ = v6;
    v13 = ((char *)v11 - (char *)a4) >> 1;
    v14 = v10 - v9;
    if ( v13 > 0xD )
    {
      if ( v14 < v13 )
        v13 = v10 - v9;
      v16 = (unsigned int *)((char *)a4 + 2 * v13 - 10);
      while ( 2 )
      {
        if ( a4 >= v16 )
          goto LABEL_30;
        v17 = *(unsigned __int16 *)a4;
        a4 = (unsigned int *)((char *)a4 + 2);
        if ( v17 > 0x7F )
          goto LABEL_33;
        *v9++ = v17;
        if ( ((unsigned __int8)a4 & 2) == 0 )
          goto LABEL_27;
        v17 = *(unsigned __int16 *)a4;
        a4 = (unsigned int *)((char *)a4 + 2);
        if ( v17 > 0x7F )
          goto LABEL_33;
        *v9++ = v17;
LABEL_27:
        if ( a4 >= v16 )
          goto LABEL_30;
        while ( 1 )
        {
          v18 = a4[1];
          v17 = *a4;
          if ( ((*a4 | v18) & 0xFF80FF80) != 0 )
            break;
          *v9 = v17;
          a4 += 2;
          v9[2] = v18;
          v9[1] = BYTE2(v17);
          v9[3] = BYTE2(v18);
          v9 += 4;
          if ( a4 >= v16 )
            goto LABEL_30;
        }
        v17 = (unsigned __int16)v17;
        a4 = (unsigned int *)((char *)a4 + 2);
        if ( (unsigned __int16)v17 > 0x7Fu )
        {
LABEL_33:
          if ( v17 <= 0x7FF )
          {
            v20 = v17 | 0x3000;
          }
          else
          {
            if ( v17 - 55296 <= 0x7FF )
            {
              if ( v17 > 0xDBFF )
              {
                a4 = (unsigned int *)((char *)a4 - 2);
                goto LABEL_30;
              }
              v23 = *(unsigned __int16 *)a4;
              a4 = (unsigned int *)((char *)a4 + 2);
              if ( (unsigned int)(v23 - 56320) > 0x3FF )
              {
                --a4;
                v6 = 0;
                goto LABEL_5;
              }
              v17 = v23 + (v17 << 10) - 56613888;
              *v9++ = (v17 >> 18) | 0xF0;
              v19 = v17 & 0x3F000 | 0x80000;
            }
            else
            {
              v19 = v17 | 0xE0000;
            }
            v16 = (unsigned int *)((char *)v16 - 2);
            *v9++ = v19 >> 12;
            v20 = v17 & 0xFC0 | 0x2000;
          }
          v16 = (unsigned int *)((char *)v16 - 2);
          *v9++ = v20 >> 6;
          LOBYTE(v17) = v17 & 0x3F | 0x80;
        }
        *v9++ = v17;
        continue;
      }
    }
    if ( v14 >= v13 )
      break;
LABEL_30:
    v6 = 0;
  }
  while ( a4 < v11 )
  {
    v6 = *(unsigned __int16 *)a4;
    a4 = (unsigned int *)((char *)a4 + 2);
    if ( v6 > 0x7F )
      goto LABEL_8;
    *v9++ = v6;
  }
LABEL_19:
  *a3 = (_DWORD)v9 - v8;
  return v5;
}
