/*
 * XREFs of CountUnicodeToUTF8 @ 0x180067DE0
 * Callers:
 *     RtlUnicodeToUTF8N @ 0x180067AA0 (RtlUnicodeToUTF8N.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CountUnicodeToUTF8(unsigned int *a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v3; // ebx
  unsigned int v5; // r11d
  unsigned int *v6; // r10
  unsigned int v7; // r9d
  unsigned __int64 v8; // rax
  unsigned int *v9; // r9
  unsigned int v10; // edx
  unsigned int v11; // r8d
  int v12; // eax
  unsigned int v13; // r8d
  int v14; // eax
  __int64 result; // rax
  unsigned int v16; // eax
  unsigned int v17; // edx
  unsigned int v18; // eax
  unsigned int v19; // edx

  v3 = 0;
  v5 = a2 >> 1;
  v6 = (unsigned int *)((char *)a1 + 2 * ((unsigned __int64)a2 >> 1));
LABEL_2:
  while ( 2 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( a1 >= v6 )
      {
        if ( v7 )
        {
          ++v5;
          goto LABEL_7;
        }
        goto LABEL_21;
      }
      if ( v7 )
        break;
      v7 = *(unsigned __int16 *)a1;
      a1 = (unsigned int *)((char *)a1 + 2);
LABEL_6:
      if ( v7 - 55296 > 0x3FF )
        goto LABEL_7;
      --v5;
    }
    ++v5;
    if ( (unsigned int)*(unsigned __int16 *)a1 - 56320 <= 0x3FF )
    {
      v7 = 65533;
      a1 = (unsigned int *)((char *)a1 + 2);
    }
LABEL_7:
    if ( v7 - 55296 <= 0x7FF )
    {
      v3 = 263;
      v5 += 2;
    }
    else if ( v7 > 0x7F )
    {
      if ( v7 > 0x7FF )
        ++v5;
      ++v5;
    }
    v8 = ((char *)v6 - (char *)a1) >> 1;
    if ( v8 > 0xD )
    {
      v9 = (unsigned int *)((char *)a1 + 2 * v8 - 14);
      if ( a1 >= v9 )
        continue;
      while ( 1 )
      {
        v10 = *(unsigned __int16 *)a1;
        a1 = (unsigned int *)((char *)a1 + 2);
        if ( v10 > 0x7F )
        {
          if ( v10 > 0x7FF )
          {
            if ( (v10 & 0xF800) == 0xD800 )
              goto LABEL_28;
            ++v5;
          }
          ++v5;
        }
        if ( ((unsigned __int8)a1 & 2) != 0 )
        {
          v10 = *(unsigned __int16 *)a1;
          a1 = (unsigned int *)((char *)a1 + 2);
          if ( v10 > 0x7F )
          {
            if ( v10 > 0x7FF )
            {
              if ( (v10 & 0xF800) == 0xD800 )
              {
LABEL_28:
                if ( v10 > 0x7FF )
                {
                  if ( v10 - 55296 <= 0x7FF )
                  {
                    if ( v10 > 0xDBFF || (unsigned int)*(unsigned __int16 *)a1 - 56320 > 0x3FF )
                    {
                      a1 = (unsigned int *)((char *)a1 - 2);
                      goto LABEL_2;
                    }
                    a1 = (unsigned int *)((char *)a1 + 2);
                  }
                  ++v5;
                }
                ++v5;
                goto LABEL_32;
              }
              ++v5;
            }
            ++v5;
            goto LABEL_13;
          }
        }
        while ( 1 )
        {
LABEL_13:
          if ( a1 >= v9 )
            goto LABEL_2;
          v11 = a1[1];
          v10 = *a1;
          v12 = *a1 | v11;
          if ( (v12 & 0xFF80FF80) != 0 )
          {
            if ( (v12 & 0xF800F800) != 0 )
              goto LABEL_27;
            v18 = v5 + 1;
            if ( (v10 & 0xFF800000) == 0 )
              v18 = v5;
            v19 = v18 + 1;
            if ( (*a1 & 0xFF80) == 0 )
              v19 = v18;
            v5 = v19 + 1;
            if ( (v11 & 0xFF800000) == 0 )
              v5 = v19;
            if ( (v11 & 0xFF80) != 0 )
              ++v5;
          }
          v13 = a1[3];
          a1 += 2;
          v10 = *a1;
          v14 = *a1 | v13;
          if ( (v14 & 0xFF80FF80) != 0 )
            break;
LABEL_16:
          a1 += 2;
        }
        if ( (v14 & 0xF800F800) == 0 )
          break;
LABEL_27:
        v10 = (unsigned __int16)v10;
        a1 = (unsigned int *)((char *)a1 + 2);
        if ( (unsigned __int16)v10 > 0x7Fu )
          goto LABEL_28;
LABEL_32:
        if ( a1 >= v9 )
          goto LABEL_2;
      }
      v16 = v5 + 1;
      if ( (v10 & 0xFF800000) == 0 )
        v16 = v5;
      v17 = v16 + 1;
      if ( (*a1 & 0xFF80) == 0 )
        v17 = v16;
      v5 = v17 + 1;
      if ( (v13 & 0xFF800000) == 0 )
        v5 = v17;
      if ( (v13 & 0xFF80) != 0 )
        ++v5;
      goto LABEL_16;
    }
    break;
  }
  while ( a1 < v6 )
  {
    v7 = *(unsigned __int16 *)a1;
    a1 = (unsigned int *)((char *)a1 + 2);
    if ( v7 > 0x7F )
      goto LABEL_6;
  }
LABEL_21:
  result = v3;
  *a3 = v5;
  return result;
}
