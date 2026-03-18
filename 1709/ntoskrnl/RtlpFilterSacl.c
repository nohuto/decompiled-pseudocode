/*
 * XREFs of RtlpFilterSacl @ 0x1404839D0
 * Callers:
 *     SeQuerySecurityDescriptorInfo @ 0x140483530 (SeQuerySecurityDescriptorInfo.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 */

__int64 __fastcall RtlpFilterSacl(__int64 *a1, __int64 i, _DWORD *a3, unsigned int a4)
{
  unsigned __int16 *v4; // rbp
  __int64 v5; // r14
  int v8; // r10d
  unsigned __int8 *v9; // r11
  unsigned int v10; // ecx
  bool v11; // zf
  __int64 result; // rax
  char *v13; // rsi
  unsigned int v14; // edi
  unsigned int v15; // ecx
  unsigned int v16; // eax
  char v17; // al
  bool v18; // zf
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // ecx

  v4 = (unsigned __int16 *)(a1 + 1);
  v5 = i;
  LODWORD(i) = 0;
  v8 = 8;
  v9 = (unsigned __int8 *)(a1 + 1);
  if ( *((_WORD *)a1 + 2) )
  {
    for ( i = *((unsigned __int16 *)a1 + 2); i; --i )
    {
      v10 = *v9;
      if ( v10 > 0x12 )
      {
        v19 = v10 - 19;
        if ( v19 )
        {
          v20 = v19 - 1;
          if ( !v20 )
          {
            if ( (a4 & 0x80u) == 0 )
              goto LABEL_9;
LABEL_8:
            v8 += *((unsigned __int16 *)v9 + 1);
            goto LABEL_9;
          }
          if ( v20 != 1 )
            goto LABEL_29;
          v11 = (a4 & 0x100) == 0;
        }
        else
        {
          v11 = (a4 & 0x40) == 0;
        }
      }
      else
      {
        if ( v10 != 18 )
        {
          if ( v10 > 0x10 )
          {
            v11 = (a4 & 0x10) == 0;
            goto LABEL_7;
          }
LABEL_29:
          v11 = (a4 & 8) == 0;
          goto LABEL_7;
        }
        v11 = (a4 & 0x20) == 0;
      }
LABEL_7:
      if ( !v11 )
        goto LABEL_8;
LABEL_9:
      v9 += *((unsigned __int16 *)v9 + 1);
    }
  }
  result = (v8 + 3) & 0xFFFFFFFC;
  if ( *a3 < (unsigned int)result )
  {
    *a3 = result;
    return result;
  }
  result = *a1;
  v13 = (char *)(v5 + 8);
  *(_QWORD *)v5 = *a1;
  v14 = i;
  *(_DWORD *)(v5 + 2) = 8;
  if ( (unsigned __int16)i < *((_WORD *)a1 + 2) )
  {
    while ( 1 )
    {
      v15 = *(unsigned __int8 *)v4;
      if ( v15 <= 0x12 )
        break;
      v21 = v15 - 19;
      if ( v21 )
      {
        v22 = v21 - 1;
        if ( !v22 )
        {
          v16 = a4 >> 7;
          goto LABEL_23;
        }
        if ( v22 == 1 )
        {
          v16 = a4 >> 8;
          goto LABEL_23;
        }
        goto LABEL_45;
      }
      if ( (a4 & 0x40) != 0 )
      {
        v17 = 1;
LABEL_24:
        v18 = v17 == 0;
LABEL_25:
        if ( !v18 )
        {
          memmove(v13, v4, v4[1]);
          ++*(_WORD *)(v5 + 4);
          *(_WORD *)(v5 + 2) += v4[1];
          v13 += v4[1];
        }
      }
      ++v14;
      v4 = (unsigned __int16 *)((char *)v4 + v4[1]);
      result = *((unsigned __int16 *)a1 + 2);
      if ( v14 >= (unsigned int)result )
        return result;
    }
    if ( v15 == 18 )
    {
      v16 = a4 >> 5;
      goto LABEL_23;
    }
    if ( v15 >= 2 )
    {
      if ( v15 <= 3 )
        goto LABEL_30;
      if ( v15 <= 6 )
        goto LABEL_45;
      if ( v15 <= 8 )
        goto LABEL_30;
      if ( v15 <= 0xC )
        goto LABEL_45;
      if ( v15 <= 0x10 )
LABEL_30:
        v16 = a4 >> 3;
      else
        v16 = a4 >> 4;
LABEL_23:
      v17 = v16 & 1;
      goto LABEL_24;
    }
LABEL_45:
    v18 = (a4 & 8) == 0;
    goto LABEL_25;
  }
  return result;
}
