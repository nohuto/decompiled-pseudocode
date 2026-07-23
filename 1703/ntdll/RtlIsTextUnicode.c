/*
 * XREFs of RtlIsTextUnicode @ 0x1800647F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlIsTextUnicode(PVOID Buffer, ULONG Size, PULONG Result)
{
  int v3; // r11d
  ULONG v4; // r15d
  ULONG v5; // r13d
  unsigned __int8 *v7; // rbp
  int v8; // r8d
  int v9; // r12d
  int v10; // ebx
  unsigned int v11; // edi
  unsigned int v12; // r9d
  unsigned int v13; // edx
  unsigned int v14; // r14d
  unsigned int v15; // esi
  unsigned int v16; // ecx
  _WORD *v17; // r10
  unsigned int v18; // r13d
  __int64 v19; // rbp
  int v20; // r15d
  unsigned int v21; // eax
  unsigned int v22; // r8d
  unsigned int v23; // eax
  unsigned int v24; // ecx
  unsigned int v25; // eax
  unsigned int v26; // edi
  int v27; // r10d
  unsigned int v28; // r9d
  int v29; // r8d
  int v30; // r11d
  int v31; // edx
  int v32; // ecx
  int v33; // r8d
  int v34; // ecx
  int v35; // eax
  ULONG v36; // ecx
  unsigned int v38; // r8d
  unsigned int v39; // r13d
  unsigned __int64 v40; // rax
  unsigned int v41; // ecx
  int v42; // [rsp+0h] [rbp-88h]
  unsigned int v43; // [rsp+4h] [rbp-84h]
  int v44; // [rsp+8h] [rbp-80h]
  int v45; // [rsp+Ch] [rbp-7Ch]
  int v46; // [rsp+10h] [rbp-78h]
  int v47; // [rsp+14h] [rbp-74h]
  int v48; // [rsp+18h] [rbp-70h]
  int v49; // [rsp+1Ch] [rbp-6Ch]
  int v50; // [rsp+20h] [rbp-68h]
  int v51; // [rsp+24h] [rbp-64h]
  int v52; // [rsp+28h] [rbp-60h]
  int v53; // [rsp+2Ch] [rbp-5Ch]
  int v54; // [rsp+30h] [rbp-58h]
  ULONG v55; // [rsp+34h] [rbp-54h]
  unsigned int v59; // [rsp+A8h] [rbp+20h]

  v3 = 0;
  v4 = Size;
  v46 = 0;
  v5 = Size >> 1;
  v42 = 0;
  v7 = (unsigned __int8 *)Buffer;
  v45 = 0;
  v8 = 0;
  v44 = 0;
  v9 = 0;
  v54 = 0;
  v10 = 0;
  v53 = 0;
  v11 = 0;
  v50 = 0;
  v12 = 0;
  v49 = 0;
  v13 = 0;
  v47 = 0;
  v14 = 0;
  v48 = 0;
  v15 = 0;
  v51 = 0;
  v52 = 0;
  v43 = 0;
  v59 = 0;
  v55 = v5;
  if ( v5 > 0x100 )
  {
    v16 = 256;
  }
  else
  {
    v16 = v5;
    if ( !v5 )
      goto LABEL_86;
  }
  if ( v4 == 2 )
  {
    if ( !*(_WORD *)v7 || v7[1] )
      goto LABEL_10;
LABEL_86:
    if ( Result )
      *Result = 5;
    return 0;
  }
  if ( v4 > 2 && v5 <= 0x100 && (v4 & 1) == 0 )
  {
    if ( (*(_WORD *)&v7[2 * v16 - 2] & 0xFF00) == 0 )
      --v16;
    v8 = 0;
  }
LABEL_10:
  if ( v16 )
  {
    v17 = v7;
    v18 = 0;
    v19 = v16;
    v20 = 0;
    do
    {
      v21 = (unsigned __int16)*v17;
      if ( v21 < 0x21 || v21 >= 0x900 )
      {
        if ( v21 > 0xD00 )
        {
          if ( v21 <= 0x3000 )
          {
            if ( v21 == 12288 )
            {
              ++v44;
            }
            else if ( v21 == 0x2000 )
            {
              ++v48;
            }
          }
          else if ( v21 != 65279 )
          {
            if ( v21 == 65534 )
            {
              ++v53;
            }
            else if ( v21 == 0xFFFF )
            {
              ++v54;
            }
          }
        }
        else if ( v21 == 3328 )
        {
          ++v50;
        }
        else if ( v21 > 0x20 )
        {
          switch ( v21 )
          {
            case 0x900u:
              ++v47;
              break;
            case 0xA00u:
              ++v49;
              break;
            case 0xA0Du:
              ++v52;
              break;
          }
        }
        else if ( v21 == 32 )
        {
          ++v9;
        }
        else if ( *v17 )
        {
          switch ( v21 )
          {
            case 9u:
              ++v45;
              break;
            case 0xAu:
              v42 = v8 + 1;
              break;
            case 0xDu:
              ++v20;
              break;
          }
        }
        else
        {
          ++v51;
        }
      }
      v13 = *(unsigned __int8 *)v17;
      v22 = BYTE1(v21);
      if ( v13 == 13 )
      {
        if ( v12 == 10 )
          ++v18;
      }
      else if ( v13 == 10 && v12 == 13 )
      {
        ++v18;
      }
      v10 += (v13 == 0) + (BYTE1(v21) == 0);
      if ( BYTE1(v21) > v12 )
        v23 = BYTE1(v21);
      else
        v23 = v12;
      if ( v12 >= v22 )
        v12 = v22;
      v24 = v11;
      v14 += v23 - v12;
      v12 = v22;
      v8 = v42;
      v25 = *(unsigned __int8 *)v17;
      if ( v13 > v11 )
      {
        v24 = *(unsigned __int8 *)v17;
        v25 = v11;
      }
      ++v17;
      v11 = v13;
      v15 += v24 - v25;
      --v19;
    }
    while ( v19 );
    v7 = (unsigned __int8 *)Buffer;
    v46 = v20;
    v4 = Size;
    v59 = v18;
    v5 = v55;
  }
  if ( v13 != 13 )
  {
    if ( v13 == 10 && v12 == 13 )
      goto LABEL_109;
LABEL_26:
    v26 = v59;
    goto LABEL_27;
  }
  if ( v12 != 10 )
    goto LABEL_26;
LABEL_109:
  v26 = v59 + 1;
LABEL_27:
  v27 = v10 - 1;
  if ( v12 )
    v27 = v10;
  if ( v12 == 26 )
    ++v26;
  v28 = 512;
  if ( v4 <= 0x200 )
    v28 = v4;
  if ( NlsMbCodePageTag )
  {
    v38 = 0;
    if ( v28 )
    {
      v39 = 0;
      do
      {
        if ( word_180159D80[v7[v38]] )
        {
          ++v39;
          ++v38;
        }
        ++v38;
      }
      while ( v38 < v28 );
      v43 = v39;
      v5 = v55;
    }
  }
  if ( v15 < 0x7F )
  {
    if ( !v14 )
    {
      v29 = 1;
      goto LABEL_37;
    }
  }
  else if ( !v14 )
  {
    goto LABEL_36;
  }
  if ( !v15 )
  {
    v29 = 16;
    goto LABEL_37;
  }
LABEL_36:
  v29 = 0;
LABEL_37:
  if ( NlsMbCodePageTag && v43 && Result && (*Result & 0x400) != 0 )
  {
    if ( v5 <= 0x100 )
      v40 = (unsigned __int64)v4 >> 1;
    else
      v40 = 256LL;
    v41 = (v40 >> 1) - 1;
    if ( v43 >= v41 / 3 )
    {
      LOBYTE(v3) = v43 < 2 * v41 / 3;
      v30 = v3 + 1;
    }
    else
    {
      v30 = 3;
    }
    v29 |= 0x400u;
  }
  else
  {
    v30 = 3;
  }
  v31 = v29 | 2;
  if ( v30 * v14 >= v15 )
    v31 = v29;
  if ( v30 * v15 < v14 )
    v31 |= 0x20u;
  v32 = v31 | 4;
  if ( !(v46 + v42 + v45 + v9 + v44) )
    v32 = v31;
  v33 = v32 | 0x40;
  if ( !(v50 + v49 + v48 + v47) )
    v33 = v32;
  if ( v54 + v53 + v52 + v51 || (v34 = v33, v26) && v26 >= v28 / 0x28 )
    v34 = v33 | 0x100;
  v35 = v34 | 0x200;
  if ( (v4 & 1) == 0 )
    v35 = v34;
  v36 = v35 | 0x1000;
  if ( !v27 )
    v36 = v35;
  if ( *(_WORD *)v7 == 0xFEFF )
  {
    v36 |= 8u;
  }
  else if ( *(_WORD *)v7 == 0xFFFE )
  {
    v36 |= 0x80u;
  }
  if ( Result )
  {
    *Result &= v36;
    v36 = *Result;
  }
  return (v36 & 0xB08) == 8 || (v36 & 0xF0) == 0 && (v36 & 0xF00) == 0 && (v36 & 0xF00F) != 0;
}
