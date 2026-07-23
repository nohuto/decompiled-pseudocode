/*
 * XREFs of RtlIsTextUnicode @ 0x180054550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlIsTextUnicode(PVOID Buffer, ULONG Size, PULONG Result)
{
  int v3; // ebx
  ULONG v4; // r15d
  ULONG v5; // r13d
  _WORD *v6; // rbp
  int v7; // r12d
  int v8; // r14d
  unsigned int v9; // r11d
  unsigned int v10; // r10d
  unsigned int v11; // edx
  unsigned int v12; // esi
  unsigned int v13; // edi
  unsigned int v14; // r9d
  unsigned int v15; // ecx
  _WORD *v16; // r9
  unsigned int v17; // r13d
  __int64 v18; // rbp
  int v19; // r15d
  unsigned int v20; // eax
  unsigned int v21; // r8d
  unsigned int v22; // eax
  unsigned int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // eax
  int v26; // r9d
  unsigned int v27; // r10d
  int v28; // r11d
  int v29; // ebx
  int v30; // edx
  int v31; // ecx
  int v32; // r8d
  int v33; // ecx
  int v34; // eax
  ULONG v35; // ecx
  unsigned int v37; // r11d
  unsigned int v38; // r13d
  unsigned int v39; // eax
  __int16 v40; // dx
  unsigned int v41; // eax
  unsigned __int64 v42; // rax
  unsigned int v43; // ecx
  int v44; // [rsp+0h] [rbp-88h]
  int v45; // [rsp+4h] [rbp-84h]
  int v46; // [rsp+8h] [rbp-80h]
  int v47; // [rsp+Ch] [rbp-7Ch]
  int v48; // [rsp+10h] [rbp-78h]
  int v49; // [rsp+14h] [rbp-74h]
  int v50; // [rsp+18h] [rbp-70h]
  int v51; // [rsp+1Ch] [rbp-6Ch]
  int v52; // [rsp+20h] [rbp-68h]
  int v53; // [rsp+24h] [rbp-64h]
  int v54; // [rsp+28h] [rbp-60h]
  int v55; // [rsp+2Ch] [rbp-5Ch]
  ULONG v56; // [rsp+30h] [rbp-58h]
  unsigned int v57; // [rsp+38h] [rbp-50h]
  unsigned int v61; // [rsp+A8h] [rbp+20h]

  v3 = 0;
  v4 = Size;
  v47 = 0;
  v5 = Size >> 1;
  v6 = Buffer;
  v46 = 0;
  v7 = 0;
  v45 = 0;
  v8 = 0;
  v44 = 0;
  v9 = 0;
  v55 = 0;
  v10 = 0;
  v54 = 0;
  v11 = 0;
  v51 = 0;
  v12 = 0;
  v50 = 0;
  v13 = 0;
  v48 = 0;
  v14 = 0;
  v49 = 0;
  v52 = 0;
  v53 = 0;
  v57 = 0;
  v61 = 0;
  v56 = v5;
  if ( v5 > 0x100 )
  {
    v15 = 256;
  }
  else
  {
    v15 = v5;
    if ( !v5 )
      goto LABEL_75;
  }
  if ( v4 == 2 )
  {
    if ( !*v6 || HIBYTE(*v6) )
      goto LABEL_9;
LABEL_75:
    if ( Result )
      *Result = 5;
    return 0;
  }
  if ( v4 > 2 && v5 <= 0x100 && (v4 & 1) == 0 )
  {
    v14 = 0;
    if ( (v6[v15 - 1] & 0xFF00) == 0 )
      --v15;
  }
LABEL_9:
  if ( v15 )
  {
    v16 = v6;
    v17 = 0;
    v18 = v15;
    v19 = 0;
    do
    {
      v20 = (unsigned __int16)*v16;
      if ( v20 < 0x21 || v20 >= 0x900 )
      {
        if ( v20 == 32 )
        {
          ++v7;
        }
        else if ( v20 > 0xD00 )
        {
          if ( v20 <= 0x3000 )
          {
            if ( v20 == 12288 )
            {
              ++v44;
            }
            else if ( v20 == 0x2000 )
            {
              ++v49;
            }
          }
          else if ( v20 != 65279 )
          {
            if ( v20 == 65534 )
            {
              ++v54;
            }
            else if ( v20 == 0xFFFF )
            {
              ++v55;
            }
          }
        }
        else if ( v20 == 3328 )
        {
          ++v51;
        }
        else if ( v20 == 13 )
        {
          ++v47;
        }
        else if ( v20 > 0xD )
        {
          switch ( v20 )
          {
            case 0x900u:
              ++v48;
              break;
            case 0xA00u:
              ++v50;
              break;
            case 0xA0Du:
              ++v53;
              break;
          }
        }
        else if ( *v16 )
        {
          if ( v20 == 9 )
          {
            ++v19;
          }
          else if ( v20 == 10 )
          {
            ++v46;
          }
        }
        else
        {
          ++v52;
        }
      }
      v11 = *(unsigned __int8 *)v16;
      v21 = BYTE1(v20);
      if ( v11 == 13 )
      {
        if ( v10 == 10 )
          ++v17;
      }
      else if ( v11 == 10 && v10 == 13 )
      {
        ++v17;
      }
      v22 = BYTE1(v20);
      v8 += (v11 == 0) + (v21 == 0);
      if ( v21 <= v10 )
      {
        v22 = v10;
        v10 = v21;
      }
      v23 = v22 - v10;
      v10 = v21;
      v12 += v23;
      v24 = *(unsigned __int8 *)v16;
      if ( v11 <= v9 )
      {
        v24 = v9;
        v9 = *(unsigned __int8 *)v16;
      }
      ++v16;
      v25 = v24 - v9;
      v9 = v11;
      v13 += v25;
      --v18;
    }
    while ( v18 );
    v6 = Buffer;
    v61 = v17;
    v14 = v17;
    v5 = v56;
    v45 = v19;
    v4 = Size;
  }
  if ( v11 == 13 )
  {
    if ( v10 != 10 )
      goto LABEL_23;
    goto LABEL_105;
  }
  if ( v11 == 10 && v10 == 13 )
LABEL_105:
    v61 = v14 + 1;
LABEL_23:
  v26 = v8 - 1;
  if ( v10 )
    v26 = v8;
  if ( v10 == 26 )
    ++v61;
  v27 = 512;
  if ( v4 <= 0x200 )
    v27 = v4;
  if ( NlsMbCodePageTag )
  {
    v37 = 0;
    if ( v27 )
    {
      v38 = 0;
      do
      {
        v39 = v38 + 1;
        v40 = word_18015ADC0[*((unsigned __int8 *)v6 + v37)];
        if ( !v40 )
          v39 = v38;
        v38 = v39;
        v41 = v37 + 1;
        if ( !v40 )
          v41 = v37;
        v37 = v41 + 1;
      }
      while ( v41 + 1 < v27 );
      v57 = v38;
      v5 = v56;
    }
  }
  if ( v13 < 0x7F )
  {
    if ( !v12 )
    {
      v28 = 1;
      goto LABEL_33;
    }
  }
  else if ( !v12 )
  {
    goto LABEL_32;
  }
  if ( !v13 )
  {
    v28 = 16;
    goto LABEL_33;
  }
LABEL_32:
  v28 = 0;
LABEL_33:
  if ( NlsMbCodePageTag && v57 && Result && (*Result & 0x400) != 0 )
  {
    if ( v5 <= 0x100 )
      v42 = (unsigned __int64)v4 >> 1;
    else
      v42 = 256LL;
    v43 = (v42 >> 1) - 1;
    if ( v57 >= v43 / 3 )
    {
      LOBYTE(v3) = v57 < 2 * v43 / 3;
      v29 = v3 + 1;
    }
    else
    {
      v29 = 3;
    }
    v28 |= 0x400u;
  }
  else
  {
    v29 = 3;
  }
  v30 = v28 | 2;
  if ( v29 * v12 >= v13 )
    v30 = v28;
  if ( v29 * v13 < v12 )
    v30 |= 0x20u;
  v31 = v30 | 4;
  if ( !(v47 + v46 + v45 + v7 + v44) )
    v31 = v30;
  v32 = v31 | 0x40;
  if ( !(v51 + v50 + v49 + v48) )
    v32 = v31;
  if ( v55 + v54 + v53 + v52 || (v33 = v32, v61) && v61 >= v27 / 0x28 )
    v33 = v32 | 0x100;
  v34 = v33 | 0x200;
  if ( (v4 & 1) == 0 )
    v34 = v33;
  v35 = v34 | 0x1000;
  if ( !v26 )
    v35 = v34;
  if ( *v6 == 0xFEFF )
  {
    v35 |= 8u;
  }
  else if ( *v6 == 0xFFFE )
  {
    v35 |= 0x80u;
  }
  if ( Result )
  {
    *Result &= v35;
    v35 = *Result;
  }
  return (v35 & 0xB08) == 8 || (v35 & 0xF0) == 0 && (v35 & 0xF00) == 0 && (v35 & 0xF00F) != 0;
}
